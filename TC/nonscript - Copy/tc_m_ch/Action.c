//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("first");
	truclient_step("1", "Navigate to 'http://54.160.66.111/index.html'", "snapshot=Action_1.inf");
	truclient_step("2", "Click on Go to second page button", "snapshot=Action_2.inf");
	truclient_step("3", "Click on Back to home button", "snapshot=Action_3.inf");
	lr_end_transaction("first",0);
	lr_start_transaction("second");
	truclient_step("4", "Click on Go to third page button", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Back to home button", "snapshot=Action_5.inf");
	lr_end_transaction("second",0);

	return 0;
}
