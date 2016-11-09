Action()
{
	lr_start_transaction("trans1");
	lr_think_time(2);
	lr_user_data_point("mic_recv", 100);
	lr_user_data_point("HTTP_200", 1);		
	lr_end_transaction("trans1", LR_PASS);	
	
	lr_start_transaction("trans2");	
	lr_think_time(2);
	lr_user_data_point("HTTP_200", 1);		
	lr_error_message("my error message");	
	lr_end_transaction("trans2", LR_FAIL);		

	lr_start_transaction("trans3");	
	lr_end_transaction("trans3", LR_FAIL);	

	lr_start_transaction("trans4");	
	lr_think_time(3);
	lr_end_transaction("trans4", LR_FAIL);		
	
	return 0;
}
