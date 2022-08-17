#
ifeq ($(CONFIG_RTC_DRV_MT6358), y)
obj-$(CONFIG_MTK_RTC) += mtk_rtc_debug.o
else
#legacy
ifneq (,$(filter y,$(CONFIG_MTK_PMIC_CHIP_MT6355)))
  MDI_IP_FOLDER:=mt6355
endif

ifneq (,$(filter y,$(CONFIG_MTK_PMIC_CHIP_MT6356)))
  MDI_IP_FOLDER:=mt6356
endif

ifneq (,$(filter y,$(CONFIG_MTK_PMIC_CHIP_MT6357)))
  MDI_IP_FOLDER:=mt6357
endif

ifneq (,$(filter y,$(CONFIG_MTK_PMIC_CHIP_MT6358)))
  MDI_IP_FOLDER:=mt6358
endif

ifneq (,$(filter y,$(CONFIG_MTK_PMIC_CHIP_MT6359)))
  MDI_IP_FOLDER:=mt6359
endif

ifneq (,$(filter y,$(CONFIG_MTK_PMIC_CHIP_MT6390)))
  MDI_IP_FOLDER:=mt6357
endif

MDP_COMMON_FOLDER:= ./

ccflags-y += -I$(srctree)/drivers/misc/mediatek/rtc/$(MDI_IP_FOLDER)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/rtc/include

#Top level common code
obj-$(CONFIG_MTK_RTC) += mtk_rtc_common.o mtk_rtc_hal_common.o mtk_rtc_debug.o

MTK_MDI_IP_SRC:= $(MDI_IP_FOLDER)/

#IP dependent part
obj-y += \
    $(MTK_MDI_IP_SRC)
endif
