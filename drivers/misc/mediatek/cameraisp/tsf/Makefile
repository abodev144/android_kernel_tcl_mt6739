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

obj-y := camera_tsf_dummy.o

#ifeq ($(CONFIG_MACH_MT6771),y)
#  obj-$(CONFIG_MTK_CAMERA_ISP_MFB_SUPPORT) += isp_50/camera_tsf.o
#endif

#ifeq ($(CONFIG_MACH_MT6775),y)
#  obj-$(CONFIG_MTK_CAMERA_ISP_MFB_SUPPORT) += isp_50/camera_tsf.o
#endif

