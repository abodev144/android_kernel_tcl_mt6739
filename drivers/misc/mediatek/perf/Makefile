#
LINUXINCLUDE += -include $(srctree)/kernel/sched/sched.h

ccflags-y += -I$(srctree)/drivers/misc/mediatek/dramc/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/include/vcorefs_v3/
ccflags-y += -I$(srctree)/drivers/devfreq/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/qos/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/net/ipv4/

#ccflags-y += \
#	-I$(srctree)/drivers/misc/mediatek/base/power/cm_mgr_v1/ \
#	-I$(srctree)/drivers/misc/mediatek/base/power/cm_mgr_v1/$(CONFIG_MTK_PLATFORM) \
#	-I$(srctree)/drivers/misc/mediatek/base/power/cpufreq_v1/inc \

# a tracker for performance index
obj-$(CONFIG_MTK_PERF_TRACKER) += perf_tracker.o
obj-y += perf_common.o
# a low memory hint sent to userspace
obj-$(CONFIG_MTK_LOWMEM_HINT) += lowmem_hint.o
