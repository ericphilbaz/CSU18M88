#ifndef	_CS_DRV_SOC_INIT_H
#define	_CS_DRV_SOC_INIT_H

#define	KEY_VALUE	PT1_3

#define	BACK_LIGHT_ENABLED	PT1_4
  
#define	BELL_ENABLED		PT1_5


/**
* @fn	void Drv_SOC_Init(void)
* @brief soc init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_soc_init(void);
/**
* @fn void  drv_back_light_init(void)
* @brief back light init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_back_light_init(void);
/**
* @fn void  drv_key_init(void)
* @brief key init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_key_init(void);

/**
* @fn void  drv_bell_init(void)
* @brief bell init
* @param[out] none.
* @param[in] none.
* @return none.
*/
void drv_bell_init(void);
#endif