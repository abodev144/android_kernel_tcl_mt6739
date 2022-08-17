#
MTK_TOP = $(srctree)/drivers/misc/mediatek/
FPSGO_TOP = $(srctree)/drivers/misc/mediatek/performance/fpsgo_v3/
GBE_TOP = $(srctree)/drivers/misc/mediatek/performance/gbe/
BASE_TOP = $(FPSGO_TOP)/base
FBT_TOP = $(FPSGO_TOP)/fbt
FSTB_TOP = $(FPSGO_TOP)/fstb
COM_TOP = $(FPSGO_TOP)/composer

obj-y += src/fps_composer.o

ccflags-y += \
	-I$(srctree)/include/ \
	-I$(MTK_TOP)/include/ \
	-I$(BASE_TOP)/include/ \
	-I$(COM_TOP)/include/ \
	-I$(FBT_TOP)/include/ \
	-I$(FSTB_TOP)/ \
	-I$(GBE_TOP)/ \

