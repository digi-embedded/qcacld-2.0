/*
 * Copyright (c) . The Linux Foundation. All rights reserved.
 *
 * Previously licensed under the ISC license by Qualcomm Atheros, Inc.
 *
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * This file was originally distributed by Qualcomm Atheros, Inc.
 * under proprietary terms before Copyright ownership was assigned
 * to the Linux Foundation.
 */

#ifndef _AR6320DEF_H_
#define  _AR6320DEF_H_

/* Base Addresses */
#define AR6320_RTC_SOC_BASE_ADDRESS                     0x00000000
#define AR6320_RTC_WMAC_BASE_ADDRESS                    0x00001000
#define AR6320_MAC_COEX_BASE_ADDRESS                    0x0000f000
#define AR6320_BT_COEX_BASE_ADDRESS                     0x00002000
#define AR6320_SOC_PCIE_BASE_ADDRESS                    0x00038000
#define AR6320_SOC_CORE_BASE_ADDRESS                    0x0003a000
#define AR6320_WLAN_UART_BASE_ADDRESS                   0x0000c000
#define AR6320_WLAN_SI_BASE_ADDRESS                     0x00010000
#define AR6320_WLAN_GPIO_BASE_ADDRESS                   0x00005000
#define AR6320_WLAN_ANALOG_INTF_BASE_ADDRESS            0x00006000
#define AR6320_WLAN_MAC_BASE_ADDRESS                    0x00010000
#define AR6320_EFUSE_BASE_ADDRESS                       0x00024000
#define AR6320_FPGA_REG_BASE_ADDRESS                    0x00039000
#define AR6320_WLAN_UART2_BASE_ADDRESS                  0x00054c00
#define AR6320_CE_WRAPPER_BASE_ADDRESS                  0x00034000
#define AR6320_CE0_BASE_ADDRESS                         0x00034400
#define AR6320_CE1_BASE_ADDRESS                         0x00034800
#define AR6320_CE2_BASE_ADDRESS                         0x00034c00
#define AR6320_CE3_BASE_ADDRESS                         0x00035000
#define AR6320_CE4_BASE_ADDRESS                         0x00035400
#define AR6320_CE5_BASE_ADDRESS                         0x00035800
#define AR6320_CE6_BASE_ADDRESS                         0x00035c00
#define AR6320_CE7_BASE_ADDRESS                         0x00036000
#define AR6320_DBI_BASE_ADDRESS                         0x0003c000
#define AR6320_WLAN_ANALOG_INTF_PCIE_BASE_ADDRESS       0x00007800

#define AR6320_SCRATCH_3_ADDRESS                        0x0028
#define AR6320_TARG_DRAM_START                          0x00400000
#define AR6320_SOC_SYSTEM_SLEEP_OFFSET                  0x000000c0
#define AR6320_SOC_RESET_CONTROL_OFFSET                 0x00000000
#define AR6320_SOC_CLOCK_CONTROL_OFFSET                 0x00000028
#define AR6320_SOC_CLOCK_CONTROL_SI0_CLK_MASK           0x00000001
#define AR6320_SOC_RESET_CONTROL_SI0_RST_MASK           0x00000000
#define AR6320_WLAN_GPIO_PIN0_ADDRESS                   0x00000068
#define AR6320_WLAN_GPIO_PIN1_ADDRESS                   0x0000006c
#define AR6320_WLAN_GPIO_PIN0_CONFIG_MASK               0x00007800
#define AR6320_WLAN_GPIO_PIN1_CONFIG_MASK               0x00007800
#define AR6320_SOC_CPU_CLOCK_OFFSET                     0x00000020
#define AR6320_SOC_LPO_CAL_OFFSET                       0x000000e0
#define AR6320_WLAN_GPIO_PIN10_ADDRESS                  0x00000090
#define AR6320_WLAN_GPIO_PIN11_ADDRESS                  0x00000094
#define AR6320_WLAN_GPIO_PIN12_ADDRESS                  0x00000098
#define AR6320_WLAN_GPIO_PIN13_ADDRESS                  0x0000009c
#define AR6320_SOC_CPU_CLOCK_STANDARD_LSB               0
#define AR6320_SOC_CPU_CLOCK_STANDARD_MASK              0x00000003
#define AR6320_SOC_LPO_CAL_ENABLE_LSB                   20
#define AR6320_SOC_LPO_CAL_ENABLE_MASK                  0x00100000

#define AR6320_WLAN_SYSTEM_SLEEP_DISABLE_LSB            0
#define AR6320_WLAN_SYSTEM_SLEEP_DISABLE_MASK           0x00000001
#define AR6320_WLAN_RESET_CONTROL_COLD_RST_MASK         0x00000008
#define AR6320_WLAN_RESET_CONTROL_WARM_RST_MASK         0x00000004
#define AR6320_SI_CONFIG_BIDIR_OD_DATA_LSB              18
#define AR6320_SI_CONFIG_BIDIR_OD_DATA_MASK             0x00040000
#define AR6320_SI_CONFIG_I2C_LSB                        16
#define AR6320_SI_CONFIG_I2C_MASK                       0x00010000
#define AR6320_SI_CONFIG_POS_SAMPLE_LSB                 7
#define AR6320_SI_CONFIG_POS_SAMPLE_MASK                0x00000080
#define AR6320_SI_CONFIG_INACTIVE_CLK_LSB               4
#define AR6320_SI_CONFIG_INACTIVE_CLK_MASK              0x00000010
#define AR6320_SI_CONFIG_INACTIVE_DATA_LSB              5
#define AR6320_SI_CONFIG_INACTIVE_DATA_MASK             0x00000020
#define AR6320_SI_CONFIG_DIVIDER_LSB                    0
#define AR6320_SI_CONFIG_DIVIDER_MASK                   0x0000000f
#define AR6320_SI_CONFIG_OFFSET                         0x00000000
#define AR6320_SI_TX_DATA0_OFFSET                       0x00000008
#define AR6320_SI_TX_DATA1_OFFSET                       0x0000000c
#define AR6320_SI_RX_DATA0_OFFSET                       0x00000010
#define AR6320_SI_RX_DATA1_OFFSET                       0x00000014
#define AR6320_SI_CS_OFFSET                             0x00000004
#define AR6320_SI_CS_DONE_ERR_MASK                      0x00000400
#define AR6320_SI_CS_DONE_INT_MASK                      0x00000200
#define AR6320_SI_CS_START_LSB                          8
#define AR6320_SI_CS_START_MASK                         0x00000100
#define AR6320_SI_CS_RX_CNT_LSB                         4
#define AR6320_SI_CS_RX_CNT_MASK                        0x000000f0
#define AR6320_SI_CS_TX_CNT_LSB                         0
#define AR6320_SI_CS_TX_CNT_MASK                        0x0000000f
#define AR6320_CE_COUNT                                 8
#define AR6320_SR_WR_INDEX_ADDRESS                      0x003c
#define AR6320_DST_WATERMARK_ADDRESS                    0x0050
#define AR6320_RX_MSDU_END_4_FIRST_MSDU_LSB             14
#define AR6320_RX_MSDU_END_4_FIRST_MSDU_MASK            0x00004000
#define AR6320_RX_MPDU_START_0_SEQ_NUM_LSB              16
#define AR6320_RX_MPDU_START_0_SEQ_NUM_MASK             0x0fff0000
#define AR6320_RX_MPDU_START_2_PN_47_32_LSB             0
#define AR6320_RX_MPDU_START_2_PN_47_32_MASK            0x0000ffff
#define AR6320_RX_MSDU_END_1_KEY_ID_OCT_MASK            0x000000ff
#define AR6320_RX_MSDU_END_1_KEY_ID_OCT_LSB             0
#define AR6320_RX_MSDU_END_1_EXT_WAPI_PN_63_48_LSB      16
#define AR6320_RX_MSDU_END_1_EXT_WAPI_PN_63_48_MASK     0xffff0000
#define AR6320_RX_MSDU_END_4_LAST_MSDU_LSB              15
#define AR6320_RX_MSDU_END_4_LAST_MSDU_MASK             0x00008000
#define AR6320_RX_ATTENTION_0_MCAST_BCAST_LSB           2
#define AR6320_RX_ATTENTION_0_MCAST_BCAST_MASK          0x00000004
#define AR6320_RX_ATTENTION_0_FRAGMENT_LSB              13
#define AR6320_RX_ATTENTION_0_FRAGMENT_MASK             0x00002000
#define AR6320_RX_ATTENTION_0_MPDU_LENGTH_ERR_MASK      0x08000000
#define AR6320_RX_FRAG_INFO_0_RING2_MORE_COUNT_LSB      16
#define AR6320_RX_FRAG_INFO_0_RING2_MORE_COUNT_MASK     0x00ff0000
#define AR6320_RX_MSDU_START_0_MSDU_LENGTH_LSB          0
#define AR6320_RX_MSDU_START_0_MSDU_LENGTH_MASK         0x00003fff
#define AR6320_RX_MSDU_START_2_DECAP_FORMAT_OFFSET      0x00000008
#define AR6320_RX_MSDU_START_2_DECAP_FORMAT_LSB         8
#define AR6320_RX_MSDU_START_2_DECAP_FORMAT_MASK        0x00000300
#define AR6320_RX_MPDU_START_0_ENCRYPTED_LSB            13
#define AR6320_RX_MPDU_START_0_ENCRYPTED_MASK           0x00002000
#define AR6320_RX_ATTENTION_0_MORE_DATA_MASK            0x00000400
#define AR6320_RX_ATTENTION_0_MSDU_DONE_MASK            0x80000000
#define AR6320_RX_ATTENTION_0_TCP_UDP_CHKSUM_FAIL_MASK  0x00040000
#define AR6320_DST_WR_INDEX_ADDRESS                     0x0040
#define AR6320_SRC_WATERMARK_ADDRESS                    0x004c
#define AR6320_SRC_WATERMARK_LOW_MASK                   0xffff0000
#define AR6320_SRC_WATERMARK_HIGH_MASK                  0x0000ffff
#define AR6320_DST_WATERMARK_LOW_MASK                   0xffff0000
#define AR6320_DST_WATERMARK_HIGH_MASK                  0x0000ffff
#define AR6320_CURRENT_SRRI_ADDRESS                     0x0044
#define AR6320_CURRENT_DRRI_ADDRESS                     0x0048
#define AR6320_HOST_IS_SRC_RING_HIGH_WATERMARK_MASK     0x00000002
#define AR6320_HOST_IS_SRC_RING_LOW_WATERMARK_MASK      0x00000004
#define AR6320_HOST_IS_DST_RING_HIGH_WATERMARK_MASK     0x00000008
#define AR6320_HOST_IS_DST_RING_LOW_WATERMARK_MASK      0x00000010
#define AR6320_HOST_IS_ADDRESS                          0x0030
#define AR6320_HOST_IS_COPY_COMPLETE_MASK               0x00000001
#define AR6320_CE_WRAPPER_INTERRUPT_SUMMARY_ADDRESS     0x0000
#define AR6320_HOST_IE_ADDRESS                          0x002c
#define AR6320_HOST_IE_COPY_COMPLETE_MASK               0x00000001
#define AR6320_SR_BA_ADDRESS                            0x0000
#define AR6320_SR_SIZE_ADDRESS                          0x0004
#define AR6320_CE_CTRL1_ADDRESS                         0x0010
#define AR6320_CE_CTRL1_DMAX_LENGTH_MASK                0x0000ffff
#define AR6320_DR_BA_ADDRESS                            0x0008
#define AR6320_DR_SIZE_ADDRESS                          0x000c
#define AR6320_MISC_IE_ADDRESS                          0x0034
#define AR6320_MISC_IS_AXI_ERR_MASK                     0x00000400
#define AR6320_MISC_IS_DST_ADDR_ERR_MASK                0x00000200
#define AR6320_MISC_IS_SRC_LEN_ERR_MASK                 0x00000100
#define AR6320_MISC_IS_DST_MAX_LEN_VIO_MASK             0x00000080
#define AR6320_MISC_IS_DST_RING_OVERFLOW_MASK           0x00000040
#define AR6320_MISC_IS_SRC_RING_OVERFLOW_MASK           0x00000020
#define AR6320_SRC_WATERMARK_LOW_LSB                    16
#define AR6320_SRC_WATERMARK_HIGH_LSB                   0
#define AR6320_DST_WATERMARK_LOW_LSB                    16
#define AR6320_DST_WATERMARK_HIGH_LSB                   0
#define AR6320_CE_WRAPPER_INTERRUPT_SUMMARY_HOST_MSI_MASK 0x0000ff00
#define AR6320_CE_WRAPPER_INTERRUPT_SUMMARY_HOST_MSI_LSB  8
#define AR6320_CE_CTRL1_DMAX_LENGTH_LSB                 0
#define AR6320_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_MASK      0x00010000
#define AR6320_CE_CTRL1_DST_RING_BYTE_SWAP_EN_MASK      0x00020000
#define AR6320_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_LSB       16
#define AR6320_CE_CTRL1_DST_RING_BYTE_SWAP_EN_LSB       17
#define AR6320_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MASK 0x00000020
#define AR6320_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_LSB  5
#define AR6320_SOC_GLOBAL_RESET_ADDRESS                 0x0008
#define AR6320_RTC_STATE_ADDRESS                        0x0000
#define AR6320_RTC_STATE_COLD_RESET_MASK                0x00002000
#define AR6320_PCIE_SOC_WAKE_RESET                      0x00000000
#define AR6320_PCIE_SOC_WAKE_ADDRESS                    0x0004
#define AR6320_PCIE_SOC_WAKE_V_MASK                     0x00000001
#define AR6320_RTC_STATE_V_MASK                         0x00000007
#define AR6320_RTC_STATE_V_LSB                          0
#define AR6320_RTC_STATE_V_ON                           3
#define AR6320_PCIE_LOCAL_BASE_ADDRESS                  0x80000
#define AR6320_FW_IND_EVENT_PENDING                     1
#define AR6320_FW_IND_INITIALIZED                       2
#define AR6320_PCIE_INTR_ENABLE_ADDRESS                 0x0008
#define AR6320_PCIE_INTR_CLR_ADDRESS                    0x0014
#define AR6320_PCIE_INTR_FIRMWARE_MASK                  0x00000400
#define AR6320_PCIE_INTR_CE0_MASK                       0x00000800
#define AR6320_PCIE_INTR_CE_MASK_ALL                    0x0007f800 /* All CEs */
#define AR6320_PCIE_INTR_CAUSE_ADDRESS                  0x000c
#define AR6320_CPU_INTR_ADDRESS                         0x0010
#define AR6320_SOC_LF_TIMER_CONTROL0_ADDRESS            0x00000050
#define AR6320_SOC_LF_TIMER_CONTROL0_ENABLE_MASK        0x00000004
#define AR6320_SOC_RESET_CONTROL_ADDRESS                0x00000000
#define AR6320_SOC_RESET_CONTROL_CE_RST_MASK            0x00000001
#define AR6320_SOC_RESET_CONTROL_CPU_WARM_RST_MASK      0x00000040
#define AR6320_CORE_CTRL_ADDRESS                        0x0000
#define AR6320_CORE_CTRL_CPU_INTR_MASK                  0x00002000
#define AR6320_LOCAL_SCRATCH_OFFSET                     0x000000c0
#define AR6320_CLOCK_GPIO_OFFSET                        0xffffffff
#define AR6320_CLOCK_GPIO_BT_CLK_OUT_EN_LSB             0
#define AR6320_CLOCK_GPIO_BT_CLK_OUT_EN_MASK            0
#define AR6320_SOC_CHIP_ID_ADDRESS                      0x000000f0
#define AR6320_SOC_CHIP_ID_VERSION_MASK                 0xfffc0000
#define AR6320_SOC_CHIP_ID_VERSION_LSB                  18
#define AR6320_SOC_CHIP_ID_REVISION_MASK                0x00000f00
#define AR6320_SOC_CHIP_ID_REVISION_LSB                 8

#define AR6320_PCIE_INTR_CE_MASK(n)                    (AR6320_PCIE_INTR_CE0_MASK << (n))
#define AR6320_DRAM_BASE_ADDRESS                       AR6320_TARG_DRAM_START
#define AR6320_FW_INDICATOR_ADDRESS                    (AR6320_SOC_CORE_BASE_ADDRESS + AR6320_SCRATCH_3_ADDRESS)
#define AR6320_SYSTEM_SLEEP_OFFSET                     AR6320_SOC_SYSTEM_SLEEP_OFFSET
#define AR6320_WLAN_SYSTEM_SLEEP_OFFSET                0x002c
#define AR6320_WLAN_RESET_CONTROL_OFFSET               AR6320_SOC_RESET_CONTROL_OFFSET
#define AR6320_CLOCK_CONTROL_OFFSET                    AR6320_SOC_CLOCK_CONTROL_OFFSET
#define AR6320_CLOCK_CONTROL_SI0_CLK_MASK              AR6320_SOC_CLOCK_CONTROL_SI0_CLK_MASK
#define AR6320_RESET_CONTROL_MBOX_RST_MASK             0x00000004
#define AR6320_RESET_CONTROL_SI0_RST_MASK              AR6320_SOC_RESET_CONTROL_SI0_RST_MASK
#define AR6320_GPIO_BASE_ADDRESS                       AR6320_WLAN_GPIO_BASE_ADDRESS
#define AR6320_GPIO_PIN0_OFFSET                        AR6320_WLAN_GPIO_PIN0_ADDRESS
#define AR6320_GPIO_PIN1_OFFSET                        AR6320_WLAN_GPIO_PIN1_ADDRESS
#define AR6320_GPIO_PIN0_CONFIG_MASK                   AR6320_WLAN_GPIO_PIN0_CONFIG_MASK
#define AR6320_GPIO_PIN1_CONFIG_MASK                   AR6320_WLAN_GPIO_PIN1_CONFIG_MASK
#define AR6320_SI_BASE_ADDRESS                         0x00050000
#define AR6320_CPU_CLOCK_OFFSET                        AR6320_SOC_CPU_CLOCK_OFFSET
#define AR6320_LPO_CAL_OFFSET                          AR6320_SOC_LPO_CAL_OFFSET
#define AR6320_GPIO_PIN10_OFFSET                       AR6320_WLAN_GPIO_PIN10_ADDRESS
#define AR6320_GPIO_PIN11_OFFSET                       AR6320_WLAN_GPIO_PIN11_ADDRESS
#define AR6320_GPIO_PIN12_OFFSET                       AR6320_WLAN_GPIO_PIN12_ADDRESS
#define AR6320_GPIO_PIN13_OFFSET                       AR6320_WLAN_GPIO_PIN13_ADDRESS
#define AR6320_CPU_CLOCK_STANDARD_LSB                  AR6320_SOC_CPU_CLOCK_STANDARD_LSB
#define AR6320_CPU_CLOCK_STANDARD_MASK                 AR6320_SOC_CPU_CLOCK_STANDARD_MASK
#define AR6320_LPO_CAL_ENABLE_LSB                      AR6320_SOC_LPO_CAL_ENABLE_LSB
#define AR6320_LPO_CAL_ENABLE_MASK                     AR6320_SOC_LPO_CAL_ENABLE_MASK
#define AR6320_ANALOG_INTF_BASE_ADDRESS                AR6320_WLAN_ANALOG_INTF_BASE_ADDRESS
#define AR6320_MBOX_BASE_ADDRESS                       0x00008000
#define AR6320_INT_STATUS_ENABLE_ERROR_LSB             7
#define AR6320_INT_STATUS_ENABLE_ERROR_MASK            0x00000080
#define AR6320_INT_STATUS_ENABLE_CPU_LSB               6
#define AR6320_INT_STATUS_ENABLE_CPU_MASK              0x00000040
#define AR6320_INT_STATUS_ENABLE_COUNTER_LSB           4
#define AR6320_INT_STATUS_ENABLE_COUNTER_MASK          0x00000010
#define AR6320_INT_STATUS_ENABLE_MBOX_DATA_LSB         0
#define AR6320_INT_STATUS_ENABLE_MBOX_DATA_MASK        0x0000000f
#define AR6320_ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB    17
#define AR6320_ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK   0x00020000
#define AR6320_ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB     16
#define AR6320_ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK    0x00010000
#define AR6320_COUNTER_INT_STATUS_ENABLE_BIT_LSB       24
#define AR6320_COUNTER_INT_STATUS_ENABLE_BIT_MASK      0xff000000
#define AR6320_INT_STATUS_ENABLE_ADDRESS               0x0828
#define AR6320_CPU_INT_STATUS_ENABLE_BIT_LSB           8
#define AR6320_CPU_INT_STATUS_ENABLE_BIT_MASK          0x0000ff00
#define AR6320_HOST_INT_STATUS_ADDRESS                 0x0800
#define AR6320_CPU_INT_STATUS_ADDRESS                  0x0801
#define AR6320_ERROR_INT_STATUS_ADDRESS                0x0802
#define AR6320_ERROR_INT_STATUS_WAKEUP_MASK            0x00040000
#define AR6320_ERROR_INT_STATUS_WAKEUP_LSB             18
#define AR6320_ERROR_INT_STATUS_RX_UNDERFLOW_MASK      0x00020000
#define AR6320_ERROR_INT_STATUS_RX_UNDERFLOW_LSB       17
#define AR6320_ERROR_INT_STATUS_TX_OVERFLOW_MASK       0x00010000
#define AR6320_ERROR_INT_STATUS_TX_OVERFLOW_LSB        16
#define AR6320_COUNT_DEC_ADDRESS                       0x0840
#define AR6320_HOST_INT_STATUS_CPU_MASK                0x00000040
#define AR6320_HOST_INT_STATUS_CPU_LSB                 6
#define AR6320_HOST_INT_STATUS_ERROR_MASK              0x00000080
#define AR6320_HOST_INT_STATUS_ERROR_LSB               7
#define AR6320_HOST_INT_STATUS_COUNTER_MASK            0x00000010
#define AR6320_HOST_INT_STATUS_COUNTER_LSB             4
#define AR6320_RX_LOOKAHEAD_VALID_ADDRESS              0x0805
#define AR6320_WINDOW_DATA_ADDRESS                     0x0874
#define AR6320_WINDOW_READ_ADDR_ADDRESS                0x087c
#define AR6320_WINDOW_WRITE_ADDR_ADDRESS               0x0878

struct targetdef_s ar6320_targetdef = {
    .d_RTC_SOC_BASE_ADDRESS =                  AR6320_RTC_SOC_BASE_ADDRESS,
    .d_RTC_WMAC_BASE_ADDRESS =                 AR6320_RTC_WMAC_BASE_ADDRESS,
    .d_SYSTEM_SLEEP_OFFSET =                   AR6320_WLAN_SYSTEM_SLEEP_OFFSET,
    .d_WLAN_SYSTEM_SLEEP_OFFSET =              AR6320_WLAN_SYSTEM_SLEEP_OFFSET,
    .d_WLAN_SYSTEM_SLEEP_DISABLE_LSB =         AR6320_WLAN_SYSTEM_SLEEP_DISABLE_LSB,
    .d_WLAN_SYSTEM_SLEEP_DISABLE_MASK =        AR6320_WLAN_SYSTEM_SLEEP_DISABLE_MASK,
    .d_CLOCK_CONTROL_OFFSET =                  AR6320_CLOCK_CONTROL_OFFSET,
    .d_CLOCK_CONTROL_SI0_CLK_MASK =            AR6320_CLOCK_CONTROL_SI0_CLK_MASK,
    .d_RESET_CONTROL_OFFSET =                  AR6320_SOC_RESET_CONTROL_OFFSET,
    .d_RESET_CONTROL_MBOX_RST_MASK =           AR6320_RESET_CONTROL_MBOX_RST_MASK,
    .d_RESET_CONTROL_SI0_RST_MASK =            AR6320_RESET_CONTROL_SI0_RST_MASK,
    .d_WLAN_RESET_CONTROL_OFFSET =             AR6320_WLAN_RESET_CONTROL_OFFSET,
    .d_WLAN_RESET_CONTROL_COLD_RST_MASK =      AR6320_WLAN_RESET_CONTROL_COLD_RST_MASK,
    .d_WLAN_RESET_CONTROL_WARM_RST_MASK =      AR6320_WLAN_RESET_CONTROL_WARM_RST_MASK,
    .d_GPIO_BASE_ADDRESS =                     AR6320_GPIO_BASE_ADDRESS,
    .d_GPIO_PIN0_OFFSET =                      AR6320_GPIO_PIN0_OFFSET,
    .d_GPIO_PIN1_OFFSET =                      AR6320_GPIO_PIN1_OFFSET,
    .d_GPIO_PIN0_CONFIG_MASK =                 AR6320_GPIO_PIN0_CONFIG_MASK,
    .d_GPIO_PIN1_CONFIG_MASK =                 AR6320_GPIO_PIN1_CONFIG_MASK,
    .d_SI_CONFIG_BIDIR_OD_DATA_LSB =           AR6320_SI_CONFIG_BIDIR_OD_DATA_LSB,
    .d_SI_CONFIG_BIDIR_OD_DATA_MASK =          AR6320_SI_CONFIG_BIDIR_OD_DATA_MASK,
    .d_SI_CONFIG_I2C_LSB =                     AR6320_SI_CONFIG_I2C_LSB,
    .d_SI_CONFIG_I2C_MASK =                    AR6320_SI_CONFIG_I2C_MASK,
    .d_SI_CONFIG_POS_SAMPLE_LSB =              AR6320_SI_CONFIG_POS_SAMPLE_LSB,
    .d_SI_CONFIG_POS_SAMPLE_MASK =             AR6320_SI_CONFIG_POS_SAMPLE_MASK,
    .d_SI_CONFIG_INACTIVE_CLK_LSB =            AR6320_SI_CONFIG_INACTIVE_CLK_LSB,
    .d_SI_CONFIG_INACTIVE_CLK_MASK =           AR6320_SI_CONFIG_INACTIVE_CLK_MASK,
    .d_SI_CONFIG_INACTIVE_DATA_LSB =           AR6320_SI_CONFIG_INACTIVE_DATA_LSB,
    .d_SI_CONFIG_INACTIVE_DATA_MASK =          AR6320_SI_CONFIG_INACTIVE_DATA_MASK,
    .d_SI_CONFIG_DIVIDER_LSB =                 AR6320_SI_CONFIG_DIVIDER_LSB,
    .d_SI_CONFIG_DIVIDER_MASK =                AR6320_SI_CONFIG_DIVIDER_MASK,
    .d_SI_BASE_ADDRESS =                       AR6320_SI_BASE_ADDRESS,
    .d_SI_CONFIG_OFFSET =                      AR6320_SI_CONFIG_OFFSET,
    .d_SI_TX_DATA0_OFFSET =                    AR6320_SI_TX_DATA0_OFFSET,
    .d_SI_TX_DATA1_OFFSET =                    AR6320_SI_TX_DATA1_OFFSET,
    .d_SI_RX_DATA0_OFFSET =                    AR6320_SI_RX_DATA0_OFFSET,
    .d_SI_RX_DATA1_OFFSET =                    AR6320_SI_RX_DATA1_OFFSET,
    .d_SI_CS_OFFSET =                          AR6320_SI_CS_OFFSET,
    .d_SI_CS_DONE_ERR_MASK =                   AR6320_SI_CS_DONE_ERR_MASK,
    .d_SI_CS_DONE_INT_MASK =                   AR6320_SI_CS_DONE_INT_MASK,
    .d_SI_CS_START_LSB =                       AR6320_SI_CS_START_LSB,
    .d_SI_CS_START_MASK =                      AR6320_SI_CS_START_MASK,
    .d_SI_CS_RX_CNT_LSB =                      AR6320_SI_CS_RX_CNT_LSB,
    .d_SI_CS_RX_CNT_MASK =                     AR6320_SI_CS_RX_CNT_MASK,
    .d_SI_CS_TX_CNT_LSB =                      AR6320_SI_CS_TX_CNT_LSB,
    .d_SI_CS_TX_CNT_MASK =                     AR6320_SI_CS_TX_CNT_MASK,
    .d_BOARD_DATA_SZ =                         AR6320_BOARD_DATA_SZ,
    .d_BOARD_EXT_DATA_SZ =                     AR6320_BOARD_EXT_DATA_SZ,
    .d_MBOX_BASE_ADDRESS =                     AR6320_MBOX_BASE_ADDRESS,
    .d_LOCAL_SCRATCH_OFFSET =                  AR6320_LOCAL_SCRATCH_OFFSET,
    .d_CPU_CLOCK_OFFSET =                      AR6320_CPU_CLOCK_OFFSET,
    .d_LPO_CAL_OFFSET =                        AR6320_LPO_CAL_OFFSET,
    .d_GPIO_PIN10_OFFSET =                     AR6320_GPIO_PIN10_OFFSET,
    .d_GPIO_PIN11_OFFSET =                     AR6320_GPIO_PIN11_OFFSET,
    .d_GPIO_PIN12_OFFSET =                     AR6320_GPIO_PIN12_OFFSET,
    .d_GPIO_PIN13_OFFSET =                     AR6320_GPIO_PIN13_OFFSET,
    .d_CLOCK_GPIO_OFFSET =                     AR6320_CLOCK_GPIO_OFFSET,
    .d_CPU_CLOCK_STANDARD_LSB =                AR6320_CPU_CLOCK_STANDARD_LSB,
    .d_CPU_CLOCK_STANDARD_MASK =               AR6320_CPU_CLOCK_STANDARD_MASK,
    .d_LPO_CAL_ENABLE_LSB =                    AR6320_LPO_CAL_ENABLE_LSB,
    .d_LPO_CAL_ENABLE_MASK =                   AR6320_LPO_CAL_ENABLE_MASK,
    .d_CLOCK_GPIO_BT_CLK_OUT_EN_LSB =          AR6320_CLOCK_GPIO_BT_CLK_OUT_EN_LSB,
    .d_CLOCK_GPIO_BT_CLK_OUT_EN_MASK =         AR6320_CLOCK_GPIO_BT_CLK_OUT_EN_MASK,
    .d_ANALOG_INTF_BASE_ADDRESS =              AR6320_ANALOG_INTF_BASE_ADDRESS,
    .d_WLAN_MAC_BASE_ADDRESS =                 AR6320_WLAN_MAC_BASE_ADDRESS,
    .d_CE0_BASE_ADDRESS =                      AR6320_CE0_BASE_ADDRESS,
    .d_CE1_BASE_ADDRESS =                      AR6320_CE1_BASE_ADDRESS,
    .d_FW_INDICATOR_ADDRESS =                  AR6320_FW_INDICATOR_ADDRESS,
    .d_DRAM_BASE_ADDRESS =                     AR6320_DRAM_BASE_ADDRESS,
    .d_SOC_CORE_BASE_ADDRESS =                 AR6320_SOC_CORE_BASE_ADDRESS,
    .d_CORE_CTRL_ADDRESS =                     AR6320_CORE_CTRL_ADDRESS,
    .d_CE_COUNT =                              AR6320_CE_COUNT,
    .d_MSI_NUM_REQUEST =                       MSI_NUM_REQUEST,
    .d_MSI_ASSIGN_FW =                         MSI_ASSIGN_FW,
    .d_MSI_ASSIGN_CE_INITIAL =                 MSI_ASSIGN_CE_INITIAL,
    .d_PCIE_INTR_ENABLE_ADDRESS =              AR6320_PCIE_INTR_ENABLE_ADDRESS,
    .d_PCIE_INTR_CLR_ADDRESS =                 AR6320_PCIE_INTR_CLR_ADDRESS,
    .d_PCIE_INTR_FIRMWARE_MASK =               AR6320_PCIE_INTR_FIRMWARE_MASK,
    .d_PCIE_INTR_CE_MASK_ALL =                 AR6320_PCIE_INTR_CE_MASK_ALL,
    .d_CORE_CTRL_CPU_INTR_MASK =               AR6320_CORE_CTRL_CPU_INTR_MASK,
    .d_SR_WR_INDEX_ADDRESS =                   AR6320_SR_WR_INDEX_ADDRESS,
    .d_DST_WATERMARK_ADDRESS =                 AR6320_DST_WATERMARK_ADDRESS,
    /* htt_rx.c */
    .d_RX_MSDU_END_4_FIRST_MSDU_MASK =         AR6320_RX_MSDU_END_4_FIRST_MSDU_MASK,
    .d_RX_MSDU_END_4_FIRST_MSDU_LSB =          AR6320_RX_MSDU_END_4_FIRST_MSDU_LSB,
    .d_RX_MPDU_START_0_SEQ_NUM_MASK =          AR6320_RX_MPDU_START_0_SEQ_NUM_MASK,
    .d_RX_MPDU_START_0_SEQ_NUM_LSB =           AR6320_RX_MPDU_START_0_SEQ_NUM_LSB,
    .d_RX_MPDU_START_2_PN_47_32_LSB =          AR6320_RX_MPDU_START_2_PN_47_32_LSB,
    .d_RX_MPDU_START_2_PN_47_32_MASK =         AR6320_RX_MPDU_START_2_PN_47_32_MASK,
    .d_RX_MSDU_END_1_KEY_ID_OCT_MASK =         AR6320_RX_MSDU_END_1_KEY_ID_OCT_MASK,
    .d_RX_MSDU_END_1_KEY_ID_OCT_LSB =          AR6320_RX_MSDU_END_1_KEY_ID_OCT_LSB,
    .d_RX_MSDU_END_1_EXT_WAPI_PN_63_48_MASK =  AR6320_RX_MSDU_END_1_EXT_WAPI_PN_63_48_MASK,
    .d_RX_MSDU_END_1_EXT_WAPI_PN_63_48_LSB =   AR6320_RX_MSDU_END_1_EXT_WAPI_PN_63_48_LSB,
    .d_RX_MSDU_END_4_LAST_MSDU_MASK =          AR6320_RX_MSDU_END_4_LAST_MSDU_MASK,
    .d_RX_MSDU_END_4_LAST_MSDU_LSB =           AR6320_RX_MSDU_END_4_LAST_MSDU_LSB,
    .d_RX_ATTENTION_0_MCAST_BCAST_MASK =       AR6320_RX_ATTENTION_0_MCAST_BCAST_MASK,
    .d_RX_ATTENTION_0_MCAST_BCAST_LSB =        AR6320_RX_ATTENTION_0_MCAST_BCAST_LSB,
    .d_RX_ATTENTION_0_FRAGMENT_MASK =          AR6320_RX_ATTENTION_0_FRAGMENT_MASK,
    .d_RX_ATTENTION_0_FRAGMENT_LSB =           AR6320_RX_ATTENTION_0_FRAGMENT_LSB,
    .d_RX_ATTENTION_0_MPDU_LENGTH_ERR_MASK =   AR6320_RX_ATTENTION_0_MPDU_LENGTH_ERR_MASK,
    .d_RX_FRAG_INFO_0_RING2_MORE_COUNT_MASK =  AR6320_RX_FRAG_INFO_0_RING2_MORE_COUNT_MASK,
    .d_RX_FRAG_INFO_0_RING2_MORE_COUNT_LSB =   AR6320_RX_FRAG_INFO_0_RING2_MORE_COUNT_LSB,
    .d_RX_MSDU_START_0_MSDU_LENGTH_MASK =      AR6320_RX_MSDU_START_0_MSDU_LENGTH_MASK,
    .d_RX_MSDU_START_0_MSDU_LENGTH_LSB =       AR6320_RX_MSDU_START_0_MSDU_LENGTH_LSB,
    .d_RX_MSDU_START_2_DECAP_FORMAT_OFFSET =   AR6320_RX_MSDU_START_2_DECAP_FORMAT_OFFSET,
    .d_RX_MSDU_START_2_DECAP_FORMAT_MASK =     AR6320_RX_MSDU_START_2_DECAP_FORMAT_MASK,
    .d_RX_MSDU_START_2_DECAP_FORMAT_LSB =      AR6320_RX_MSDU_START_2_DECAP_FORMAT_LSB,
    .d_RX_MPDU_START_0_ENCRYPTED_MASK =        AR6320_RX_MPDU_START_0_ENCRYPTED_MASK,
    .d_RX_MPDU_START_0_ENCRYPTED_LSB =         AR6320_RX_MPDU_START_0_ENCRYPTED_LSB,
    .d_RX_ATTENTION_0_MORE_DATA_MASK =         AR6320_RX_ATTENTION_0_MORE_DATA_MASK,
    .d_RX_ATTENTION_0_MSDU_DONE_MASK =         AR6320_RX_ATTENTION_0_MSDU_DONE_MASK,
    .d_RX_ATTENTION_0_TCP_UDP_CHKSUM_FAIL_MASK = AR6320_RX_ATTENTION_0_TCP_UDP_CHKSUM_FAIL_MASK,
    /* copy_engine.c  */
    .d_DST_WR_INDEX_ADDRESS =                  AR6320_DST_WR_INDEX_ADDRESS,
    .d_SRC_WATERMARK_ADDRESS =                 AR6320_SRC_WATERMARK_ADDRESS,
    .d_SRC_WATERMARK_LOW_MASK =                AR6320_SRC_WATERMARK_LOW_MASK,
    .d_SRC_WATERMARK_HIGH_MASK =               AR6320_SRC_WATERMARK_HIGH_MASK,
    .d_DST_WATERMARK_LOW_MASK =                AR6320_DST_WATERMARK_LOW_MASK,
    .d_DST_WATERMARK_HIGH_MASK =               AR6320_DST_WATERMARK_HIGH_MASK,
    .d_CURRENT_SRRI_ADDRESS =                  AR6320_CURRENT_SRRI_ADDRESS,
    .d_CURRENT_DRRI_ADDRESS =                  AR6320_CURRENT_DRRI_ADDRESS,
    .d_HOST_IS_SRC_RING_HIGH_WATERMARK_MASK =  AR6320_HOST_IS_SRC_RING_HIGH_WATERMARK_MASK,
    .d_HOST_IS_SRC_RING_LOW_WATERMARK_MASK =   AR6320_HOST_IS_SRC_RING_LOW_WATERMARK_MASK,
    .d_HOST_IS_DST_RING_HIGH_WATERMARK_MASK =  AR6320_HOST_IS_DST_RING_HIGH_WATERMARK_MASK,
    .d_HOST_IS_DST_RING_LOW_WATERMARK_MASK =   AR6320_HOST_IS_DST_RING_LOW_WATERMARK_MASK,
    .d_HOST_IS_ADDRESS =                       AR6320_HOST_IS_ADDRESS,
    .d_HOST_IS_COPY_COMPLETE_MASK =            AR6320_HOST_IS_COPY_COMPLETE_MASK,
    .d_CE_WRAPPER_BASE_ADDRESS =               AR6320_CE_WRAPPER_BASE_ADDRESS,
    .d_CE_WRAPPER_INTERRUPT_SUMMARY_ADDRESS =  AR6320_CE_WRAPPER_INTERRUPT_SUMMARY_ADDRESS,
    .d_HOST_IE_ADDRESS =                       AR6320_HOST_IE_ADDRESS,
    .d_HOST_IE_COPY_COMPLETE_MASK =            AR6320_HOST_IE_COPY_COMPLETE_MASK,
    .d_SR_BA_ADDRESS =                         AR6320_SR_BA_ADDRESS,
    .d_SR_SIZE_ADDRESS =                       AR6320_SR_SIZE_ADDRESS,
    .d_CE_CTRL1_ADDRESS =                      AR6320_CE_CTRL1_ADDRESS,
    .d_CE_CTRL1_DMAX_LENGTH_MASK =             AR6320_CE_CTRL1_DMAX_LENGTH_MASK,
    .d_DR_BA_ADDRESS =                         AR6320_DR_BA_ADDRESS,
    .d_DR_SIZE_ADDRESS =                       AR6320_DR_SIZE_ADDRESS,
    .d_MISC_IE_ADDRESS =                       AR6320_MISC_IE_ADDRESS,
    .d_MISC_IS_AXI_ERR_MASK =                  AR6320_MISC_IS_AXI_ERR_MASK,
    .d_MISC_IS_DST_ADDR_ERR_MASK =             AR6320_MISC_IS_DST_ADDR_ERR_MASK,
    .d_MISC_IS_SRC_LEN_ERR_MASK =              AR6320_MISC_IS_SRC_LEN_ERR_MASK,
    .d_MISC_IS_DST_MAX_LEN_VIO_MASK =          AR6320_MISC_IS_DST_MAX_LEN_VIO_MASK,
    .d_MISC_IS_DST_RING_OVERFLOW_MASK =        AR6320_MISC_IS_DST_RING_OVERFLOW_MASK,
    .d_MISC_IS_SRC_RING_OVERFLOW_MASK =        AR6320_MISC_IS_SRC_RING_OVERFLOW_MASK,
    .d_SRC_WATERMARK_LOW_LSB =                 AR6320_SRC_WATERMARK_LOW_LSB,
    .d_SRC_WATERMARK_HIGH_LSB =                AR6320_SRC_WATERMARK_HIGH_LSB,
    .d_DST_WATERMARK_LOW_LSB =                 AR6320_DST_WATERMARK_LOW_LSB,
    .d_DST_WATERMARK_HIGH_LSB =                AR6320_DST_WATERMARK_HIGH_LSB,
    .d_CE_WRAPPER_INTERRUPT_SUMMARY_HOST_MSI_MASK = AR6320_CE_WRAPPER_INTERRUPT_SUMMARY_HOST_MSI_MASK,
    .d_CE_WRAPPER_INTERRUPT_SUMMARY_HOST_MSI_LSB = AR6320_CE_WRAPPER_INTERRUPT_SUMMARY_HOST_MSI_LSB,
    .d_CE_CTRL1_DMAX_LENGTH_LSB =              AR6320_CE_CTRL1_DMAX_LENGTH_LSB,
    .d_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_MASK =   AR6320_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_MASK,
    .d_CE_CTRL1_DST_RING_BYTE_SWAP_EN_MASK =   AR6320_CE_CTRL1_DST_RING_BYTE_SWAP_EN_MASK,
    .d_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_LSB =    AR6320_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_LSB,
    .d_CE_CTRL1_DST_RING_BYTE_SWAP_EN_LSB =    AR6320_CE_CTRL1_DST_RING_BYTE_SWAP_EN_LSB,

    .d_PCIE_INTR_CAUSE_ADDRESS =               AR6320_PCIE_INTR_CAUSE_ADDRESS,
    .d_SOC_RESET_CONTROL_ADDRESS =             AR6320_SOC_RESET_CONTROL_ADDRESS,
    .d_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MASK = AR6320_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MASK,
    .d_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_LSB =  AR6320_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_LSB,
    .d_SOC_RESET_CONTROL_CE_RST_MASK =         AR6320_SOC_RESET_CONTROL_CE_RST_MASK,
    .d_SOC_RESET_CONTROL_CPU_WARM_RST_MASK =   AR6320_SOC_RESET_CONTROL_CPU_WARM_RST_MASK,
    .d_CPU_INTR_ADDRESS =                      AR6320_CPU_INTR_ADDRESS,
    .d_SOC_LF_TIMER_CONTROL0_ADDRESS =         AR6320_SOC_LF_TIMER_CONTROL0_ADDRESS,
    .d_SOC_LF_TIMER_CONTROL0_ENABLE_MASK =     AR6320_SOC_LF_TIMER_CONTROL0_ENABLE_MASK,
    /* chip id start */
    .d_SOC_CHIP_ID_ADDRESS =                   AR6320_SOC_CHIP_ID_ADDRESS,
    .d_SOC_CHIP_ID_VERSION_MASK =              AR6320_SOC_CHIP_ID_VERSION_MASK,
    .d_SOC_CHIP_ID_VERSION_LSB =               AR6320_SOC_CHIP_ID_VERSION_LSB,
    .d_SOC_CHIP_ID_REVISION_MASK =             AR6320_SOC_CHIP_ID_REVISION_MASK,
    .d_SOC_CHIP_ID_REVISION_LSB =              AR6320_SOC_CHIP_ID_REVISION_LSB,
    /* chip id end */
};

struct hostdef_s ar6320_hostdef = {
    .d_INT_STATUS_ENABLE_ERROR_LSB =           AR6320_INT_STATUS_ENABLE_ERROR_LSB,
    .d_INT_STATUS_ENABLE_ERROR_MASK =          AR6320_INT_STATUS_ENABLE_ERROR_MASK,
    .d_INT_STATUS_ENABLE_CPU_LSB =             AR6320_INT_STATUS_ENABLE_CPU_LSB,
    .d_INT_STATUS_ENABLE_CPU_MASK =            AR6320_INT_STATUS_ENABLE_CPU_MASK,
    .d_INT_STATUS_ENABLE_COUNTER_LSB =         AR6320_INT_STATUS_ENABLE_COUNTER_LSB,
    .d_INT_STATUS_ENABLE_COUNTER_MASK =        AR6320_INT_STATUS_ENABLE_COUNTER_MASK,
    .d_INT_STATUS_ENABLE_MBOX_DATA_LSB =       AR6320_INT_STATUS_ENABLE_MBOX_DATA_LSB,
    .d_INT_STATUS_ENABLE_MBOX_DATA_MASK =      AR6320_INT_STATUS_ENABLE_MBOX_DATA_MASK,
    .d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB =  AR6320_ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB,
    .d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK = AR6320_ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK,
    .d_ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB =   AR6320_ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB,
    .d_ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK =  AR6320_ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK,
    .d_COUNTER_INT_STATUS_ENABLE_BIT_LSB =     AR6320_COUNTER_INT_STATUS_ENABLE_BIT_LSB,
    .d_COUNTER_INT_STATUS_ENABLE_BIT_MASK =    AR6320_COUNTER_INT_STATUS_ENABLE_BIT_MASK,
    .d_INT_STATUS_ENABLE_ADDRESS =             AR6320_INT_STATUS_ENABLE_ADDRESS,
    .d_CPU_INT_STATUS_ENABLE_BIT_LSB =         AR6320_CPU_INT_STATUS_ENABLE_BIT_LSB,
    .d_CPU_INT_STATUS_ENABLE_BIT_MASK =        AR6320_CPU_INT_STATUS_ENABLE_BIT_MASK,
    .d_HOST_INT_STATUS_ADDRESS =               AR6320_HOST_INT_STATUS_ADDRESS,
    .d_CPU_INT_STATUS_ADDRESS =                AR6320_CPU_INT_STATUS_ADDRESS,
    .d_ERROR_INT_STATUS_ADDRESS =              AR6320_ERROR_INT_STATUS_ADDRESS,
    .d_ERROR_INT_STATUS_WAKEUP_MASK =          AR6320_ERROR_INT_STATUS_WAKEUP_MASK,
    .d_ERROR_INT_STATUS_WAKEUP_LSB =           AR6320_ERROR_INT_STATUS_WAKEUP_LSB,
    .d_ERROR_INT_STATUS_RX_UNDERFLOW_MASK =    AR6320_ERROR_INT_STATUS_RX_UNDERFLOW_MASK,
    .d_ERROR_INT_STATUS_RX_UNDERFLOW_LSB =     AR6320_ERROR_INT_STATUS_RX_UNDERFLOW_LSB,
    .d_ERROR_INT_STATUS_TX_OVERFLOW_MASK =     AR6320_ERROR_INT_STATUS_TX_OVERFLOW_MASK,
    .d_ERROR_INT_STATUS_TX_OVERFLOW_LSB =      AR6320_ERROR_INT_STATUS_TX_OVERFLOW_LSB,
    .d_COUNT_DEC_ADDRESS =                     AR6320_COUNT_DEC_ADDRESS,
    .d_HOST_INT_STATUS_CPU_MASK =              AR6320_HOST_INT_STATUS_CPU_MASK,
    .d_HOST_INT_STATUS_CPU_LSB =               AR6320_HOST_INT_STATUS_CPU_LSB,
    .d_HOST_INT_STATUS_ERROR_MASK =            AR6320_HOST_INT_STATUS_ERROR_MASK,
    .d_HOST_INT_STATUS_ERROR_LSB =             AR6320_HOST_INT_STATUS_ERROR_LSB,
    .d_HOST_INT_STATUS_COUNTER_MASK =          AR6320_HOST_INT_STATUS_COUNTER_MASK,
    .d_HOST_INT_STATUS_COUNTER_LSB =           AR6320_HOST_INT_STATUS_COUNTER_LSB,
    .d_RX_LOOKAHEAD_VALID_ADDRESS =            AR6320_RX_LOOKAHEAD_VALID_ADDRESS,
    .d_WINDOW_DATA_ADDRESS =                   AR6320_WINDOW_DATA_ADDRESS,
    .d_WINDOW_READ_ADDR_ADDRESS =              AR6320_WINDOW_READ_ADDR_ADDRESS,
    .d_WINDOW_WRITE_ADDR_ADDRESS =             AR6320_WINDOW_WRITE_ADDR_ADDRESS,
    .d_SOC_GLOBAL_RESET_ADDRESS =              AR6320_SOC_GLOBAL_RESET_ADDRESS,
    .d_RTC_STATE_ADDRESS =                     AR6320_RTC_STATE_ADDRESS,
    .d_RTC_STATE_COLD_RESET_MASK =             AR6320_RTC_STATE_COLD_RESET_MASK,
    .d_PCIE_LOCAL_BASE_ADDRESS =               AR6320_PCIE_LOCAL_BASE_ADDRESS,
    .d_PCIE_SOC_WAKE_RESET =                   AR6320_PCIE_SOC_WAKE_RESET,
    .d_PCIE_SOC_WAKE_ADDRESS =                 AR6320_PCIE_SOC_WAKE_ADDRESS,
    .d_PCIE_SOC_WAKE_V_MASK =                  AR6320_PCIE_SOC_WAKE_V_MASK,
    .d_RTC_STATE_V_MASK =                      AR6320_RTC_STATE_V_MASK,
    .d_RTC_STATE_V_LSB =                       AR6320_RTC_STATE_V_LSB,
    .d_FW_IND_EVENT_PENDING =                  AR6320_FW_IND_EVENT_PENDING,
    .d_FW_IND_INITIALIZED =                    AR6320_FW_IND_INITIALIZED,
    .d_RTC_STATE_V_ON =                        AR6320_RTC_STATE_V_ON,
#if defined(SDIO_3_0)
    .d_HOST_INT_STATUS_MBOX_DATA_MASK =        AR6320_HOST_INT_STATUS_MBOX_DATA_MASK,
    .d_HOST_INT_STATUS_MBOX_DATA_LSB =         AR6320_HOST_INT_STATUS_MBOX_DATA_LSB,
#endif
    .d_PCIE_SOC_RDY_STATUS_ADDRESS = PCIE_SOC_RDY_STATUS_ADDRESS,
    .d_PCIE_SOC_RDY_STATUS_BAR_MASK = PCIE_SOC_RDY_STATUS_BAR_MASK,
    .d_SOC_PCIE_BASE_ADDRESS = SOC_PCIE_BASE_ADDRESS,
    .d_MSI_MAGIC_ADR_ADDRESS = MSI_MAGIC_ADR_ADDRESS,
    .d_MSI_MAGIC_ADDRESS = MSI_MAGIC_ADDRESS,
};
#endif
