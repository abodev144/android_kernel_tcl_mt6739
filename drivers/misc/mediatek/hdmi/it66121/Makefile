#
ccflags-y += -I$(srctree)/drivers/misc/mediatek/hdmi/inc\
					-I$(srctree)/drivers/misc/mediatek/ext_disp/$(CONFIG_MTK_PLATFORM)\
					-I$(srctree)/drivers/misc/mediatek/lcm/inc\
					-I$(srctree)/drivers/misc/mediatek/video/include\
					-I$(srctree)/drivers/misc/mediatek/include/mt-plat\
					-I$(srctree)/drivers/misc/mediatek/video/$(CONFIG_MTK_PLATFORM)/dispsys\
					-I$(srctree)/drivers/misc/mediatek/video/$(CONFIG_MTK_PLATFORM)\
					-I$(srctree)/drivers/misc/mediatek/dispsys/$(CONFIG_MTK_PLATFORM)

ifeq ($(CONFIG_CUSTOM_KERNEL_HDMI), "ITE66121")
ccflags-y += 	-DHDMI_ITE66121_SUPPORT
endif

obj-y	+= csc.o hdmi_drv.o hdmitx_drv.o hdmitx_hdcp.o hdmitx_input.o hdmitx_sys.o IO.o sha1.o utility.o
