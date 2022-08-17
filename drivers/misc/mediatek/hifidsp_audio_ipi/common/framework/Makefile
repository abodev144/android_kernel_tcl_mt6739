#
obj-y += audio_ringbuf.o
obj-y += audio_ipi_dma.o
obj-y += audio_ipi_driver.o
obj-y += audio_ipi_queue.o
obj-y += audio_messenger_ipi.o
obj-y += audio_task_manager.o
obj-y += audio_memory.o

ifeq ($(CONFIG_MT_ENG_BUILD),y)
CFLAGS_audio_ringbuf.o += -DDEBUG
CFLAGS_audio_ipi_dma.o += -DDEBUG
CFLAGS_audio_ipi_driver.o += -DDEBUG
CFLAGS_audio_ipi_queue.o += -DDEBUG
CFLAGS_audio_messenger_ipi.o += -DDEBUG
CFLAGS_audio_task_manager.o += -DDEBUG
CFLAGS_audio_memory.o += -DDEBUG
endif

ccflags-y += -I$(srctree)/drivers/misc/mediatek/hifidsp_audio_ipi/$(CONFIG_MTK_PLATFORM)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/hifidsp_audio_ipi/common/utility
ccflags-y += -I$(srctree)/drivers/misc/mediatek/hifi_dsp/$(CONFIG_MTK_PLATFORM)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/hifi_dsp/common


