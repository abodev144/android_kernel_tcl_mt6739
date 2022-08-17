#
ifeq ($(CONFIG_MACH_MT6761),y)
obj-y += mt6765/
else ifeq ($(CONFIG_MACH_MT6893),y)
obj-y += mt6885/
else
obj-y += $(subst ",,$(CONFIG_MTK_PLATFORM))/
endif

