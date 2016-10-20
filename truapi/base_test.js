'use strict';

exports = module.exports = function (vuser) {
  /* init action */
  vuser.init('Base Vuser init', function (svc, done) {
    svc.logger.info('Vuser %s init', vuser.getVUserId());
    done();
  });

  /* main action */
  vuser.action('Base Vuser action', function (svc, done) {
    svc.logger.info('Vuser %s running', vuser.getVUserId());

    svc.transaction.start('tran1');
	svc.datapoint.add('HTTP_200', 1);
    svc.transaction.end('tran1', svc.transaction.PASS);

    svc.transaction.start('tran2');
    function test() {
	  svc.datapoint.add('mic_recv', 100);
      svc.transaction.end('tran2', svc.transaction.PASS);
      done();
    }
    setTimeout(test, 1000);
  });

  /* end action */
  vuser.end('Base Vuser end', function (svc, done) {
    svc.logger.info('Vuser %s end', vuser.getVUserId());
    done();
  });
};

