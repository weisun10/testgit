Action()
{

	/*1: Navigate to "http://" LR.getParam('AosIp') "/*/

	/* Dynamic Parameter - Name : AosIp, Value : {AosIp} */
	/* this is a comment */

	lr_start_transaction("AOS_Home_update");

//	web_set_user("TestUser1", 
//		lr_decrypt("5926d433c5830126bb82b9dc"), 
//		"{AosIp}:80");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_url("{AosIp}", 
		"URL=http://{AosIp}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
  
	lr_user_data_point("my_counter", 20);
	
	//web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN={AosIp}");

	web_concurrent_start(NULL);
	web_url("ALL", 
		"URL=http://{AosIp}/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t6.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://{AosIp}:8081/accountservice/GetAccountConfigurationRequest", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest_2", 
		"URL=http://{AosIp}:8081/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t8.inf", 
		"Mode=HTTP", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("all_data", 
		"URL=http://{AosIp}/catalog/api/v1/categories/all_data", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("ALL_2", 
		"URL=http://{AosIp}/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest_3", 
		"URL=http://{AosIp}:8081/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_reg_find("Text=TABLETS", 
		LAST);

	web_url("categories", 
		"URL=http://{AosIp}/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_concurrent_end(NULL);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("search", 
		"URL=http://{AosIp}/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

//	web_add_cookie("_ga=GA1.1.163724347.1495716651; DOMAIN={AosIp}");
//
//	web_add_cookie("_gid=GA1.1.705157204.1495716651; DOMAIN={AosIp}");
//
//	web_add_cookie("_gat=1; DOMAIN={AosIp}");

	web_url("popularProducts.json", 
		"URL=http://{AosIp}/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://{AosIp}/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AOS_Home_update",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("Login");

	lr_think_time(10);

	web_custom_request("AccountLoginRequest", 
		"URL=http://{AosIp}:8081/accountservice/AccountLoginRequest", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

/*Correlation comment - Do not change!  Original value='884045451' Name ='UserID' Type ='Manual'*/
	web_reg_save_param_xpath(
		"ParamName=UserID",
		"QueryString=/SOAP-ENV:Envelope[1]/SOAP-ENV:Body[1]/ns2:AccountLoginResponse[1]/ns2:StatusMessage[1]/ns2:userId[1]/text()[1]",
		"ReturnXml=No",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='VGVzdFVzZXIxOlczbGNvbWUx' Name ='AuthKey' Type ='Manual'*/
	web_reg_save_param_xpath(
		"ParamName=AuthKey",
		"QueryString=/SOAP-ENV:Envelope[1]/SOAP-ENV:Body[1]/ns2:AccountLoginResponse[1]/ns2:StatusMessage[1]/ns2:t_authorization[1]/text()[1]",
		"ReturnXml=No",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_custom_request("AccountLoginRequest_2", 
		"URL=http://{AosIp}:8081/accountservice/AccountLoginRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\">" 
		"<email></email><loginPassword>{USER_PASSWORD}</loginPassword><loginUser>{USER_NAME}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>",
		LAST);

	

	/*8: Click on SPEAKERS Shop Now link*/

/*Correlation comment - Do not change!  Original value='3DFECCD08BE44D5ABB174AC71F5A38BC' Name ='sessionId' Type ='ResponseBased'*/
	web_reg_save_param_ex(
		"ParamName=sessionId",
		"LB=JSESSIONID=",
		"RB=;",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		LAST);
		
	web_add_header("Authorization", lr_eval_string("Basic {AuthKey}"));

	web_url("884045451",
		"URL=http://{AosIp}/order/api/v1/carts/{UserID}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{AosIp}/",
		"Snapshot=t26.inf",
		"Mode=HTML",
		LAST);
	lr_end_transaction("Login",LR_AUTO);
	lr_think_time(10);
	lr_start_transaction("Speakers");
//
	web_url("attributes", 
		"URL=http://{AosIp}/catalog/api/v1/categories/attributes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);
//
	web_url("category-page.html", 
		"URL=http://{AosIp}/app/views/category-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Speakers",LR_AUTO);
	
	lr_think_time(10);
	
	lr_start_transaction("SelectSpeaker");

	web_url("timestamp", 
		"URL=http://{AosIp}/catalog/api/v1/catalog/LastUpdate/timestamp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);
//
	web_url("product-page.html", 
		"URL=http://{AosIp}/app/views/product-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	
	web_url("MostPopularComments", 
		"URL=http://{AosIp}/catalog/api/v1/MostPopularComments", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("SelectSpeaker",LR_AUTO);
	
	lr_think_time(10);
	
	lr_start_transaction("AddToCart");
	//add to cart
	
	web_add_header("Authorization", lr_eval_string("Basic {AuthKey}"));
	web_submit_data("414141",
		"Action=http://{AosIp}/order/api/v1/carts/{UserID}/product/20/color/414141?quantity=1",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=http://{AosIp}/",
		"Snapshot=t32.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=sessionId", "Value={sessionId}", ENDITEM,
		LAST);

	lr_end_transaction("AddToCart",LR_AUTO);

	lr_think_time(10);
	
	lr_start_transaction("SelectTablet");

	//open tablet page

	web_url("timestamp_2", 
		"URL=http://{AosIp}/catalog/api/v1/catalog/LastUpdate/timestamp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("MostPopularComments_2", 
		"URL=http://{AosIp}/catalog/api/v1/MostPopularComments", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	
	lr_end_transaction("SelectTablet",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("AddToCart");
	//add tablet to cart

	
	web_add_header("Authorization", lr_eval_string("Basic {AuthKey}"));
	web_submit_data("414141_2",
		"Action=http://{AosIp}/order/api/v1/carts/{UserID}/product/16/color/414141?quantity=1",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=http://{AosIp}/",
		"Snapshot=t36.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=sessionId", "Value={sessionId}", ENDITEM,
		LAST);
	
	lr_end_transaction("AddToCart",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("ShoppingCart");

	web_add_header("Authorization", lr_eval_string("Basic {AuthKey}"));
	web_url("884045451_2",
		"URL=http://{AosIp}/order/api/v1/carts/{UserID}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{AosIp}/",
		"Snapshot=t37.inf",
		"Mode=HTML",
		LAST);
	
	web_url("shoppingCart.html", 
		"URL=http://{AosIp}/app/views/shoppingCart.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("ShoppingCart",LR_AUTO);

	lr_think_time(10);
	
	lr_start_transaction("Checkout");
	//click checkout

	web_custom_request("GetAccountByIdRequest", 
		"URL=http://{AosIp}:8081/accountservice/GetAccountByIdRequest", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);


	web_custom_request("GetAccountByIdRequest_2",
		"URL=http://{AosIp}:8081/accountservice/GetAccountByIdRequest",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=http://{AosIp}/",
		"Snapshot=t41.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=UTF-8",
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\">" 
		"<accountId>{UserID}</accountId><base64Token>Basic {AuthKey}</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>",
		LAST);

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=http://{AosIp}:8081/accountservice/GetAccountByIdNewRequest", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountByIdNewRequest_2",
		"URL=http://{AosIp}:8081/accountservice/GetAccountByIdNewRequest",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=http://{AosIp}/",
		"Snapshot=t43.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=UTF-8",
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\">" 
		"<accountId>{UserID}</accountId><base64Token>Basic {AuthKey}</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>",
		LAST);


	
	web_add_header("Authorization", lr_eval_string("Basic {AuthKey}"));
	web_url("884045451_3",
		"URL=http://{AosIp}/order/api/v1/carts/{UserID}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{AosIp}/",
		"Snapshot=t45.inf",
		"Mode=HTML",
		LAST);
	
	

	web_custom_request("shippingcost",
		"URL=http://{AosIp}/order/api/v1/shippingcost/",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{AosIp}/",
		"Snapshot=t46.inf",
		"Mode=HTML",
		"EncType=application/json;charset=utf-8",
		"Body={\"seaddress\":{\"addressLine1\":\"\",\"addressLine2\":\"\",\"city\":\"\",\"country\":\"us\",\"postalCode\":\"\",\"state\":\"\"},\"secustomerName\":\"TestUser1 \",\"secustomerPhone\":\"\",\"senumberOfProducts\":2,\"setransactionType\":\"SHIPPINGCOST\",\"sessionId\":\"{sessionId}\"}",
		LAST);

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=http://{AosIp}:8081/accountservice/GetAccountPaymentPreferencesRequest", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountPaymentPreferencesRequest_2",
		"URL=http://{AosIp}:8081/accountservice/GetAccountPaymentPreferencesRequest",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=http://{AosIp}/",
		"Snapshot=t48.inf",
		"Mode=HTML",
		"EncType=text/xml; charset=UTF-8",
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\">" 
		"<accountId>{UserID}</accountId><base64Token>Basic {AuthKey}</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>",
		LAST);
	

	web_url("orderPayment-page.html", 
		"URL=http://{AosIp}/app/order/views/orderPayment-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetCountriesRequest", 
		"URL=http://{AosIp}:8081/accountservice/GetCountriesRequest", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetCountriesRequest_2", 
		"URL=http://{AosIp}:8081/accountservice/GetCountriesRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("Checkout",LR_AUTO);
	
	lr_think_time(10);
	//pay now
	lr_start_transaction("PayNow");
	
	web_add_header("Authorization", lr_eval_string("Basic {AuthKey}"));
	web_custom_request("884045451_4",
		"URL=http://{AosIp}/order/api/v1/orders/users/{UserID}",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{AosIp}/",
		"Snapshot=t52.inf",
		"Mode=HTML",
		"EncType=application/json; charset=UTF-8",
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":\"\",\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"052017\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"Gagag1\",\"Transaction_SafePay_UserName\":\"gugug\",\"Transaction_TransactionDate\":\"25052017\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"\",\"Shipping_Address_City\":\"\",\"Shipping_Address_CountryCode\":40,\"Shipping_Address_CustomerName\":\"TestUser1 \",\"Shipping_Address_CustomerPhone\":\"\",\"Shipping_Address_PostalCode\":\"\",\"Shipping_Address_State\":\"\",\"Shipping_Cost\":1278.99,\"Shipping_NumberOfProducts\":2,\"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\"hexColor\":\"414141\",\"productId\""
		":16,\"quantity\":1},{\"hexColor\":\"414141\",\"productId\":20,\"quantity\":1}]}",
		LAST);

	
	web_add_header("Authorization", lr_eval_string("Basic {AuthKey}"));
	web_custom_request("884045451_5",
		"URL=http://{AosIp}/order/api/v1/carts/{UserID}",
		"Method=DELETE",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{AosIp}/",
		"Snapshot=t53.inf",
		"Mode=HTML",
		LAST);


	lr_end_transaction("PayNow",LR_AUTO);

	lr_think_time(10);
	
	lr_start_transaction("SignOut");

	/*30: Click on Sign out link*/
	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_custom_request("AccountLogoutRequest", 
		"URL=http://{AosIp}:8081/accountservice/AccountLogoutRequest", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);
	

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_custom_request("AccountLogoutRequest_2", 
		"URL=http://{AosIp}:8081/accountservice/AccountLogoutRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{AosIp}/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\">" 
		"<loginUser>{UserID}</loginUser><base64Token>Basic {AuthKey}</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>",
		LAST);

	lr_end_transaction("SignOut",LR_AUTO);



	return 0;
}
