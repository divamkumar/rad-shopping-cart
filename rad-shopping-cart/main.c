/*
 * rad-shopping-cart.c
 *
 * Authors : Divam Kumar, Rajath Rao, Anthony Flores
 */ 

#include <avr/io.h>
#include <SPI.h>
#include <WiFi.h>

//SSID of your network
char ssid[] = "radtestnet";
//password of your WPA Network
char pass[] = "radshoppingcart";

WiFi.begin(ssid, pass);

void tick()
{
	if (WiFi.status() != WL_CONNECTED) {
		Serial.println("Couldn't get a wifi connection");
		while(true);
	}
	// if you are connected, print out info about the connection:
	else {
		// print the received signal strength:
		long rssi = WiFi.RSSI();
		Serial.print("RSSI:");
		Serial.println(rssi);
	}
}

	
int main(void)
{
    while (1) 
    {
		tick();
    }
}

