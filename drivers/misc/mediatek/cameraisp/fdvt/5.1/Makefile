#
ccflags-y += -I$(srctree)/drivers/misc/mediatek/m4u/$(MTK_PLATFORM)/
#else
ccflags-y += -I$(srctree)/drivers/iommu/
#endif
ccflags-y += -I$(srctree)/drivers/misc/mediatek/smi/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/mmp/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/mailbox/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v3/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v3/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/staging/android/ion \
						 -I$(srctree)/drivers/staging/android/ion/mtk

ifeq ($(strip $(CONFIG_MTK_CAM_GENIEZONE_SUPPORT)),y)
ifneq (,$(filter $(CONFIG_MTK_PLATFORM), "mt6885" "mt6873" "mt6853"))
ccflags-y += -DCMDQ_MTEE
endif
endif

obj-$(CONFIG_MTK_CAMERA_ISP_FD_SUPPORT) += camera_fdvt.o
