#
ifeq ($(CONFIG_MTK_TINYSYS_SCP_SUPPORT),y)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/scp/$(CONFIG_MTK_PLATFORM)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/vow/v02
endif
ccflags-y += -I$(srctree)/drivers/misc/mediatek/vow

obj-y += vow_hw.o
