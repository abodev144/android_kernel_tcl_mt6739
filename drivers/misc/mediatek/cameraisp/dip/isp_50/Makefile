#
$(info $(srctree))
ccflags-y += -I$(srctree)/drivers/misc/mediatek/m4u/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/mmp/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v3/
ccflags-y += -I$(srctree)/drivers/staging/android/ion \
             -I$(srctree)/drivers/staging/android/ion/mtk
ccflags-y += -I$(srctree)/drivers/misc/mediatek/smi/

ifeq ($(CONFIG_MACH_MT6761),y)
    ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v3/mt6765/
else
    ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v3/$(MTK_PLATFORM)/
endif
ccflags-$(CONFIG_MTK_IOMMU_V2) += -I$(srctree)/drivers/iommu
ccflags-$(CONFIG_MTK_IOMMU_V2) += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/

obj-y += camera_dip.o
