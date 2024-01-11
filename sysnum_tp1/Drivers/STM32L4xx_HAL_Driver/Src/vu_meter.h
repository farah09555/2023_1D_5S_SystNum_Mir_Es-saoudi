
/*
 * vu_meter.h
 *
 *  Created on: Nov 9, 2023
 *      Author: abdodram55
 */
#include "main.h"
#include "stdio.h"
#include "stdlib.h"


typedef enum {
   VU_LED_OFF = 0,
   VU_LED_ON = 1
} vu_led_state_t;
typedef struct h_vu_struct{
   uint8_t led[1];
   uint8_t spi_buffer[10];
} h_vu_t;

#define VU_ADDR 0x04
#define VU_IODIRA_ADDRESS 0x00
#define VU_IODIRB_ADDRESS 0x01
#define VU_GPIOB_ADDRESS 13
#define VU_GPIOA_ADDRESS 12
#define VU_PORTA 0
#define VU_PORTB 1

int vu_init(h_vu_t *h_vu);

int vu_led(h_vu_t *h_vu, uint8_t port , uint8_t led, uint8_t state);


