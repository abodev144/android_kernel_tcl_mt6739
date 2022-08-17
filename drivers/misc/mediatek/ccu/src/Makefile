#
subdir-ccflags-y += -DMTK_VPU_KERNEL
subdir-ccflags-y += -DCCU_AF_ENABLE

ifeq ($(CONFIG_MACH_MT6833),y)
    platform = mt6833
else ifeq ($(CONFIG_MACH_MT6893),y)
    platform = mt6893
else
    platform = $(subst ",,$(CONFIG_MTK_PLATFORM))
endif

obj-y += $(subst ",,$(platform))/

$(warning CCU_MAKE_FILE_CALLED)
ifneq (,$(filter $(platform),mt6757 mt6799))
    obj-y += 1.0/
else ifneq (,$(filter $(platform),mt6758 mt6763))
    obj-y += 1.1/
else ifneq (,$(filter $(platform),mt6765 mt6768)) #copy 1.2 from 1.1 for sensor decouple
    obj-y += 1.2/
else ifneq (,$(filter $(platform),mt6771 mt6775 mt6785))
    obj-y += 2.0/
else ifneq (,$(filter $(platform),mt6779 mt6893))
    obj-y += 2.1/
    $(warning CCU_MAKE_FILE_CALLED_2_1)
endif
