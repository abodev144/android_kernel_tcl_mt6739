#
MTK_TOP = $(srctree)/drivers/misc/mediatek/
FPSGO_TOP = $(srctree)/drivers/misc/mediatek/performance/fpsgo_v3/
BASE_TOP = $(FPSGO_TOP)/base
FBT_TOP = $(FPSGO_TOP)/fbt
FSTB_TOP = $(FPSGO_TOP)/fstb
COM_TOP = $(FPSGO_TOP)/composer
EARA_JOB_TOP = $(FPSGO_TOP)/eara_job
VIDEOX_TOP += $(srctree)/drivers/misc/mediatek/video/$(MTK_PLATFORM)/videox

obj-y += fpsgo_main.o
obj-y += base/
obj-y += composer/
obj-$(CONFIG_MTK_EARA_AI) += eara_job/

obj-y += fbt/
obj-y += fstb/

ccflags-y += \
        -I$(srctree)/include/ \
        -I$(MTK_TOP)/include/ \
	-I$(MTK_TOP)/dfrc/ \
	-I$(BASE_TOP)/include/ \
        -I$(FBT_TOP)/include/ \
        -I$(FSTB_TOP)/ \
        -I$(COM_TOP)/include/ \
        -I$(EARA_JOB_TOP)/include/ \
        -I$(VIDEOX_TOP)/ \
        -I$(srctree)/drivers/gpu/drm/mediatek/ \

