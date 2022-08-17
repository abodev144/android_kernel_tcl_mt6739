#
ifeq ($(CONFIG_MACH_MT6893),y)
	ccflags-y += \
		-I$(srctree)/drivers/misc/mediatek/performance/boost_ctrl/topo_ctrl/mt6893

else

ifneq (,$(filter $(CONFIG_MTK_PLATFORM), "mt6739" "mt6768" "mt6771" "mt6885" "mt6893" "mt6873" "mt6853" "mt8168" "mt8167"))
	ccflags-y += \
		-I$(srctree)/drivers/misc/mediatek/performance/boost_ctrl/topo_ctrl/$(CONFIG_MTK_PLATFORM)
else
	ccflags-y += \
		-I$(srctree)/drivers/misc/mediatek/performance/boost_ctrl/topo_ctrl/common
endif

endif

obj-y += topo_ctrl.o

