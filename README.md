## AVR SPI LED Controller Overview

This project demonstrates SPI (Serial Peripheral Interface) communication using an AVR microcontroller configured in Master mode with direct register-level programming. The system periodically toggles two virtual LED control flags at different time intervals, combines their states into a 2-bit data frame, and transmits the data to an SPI slave device using the polling method to monitor transfer completion.

The project is designed as a practical example for understanding low-level SPI configuration, data transmission, and basic embedded timing control on ATmega microcontrollers.

## Features

SPI configured in Master mode

Register-level programming (SPCR, SPSR, SPDR)

Polling-based SPI data transmission

Software-controlled Slave Select (SS)

Two independent LED toggle signals

Simple timing control using delays
