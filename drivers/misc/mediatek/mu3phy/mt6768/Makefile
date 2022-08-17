#
ccflags-y += -I$(srctree)/drivers/misc/mediatek/mu3d/drv \
             -I$(srctree)/drivers/misc/mediatek/mu3d/hal \
             -I$(srctree)/drivers/misc/mediatek/mu3phy \
			 -I$(srctree)/drivers/misc/mediatek/base/power/include/

ifeq ($(CONFIG_USB_DEBUG),y)
	EXTRA_CFLAGS += -DDEBUG
endif

#For USB PHY TUNING
#EXTRA_CFLAGS += -DMTK_USB_PHY_TUNING

obj-$(CONFIG_PROJECT_PHY) += mtk-phy-asic.o
obj-$(CONFIG_DEBUG_FS) += usb20_phy_debugfs.o
