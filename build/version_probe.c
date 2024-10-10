// Copyright (c) 2023 Nick Piaddo
// SPDX-License-Identifier: Apache-2.0 OR MIT

#include <libfdisk/libfdisk.h>

#define VERSION2(M, m, p) RUST_FDISK_VERSION_ ## M ## m ## p
#define VERSION(M, m, p) VERSION2(M, m, p)

#if defined(LIBFDISK_MAJOR_VERSION) && defined (LIBFDISK_MINOR_VERSION) && defined (LIBFDISK_PATCH_VERSION)
VERSION(LIBFDISK_MAJOR_VERSION, LIBFDISK_MINOR_VERSION, LIBFDISK_PATCH_VERSION)
#endif
