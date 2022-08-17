GZ_SEC_STORAGE_UT := y

ccflags-y += -I$(srctree)/drivers/misc/mediatek/geniezone/include
ccflags-y += -I$(srctree)/drivers/misc/mediatek/geniezone/public
ccflags-y += -I$(srctree)/drivers/misc/mediatek/memory-ssmr
ccflags-y += -I$(srctree)/drivers/misc/mediatek/trusted_mem/public

obj-$(CONFIG_MTK_GZ_KREE) += gz_main.o mtee_ut/gz_ut.o mtee_ut/gz_sec_storage_ut.o \
			     mtee_ut/gz_chmem_ut.o mtee_ut/gz_shmem_ut.o \
			     mtee_ut/gz_rkp_ut.o mtee-kree/

obj-$(CONFIG_MTK_ENABLE_GENIEZONE) += gz-trusty/
