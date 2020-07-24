/*
 * Copyright (C) 2014 INRIA
 *               2015,2017 Freie Universität Berlin
 *
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License v2.1. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @ingroup     boards_common_wsn430
 * @{
 *
 * @file
 * @brief       WSN430 peripheral configuration
 *
 * @author      Oliver Hahm <oliver.hahm@inria.fr>
 * @author      Hauke Petersen <hauke.petersen@fu-berlin.de>
 */

#ifndef PERIPH_CONF_H
#define PERIPH_CONF_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    Clock configuration
 * @{
 */
#define CLOCK_CORECLOCK     (8000000UL)
#define CLOCK_MODE          (MCLK_8MHZ_SCLK_8MHZ)
#define CLOCK_CMCLK         (CLOCK_CORECLOCK)       /* no divider programmed */
/** @} */

/**
 * @name    Timer configuration
 * @{
 */
#define TIMER_NUMOF         (1U)
#define TIMER_BASE          (TIMER_A)
#define TIMER_CHAN          (3)
#define TIMER_ISR_CC0       (TIMERA0_VECTOR)
#define TIMER_ISR_CCX       (TIMERA1_VECTOR)
/** @} */

/**
 * @name    UART configuration
 * @{
 */
#define UART_NUMOF          (1U)
#define UART_0_EN           (1U)

#define UART_BASE           (USART_0)
#define UART_IE             (SFR->IE1)
#define UART_IF             (SFR->IFG1)
#define UART_IE_RX_BIT      (1 << 6)
#define UART_IE_TX_BIT      (1 << 7)
#define UART_ME             (SFR->ME1)
#define UART_ME_BITS        (0xc0)
#define UART_PORT           (PORT_3)
#define UART_RX_PIN         (1 << 4)
#define UART_TX_PIN         (1 << 5)
#define UART_RX_ISR         (USART0RX_VECTOR)
#define UART_TX_ISR         (USART0TX_VECTOR)
/** @} */

/**
 * @name    SPI configuration
 * @{
 */
#define SPI_NUMOF           (1U)

/* SPI configuration */
#define SPI_BASE            (USART_0)
#define SPI_IE              (SFR->IE1)
#define SPI_IF              (SFR->IFG1)
#define SPI_IE_RX_BIT       (1 << 6)
#define SPI_IE_TX_BIT       (1 << 7)
#define SPI_ME              (SFR->ME1)
#define SPI_ME_BIT          (1 << 6)
#define SPI_PIN_MISO        GPIO_PIN(P5,2)
#define SPI_PIN_MOSI        GPIO_PIN(P5,1)
#define SPI_PIN_CLK         GPIO_PIN(P5,3)
/** @} */


#ifdef __cplusplus
}
#endif

#endif /* PERIPH_CONF_H */
/** @} */