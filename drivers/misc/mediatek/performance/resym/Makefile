#
obj-y += rs_trace.o
obj-y += rs_base.o
obj-y += rs_main.o

ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/include
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/performance/observer

ccflags-y += -DNR_FREQ_CPU=16

obj-y += rs_usage.o
obj-y += rs_state.o

obj-y += platform/$(MTK_PLATFORM)/
