//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("TC_MeasurementOnPeaceFull");
	truclient_step("1", "Navigate to http://peacefullb-6b31bc96c3f8df78.elb.us-west-2.amazonaws.com/", "snapshot=Action_1.inf");
	lr_end_transaction("TC_MeasurementOnPeaceFull",0);
	return 0;
}
