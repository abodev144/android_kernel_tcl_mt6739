
#ifndef __SWTP_H__
#define __SWTP_H__

#define MAX_PIN_NUM 2
#define SWTP_COMPATIBLE_DEVICE_ID "mediatek, swtp-eint"
#define SWTP1_COMPATIBLE_DEVICE_ID "mediatek, swtp1-eint"


#define SWTP_EINT_PIN_PLUG_IN	(1)
#define SWTP_EINT_PIN_PLUG_OUT	(0)

#define SWTP_DO_TX_POWER	(0)
#define SWTP_NO_TX_POWER	(1)

struct swtp_t {
	unsigned int	md_id;
	unsigned int	irq[MAX_PIN_NUM];
	unsigned int	gpiopin[MAX_PIN_NUM];
	unsigned int	setdebounce[MAX_PIN_NUM];
	unsigned int	eint_type[MAX_PIN_NUM];
	unsigned int	gpio_state[MAX_PIN_NUM];
	int	tx_power_mode;
	spinlock_t		spinlock;
	struct delayed_work delayed_work;
};
/*****************************************************************************/
/* External API Region called by ccci_swtp object */
/*****************************************************************************/
extern int swtp_init(int md_id);
#endif				/* __SWTP_H__ */
