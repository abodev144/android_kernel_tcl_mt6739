
#ifndef WMT_BUILD_IN_ADAPTER_H
#define WMT_BUILD_IN_ADAPTER_H

#include <mtk_wcn_cmb_stub.h>

#define KERNEL_mtk_wcn_cmb_sdio_request_eirq \
		mtk_wcn_cmb_sdio_request_eirq_by_wmt
void mtk_wcn_cmb_sdio_request_eirq_by_wmt(void);

typedef int (*wmt_bridge_thermal_query_cb)(void);
typedef int (*wmt_bridge_trigger_assert_cb)(void);
typedef void (*wmt_bridge_connsys_clock_fail_dump_cb)(void);

typedef int (*wmt_bridge_conninfra_reg_readable)(void);
typedef int (*wmt_bridge_conninfra_reg_is_bus_hang)(void);

struct wmt_platform_bridge {
	wmt_bridge_thermal_query_cb thermal_query_cb;
	wmt_bridge_trigger_assert_cb trigger_assert_cb;
	wmt_bridge_connsys_clock_fail_dump_cb clock_fail_dump_cb;

	/* for CONNAC 2 */
	wmt_bridge_conninfra_reg_readable conninfra_reg_readable_cb;
	wmt_bridge_conninfra_reg_is_bus_hang conninfra_reg_is_bus_hang_cb;
};

void wmt_export_platform_bridge_register(struct wmt_platform_bridge *cb);
void wmt_export_platform_bridge_unregister(void);


extern unsigned int wifi_irq;
extern pm_callback_t mtk_wcn_cmb_sdio_pm_cb;
extern void *mtk_wcn_cmb_sdio_pm_data;

void wmt_export_mtk_wcn_cmb_sdio_disable_eirq(void);
int wmt_export_mtk_wcn_sdio_irq_flag_set(int flag);

#endif /* WMT_BUILD_IN_ADAPTER_H */
