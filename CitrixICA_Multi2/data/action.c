Action()
{

	web_url("xenapp", 
		"URL=http://labm3lt47.hpswlabs.adapps.hp.com/citrix/xenapp/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("WIUser=\"CTX_ForcedClient#Off~CTX_LaunchMethod#Ica-Local~CTX_AuthMethod#Explicit~CTX_ViewStyle#%7bApplications%3dIcons%7d\"; DOMAIN=labm3lt47.hpswlabs.adapps.hp.com");

	web_add_cookie("WINGDevice=\"CTX_DeviceId#WI_j1PxUmHWWCqhedgRZ\"; DOMAIN=labm3lt47.hpswlabs.adapps.hp.com");

	web_url("loading.htm", 
		"URL=http://labm3lt47.hpswlabs.adapps.hp.com/citrix/xenapp/loading.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://labm3lt47.hpswlabs.adapps.hp.com/citrix/xenapp/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=media/HorizonBgBottom.png", ENDITEM, 
		"Url=media/LoginPaneTopLeftBorderGlow.png", ENDITEM, 
		"Url=media/Devices.png", ENDITEM, 
		"Url=media/LoginPaneCenterLeftBorderGlow.png", ENDITEM, 
		"Url=media/LoginPaneTopRightBorderGlow.png", ENDITEM, 
		"Url=media/LoginPaneCenterRightBorderGlow.png", ENDITEM, 
		"Url=media/LoginPaneFooterLeftBorderGlow.png", ENDITEM, 
		"Url=media/LoginPaneFooterMidBorderGlow.png", ENDITEM, 
		"Url=media/LoginPaneFooterRightBorderGlow.png", ENDITEM, 
		"Url=media/HorizonBgTop.png", ENDITEM, 
		"Url=media/LoginPaneTopLeftGradient.png", ENDITEM, 
		"Url=media/LoginPaneTopRightGradient.png", ENDITEM, 
		"Url=media/LoginPaneTopMidBorderGlow.png", ENDITEM, 
		"Url=/Citrix/XenApp/auth/silentDetection.aspx?compileonly=y", ENDITEM, 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_url("silentDetection.aspx", 
		"URL=http://labm3lt47.hpswlabs.adapps.hp.com/citrix/xenapp/auth/silentDetection.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://labm3lt47.hpswlabs.adapps.hp.com/citrix/xenapp/loading.htm", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("WIClientInfo=\"Cookies_On#true~icaScreenResolution#1920x1200~clientConnSecure#false\"; DOMAIN=labm3lt47.hpswlabs.adapps.hp.com");

	web_url("silentDetection.aspx_2", 
		"URL=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/silentDetection.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/silentDetection.aspx", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../media/LoginPaneTopMidBorderGlow.png", ENDITEM, 
		"Url=../media/LoginPaneTopLeftGradient.png", ENDITEM, 
		"Url=../media/HorizonBgTop.png", ENDITEM, 
		"Url=../media/LoginPaneCenterRightBorderGlow.png", ENDITEM, 
		"Url=../media/LoginPaneCenterLeftBorderGlow.png", ENDITEM, 
		"Url=../media/LoginPaneTopRightBorderGlow.png", ENDITEM, 
		"Url=../media/HorizonBgBottom.png", ENDITEM, 
		"Url=../media/LoginPaneTopLeftBorderGlow.png", ENDITEM, 
		"Url=../media/LoginPaneTopRightGradient.png", ENDITEM, 
		"Url=../media/Devices.png", ENDITEM, 
		"Url=../media/LoginPaneFooterRightBorderGlow.png", ENDITEM, 
		"Url=../media/LoginPaneFooterMidBorderGlow.png", ENDITEM, 
		"Url=../media/LoginPaneFooterLeftBorderGlow.png", ENDITEM, 
		LAST);

	web_submit_data("clientDetectionOutputs.aspx", 
		"Action=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/clientDetectionOutputs.aspx", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/silentDetection.aspx", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=SESSION_TOKEN", "Value=7A89903DB83785841EF9C3A74297C506", ENDITEM, 
		"Name=RemoteClient", "Value=Ica-Local=Auto,IncorrectZone", ENDITEM, 
		"Name=StreamingClient", "Value=", ENDITEM, 
		"Name=IcoStatus", "Value=IsNotPassthrough", ENDITEM, 
		LAST);

	web_url("silentDetection.aspx_3", 
		"URL=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/silentDetection.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/silentDetection.aspx", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../media/LoginPaneFooterLeftBorderGlow.png", ENDITEM, 
		"Url=../media/HorizonBgTop.png", ENDITEM, 
		"Url=../media/LoginPaneFooterMidBorderGlow.png", ENDITEM, 
		"Url=../media/LoginPaneCenterRightBorderGlow.png", ENDITEM, 
		"Url=../media/LoginPaneTopRightBorderGlow.png", ENDITEM, 
		"Url=../media/LoginPaneCenterLeftBorderGlow.png", ENDITEM, 
		"Url=../media/LoginPaneTopLeftBorderGlow.png", ENDITEM, 
		"Url=../media/Devices.png", ENDITEM, 
		"Url=../media/HorizonBgBottom.png", ENDITEM, 
		"Url=../media/LoginPaneTopRightGradient.png", ENDITEM, 
		"Url=../media/LoginPaneTopLeftGradient.png", ENDITEM, 
		"Url=../media/LoginPaneTopMidBorderGlow.png", ENDITEM, 
		"Url=../media/LoginPaneFooterRightBorderGlow.png", ENDITEM, 
		LAST);

	web_add_cookie("MC1=GUID=2a2cdc6ca3358f4d872f4102ee141bbe&HASH=6cdc&LV=201605&V=4&LU=1462416652723; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAADSCQAAKmn+GhROmS61Q6KgAMPvqw!!&V=4; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MSFPC=ID=2a2cdc6ca3358f4d872f4102ee141bbe&CS=3&LV=201605&V=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("optimizelySegments=%7B%221708060746%22%3A%22ie%22%2C%221711110398%22%3A%22none%22%2C%221728080266%22%3A%22false%22%2C%221733390029%22%3A%22referral%22%7D; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("optimizelyEndUserId=oeu1462417837746r0.4612740240659999; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("optimizelyBuckets=%7B%7D; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MUID=1ADD5F6F06736D4C1D37566302736B4B; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20160629; DOMAIN=iecvlist.microsoft.com");

	web_url("login.aspx", 
		"URL=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/login.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/silentDetection.aspx", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../media/ButtonLeft.png", ENDITEM, 
		"Url=../media/ButtonRight.png", ENDITEM, 
		"Url=../media/Error24.gif", ENDITEM, 
		"Url=../media/ButtonHoverRight.png", ENDITEM, 
		"Url=../media/ButtonHoverLeft.png", ENDITEM, 
		"Url=https://iecvlist.microsoft.com/IE11/1387494476607/iecompatviewlist.xml", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_submit_form("login.aspx_2", 
		"Snapshot=t8.inf", 
		ITEMDATA, 
		"Name=user", "Value=Qatest1", ENDITEM, 
		"Name=password", "Value=Qatest1", ENDITEM, 
		"Name=domain", "Value=labm3lt47", ENDITEM, 
		EXTRARES, 
		"Url=../media/TrailBackground.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/GreyLine.gif", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/Search.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/TabRight.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/HeaderGradient.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/TabSelectedRight.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/Messages.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/Settings.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/LightboxTopLeft.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/TabLeft.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/HintBackgroundLeft.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/Logoff.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/TabSelectedLeft.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/LightboxTopBorder.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/LightboxRightBorder.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/LightboxTopRight.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/LightboxLeftBorder.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/HintBackgroundRight.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/LightboxBottomLeft.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/LightboxBottomBorder.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/HintBackground.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/DropDownArrow.gif", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/LightboxBottomRight.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/TabHoverLeft.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/TabHoverRight.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		"Url=../media/HoverGradient.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", ENDITEM, 
		LAST);

	web_url("reconnect.aspx", 
		"URL=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/reconnect.aspx?CTX_LoginId=On&CTX_Token=7A89903DB83785841EF9C3A74297C506&ReconnectId=1479361731420", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(36);

	web_url("default.aspx", 
		"URL=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx?CTX_CurrentTab=Desktops", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../media/DesktopInactive.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx?CTX_CurrentTab=Desktops", ENDITEM, 
		"Url=../media/DesktopShadow.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx?CTX_CurrentTab=Desktops", ENDITEM, 
		"Url=../media/DesktopReady.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx?CTX_CurrentTab=Desktops", ENDITEM, 
		"Url=../media/DesktopRollover.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx?CTX_CurrentTab=Desktops", ENDITEM, 
		"Url=../media/DesktopActive.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx?CTX_CurrentTab=Desktops", ENDITEM, 
		LAST);

	ctrx_nfuse_connect("http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/launch.ica?CTX_Application=Citrix.MPS.Desktop.Farm1.Desktop&CTX_Token=7A89903DB83785841EF9C3A74297C506&LaunchId=1479362010308", CTRX_LAST);

	ctrx_wait_for_event("LOGON", CTRX_LAST);

	ctrx_sync_on_window("Server Manager", ACTIVATE, 0, 0, 801, 557, "snapshot1", CTRX_LAST);

	ctrx_sync_on_window("Start", CREATE, 2, 560, 53, 39, "snapshot3", CTRX_LAST);

	ctrx_sync_on_window("Server Manager", ACTIVATE, 0, 0, 801, 557, "snapshot5", CTRX_LAST);

	ctrx_sync_on_window("Start", CREATE, 2, 560, 53, 39, "snapshot7", CTRX_LAST);

	ctrx_sync_on_window("Server Manager", ACTIVATE, 0, 0, 801, 557, "snapshot9", CTRX_LAST);

	ctrx_sync_on_window("Start", CREATE, 2, 560, 53, 39, "snapshot11", CTRX_LAST);

	ctrx_sync_on_window("Server Manager", ACTIVATE, 0, 0, 801, 557, "snapshot13", CTRX_LAST);

	ctrx_sync_on_window("Start", CREATE, 2, 560, 53, 39, "snapshot15", CTRX_LAST);

	ctrx_obj_mouse_click("<class=MMCMainFrame  capture=p>;regionSnapshot17", 190, 19, LEFT_BUTTON, 0, "Server Manager=snapshot16", CTRX_LAST);

	ctrx_sync_on_window("Server Manager", ACTIVATE, 0, 0, 801, 557, "snapshot17", CTRX_LAST);

	ctrx_sync_on_window("Start", CREATE, 2, 560, 53, 39, "snapshot19", CTRX_LAST);

	ctrx_sync_on_window("Server Manager", ACTIVATE, 0, 0, 801, 557, "snapshot21", CTRX_LAST);

	ctrx_sync_on_window("Start", CREATE, 2, 560, 53, 39, "snapshot23", CTRX_LAST);

	ctrx_sync_on_window("Start menu", ACTIVATE, 0, 92, 406, 465, "snapshot25", CTRX_LAST);

	ctrx_sync_on_obj_info("Start=snapshot26", 15, 19, TEXT, "Start", CTRX_LAST);

	ctrx_obj_mouse_click("<class=Button text=Start>", 15, 19, LEFT_BUTTON, 0, "Start=snapshot26", CTRX_LAST);

	ctrx_sync_on_obj_info("NULL=snapshot26", 22, 580, TEXT, "Start", CTRX_LAST);

	ctrx_obj_mouse_click("<class=Button text=Start>", 22, 580, LEFT_BUTTON, 0, "NULL=snapshot26", CTRX_LAST);

	ctrx_sync_on_obj_info("Start=snapshot26", 21, 16, TEXT, "Start", CTRX_LAST);

	ctrx_obj_mouse_click("<class=Button text=Start>", 21, 16, LEFT_BUTTON, 0, "Start=snapshot26", CTRX_LAST);

	ctrx_sync_on_obj_info("Start=snapshot26", 24, 8, TEXT, "Start", CTRX_LAST);

	ctrx_obj_mouse_click("<class=Button text=Start>", 24, 8, LEFT_BUTTON, 0, "Start=snapshot26", CTRX_LAST);

	ctrx_sync_on_obj_info("NULL=snapshot26", 17, 579, TEXT, "Start", CTRX_LAST);

	ctrx_obj_mouse_click("<class=Button text=Start>", 17, 579, LEFT_BUTTON, 0, "NULL=snapshot26", CTRX_LAST);

	ctrx_obj_mouse_up("<class=Button text=Log off>", 17, 579, LEFT_BUTTON, 0, "NULL=snapshot26", CTRX_LAST);

	ctrx_sync_on_obj_info("Start menu=snapshot26", 290, 444, TEXT, "Log off", CTRX_LAST);

	ctrx_obj_mouse_click("<class=Button text=Log off>", 290, 444, LEFT_BUTTON, 0, "Start menu=snapshot26", CTRX_LAST);

	ctrx_sync_on_window("Server Manager", ACTIVATE, 0, 0, 801, 557, "snapshot27", CTRX_LAST);

	ctrx_obj_mouse_click("<class=tooltips_class32 >", 650, 474, LEFT_BUTTON, 0, "Server Manager=snapshot28", CTRX_LAST);

	ctrx_sync_on_window("Start", CREATE, 2, 560, 53, 39, "snapshot29", CTRX_LAST);

	ctrx_sync_on_obj_info("NULL=snapshot30", 39, 575, TEXT, "Start", CTRX_LAST);

	ctrx_obj_mouse_click("<class=Button text=Start>", 39, 575, LEFT_BUTTON, 0, "NULL=snapshot30", CTRX_LAST);

	ctrx_sync_on_window("Server Manager", CREATE, 0, 0, 801, 557, "snapshot31", CTRX_LAST);

	ctrx_sync_on_obj_info("Server Manager=snapshot32", 299, 540, TEXT, "Log off", CTRX_LAST);

	ctrx_obj_mouse_click("<class=Button text=Log off>", 299, 540, LEFT_BUTTON, 0, "Server Manager=snapshot32", CTRX_LAST);

	ctrx_logoff(CTRX_NORMAL_LOGOFF, CTRX_LAST);

	web_url("logout.aspx", 
		"URL=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/logout.aspx?CTX_Token=7A89903DB83785841EF9C3A74297C506", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/site/default.aspx?CTX_CurrentTab=Desktops", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../media/DevicesLoggedOff.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/loggedout.aspx", ENDITEM, 
		"Url=../media/HorizonBgBottomLoggedOff.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/loggedout.aspx", ENDITEM, 
		"Url=../media/HorizonBgTopLoggedOff.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/loggedout.aspx", ENDITEM, 
		"Url=../media/LoginPaneFooterRightLoggedOff.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/loggedout.aspx", ENDITEM, 
		"Url=../media/LoginPaneFooterLeftLoggedOff.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/loggedout.aspx", ENDITEM, 
		"Url=../media/LoginPaneFooterMidLoggedOff.png", "Referer=http://labm3lt47.hpswlabs.adapps.hp.com/Citrix/XenApp/auth/loggedout.aspx", ENDITEM, 
		LAST);

	web_link("Return to Log On", 
		"Text=Return to Log On", 
		"Snapshot=t12.inf", 
		LAST);

	return 0;
}