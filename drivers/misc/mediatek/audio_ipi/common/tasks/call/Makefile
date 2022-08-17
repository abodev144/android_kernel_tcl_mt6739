#
ifeq ($(CONFIG_MTK_AURISYS_PHONE_CALL_SUPPORT),y)

ccflags-y += \
	-I$(srctree)/drivers/misc/mediatek/audio_ipi/common/utility \
	-I$(srctree)/drivers/misc/mediatek/audio_ipi/common/framework

obj-y += audio_ipi_client_phone_call.o

ifeq ($(CONFIG_MT_ENG_BUILD),y)
CFLAGS_audio_ipi_client_phone_call.o += -DDEBUG
endif

endif



