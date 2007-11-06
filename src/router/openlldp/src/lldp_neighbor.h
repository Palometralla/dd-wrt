/*******************************************************************
 *
 * OpenLLDP Neighbor Header
 *
 * Licensed under a dual GPL/Proprietary license.  
 * See LICENSE file for more info.
 * 
 * File: lldp_neighbor.h
 * 
 * Authors: Jason Peterson (condurre@users.sourceforge.net)
 *
 *******************************************************************/

#ifndef LLDP_NEIGHBOR_H
#define LLDP_NEIGHBOR_H

#ifndef WIN32
#include <sys/un.h>
#endif

char lldp_systemname[512];
char lldp_systemdesc[512];

int neighbor_local_sd;
int neighbor_remote_sd;

#ifdef WIN32
// Need to define this
#else
struct sockaddr_un local;
struct sockaddr_un remote;
#endif

int get_sys_desc(void);
int get_sys_fqdn(void);

#endif /* LLDP_NEIGHBOR_H */
