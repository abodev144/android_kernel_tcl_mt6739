#
PDIR = $(MTK_PLATFORM)

ccflags-y += -I$(srctree)/drivers/misc/mediatek/apusys/include
ccflags-y += -I$(srctree)/drivers/misc/mediatek/apusys/power/2.0
ccflags-y += -I$(srctree)/drivers/misc/mediatek/apusys/power/2.0/$(PDIR)

obj-y += edma.o

edma-objs += edma_driver.o edma_dbgfs.o edma_queue.o
edma-objs += edma_cmd_hnd.o
