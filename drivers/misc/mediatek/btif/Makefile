#
ifneq ($(KERNELRELEASE),)
	#subdir-ccflags-y can be used in 2.6.34 in the future
	MTK_PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))
	subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include
	subdir-ccflags-y += -I$(srctree)/arch/arm/mach-$(MTK_PLATFORM)/include/mach
	subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat

    obj-y += common/
ifeq ($(CONFIG_MTK_ENG_BUILD), y)
	subdir-ccflags-y += -D BTIF_DBG_SUPPORT=1
else
	subdir-ccflags-y += -D BTIF_DBG_SUPPORT=0
endif

# Otherwise we were called directly from the command
# line; invoke the kernel build system.
else
    KERNELDIR ?= /lib/modules/$(shell uname -r)/build
    PWD  := $(shell pwd)
default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
endif
