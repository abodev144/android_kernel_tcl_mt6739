#
ccflags-y += -I$(srctree)/drivers/misc/mediatek/audio_ipi/common/framework/

ifeq ($(CONFIG_MTK_TINYSYS_SCP_SUPPORT),y)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/scp/$(CONFIG_MTK_PLATFORM)
endif

obj-y += audio_ipi_platform.o
