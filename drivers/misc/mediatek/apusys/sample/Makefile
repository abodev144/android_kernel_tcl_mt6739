#
SAMPLE_VERSION = 1.0
APUSYS_VERSION_POWER = 2.0

ccflags-y += -I$(obj)/../power/$(APUSYS_VERSION_POWER)/
ccflags-y += -I$(obj)/../power/$(APUSYS_VERSION_POWER)/$(MTK_PLATFORM)/
ccflags-y += -I$(obj)/../include/

obj-y += sample.o

sample-objs += $(SAMPLE_VERSION)/sample_drv.o
sample-objs += $(SAMPLE_VERSION)/sample_inf.o

