#
MTK_TOP = $(srctree)/drivers/misc/mediatek/
EARA_THRM_TOP = $(srctree)/drivers/misc/mediatek/performance/eara_thermal
FPSGO_TOP = $(srctree)/drivers/misc/mediatek/performance/fpsgo_v3/

obj-y += platform/$(MTK_PLATFORM)/thermal_budget_platform.o
obj-y += thermal_budget.o
obj-y += thermal_base.o

ccflags-y += -I$(MTK_TOP)/thermal/common/inc/
ccflags-y += -I$(MTK_TOP)/thermal/$(MTK_PLATFORM)/inc/
ccflags-y += -I$(MTK_TOP)/base/power/$(MTK_PLATFORM)/
ccflags-y += -I$(MTK_TOP)/base/power/include/
ccflags-y += -I$(MTK_TOP)/base/power/ppm_v3/src/mach/$(MTK_PLATFORM)/
ccflags-y += -I$(MTK_TOP)/base/power/ppm_v3/inc/
ccflags-y += -I$(FPSGO_TOP)/
ccflags-y += -I$(EARA_THRM_TOP)/platform/$(MTK_PLATFORM)/

ifeq ($(CONFIG_MTK_APUSYS_SUPPORT),y)
ccflags-y  += -I$(srctree)/drivers/misc/mediatek/apusys/power/2.0/$(MTK_PLATFORM)
ccflags-y  += -I$(srctree)/drivers/misc/mediatek/apusys/power/2.0/
else
ccflags-y += -I$(MTK_TOP)/vpu/$(MTK_PLATFORM)/
ccflags-y += -I$(MTK_TOP)/mdla/1.0/
endif

ccflags-y += \
        -I$(srctree)/include/ \
        -I$(MTK_TOP)/include/ \
        -I$(MTK_TOP)/include/mt-plat/$(MTK_PLATFORM)/include/mach/
