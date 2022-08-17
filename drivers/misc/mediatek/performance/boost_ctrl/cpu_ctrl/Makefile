#
ifeq ($(CONFIG_MTK_PPM),y)
obj-y += cpu_ctrl.o
else

# no CONFIG_MTK_PPM but specific lagacy platform
ifeq ($(CONFIG_MACH_MT6833),y)
obj-y += cpu_ctrl_dummy.o
else
ifneq (,$(filter $(CONFIG_MTK_PLATFORM), "mt6768" "mt6873" "mt6885" "mt6893" "mt6771" "mt6785" "mt6853" "mt6739" "mt8168"))
obj-y += cpu_ctrl.o
else
obj-y += cpu_ctrl_dummy.o

endif
endif # CONFIG_MACH_MT6833
endif # CONFIG_MTK_PPM

obj-$(CONFIG_MTK_CPU_CTRL_CFP) += cpu_ctrl_cfp.o
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/include/
