/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _LINUX_TERMIOS_H
#define _LINUX_TERMIOS_H
#define LINUX_TERMIOS_H
#define LINUX_TERMIOS_H_
#define NDK_ANDROID_SUPPORT_LINUX_TERMIOS_H
#define NDK_ANDROID_SUPPORT_LINUX_TERMIOS_H_
#define NDK_ANDROID_SUPPORT_UAPI_LINUX_TERMIOS_H
#define NDK_ANDROID_SUPPORT_UAPI_LINUX_TERMIOS_H_
#define _UAPI_LINUX_TERMIOS_H
#define _UAPI_LINUX_TERMIOS_H_
#define _LINUX_TERMIOS_H_
#include <museum/6.0.1/bionic/libc/linux/types.h>
#include <museum/6.0.1/bionic/libc/asm/termios.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFF 5
struct termiox {
  __u16 x_hflag;
  __u16 x_cflag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 x_rflag[NFF];
  __u16 x_sflag;
};
#define RTSXOFF 0x0001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CTSXON 0x0002
#define DTRXOFF 0x0004
#define DSRXON 0x0008
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
