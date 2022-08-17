#
ccflags-y += -I$(srctree)/drivers/staging/android/ion
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include
ccflags-y += -I$(srctree)/drivers/misc/mediatek/smi/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/vpu/2.0
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/include
ccflags-y += -I$(srctree)/drivers/devfreq

ccflags-$(CONFIG_MTK_M4U) += -I$(srctree)/drivers/misc/mediatek/m4u/$(MTK_PLATFORM)/
ccflags-$(CONFIG_IOMMU_API) += -I$(srctree)/drivers/iommu
ccflags-$(CONFIG_IOMMU_API) += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include
obj-$(CONFIG_MTK_VPU_SUPPORT) += vpu_hw.o vpu_reg.o
obj-$(CONFIG_MTK_VPU_SUPPORT) += vpu_profile.o
