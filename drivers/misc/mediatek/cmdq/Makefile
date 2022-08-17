#
ifeq ($(CONFIG_MTK_CMDQ_V3),y)
ifneq (,$(filter $(CONFIG_MTK_PLATFORM), "mt6739" "mt6768" "mt6771" "mt8168" "mt6785"))
	obj-y += v3/
endif
else ifneq (,$(filter $(CONFIG_MTK_PLATFORM), "mt8167"))
	obj-y += v2/
endif
obj-$(CONFIG_MTK_CMDQ_MBOX_EXT) += mailbox/
obj-$(CONFIG_MTK_MT6382_BDG) += bridge/
# mdp_sw_sync
ifeq (,$(filter $(CONFIG_MTK_PLATFORM), "mt6885" "mt6873" "mt6853" "mt6893" "mt6833"))
	obj-y += mdp_sync/
endif
# EOF
