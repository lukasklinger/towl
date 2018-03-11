// Telemetry over Opportunistic WiFi Links (T.O.W.L.)
// http://phreakmonkey.com/projects/towl

//  The queries are sent in the form of S-{BASE32}.DEVICE_ID.SUBDOMAIN
//  #define DEVICE_ID and SUBDOMAIN below:
#define DEVICE_ID "a01"
#define SUBDOMAIN "dns.example.com"

// LED pin (currently just indicates GPS signal status via PWM)
// Hint: DigiStump Oak = 1, Adafruit Huzzah = 0, others = ??
#define LED LED_BUILTIN

// NMEA GPS Serial baudrate
// Note this will also be the bitrate of debug output messages on TX pin
#define GPS_BAUD 9600

// TSTORE_SZ = max number of telemetry entries to backlog (16 bytes RAM each)
#define TSTORE_SZ 150
// MAX_INTERVAL : Highest interval to track in 10 sec increments. (6 = 1 min)
#define MAX_INTERVAL 18

// --- end CONFIGURATION section ---
