/*
 * (C) Copyright 2013 Xilinx, Inc.
 *
 * Configuration settings for the Xilinx Zynq ZC702 and ZC706 boards
 * See zynq-common.h for Zynq common configs
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_ZYNQ_ZC70X_H
#define __CONFIG_ZYNQ_ZC70X_H

#define CONFIG_SYS_SDRAM_SIZE		(1024 * 1024 * 1024)

#define CONFIG_ZYNQ_SERIAL_UART0

#define XILINX_EMACLITE_BASEADDR    0x40E00000
#define CONFIG_XILINX_EMACLITE
#define CONFIG_XILINX_EMACLITE_TX_PING_PONG
#define CONFIG_XILINX_EMACLITE_RX_PING_PONG
#define CONFIG_MII
#define CONFIG_SYS_FAULT_ECHO_LINK_DOWN
#define CONFIG_PHYLIB
#define CONFIG_PHY_MICREL
#define CONFIG_SYS_ENET
#define CONFIG_BOOTP_SERVERIP
#define CONFIG_BOOTP_BOOTPATH
#define CONFIG_BOOTP_GATEWAY
#define CONFIG_BOOTP_HOSTNAME
#define CONFIG_BOOTP_MAY_FAIL
#define CONFIG_CMD_DHCP

#define CONFIG_SYS_NO_FLASH

#define CONFIG_ZYNQ_QSPI
#define CONFIG_ZYNQ_I2C0
#define CONFIG_ZYNQ_EEPROM

#include <configs/zynq-common.h>

#endif /* __CONFIG_ZYNQ_ZC70X_H */
