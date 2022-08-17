#
PDIR = $(MTK_PLATFORM)

ccflags-y += -I$(srctree)/drivers/misc/mediatek/apusys/include
ccflags-y += -I$(srctree)/drivers/misc/mediatek/apusys/power/2.0
ccflags-y += -I$(srctree)/drivers/misc/mediatek/apusys/power/2.0/$(PDIR)

obj-y += debug.o

debug-$(CONFIG_MTK_APUSYS_DEBUG) += apu_tp.o apu_tags.o
debug-objs += debug_driver.o
