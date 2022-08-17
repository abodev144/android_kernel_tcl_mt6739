#
ccflags-y += -I$(srctree)/drivers/misc/mediatek/cmdq/v3 \
             -I$(srctree)/drivers/misc/mediatek/cmdq/v3/inc/cmdq_sec_dr/ \
             -I$(srctree)/drivers/misc/mediatek/m4u/$(MTK_PLATFORM) \
             -I$(srctree)/drivers/misc/mediatek/mmdvfs/ \
             -I$(srctree)/drivers/misc/mediatek/smi/ \
             -I$(srctree)/drivers/misc/mediatek/smi/$(MTK_PLATFORM)/ \
             -I$(srctree)/drivers/iommu

ifeq ($(strip $(CONFIG_MTK_PQ_COLOR_MODE)),"MDP")
ccflags-y += -DCMDQ_MDP_COLOR
endif

# Enable MET
ccflags-y += -DMET_USER_EVENT_SUPPORT

obj-y += cmdq_mdp.o
