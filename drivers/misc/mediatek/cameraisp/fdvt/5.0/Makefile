#
ccflags-y += -I$(srctree)/drivers/misc/mediatek/m4u/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/iommu/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/smi/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/mmp/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v3/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v3/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/staging/android/ion \
						 -I$(srctree)/drivers/staging/android/ion/mtk

ifeq ($(strip $(CONFIG_MTK_CAM_GENIEZONE_SUPPORT)),y)
ccflags-y += -DCMDQ_MTEE
endif

obj-y += camera_fdvt.o
