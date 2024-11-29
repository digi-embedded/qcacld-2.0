ifeq ($(BOARD_HAVE_WIFI_QCA65X4),true)

LOCAL_PATH := $(call my-dir)

# firmware_bin/WCNSS_cfg.dat
include $(CLEAR_VARS)
LOCAL_MODULE := WCNSS_cfg
LOCAL_MODULE_STEM := cfg.dat
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_MODULE_PATH := $(TARGET_OUT_VENDOR)/firmware/wlan
LOCAL_SRC_FILES := firmware_bin/WCNSS_cfg.dat
include $(BUILD_PREBUILT)

# firmware_bin/WCNSS_qcom_cfg.ini
include $(CLEAR_VARS)
LOCAL_MODULE := WCNSS_qcom_cfg
LOCAL_MODULE_STEM := qcom_cfg.ini
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_MODULE_PATH := $(TARGET_OUT_VENDOR)/firmware/wlan
LOCAL_SRC_FILES := firmware_bin/WCNSS_qcom_cfg.ini
include $(BUILD_PREBUILT)

endif
