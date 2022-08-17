#
MTK_TOP = $(srctree)/drivers/misc/mediatek/
FPSGO_TOP = $(MTK_TOP)/performance/fpsgo_v3/
BASE_TOP = $(FPSGO_TOP)/base/
COMP_TOP = $(FPSGO_TOP)/composer/
FBT_TOP = $(FPSGO_TOP)/fbt/

obj-y += \
	src/fpsgo_base.o \
	src/fpsgo_sysfs.o \

ccflags-y += \
	-I$(srctree)/include/ \
	-I$(MTK_TOP)/include/ \
	-I$(BASE_TOP)/include/ \
	-I$(COMP_TOP)/include/ \
	-I$(FBT_TOP)/include/ \
