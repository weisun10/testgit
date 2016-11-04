Action()
{
	char * buffer = "<SOAP-ENV:Envelope xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:SOAP-ENV=\"http://schemas.xmlsoap.org/soap/envelope/\" >"
		"<SOAP-ENV:Body>"
	        //"<createShipmentResponse>"
	        "<createShipmentResponse xmlns=\"http://www.royalmailgroup.com/api/ship/V2\">"
				"<completedShipmentInfo>"
					"<allCompletedShipments>"
						"<completedShipments>"
							"<shipments>"
								"<shipmentNumber>BJ246374296GB</shipmentNumber>"
							"</shipments>"
						"</completedShipments>"
					"</allCompletedShipments>"
				"</completedShipmentInfo>"
			"</createShipmentResponse>"
		"</SOAP-ENV:Body>"
	"</SOAP-ENV:Envelope>";
	
	char * changed_buffer = alr_replace_substring(buffer, "xmlns=\"http://www.royalmailgroup.com/api/ship/V2\"", "");
	
	lr_output_message(changed_buffer);
	lr_save_string(changed_buffer,"response");
	
	lr_xml_get_values("XML={response}",
	            "ValueParam=shipmentNumber1",
	            "Query=/SOAP-ENV:Envelope/SOAP-ENV:Body/createShipmentResponse/completedShipmentInfo/allCompletedShipments/completedShipments/shipments/shipmentNumber",
	            LAST);
	lr_output_message("shipmentNumber is: %s", lr_eval_string("{shipmentNumber1}"));    
	
	lr_xml_get_values("XML={response}",
		              "ValueParam=shipmentNumber2",
		              "Query=//shipmentNumber",
		              LAST);
	lr_output_message("shipmentNumber is: %s", lr_eval_string("{shipmentNumber2}"));    
	return 0;
}
