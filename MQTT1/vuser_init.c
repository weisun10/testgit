vuser_init()
{
	/* Declared in "globals.h" */
	client = mqtt_create();
	
	/* Optional connection settings */
	 mqtt_set_client_id(client, "<insert Client ID>");
	 mqtt_set_credentials(client, "<username placeholder>", "<password placeholder>");
	 mqtt_set_lwt(client, "<topic>", "<sample lwt payload>", MQTT_AUTO, MQTT_DEFAULT, MQTT_RETAIN);
	
	
	/* Optional SSL/TLS settings, applicable for SSL/TLS connections only */
	 mqtt_set_tls_certificate(client, "<path to a certificate file, e.g. cert.pem>", "<path to a private key file, e.g. key.pem>", "<password for the private key>");
	 mqtt_set_tls_parameters(client, MQTT_TLS_DEFAULT, MQTT_DEFAULT_CIPHERS);
	
	/* Connect to an MQTT broker */
	mqtt_connect(client, "tcp://127.0.0.1:1883");
	
	/* Uncomment the following if implementing the "subscriber" logic */
	 mqtt_subscribe(client, "<topic>");
	
	return 0;
}
