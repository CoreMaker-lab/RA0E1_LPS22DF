/* generated HAL source file - do not edit */
#include "hal_data.h"
iica_master_instance_ctrl_t g_iica_master0_ctrl;
const iica_master_extended_cfg_t g_iica_master0_extend =
        { .clock_settings.comm_rez = IICA_MASTER_COMM_REZ_DISABLED,
          .clock_settings.digital_filter = 0,
          /* Actual calculated bitrate: 380952. IICWH0 duty cycle: 53. IICWL0 duty cycle: 47. */.clock_settings.iicwl_value =
                  10,
          .clock_settings.iicwh_value = 11,
          .clock_settings.cks_value = 0,
          .sda_pin_settings.pin = BSP_IO_PORT_09_PIN_13,
          .sda_pin_settings.cfg = (uint32_t) (IOPORT_PERIPHERAL_IICA1),
          .scl_pin_settings.pin = BSP_IO_PORT_09_PIN_14,
          .scl_pin_settings.cfg = (uint32_t) (IOPORT_PERIPHERAL_IICA1), };
const i2c_master_cfg_t g_iica_master0_cfg =
{ .channel = 0, .rate = I2C_MASTER_RATE_FAST, .slave = 0x5c, .addr_mode = I2C_MASTER_ADDR_MODE_7BIT, .p_callback =
          iica_master_callback,
  .p_context = NULL,
#if defined(VECTOR_NUMBER_IICA0_TXRXI)
    .tei_irq             = VECTOR_NUMBER_IICA0_TXRXI,
#else
  .tei_irq = FSP_INVALID_VECTOR,
#endif
  .ipl = (2),
  .p_extend = &g_iica_master0_extend, };
/* Instance structure to use this module. */
const i2c_master_instance_t g_iica_master0 =
{ .p_ctrl = &g_iica_master0_ctrl, .p_cfg = &g_iica_master0_cfg, .p_api = &g_iica_master_on_iica };
uarta_instance_ctrl_t g_uart0_ctrl;

uarta_baud_setting_t g_uart0_baud_setting =
{
#if (BSP_CFG_UARTA0_CLOCK_SOURCE == BSP_CLOCKS_SOURCE_CLOCK_MAIN_OSC)

  /* Baud rate calculated with Acutal_Error 0.79%. */
  /* The permissible baud rate error range during reception: -4.63% ~ 5.11% */
  .utanck_clock_b.utasel = UARTA_CLOCK_SOURCE_MOSC,
  .utanck_clock_b.utanck = UARTA_CLOCK_DIV_1, .brgca = 35, .delay_time = 1
#elif (BSP_CFG_UARTA0_CLOCK_SOURCE == BSP_CLOCKS_SOURCE_CLOCK_HOCO)

/* Baud rate calculated with Acutal_Error 0.79%. */
/* The permissible baud rate error range during reception: -4.63% ~ 5.11% */
  .utanck_clock_b.utasel = UARTA_CLOCK_SOURCE_HOCO
, .utanck_clock_b.utanck = UARTA_CLOCK_DIV_4
, .brgca = 35
, .delay_time = 1
 #elif (BSP_CFG_UARTA0_CLOCK_SOURCE == BSP_CLOCKS_SOURCE_CLOCK_MOCO)

/* Baud rate calculated with Acutal_Error 2.12%. */ 
/* The permissible baud rate error range during reception: -4.49% ~ 4.94% */
  .utanck_clock_b.utasel = UARTA_CLOCK_SOURCE_MOCO
, .utanck_clock_b.utanck = UARTA_CLOCK_DIV_1
, .brgca = 17
, .delay_time = 1
 #elif ((BSP_CFG_UARTA0_CLOCK_SOURCE == BSP_CLOCKS_SOURCE_CLOCK_FSXP) || (BSP_CFG_UARTA0_CLOCK_SOURCE == BSP_CLOCKS_SOURCE_CLOCK_LOCO))

/* Baud rate calculated with Acutal_Error 100%. */
/* The permissible baud rate error range during reception: Invalid Range Error */
  .utanck_clock_b.utasel = 0
, .utanck_clock_b.utanck = 0
, .brgca = 0
, .delay_time = 31
 #elif (BSP_CFG_UARTA0_CLOCK_SOURCE == BSP_CLOCKS_SOURCE_CLOCK_SUBCLOCK)

/* Baud rate calculated with Acutal_Error 100%. */
/* The permissible baud rate error range during reception: Invalid Range Error */
  .utanck_clock_b.utasel = 0
, .utanck_clock_b.utanck = 0
, .brgca = 0
, .delay_time = 31
 #endif
        };

/** UART extended configuration for UART on UARTA HAL driver */
const uarta_extended_cfg_t g_uart0_cfg_extend =
{ .transfer_dir = UARTA_DIR_BIT_LSB_FIRST, .transfer_level = UARTA_ALV_BIT_POSITIVE_LOGIC, .clock_output =
          UARTA_CLOCK_OUTPUT_DISABLED,
  .p_baud_setting = &g_uart0_baud_setting, };

/** UART interface configuration */
const uart_cfg_t g_uart0_cfg =
{ .channel = 0, .data_bits = UART_DATA_BITS_8, .parity = UART_PARITY_OFF, .stop_bits = UART_STOP_BITS_1, .p_callback =
          user_uart_callback,
  .p_context = NULL, .p_extend = &g_uart0_cfg_extend,
#define RA_NOT_DEFINED (1)
#if (RA_NOT_DEFINED == RA_NOT_DEFINED)
  .p_transfer_tx = NULL,
#else
                .p_transfer_tx       = &RA_NOT_DEFINED,
#endif
#if (RA_NOT_DEFINED == RA_NOT_DEFINED)
  .p_transfer_rx = NULL,
#else
                .p_transfer_rx       = &RA_NOT_DEFINED,
#endif
#undef RA_NOT_DEFINED
  .rxi_ipl = (2),
  .txi_ipl = (2), .eri_ipl = (BSP_IRQ_DISABLED),
#if defined(VECTOR_NUMBER_UARTA0_RXI)
                .rxi_irq             = VECTOR_NUMBER_UARTA0_RXI,
#else
  .rxi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_UARTA0_TXI)
                .txi_irq             = VECTOR_NUMBER_UARTA0_TXI,
#else
  .txi_irq = FSP_INVALID_VECTOR,
#endif
#if defined(VECTOR_NUMBER_UARTA0_ERRI)
                .eri_irq             = VECTOR_NUMBER_UARTA0_ERRI,
#else
  .eri_irq = FSP_INVALID_VECTOR,
#endif
        };

/* Instance structure to use this module. */
const uart_instance_t g_uart0 =
{ .p_ctrl = &g_uart0_ctrl, .p_cfg = &g_uart0_cfg, .p_api = &g_uart_on_uarta };
void g_hal_init(void)
{
    g_common_init ();
}
