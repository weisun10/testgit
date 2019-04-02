/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 1982
   ------------------------------------------------------------------------------- */

vuser_init()
{
	int FirstUser = 1;
	int nUserIndex = 0;
	char *vuser_group;
	char *Server;
	
	FirstUser=lr_get_attrib_long ("FirstUser");
	if (FirstUser < 0) FirstUser=2;//default to 2 as TC is 1
	lr_save_string("W3lcome1","USER_PASSWORD");
	
	lr_whoami (&nUserIndex, &vuser_group, NULL) ;
	/*************************************
	* If the script running from VUGen
	* run as first user in the group
	*************************************/
	if (nUserIndex < 0) {
		
		nUserIndex = 0;
			
	}
	
	
	//lr_get_attrib_string("AosIp");
	Server=lr_get_attrib_string("AosIp");
	if (Server==NULL){
	      lr_save_string("52.32.172.3", "AosIp");
	}
	else {
		lr_save_string(Server, "AosIp");
	}

	nUserIndex=nUserIndex+FirstUser;
	

	lr_param_sprintf("USER_NAME","TestUser%d", nUserIndex);


	return 0;
}
