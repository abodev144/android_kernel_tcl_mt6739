#
ccflags-y += -Werror -I$(srctree)/drivers/devfreq
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/include/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include/
ccflags-y += -I$(srctree)/drivers/watchdog/mediatek/include/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/dramc/$(MTK_PLATFORM)/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/$(CONFIG_MTK_PLATFORM)/

obj-$(CONFIG_MACH_MT8168) += helio-dvfsrc-opp.o helio-dvfsrc-sysfs.o
obj-$(CONFIG_MACH_MT8168) += helio-dvfsrc.o helio-dvfsrc-mt8168.o