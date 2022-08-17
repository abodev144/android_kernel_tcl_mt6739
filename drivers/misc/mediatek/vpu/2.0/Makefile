#
ccflags-y += -I$(srctree)/drivers/staging/android/ion
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat

ccflags-$(CONFIG_MTK_M4U) += -I$(srctree)/drivers/misc/mediatek/m4u/$(MTK_PLATFORM)/
ccflags-$(CONFIG_IOMMU_API) += -I$(srctree)/drivers/iommu
ccflags-$(CONFIG_IOMMU_API) += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include
obj-$(CONFIG_MTK_VPU_SUPPORT) += vpu_drv.o vpu_algo.o vpu_dbg.o
