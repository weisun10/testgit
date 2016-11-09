package gatlingtest.test1

import io.gatling.core.feeder._
import io.gatling.core.Predef._
import io.gatling.http.Predef._
import scala.concurrent.duration.DurationLong 

class gatlingTest extends Simulation {
  val httpConf = http.disableWarmUp
  /* Please set the gatling.core.directory.data to the folder of this csv */
  val feeder = csv("dat/feeder-tests.csv").random

  val scn1 = scenario("gatling1").group("my group"){
    group("inner") {
	  exec(http("root page1").get("http://127.0.0.1:2333/users").basicAuth("test", "test"))
	  .pause(2 seconds)
	  .feed(feeder)
	  .exec(http("root page2").get("http://127.0.0.1:2333/${col1}").basicAuth("test", "test"))
	}
  }
  
  setUp(scn1.inject(atOnceUsers(3)).protocols(httpConf))
}

