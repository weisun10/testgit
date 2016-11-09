/*
 * LoadRunner Java script. (Build: 3020)
 * 
 * Script Description: 
 *                     
 */

import lrapi.lr;

public class Actions
{

	public int init() throws Throwable {
		return 0;
	}//end of init


	public int action() throws Throwable {
	    lr.error_message("my error message");
		return 0;
	}//end of action


	public int end() throws Throwable {
		return 0;
	}//end of end
}
