// Copyright (c) 2014 Dropbox, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// TODO: In the future this file should get generated by the build process.

#ifndef Py_PYCONFIG_H
#define Py_PYCONFIG_H

#define _GNU_SOURCE 1

#define HAVE_STDARG_PROTOTYPES
#define HAVE_LONG_LONG 1
#define PY_LONG_LONG long long
#define SIZEOF_VOID_P 8
#define SIZEOF_SIZE_T 8
#define SIZEOF_INT 4
#define SIZEOF_LONG 8
#define SIZEOF_LONG_LONG 8
#define SIZEOF_OFF_T 8
#define SIZEOF_PTHREAD_T 8
#define HAVE_COPYSIGN 1
#define HAVE_ROUND 1
#define HAVE_HYPOT 1
#define HAVE_DECL_ISFINITE 1
#define HAVE_DECL_ISNAN 1
#define HAVE_ACOSH 1
#define HAVE_ASINH 1
#define HAVE_ATANH 1
#define HAVE_EXPM1 1
#define Py_USING_UNICODE 1
#define Py_UNICODE_SIZE 4
#define HAVE_UINT32_T 1
#define HAVE_UINT64_T 1
#define HAVE_UINTPTR_T 1
#define HAVE_INT32_T 1
#define HAVE_INT64_T 1
#define HAVE_EPOLL 1
#define HAVE_POLL 1
#define HAVE_SELECT 1
#define HAVE_ALARM 1
#define HAVE_SYMLINK 1
#define HAVE_ADDRINFO 1
#define HAVE_SOCKADDR_STORAGE 1
#define HAVE_SOCKETPAIR 1
#define HAVE_GETPEERNAME 1
#define HAVE_STRFTIME 1
#define HAVE_TIMES 1

#define PY_FORMAT_LONG_LONG "ll"
#define PY_FORMAT_SIZE_T "z"

#define DOUBLE_IS_LITTLE_ENDIAN_IEEE754 1

#define WITH_THREAD

// Copied from a CPython ./configure run on a Linux machine:
// TODO copy these more systematically
#define HAVE_WAIT3 1
#define HAVE_WAIT4 1
#define HAVE_WAITPID 1

#define HAVE_ALLOCA_H 1
#define HAVE_ASM_TYPES_H 1
#define HAVE_CLOCK 1
#define HAVE_CURSES_H 1
#define HAVE_DIRENT_H 1
#define HAVE_DLFCN_H 1
#define HAVE_ERRNO_H 1
#define HAVE_FCNTL_H 1
#define HAVE_FTIME 1
#define HAVE_GRP_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_LANGINFO_H 1
#define HAVE_LIBINTL_H 1
#define HAVE_LIBUTIL_H 1
#define HAVE_LINUX_NETLINK_H 1
#define HAVE_LINUX_TIPC_H 1
#define HAVE_MEMORY_H 1
#define HAVE_NCURSES_H 1
#define HAVE_NETPACKET_PACKET_H 1
#define HAVE_POLL_H 1
#define HAVE_PTHREAD_H 1
#define HAVE_PTY_H 1
#define HAVE_SHADOW_H 1
#define HAVE_SIGNAL_H 1
#define HAVE_SPAWN_H 1
#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
#define HAVE_STROPTS_H 1
#define HAVE_SYSEXITS_H 1
#define HAVE_SYS_EPOLL_H 1
#define HAVE_SYS_FILE_H 1
#define HAVE_SYS_PARAM_H 1
#define HAVE_SYS_POLL_H 1
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_SOCKET_H 1
#define HAVE_SYS_STATVFS_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TIMES_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_UN_H 1
#define HAVE_SYS_UTSNAME_H 1
#define HAVE_SYS_WAIT_H 1
#define HAVE_TERMIOS_H 1
#define HAVE_TERM_H 1
#define HAVE_UNISTD_H 1
#define HAVE_UTIME_H 1
#define HAVE_WCHAR_H 1

// Added this for some Pyston modifications:
#define MAX_PYSTRING_SIZE (PY_SSIZE_T_MAX/2 - (1<<20))

#endif /*Py_PYCONFIG_H*/
