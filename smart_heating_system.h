/**
 * @file smart_heating_system.h
 * @author Patrik Stransky
 * @author Adeel Zahid (adeel.m.zahid@gmail.com)
 * @brief include file for for ESP32 WIFI SCMI XIAOMI NodeRED project
 * @version 1.0
 * @date 2023-11-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#define             EEPROM_SIZE         1
#define             ONE_WIRE_BUS        4
#define             MQTT_VERSION        MQTT_VERSION_3_1

typedef struct temperature_sensor_t
{
    float temperature_value;
    char  temperature_string[8];
};
