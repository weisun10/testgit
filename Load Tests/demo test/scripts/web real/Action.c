Action()
{
lr_start_transaction("home");
	lr_think_time(5);
	web_url("peacefullb-6b31bc96c3f8df78.elb.us-west-2.amazonaws.com", 
		"URL=http://peacefullb-6b31bc96c3f8df78.elb.us-west-2.amazonaws.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML",
	LAST);
	lr_end_transaction("home", LR_AUTO);
	
	lr_start_transaction("second");
		lr_think_time(10);
	web_url("secondPage.html", 
		"URL=http://peacefullb-6b31bc96c3f8df78.elb.us-west-2.amazonaws.com/secondPage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://peacefullb-6b31bc96c3f8df78.elb.us-west-2.amazonaws.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("second", LR_AUTO);
lr_start_transaction("home2");
lr_think_time(5);
	web_url("index.html", 
		"URL=http://peacefullb-6b31bc96c3f8df78.elb.us-west-2.amazonaws.com/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://peacefullb-6b31bc96c3f8df78.elb.us-west-2.amazonaws.com/secondPage.html", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("home2", LR_AUTO);
lr_start_transaction("third");
	lr_think_time(10);
	web_url("thirdPage.html", 
		"URL=http://peacefullb-6b31bc96c3f8df78.elb.us-west-2.amazonaws.com/thirdPage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://peacefullb-6b31bc96c3f8df78.elb.us-west-2.amazonaws.com/index.html", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("third", LR_AUTO);
lr_start_transaction("home3");

	lr_think_time(5);

	web_url("index.html_2", 
		"URL=http://peacefullb-6b31bc96c3f8df78.elb.us-west-2.amazonaws.com/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://peacefullb-6b31bc96c3f8df78.elb.us-west-2.amazonaws.com/thirdPage.html", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("home3", LR_AUTO);
lr_start_transaction("four");
	lr_think_time(10);
	web_url("fourthPage.html", 
		"URL=http://peacefullb-6b31bc96c3f8df78.elb.us-west-2.amazonaws.com/fourthPage.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://peacefullb-6b31bc96c3f8df78.elb.us-west-2.amazonaws.com/index.html", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("four", LR_AUTO);

	return 0;
}