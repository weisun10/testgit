vuser_end()
{
	/* Uncomment the following if implementing the "subscriber" logic */
	 mqtt_unsubscribe(client, "<topic>");
	
	/* Disconnect from the MQTT broker */
	mqtt_disconnect(client);
	
	return 0;
}
