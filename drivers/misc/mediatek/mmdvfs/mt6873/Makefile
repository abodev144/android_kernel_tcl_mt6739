#
ccflags-y += -I$(srctree)/drivers/misc/mediatek/smi/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/smi/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/mmdvfs/
obj-y += mmdvfs_plat.o

QOS_BOUND_DETECT := true
ifeq ($(CONFIG_MTK_QOS_V2),y)
ifeq (true, $(QOS_BOUND_DETECT))
ccflags-y += -DQOS_BOUND_DETECT
endif
endif
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/qos/$(MTK_PLATFORM)/

