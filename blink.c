#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif

#define F_CPU 16000000UL
#define LED_PIN 5

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRB |= (1 << LED_PIN);
  while (1)
  {
    PORTB ^= (1 << LED_PIN);
    _delay_ms(500);
  }
  return 0;
}