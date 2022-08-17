#
MTK_PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))
ccflags-y += -Idrivers/misc/mediatek/aee/aed
ccflags-y += -Idrivers/misc/mediatek/log_store
ccflags-y += -Idrivers/misc/mediatek/include/mt-plat
ccflags-y += -Idrivers/misc/mediatek/mtprof
LINUXINCLUDE += -include $(srctree)/kernel/sched/sched.h

obj-y := bootprof.o common.o mtprof.o
obj-$(CONFIG_MTK_SCHED_MONITOR) += sched_monitor.o sched_monitor_test.o
obj-$(CONFIG_MTK_WQ_DEBUG) += mtk_wq_debug.o
mtprof-y += prof_main.o
