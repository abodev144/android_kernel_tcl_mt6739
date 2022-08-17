#
obj-y := cameradip_dummy.o
MTK_DIP_COUNT := 1
MTK_MSF_OFFSET := 0

ifeq ($(CONFIG_MACH_MT6775),y)
  obj-y += $(subst ",,isp_50)/
endif

ifeq ($(CONFIG_MACH_MT6771),y)
  obj-y += $(subst ",,isp_50)/
endif

ifeq ($(CONFIG_MACH_MT6885),y)
  obj-y += $(subst ",,isp_6s)/
  MTK_DIP_COUNT := 2
endif

ifeq ($(CONFIG_MACH_MT6883),y)
  obj-y += $(subst ",,isp_6s)/
  MTK_DIP_COUNT := 2
endif

ifeq ($(CONFIG_MACH_MT6873),y)
  obj-y += $(subst ",,isp_6s)/
  MTK_MSF_OFFSET := 1
endif

ifeq ($(CONFIG_MACH_MT6853),y)
  obj-y += $(subst ",,isp_6s)/
  MTK_MSF_OFFSET := 1
endif

ifeq ($(CONFIG_MACH_MT3967),y)
  obj-y += $(subst ",,isp_50)/
endif

ifeq ($(CONFIG_MACH_MT6785),y)
  obj-y += $(subst ",,isp_50)/
endif

ifeq ($(CONFIG_MACH_MT6893),y)
  obj-y += $(subst ",,isp_6s)/
  MTK_DIP_COUNT := 2
endif

subdir-ccflags-y += -DMTK_DIP_COUNT=$(MTK_DIP_COUNT)
subdir-ccflags-y += -DMTK_MSF_OFFSET=$(MTK_MSF_OFFSET)
