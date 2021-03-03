#include "web_api.h"


Action()
{
	lr_start_transaction("trans_pass");

	lr_user_data_point("mic_recv", 5000);
	lr_user_data_point("HTTP_200", 5);
	lr_error_message("this is error message");
	lr_think_time(5);
	
	lr_end_transaction("trans_pass",LR_PASS);
	
	lr_start_transaction("trans_fail");

	lr_user_data_point("mic_recv", 5000);
	lr_user_data_point("HTTP_200", 5);

	lr_think_time(5);
	
	lr_end_transaction("trans_fail",LR_FAIL);
	
	return 0;
}
