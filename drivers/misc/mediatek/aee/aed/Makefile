#
subdir-ccflags-y += -Idrivers/misc/mediatek/aee/mrdump/
subdir-ccflags-y += -Idrivers/misc/mediatek/log_store/

obj-$(CONFIG_MTK_AEE_AED) += aed.o
aed-y := aed-main.o aed-debug.o
aed-$(CONFIG_MTK_AEE_HANG_DETECT) += monitor_hang.o
