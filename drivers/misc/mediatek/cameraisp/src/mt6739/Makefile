#
ccflags-y += -I$(srctree)/drivers/misc/mediatek/m4u/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v3/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v3/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/smi/

ifneq ($(CONFIG_ARM64), y)
# For arm32
  obj-y += camera_isp.o
  obj-y += camera_sysram.o
else
# For arm64
  obj-y += camera_isp.o
  obj-y += camera_sysram.o
endif


$(info cameraisp drv by platform $(platform_drv))
