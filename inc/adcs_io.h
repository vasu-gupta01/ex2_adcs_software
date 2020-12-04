/*
 * Copyright (C) 2020  University of Alberta
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef ADCS_IO_H
#define ADCS_IO_H

#include "adcs_types.h"
#include <stdint.h>

//ADCS_returnState adcs_telecommand(uint8_t * command, uint32_t length);

//sends telecommand over uart/i2c, and return acknowledgment 
ADCS_returnState send_uart_telecommand(uint8_t * command, uint32_t length);
ADCS_returnState send_i2c_telecommand(uint8_t * command, uint32_t length);

//request telemetry over uart/i2c, and return acknowledgment
ADCS_returnState request_uart_telemetry(uint8_t TM_ID, uint8_t * telemetry, uint32_t length);
ADCS_returnState request_i2c_telemetry(uint8_t * command, uint32_t length);

//void uart_send(uint8_t * data);
//void uart_receive(uint8_t * data);


#endif /* ADCS_IO_H */
