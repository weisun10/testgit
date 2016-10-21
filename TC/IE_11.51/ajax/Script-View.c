   /**********************************************************************************************
   **                                                                                           **
   **                   	             PLEASE NOTE										    **
   **                   	             ===========										    **
   **                                                                                           **
   **      The Script-View you see here is a READ-ONLY representation of the actual script.     **
   **                                                                                           **
   **      For creating, viewing, modifying, running and/or debugging a script, please press    **
   **                                                                                           **
   **      the "Develop Script" button. This will start Firefox,  with the TruClient sidebar    **
   **                                                                                           **
   **      at the left.  Starting Firefox may take a while. Alternatively, you can run          **
   **                                                                                           **
   **      the current script as-is, without starting Firefox, by pressing the "Run" button.    **
   **                                                                                           **
   **********************************************************************************************/


Script_View_Action()
{
	truclient_step("Navigate to 'http://16.59.127.14/webtours/'", "snapshot=Action_1.inf");
	truclient_step("form (1)", "snapshot=Action_2.inf");
	{
		truclient_step("Type 'jojo' in Username textbox", "snapshot=Action_2.2.inf");
		truclient_step("Type ****** in Password passwordbox", "snapshot=Action_2.3.inf");
		truclient_step("Press 'Enter' key on Password passwordbox", "snapshot=Action_2.4.inf");
	}
	truclient_step("Click on SignOff Button image", "snapshot=Action_3.inf");
}
