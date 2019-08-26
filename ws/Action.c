Action()
{
	
	jms_send_message_queue("Sending mesage of MGBMCR",lr_eval_string("test"),"empty");

	return 0;
}
