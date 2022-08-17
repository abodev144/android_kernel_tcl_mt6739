#
FPSGO_TOP = $(srctree)/drivers/misc/mediatek/performance/fpsgo_v3
FSTB_TOP = $(FPSGO_TOP)/fstb
EARA_TOP = $(FPSGO_TOP)/eara_job

obj-y += src/eara_job.o

ccflags-y += \
        -Iinclude/ \
        -I$(FPSGO_TOP)/base/include/ \
        -I$(srctree)/drivers/misc/mediatek/base/power/include \
        -I$(FSTB_TOP)/ \
        -I$(EARA_TOP)/include/ \
        -I$(srctree)/drivers/misc/mediatek/vpu/$(MTK_PLATFORM) \
        -I$(srctree)/drivers/misc/mediatek/mdla/1.0 \
        -I$(srctree)/drivers/misc/mediatek/performance/observer \
        -I$(srctree)/drivers/misc/mediatek/apusys/power/2.0/ \
        -I$(srctree)/drivers/misc/mediatek/apusys/power/2.0/$(MTK_PLATFORM)
