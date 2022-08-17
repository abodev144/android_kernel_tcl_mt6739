#
MTK_PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))
ARCH_MTK_PROJECT := $(subst ",,$(CONFIG_ARCH_MTK_PROJECT))

MTK_CUSTOM_PATH  := $(srctree)/drivers/misc/mediatek


subdir-ccflags-y += -I$(MTK_CUSTOM_PATH)/lens/main3/inc

ifeq ($(CONFIG_MTK_LENS_USE_MODULE), y)

MAIN3_CFILES += main3_lens.c

#MAIN3_CFILES  += common/ak7371af/AK7371AF.c

obj-m := main3af.o
main3af-objs := $(MAIN3_CFILES:.c=.o)

else

obj-y += main3_lens.o
#obj-y += common/ak7371af/
obj-y += common/bu24253af/
obj-y += common/gt9772af/


endif