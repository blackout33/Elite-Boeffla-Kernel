/*
 * Author: andip71, 01.12.2013
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

extern int ac_level;
extern int usb_level;
extern int wireless_level;

extern int ignore_unstable_power;
extern int ignore_safety_margin;

#ifdef CONFIG_MACH_T0
#define AC_CHARGE_LEVEL_DEFAULT 1700
#else
#define AC_CHARGE_LEVEL_DEFAULT 1100
#endif
#define AC_CHARGE_LEVEL_MIN 0

#ifdef CONFIG_MACH_T0
#define AC_CHARGE_LEVEL_MAX 2000
#else
#define AC_CHARGE_LEVEL_MAX 1500
#endif

#define USB_CHARGE_LEVEL_DEFAULT 500
#define USB_CHARGE_LEVEL_MIN 0
#define USB_CHARGE_LEVEL_MAX 1000

#define WIRELESS_CHARGE_LEVEL_DEFAULT 500
#define WIRELESS_CHARGE_LEVEL_MIN 0
#define WIRELESS_CHARGE_LEVEL_MAX 1000

#define IGNORE_UNSTABLE_POWER_DEFAULT 0
#define IGNORE_SAFETY_MARGIN_DEFAULT 0

extern char charge_info_text[30];
extern int charge_info_level;
