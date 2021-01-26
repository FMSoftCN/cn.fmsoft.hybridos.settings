#ifndef __USER_DEFINE__H__
#define __USER_DEFINE__H__

// only for develop
#define INETD_CONFIG_FILE   "/home/projects/inetd/bin/inetd.cfg"
#define INETD_LIBRARY_PATH  "/home/projects/inetd/lib"
#define DAEMON_WORKING_PATH "/home/gengyue" 

// dhcp command in user board
#define DHCP_COMMAND_START  "dhclient"          // for ubuntu 18.04: dhclient wlan0
#define DHCP_COMMAND_STOP   "dhclient -r"       // for ubuntu 18.04: dhclient -r wlan0 
//#define DHCP_COMMAND_START    "udhcpc -n 5 -i"   // for px30: udhcpc -n 5 -i wlan0
//#define DHCP_COMMAND_STOP     ""                 // for px30: do nothing

#endif      // __USER_DEFINE__H__
