
#ifndef _MRCC_PRIVATE_H_
#define _MRCC_PRIVATE_H_

//RCC clock control register
#define RCC_CR			*((volatile u32*)0x40023800)
#define HSI_ON			0
#define HSI_RDY			1
#define HSI_TRIM		4	//start at 0b10000 atjust system clock by ±40KHz by ±binary
#define HSI_CAL			8
#define HSE_ON 			16
#define HSE_RDY			17
#define HSE_BYP			18
#define CSS_ON			19
#define PLL_ON			24
#define PLL_RDY			25
#define PLLI2S_ON		26
#define PLLI2S_RDY		27

//RCC PLL configuration register
#define RCC_PLLCFGR		*((volatile u32*)0x40023804)
#define PLLM0			0
#define PLLM1			1
#define PLLM2 			2
#define PLLM3			3
#define PLLM4			4
#define PLLM5			5
#define PLLP0			16
#define PLLP1			17
#define PLLSRC			22
#define PLLQ0			24
#define PLLQ1			25
#define PLLQ2			26
#define PLLQ3			27

//RCC clock configuration register
#define RCC_CFGR		*((volatile u32*)0x40023808)
#define SW0				0
#define SW1				1
#define SWS0 			2
#define SWS1			3
#define I2SSC_R			23


//RCC clock interrupt register
#define RCC_CIR			*((volatile u32*)0x4002380C)
#define LSI_RDYF		0
#define LSE_RDYF		1
#define HSI_RDYF		2
#define HSE_RDYF		3
#define PLL_RDYF		4
#define PLLI2S_	RDYF	5
#define CSSF			7
#define LSI_RDYIE		8
#define LSE_RDYIE		9
#define HSI_RDYIE		10
#define HSE_RDYIE		11
#define PLL_RDYIE		12
#define PLLI2S_RDYIE	13
#define LSI_RDYC		16
#define LSE_RDYC		17
#define HSI_RDYC		18
#define HSE_RDYC		19
#define PLL_RDYC		20
#define PLLI2S_RDYC		21
#define CSSC			23

//RCC AHB1 peripheral reset register
#define RCC_AHB1RSTR	*((volatile u32*)0x40023810)
#define GPIOA_RST		0
#define GPIOB_RST		1
#define GPIOC_RST		2
#define GPIOD_RST		3
#define GPIOE_RST		4
#define GPIOH_RST		7
#define CRCRST			12
#define DMA1_RST		21
#define DMA2_RST		22

//RCC AHB2 peripheral reset register
#define RCC_AHB2RSTR	*((volatile u32*)0x40023814)
#define OTGFS_RST		7

//RCC APB1 peripheral reset register
#define RCC_APB1RSTR	*((volatile u32*)0x40023820)
#define TIM2_RST		0
#define TIM3_RST		1
#define TIM4_RST		2
#define TIM5_RST		3
#define WWDG_RST		11
#define SPI2_RST		14
#define SPI3_RST		15
#define USART2_RST		17
#define I2C1_RST		21
#define I2C2_RST		22
#define I2C3_RST		23
#define PWR_RST			28

//RCC APB2 peripheral reset register
#define RCC_APB2RSTR	*((volatile u32*)0x40023824)
#define TIM1_RST		0
#define USART1_RST		4
#define USART6_RST		5
#define ADC1_RST		8
#define SDIO_RST		11
#define SPI1_RST		12
#define SPI4_RST		13
#define SYSCFG_RST		14
#define TIM9_RST		16
#define TIM10_RST		17
#define TIM11_RST		18

//RCC AHB1 peripheral clock enable register
#define RCC_AHB1ENR		*((volatile u32*)0x40023830)
#define GPIOA_EN		0
#define GPIOB_EN		1
#define GPIOC_EN		2
#define GPIOD_EN		3
#define GPIOEEN			4
#define GPIOH_EN		7
#define CRCEN			12
#define DMA1EN			21
#define DMA2EN			22

//RCC AHB2 peripheral clock enable register
#define RCC_AHB2ENR		*((volatile u32*)0x40023834)
#define OTGFSEN_EN		7

//RCC APB1 peripheral clock enable register
#define RCC_APB1ENR		*((volatile u32*)0x40023840)
#define TIM2_EN			0
#define TIM3_EN			1
#define TIM4_EN			2
#define TIM5_EN			3
#define WWDG_EN			11
#define SPI2_EN			14
#define SPI3_EN			15
#define USART2_EN		17
#define I2C1_EN			21
#define I2C2_EN			22
#define I2C3_EN			23
#define PWR_EN			28

//RCC APB2 peripheral clock enable register
#define RCC_APB2ENR		*((volatile u32*)0x40023844)
#define TIM1_EN			0
#define USART1_EN		4
#define USART6_EN		5
#define ADC1_EN			8
#define SDIO_EN			11
#define SPI1_EN			12
#define SPI4_EN			13
#define SYSCFG_EN		14
#define TIM9_EN			16
#define TIM10_EN		17
#define TIM11_EN		18

//RCC AHB1 peripheral clock enable in low power mode register
#define RCC_AHB1LPENR	*((volatile u32*)0x40023850)
#define GPIOA_LPEN		0
#define GPIOB_LPEN		1
#define GPIOC_LPEN		2
#define GPIOD_LPEN		3
#define GPIOE_LPEN		4
#define GPIOH_LPEN		7
#define CRC_LPEN		12
#define FLITF_LPEN		15
#define SRAM1_LPEN		16
#define DMA1_LPEN		21
#define DMA2_LPEN		22

//RCC AHB2 peripheral clock enable in low power mode register
#define RCC_AHB2LPENR	*((volatile u32*)0x40023854)
#define OTGFS_LPEN		7

//RCC APB1 peripheral clock enable in low power mode register
#define RCC_APB1LPENR	*((volatile u32*)0x40023860)
#define TIM2_LPEN		0
#define TIM3_LPEN		1
#define TIM4_LPEN		2
#define TIM5_LPEN		3
#define WWDG_LPEN		11
#define SPI2_LPEN		14
#define SPI3_LPEN		15
#define USART2_LPEN		17
#define I2C1_LPEN		21
#define I2C2_LPEN		22
#define I2C3_LPEN		23
#define PWR_LPEN		28

//RCC APB2 peripheral clock enabled in low power mode register
#define RCC_APB2LPENR	*((volatile u32*)0x40023864)
#define TIM1_LPEN		0
#define USART1_LPEN		4
#define USART6_LPEN		5
#define ADC1_LPEN		8
#define SDIO_LPEN		11
#define SPI1_LPEN		12
#define SPI4_LPEN		13
#define SYSCFG_LPEN		14
#define TIM9_LPEN		16
#define TIM10_LPEN		17
#define TIM11_LPEN		18

//RCC Backup domain control register
#define RCC_BDCR		*((volatile u32*)0x40023870)
#define LSE_ON			0
#define LSE_RDY			1
#define LSE_BYP			3
#define RTC_EN			15
#define BDRST			16

//RCC clock control & status register
#define RCC_CSR			*((volatile u32*)0x40023874)
#define LSION			0
#define LSIRDY			1
#define RMVF			24
#define BOR_RSTF		25
#define PIN_RSTF		26
#define POR_RSTF		27
#define SFT_RSTF		28
#define IWDG_RSTF		29
#define WWDG_RSTF		30
#define LPWR_RSTF		31

//RCC spread spectrum clock generation register
#define RCC_SSCGR		*((volatile u32*)0x40023880)
#define SPREAD_SEL		30

//RCC PLLI2S configuration register
#define RCC_PLLI2SCFGR	*((volatile u32*)0x40023884)
#define PLLI2S_N0		6
#define PLLI2S_N1		7
#define PLLI2S_N2		8
#define PLLI2S_N3		9
#define PLLI2S_N4		10
#define PLLI2S_N5		11
#define PLLI2S_N6		12
#define PLLI2S_N7		13
#define PLLI2S_N8		14
#define PLLI2S_R1		28
#define PLLI2S_R2		29
#define PLLI2S_R3		30

//RCC Dedicated Clocks Configuration Register
#define RCC_DCKCFGR		*((volatile u32*)0x4002388C)
#define TIMPRE			24

#endif
