Action()
{
	lr_start_transaction("trans1");
	lr_think_time(1);
	lr_user_data_point("mic_recv", 20);
	lr_user_data_point("HTTP_200", 2);		
	lr_end_transaction("trans1", LR_PASS);	
	
	lr_start_transaction("trans2");	
	lr_think_time(5);
	lr_user_data_point("HTTP_200", 1);		
	lr_error_message("my error message test demo 123");	
	lr_end_transaction("trans2", LR_FAIL);		

	lr_start_transaction("trans test");	
	lr_think_time(1);
        lr_user_data_point("mic_recv", 30);	
	lr_end_transaction("trans test", LR_FAIL);		
	
	return 0;
}
