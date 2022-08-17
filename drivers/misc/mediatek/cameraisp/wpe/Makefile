#
obj-y := camerawpe_dummy.o
MTK_WPE_COUNT := 1

ifeq ($(CONFIG_MACH_MT6775),y)
  obj-y += $(subst ",,isp_50)/
endif

ifeq ($(CONFIG_MACH_MT6771),y)
  obj-y += $(subst ",,isp_50)/
endif

ifeq ($(CONFIG_MACH_MT6779),y)
  obj-y += $(subst ",,mt6779)/
endif

ifeq ($(CONFIG_MACH_MT6785),y)
  obj-y += $(subst ",,isp_50)/
endif
ifeq ($(CONFIG_MACH_MT6885),y)
  obj-y += $(subst ",,isp_6s)/
  MTK_WPE_COUNT := 2
endif

ifeq ($(CONFIG_MACH_MT6873),y)
  obj-y += $(subst ",,isp_6s)/
  MTK_WPE_COUNT := 1
  subdir-ccflags-y += -DWPE_B_ONLY
endif

ifeq ($(CONFIG_MACH_MT6853),y)
  obj-y += $(subst ",,isp_6s)/
  MTK_WPE_COUNT := 1
  subdir-ccflags-y += -DWPE_B_ONLY
  subdir-ccflags-y += -DFORCE_IMG1_ON
endif

ifeq ($(CONFIG_MACH_MT6893),y)
  obj-y += $(subst ",,isp_6s)/
  MTK_WPE_COUNT := 2
endif

subdir-ccflags-y += -DMTK_WPE_COUNT=$(MTK_WPE_COUNT)

