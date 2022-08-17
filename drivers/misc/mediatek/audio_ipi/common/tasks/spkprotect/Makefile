#
ifeq ($(CONFIG_SND_SOC_MTK_SCP_SMARTPA),y)

MTK_PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))

ccflags-y += \
	-I$(srctree)/drivers/misc/mediatek/audio_ipi/common/utility \
	-I$(srctree)/drivers/misc/mediatek/audio_ipi/common/framework \
	-I$(srctree)/drivers/misc/mediatek/scp/$(MTK_PLATFORM)

obj-y += audio_ipi_client_spkprotect.o

ifeq ($(CONFIG_MT_ENG_BUILD),y)
CFLAGS_audio_ipi_client_spkprotect.o += -DDEBUG
endif

endif



