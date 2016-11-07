//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	return 0;
}

Action()
{
	lr_start_transaction("Transaction 1");
	truclient_step("1", "Select row 0 , section 0 at Table", "snapshot=Action_1.inf");
	truclient_step("2", "Tap Button", "snapshot=Action_2.inf");
	truclient_step("3", "Tap Button", "snapshot=Action_3.inf");
	lr_end_transaction("Transaction 1",0);

	return 0;
}

vuser_end()
{
	return 0;
}
