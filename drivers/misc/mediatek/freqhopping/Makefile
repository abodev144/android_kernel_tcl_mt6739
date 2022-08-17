#
ccflags-y += -I$(srctree)/drivers/misc/mediatek/freqhopping/$(MTK_PLATFORM)/
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include/mach/

ifeq (y,$(filter y,$(CONFIG_MACH_MT6739) \
			$(CONFIG_MACH_MT6XXX)))
obj-y += fhctl_new/
else
obj-y += mtk_freqhopping_drv.o
obj-y += $(subst ",,$(CONFIG_MTK_PLATFORM))/
endif

