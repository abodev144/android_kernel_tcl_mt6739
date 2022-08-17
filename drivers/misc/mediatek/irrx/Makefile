#
ifneq ($(strip $(CONFIG_MTK_IRRX_PLAT)),)
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/irrx/inc/$(CONFIG_MTK_IRRX_PLAT)/
else
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/irrx/inc/default/
endif
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/irrx/inc/
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/
obj-$(CONFIG_MTK_IRRX_NEC)   +=  nec/
obj-$(CONFIG_MTK_IRRX_RC5)   +=  rc5/
obj-$(CONFIG_MTK_IRRX_RC6)   +=  rc6/
obj-$(CONFIG_MTK_IRRX_SIRC)   +=  sirc/
obj-$(CONFIG_MTK_IRRX_RCMM)   +=  rcmm/
obj-y   +=  mtk_ir_core.o mtk_ir_mouse.o
