#
ccflags-y += -I$(srctree)/drivers/staging/android/ion \
             -I$(srctree)/drivers/staging/android/ion/mtk \
             -I$(srctree)/drivers/iommu/
#for sensorType in ccu_set_sensor_info
ccflags-y += -I$(srctree)/drivers/misc/mediatek/imgsensor/inc
#
ccflags-y += -I$(srctree)/drivers/misc/mediatek/m4u/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/mach/$(MTK_PLATFORM)/include/mach
ccflags-y += -I$(srctree)/drivers/misc/mediatek/irq/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include
ccflags-y += -I$(srctree)/drivers/misc/mediatek/mmp/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat
ccflags-y += -I$(srctree)/drivers/misc/mediatek/ccu/inc/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/ccu/src/$(MTK_PLATFORM)/ccu_ext_interface/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/smi/
ccflags-y += -I$(srctree)/drivers/i2c/busses/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/mmdvfs/
ccflags-y += -I$(srctree)/include/dt-bindings/memory/

#obj-$(CONFIG_MTK_VPU) += ccu_hw.o
obj-y += ccu_hw.o ccu_reg.o ccu_kd_mailbox.o ccu_sw_ver.o ccu_imgsensor.o ccu_mva.o ccu_qos.o ccu_drv.o ccu_ipc.o

