#
ifeq ($(CONFIG_MTK_ECCCI_C2K), y)

#ccflags-y += -DC2K_USB_UT

ccflags-y += -I$(srctree)/drivers/usb/gadget

obj-$(CONFIG_MTK_ECCCI_C2K) += c2k_usb.o
c2k_usb-y := f_rawbulk.o rawbulk.o rawbulk_transfer.o

else

obj- :=dummy.o

endif
