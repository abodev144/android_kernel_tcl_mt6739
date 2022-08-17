#
MTK_PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))

$(info $(srctree))
ccflags-y += -I$(srctree)/drivers/misc/mediatek/m4u/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/mmp/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v3/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v3/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/staging/android/ion \
             -I$(srctree)/drivers/staging/android/ion/mtk
ccflags-y += -I$(srctree)/drivers/misc/mediatek/smi/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/cameraisp/rsc/

obj-y := camera_owe_dummy.o

ifeq ($(CONFIG_MACH_MT6771),y)
  obj-$(CONFIG_MTK_CAMERA_ISP_OWE_SUPPORT) += isp_50/camera_owe.o
endif

ifeq ($(CONFIG_MACH_MT6775),y)
  obj-$(CONFIG_MTK_CAMERA_ISP_OWE_SUPPORT) += isp_50/camera_owe.o
endif

ifeq ($(CONFIG_MACH_MT6785),y)
  obj-$(CONFIG_MTK_CAMERA_ISP_OWE_SUPPORT) += mt6785/camera_owe.o
endif

