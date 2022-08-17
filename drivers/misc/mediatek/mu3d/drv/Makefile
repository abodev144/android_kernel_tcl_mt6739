#
ccflags-y += -I$(srctree)/drivers/misc/mediatek/mu3d/drv \
             -I$(srctree)/drivers/misc/mediatek/mu3d/hal \
             -I$(srctree)/drivers/misc/mediatek/mu3phy \
             -I$(srctree)/drivers/misc/mediatek/mu3phy/$(CONFIG_MTK_PLATFORM) \
             -I$(srctree)/drivers/misc/mediatek/usb_c/inc \
             -I$(srctree)/drivers/misc/mediatek/base/power/include/

ifeq ($(CONFIG_MTK_MD_DIRECT_TETHERING_SUPPORT),y)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/pkt_track/mod-pkt_track/include \
             -I$(srctree)/drivers/usb/gadget \
             -I$(srctree)/drivers/usb/gadget/function \
             -I$(srctree)/drivers/misc/mediatek/eccci \
             -I$(srctree)/drivers/misc/mediatek/eccci/$(MTK_PLATFORM)
endif

ccflags-y += -DUSE_SSUSB_QMU

obj-y := musb_hdrc.o
musb_hdrc-y := musb_core.o
musb_hdrc-y += musb_gadget_ep0.o musb_gadget.o
musb_hdrc-y += musb_init.o ssusb_qmu.o mtk_usb.o
musb_hdrc-${CONFIG_DUAL_ROLE_USB_INTF} += musb_dual_role.o
musb_hdrc-$(CONFIG_DEBUG_FS) += musb_debugfs.o
musb_hdrc-$(CONFIG_PHY_MTK_SSUSB) += mtk-ssusb-hal.o ssusb_phy_debugfs.o
