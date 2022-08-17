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

ccflags-$(CONFIG_MTK_IOMMU_V2) += -I$(srctree)/drivers/iommu
ccflags-$(CONFIG_MTK_IOMMU_V2) += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/
ccflags-$(CONFIG_MTK_IOMMU_V2) += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include/

obj-y += camera_rsc_dummy.o
obj-y += engine_request.o

ifeq ($(CONFIG_MACH_MT6758),y)
  obj-$(CONFIG_MTK_CAMERA_ISP_RSC_SUPPORT) += $(MTK_PLATFORM)/camera_rsc.o
endif

ifeq ($(CONFIG_MACH_MT6771),y)
  obj-$(CONFIG_MTK_CAMERA_ISP_RSC_SUPPORT) += isp_50/camera_rsc.o
endif

ifeq ($(CONFIG_MACH_MT6775),y)
  obj-$(CONFIG_MTK_CAMERA_ISP_RSC_SUPPORT) += isp_50/camera_rsc.o

endif

ifeq ($(CONFIG_MACH_MT6779),y)
  obj-$(CONFIG_MTK_CAMERA_ISP_RSC_SUPPORT) += isp_50/camera_rsc.o
endif

ifeq ($(CONFIG_MACH_MT6785),y)
  obj-$(CONFIG_MTK_CAMERA_ISP_RSC_SUPPORT) += mt6785/camera_rsc.o
endif

ifeq ($(CONFIG_MACH_MT6885),y)
  obj-$(CONFIG_MTK_CAMERA_ISP_RSC_SUPPORT) += isp_6s/camera_rsc.o
endif

ifeq ($(CONFIG_MACH_MT6873),y)
  obj-$(CONFIG_MTK_CAMERA_ISP_RSC_SUPPORT) += isp_6s/camera_rsc.o
endif

ifeq ($(CONFIG_MACH_MT6853),y)
  obj-$(CONFIG_MTK_CAMERA_ISP_RSC_SUPPORT) += isp_6s/camera_rsc.o
endif

ifeq ($(CONFIG_MACH_MT6893),y)
  obj-$(CONFIG_MTK_CAMERA_ISP_RSC_SUPPORT) += isp_6s/camera_rsc.o
endif

ifeq ($(CONFIG_MACH_MT6833),y)
  obj-$(CONFIG_MTK_CAMERA_ISP_RSC_SUPPORT) += isp_6s/camera_rsc.o
endif
