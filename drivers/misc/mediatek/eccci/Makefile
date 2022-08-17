#
ifeq (y, $(filter y, $(CONFIG_MACH_MT6893)))
MTK_PLATFORM := mt6885
else
ifeq (y, $(filter y, $(CONFIG_MACH_MT6833)))
MTK_PLATFORM := mt6833
else
MTK_PLATFORM := $(CONFIG_MTK_PLATFORM)
endif
endif

ifeq ($(CONFIG_MTK_ECCCI_DRIVER), y)

obj-$(CONFIG_MTK_ECCCI_DRIVER) := ccci.o
ccflags-y += -I$(srctree)/drivers/misc/mediatek/eccci/inc/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/eccci/$(MTK_PLATFORM)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/ccmni/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/conn_md/include/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/$(MTK_PLATFORM)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/include
ccflags-y += -I$(srctree)/drivers/misc/mediatek/scp/$(MTK_PLATFORM)

# common services
ccci-y := ccci_core.o ccci_bm.o ccci_modem.o modem_sys1.o

ifeq  ($(CONFIG_MEDIATEK_MT6577_AUXADC), y)
ccci-y += ccci_auxadc.o
endif

# sub modules
obj-y += fsm/
obj-y += hif/
obj-y += port/
obj-y += udc/
obj-$(CONFIG_MTK_MIX_DEVICES) +=  mixdev/

ifeq ($(CONFIG_MTK_ECCCI_C2K), y)
ccci-y += modem_sys3.o
endif

# platform code
obj-y += $(subst ",,$(MTK_PLATFORM))/

else
obj-  := dummy.o # avoid build error
endif
