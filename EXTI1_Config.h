/****************************************************************/
/*   Author             :    Mustafa Kazem  				    */
/*	 Date 				:    12 March 2023 						*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:    Configure Sense Mode [config.h] 	*/
/****************************************************************/



/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/
#ifndef _EXT1_CONFIG_H
#define _EXT1_CONFIG_H


/****************************************************************/
/** !comment : Please Enter the Sense Mode						*/
/** 		   SENSE_MODE can be : 								*/
/*					    			FALLING 					*/
/*						    		RISING 						*/
/*							    	LOW_LEVEL					*/
/*								    IOT ( Interrupt On Change ) */
/****************************************************************/

#define EXTI1_SENSE_MODE FALLING


#endif	/**!comment : End of the gaurd [_EXT0_CONFIG_H]		   **/