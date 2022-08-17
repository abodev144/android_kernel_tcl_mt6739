#
ifeq (y, $(filter y, $(CONFIG_MACH_MT6833)))
PLATFORM := mt6833
else
PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))
endif

# mt6761 and mt6765 co-folder
ifeq ($(PLATFORM),mt6761)
PLATFORM := mt6765
endif

ifeq ($(CONFIG_SINGLE_PANEL_OUTPUT),y)
else ifneq ($(wildcard $(srctree)/drivers/misc/mediatek/ext_disp/$(PLATFORM)/),)
ifeq (y, $(filter y, $(CONFIG_MACH_MT6765) $(CONFIG_MACH_MT6768) $(CONFIG_MACH_MT6771) $(CONFIG_MACH_MT6785) $(CONFIG_MACH_MT6885) $(CONFIG_MACH_MT8168) $(CONFIG_MACH_MT8167) $(CONFIG_MACH_MT6893) $(CONFIG_MACH_MT6833)))
obj-y += $(PLATFORM)/
endif
ifeq (y, $(filter y, $(CONFIG_MACH_MT6739) $(CONFIG_MACH_MT6768) $(CONFIG_MACH_MT6785) $(CONFIG_MACH_MT6885) $(CONFIG_MACH_MT8168) $(CONFIG_MACH_MT8167) $(CONFIG_MACH_MT6893) $(CONFIG_MACH_MT6833)))
obj-y += common/
endif
else
obj-y += dummy/
endif
