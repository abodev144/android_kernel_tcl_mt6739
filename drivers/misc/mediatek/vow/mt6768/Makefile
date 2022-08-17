#
ifeq ($(CONFIG_MTK_TINYSYS_SCP_SUPPORT),y)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/vow/v01
ccflags-y += -I$(srctree)/drivers/misc/mediatek/scp/$(CONFIG_MTK_PLATFORM)
endif
ccflags-y += -I$(srctree)/drivers/misc/mediatek/audio_ipi/common/framework
ccflags-y += -I$(srctree)/drivers/misc/mediatek/vow

obj-y += vow_hw.o
