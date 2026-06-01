#ifndef _VARIANT_KEEPTEEN_LT1_
#define _VARIANT_KEEPTEEN_LT1_

/** Master clock frequency */
#define VARIANT_MCK (64000000ul)
#define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT (48)
#define NUM_DIGITAL_PINS (48)
#define NUM_ANALOG_INPUTS (1)
#define NUM_ANALOG_OUTPUTS (0)

// LEDs
#define LED_POWER 15
#define LED_BUILTINLED_POWER

#define LED_STATE_ON 1 // State when LED is litted
/*
 * Buttons
 */

#define BUTTON_PIN  32

// Connected to Jlink CDC
#define PIN_SERIAL2_RX (-1)
#define PIN_SERIAL2_TX (-1)

#define LORA_DIO0 (-1)
#define LORA_RESET (9)
#define LORA_DIO1 (10)
#define LORA_DIO2 (29)
#define LORA_DIO3   
#define LORA_NSS (45)
#define LORA_SCK (43)
#define LORA_MISO (2)
#define LORA_MOSI (38)
#define LORA_CS (8)
/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO LORA_MISO
#define PIN_SPI_MOSI LORA_MOSI
#define PIN_SPI_SCK LORA_SCK


static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK = PIN_SPI_SCK;


// Display - OLED connected via I2C
#define HAS_SCREEN 1
#define USE_SSD1306

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1
#define RESET_OLED (-1)
#define PIN_WIRE_SDA (34)
#define PIN_WIRE_SCL (36)



#define USE_SX1262
#define SX126X_CS LORA_NSS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET
#define SX126X_RXEN RADIOLIB_NC
#define SX126X_TXEN RADIOLIB_NC

#define SX126X_DIO2_AS_RF_SWITCH true
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

/*
 * Serial interfaces
 */
#define PIN_SERIAL1_RX 22
#define PIN_SERIAL1_TX 20

#define GPS_BAUDRATE 9600

#define GPS_RX_PIN PIN_SERIAL1_RX
#define GPS_TX_PIN PIN_SERIAL1_TX
#define PIN_GPS_EN 24


// Battery
#define BATTERY_PIN 31
// and has 12 bit resolution
#define BATTERY_SENSE_RESOLUTION_BITS 12
#undef AREF_VOLTAGE
#define AREF_VOLTAGE 3.6
#define ADC_MULTIPLIER 1.73
#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
