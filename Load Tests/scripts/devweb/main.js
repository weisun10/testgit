'use strict';

load.action('Main', () => {
  /* default http headers */
  load.WebRequest.defaults.headers = {
    'User-Agent': 'curl/7.37.0',
    'Connection': 'Keep-Alive',
    'Accept-Language': 'en-US,en;q=0.8',
    'Accept-Encoding': 'gzip, deflate, sdch',
    'Accept': '*/*'
  };

  const reqPgIdx = new load.WebRequest({
    url: 'http://52.88.161.12/',
    method: 'GET'
  });

  /* transactions */
  const tranIdxPg = new load.Transaction('IdxPage');
  const tranErr = new load.Transaction('ErrTransaction');


  /* index page */
  tranIdxPg.start();
  reqPgIdx.sendSync();
  tranIdxPg.stop(load.TransactionStatus.Passed);


  tranErr.start();
  tranErr.stop(load.TransactionStatus.Failed);

  /* error message tests */
  load.log('This is a error test message', load.LogLevel.error);
});

