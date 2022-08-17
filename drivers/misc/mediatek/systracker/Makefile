#
ifeq ($(CONFIG_MTK_SYSTRACKER_V2),y)
    obj-y += systracker_interface_v2.o
endif
obj-y += $(subst ",,$(CONFIG_MTK_PLATFORM))/
ifeq ($(CONFIG_ARM64), y)
  obj-y += backtrace_64bit.o
else
  obj-y += backtrace32.o
  obj-y += backtrace32_asm.o
endif
