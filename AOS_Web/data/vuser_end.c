vuser_end()
{

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_custom_request("AccountLogoutRequest", 
		"URL=http://52.36.57.74:8081/accountservice/AccountLogoutRequest", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}