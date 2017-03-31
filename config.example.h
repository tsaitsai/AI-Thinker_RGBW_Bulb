///////////////////////////////////////////////////////////////////////////
//   MISC
///////////////////////////////////////////////////////////////////////////
#define FRIENDLY_NAME "AI Thinker RGBW Bulb"

///////////////////////////////////////////////////////////////////////////
//   WiFi
///////////////////////////////////////////////////////////////////////////
#define WIFI_SSID     ""
#define WIFI_PASSWORD ""

///////////////////////////////////////////////////////////////////////////
//   MQTT
///////////////////////////////////////////////////////////////////////////
#define MQTT_USERNAME     ""
#define MQTT_PASSWORD     ""
#define MQTT_SERVER       ""
#define MQTT_SERVER_PORT  1883

#define MQTT_HOME_ASSISTANT_SUPPORT

#if defined(MQTT_HOME_ASSISTANT_SUPPORT)
// template: <discovery prefix>/light/<chip ID>/config, status, state or set
#define MQTT_CONFIG_TOPIC_TEMPLATE  "%s/light/%s/config"
#define MQTT_STATE_TOPIC_TEMPLATE   "%s/light/%s/state"
#define MQTT_COMMAND_TOPIC_TEMPLATE "%s/light/%s/set"
#define MQTT_STATUS_TOPIC_TEMPLATE  "%s/light/%s/status" // MQTT connection: alive/dead
#else
#define MQTT_STATE_TOPIC_TEMPLATE   "%s/rgbw/state"
#define MQTT_COMMAND_TOPIC_TEMPLATE "%s/rgbw/set"
#define MQTT_STATUS_TOPIC_TEMPLATE  "%s/rgbw/status" // MQTT connection: alive/dead
#endif

#define MQTT_HOME_ASSISTANT_DISCOVERY_PREFIX  "homeassistant"
#define MQTT_STATE_ON_PAYLOAD   "ON"
#define MQTT_STATE_OFF_PAYLOAD  "OFF"

#define MQTT_CONNECTION_TIMEOUT 5000

///////////////////////////////////////////////////////////////////////////
//   DEBUG
///////////////////////////////////////////////////////////////////////////
//#define DEBUG_TELNET
#define DEBUG_SERIAL

///////////////////////////////////////////////////////////////////////////
//   OTA
///////////////////////////////////////////////////////////////////////////
#define OTA
//#define OTA_HOSTNAME  "hostname"  // hostname esp8266-[ChipID] by default
//#define OTA_PASSWORD  "password"  // no password by default
//#define OTA_PORT      8266        // port 8266 by default
