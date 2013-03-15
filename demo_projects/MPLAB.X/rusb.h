/* 
 * File:   usb.h
 * Author: richard
 *
 * Created on March 13, 2013, 7:06 PM
 */

#ifndef RUSB_H
#define	RUSB_H

#ifdef	__cplusplus
extern "C" {
#endif

void USBDeviceInit(void);
void ProcessIO(void);

#ifdef	__cplusplus
}
#endif

#endif	/* RUSB_H */

