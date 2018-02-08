Action()
{

	ctrx_set_connect_opt(CLIENT_NAME, "Test");

	ctrx_set_connect_opt(NETWORK_PROTOCOL, "TCP/IP");

	ctrx_connect_server("labm3lt47.hpswlabs.adapps.hp.com", "Qatest1", lr_decrypt("58297f14647dc12253097b"), "labm3lt47", CTRX_LAST);

	ctrx_wait_for_event("LOGON", CTRX_LAST);

	lr_think_time(10);

	ctrx_sync_on_window("Server Manager", ACTIVATE, 0, 0, 801, 557, "snapshot22", CTRX_LAST);

	lr_think_time(5);

	ctrx_logoff(CTRX_NORMAL_LOGOFF, CTRX_LAST);

	return 0;
}