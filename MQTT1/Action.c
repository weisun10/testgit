Action()
{
	/* Uncomment the following if implementing the "subscriber" logic. Make sure to also uncomment subscribe/unsubscribe in vuser_init/end.c */
	//
	/* Option 1: Wait for messages, then handle their contents */
	 size_t messageCount = mqtt_await_messages(client, MQTT_DEFAULT);
	 size_t i = 0;
	 for ( ; i < messageCount; i++)

	 {
		MQTT_MESSAGE m = mqtt_read_inbox(client);
	 	const char* p = mqtt_get_payload(m);
	 	const char* t = mqtt_get_topic(m);
	 	size_t l = mqtt_get_length(m);

		lr_message("received message with size %d from %s", l, t);
		lr_message("payload %.*s", l, p);
	
	 	mqtt_free_message(m);
	 }
	
	/* Option 2: Wait for messages, then clear Inbox (if their handling is not needed) */
	// mqtt_await_messages(client, MQTT_DEFAULT);
	// mqtt_clear_inbox(client);
	
	
	
	/* Uncomment the following if implementing the "publisher" logic */
	
	 mqtt_publish(client, "<topic>", "<payload>", MQTT_AUTO, MQTT_DEFAULT, MQTT_RETAIN);
	
	return 0;
}
