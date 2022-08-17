#
obj-y := cameraisp_dummy.o

ifeq ($(CONFIG_MACH_MT6775),y)
  obj-y += isp_50/
endif

ifeq ($(CONFIG_MACH_MT6739),y)
  obj-y += $(subst ",,$(CONFIG_MTK_PLATFORM))/
endif

ifeq ($(CONFIG_MACH_MT6885),y)
  obj-y += $(subst ",,$(CONFIG_MTK_PLATFORM))/
endif

ifeq ($(CONFIG_MACH_MT6893),y)
  obj-y += mt6885/
endif

ifeq ($(CONFIG_MACH_MT6873),y)
  obj-y += $(subst ",,$(CONFIG_MTK_PLATFORM))/
endif

ifeq (y, $(filter y, $(CONFIG_MACH_MT6833) $(CONFIG_MACH_MT6853)))
obj-y += $(subst ",,$(CONFIG_MTK_PLATFORM))/
endif

ifeq ($(CONFIG_MACH_MT8167),y)
  obj-y += $(subst ",,$(CONFIG_MTK_PLATFORM))/
endif

ifeq ($(CONFIG_MACH_MT6771),y)
  obj-y += isp_50/
endif

ifeq ($(CONFIG_MACH_MT6785),y)
  obj-y += mt6785/
endif

ifeq ($(CONFIG_MACH_MT6768),y)
  obj-y += $(subst ",,$(CONFIG_MTK_PLATFORM))/
endif

ifeq ($(CONFIG_MACH_MT6765),y)
  obj-y += $(subst ",,$(CONFIG_MTK_PLATFORM))/
endif

ifeq ($(CONFIG_MACH_MT8168),y)
  obj-y += $(subst ",,$(CONFIG_MTK_PLATFORM))/
endif