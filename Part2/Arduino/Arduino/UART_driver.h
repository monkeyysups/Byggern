/*
 * ATmega2560.h
 *
 * Created: 10.10.2019 14:51:34
 *  Author: oledr
 */ 



#ifndef UART_DRIVER_H_
#define UART_DRIVER_H_

void UART_init(unsigned long clock_speed);
int put_char(unsigned char c);
int get_char(void);

#endif /* MAX233_DRIVER_H_ */
