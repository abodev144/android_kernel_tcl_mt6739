#
PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))

ccflags-y += \
	-I$(srctree)/drivers/misc/mediatek/emi/$(PLATFORM) \
	-I$(srctree)/drivers/misc/mediatek/emi/submodule \
	-I$(srctree)/include/memory/mediatek

obj-$(CONFIG_MTK_DEVMPU) += devmpu.o
obj-$(CONFIG_MTK_DEVMPU_EMI) += devmpu_emi.o
