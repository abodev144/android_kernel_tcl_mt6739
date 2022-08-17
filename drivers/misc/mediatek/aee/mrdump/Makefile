#
subdir-ccflags-y += -Idrivers/misc/mediatek/mtprof/
subdir-ccflags-y += -Idrivers/misc/mediatek/dbgtop/

ccflags-$(CONFIG_MTK_AEE_IPANIC) += -DTEXT_OFFSET=$(TEXT_OFFSET)
obj-$(CONFIG_MTK_AEE_IPANIC)	+= mrdump.o

mrdump-objs-y := \
	mrdump_control.o \
	mrdump_hw.o \
	mrdump_full.o \
	mrdump_key_setup.o \
	mrdump_mini.o \
	mrdump_panic.o

mrdump-objs-$(CONFIG_ARM) += mrdump_arm.o
mrdump-objs-$(CONFIG_ARM64) += mrdump_arm64.o

mrdump-objs := $(mrdump-objs-y)

KASAN_SANITIZE := n
