/* ============================================================================
 * @file: ecm_demo_atctl.h
 * @author: Wei,LI
 * @Copyright:                      GoSUNCN
* @Website:                         www.ztewelink.com
* @Email:                           ztewelink@zte.com.cn
* @version:                         "ECM_CALLV1.0.0B10"
* @date:                            "2018-11-19"
* ============================================================================*/

#include <sys/time.h>
#include <time.h>

#ifndef __ECM_DEMO_MSG__H
#define __ECM_DEMO_MSG__H

void             ITC_send_atcmd_msg(char* data, int data_len);

void             ITC_send_timeout_msg(void);

void             ITC_send_terminal_msg(void);

void             ITC_clear_timer(struct itimerval* timer);

void             ITC_set_timer(struct itimerval* timer, int triger_secs,int interv_secs);

void             ITC_signal_init(void);

void             ITC_send_quit_msg(void);

void             ITC_send_reboot_msg(void);


#endif

