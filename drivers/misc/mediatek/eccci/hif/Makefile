#
ifeq ($(CONFIG_MTK_ECCCI_DRIVER), y)

ccflags-y += -I$(srctree)/drivers/misc/mediatek/eccci/inc
ccflags-y += -I$(srctree)/drivers/misc/mediatek/eccci
ccflags-y += -I$(srctree)/drivers/misc/mediatek/eccci/$(MTK_PLATFORM)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/scp/$(MTK_PLATFORM)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/$(MTK_PLATFORM)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/include
ccflags-y += -I$(srctree)/drivers/misc/mediatek/conn_md/include/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/scp/$(MTK_PLATFORM)
ccflags-y += -I$(srctree)/drivers/devfreq/

# hif objects
obj-$(CONFIG_MTK_ECCCI_DRIVER) := ccci_hif_all.o
ccci_hif_all-y += ccci_hif.o
ccci_hif_all-y += ccci_hif_cldma.o
ccci_hif_all-y += ccci_hif_dpmaif.o
ccci_hif_all-y += dpmaif_drv.o
ccci_hif_all-y += net_speed_monitor.o

ifeq ($(CONFIG_MTK_ECCCI_C2K), y)
ccci_hif_all-y += ccci_ringbuf.o ccci_hif_ccif.o
endif

else
obj-  := dummy.o # avoid build error
endif




