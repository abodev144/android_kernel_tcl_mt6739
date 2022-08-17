#
ifeq ($(CONFIG_MTK_ECCCI_DRIVER), y)

obj-$(CONFIG_MTK_ECCCI_DRIVER) += udc.o
ccflags-y += -I$(srctree)/drivers/misc/mediatek/eccci/udc/udc_lib_inc
else
obj-  := dummy.o # avoid build error
endif