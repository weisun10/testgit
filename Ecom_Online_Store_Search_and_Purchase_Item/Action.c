Action()
{
	
//comment 1

	lr_start_transaction("Search_Item");

	web_url("52.39.153.71", 
		"URL=http://52.39.153.71/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
		lr_think_time(1);
	
	lr_end_transaction("Search_Item", LR_AUTO);
	
	
	
	lr_start_transaction("Purchase_Item");
	web_url("secondPage.html", 
		"URL=http://52.39.153.71/secondPage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://52.39.153.71/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("Purchase_Item", LR_AUTO);
	return 0;
}
