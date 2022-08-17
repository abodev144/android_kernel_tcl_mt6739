#
subdir-ccflags-y += -Idrivers/misc/mediatek/mtprof/
subdir-ccflags-y += -Idrivers/misc/mediatek/aee/mrdump/
subdir-ccflags-y += -Idrivers/misc/mediatek/aee/ipanic/

obj-y	+= aee.o
aee-y	:=dummy.o
aee-$(CONFIG_MTK_AEE_FEATURE)	+= aee-common.o reboot-reason.o

KASAN_SANITIZE := n
