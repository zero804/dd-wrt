/* Generated by ./xlat/gen.sh from ./xlat/unshare_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(CLONE_NEWTIME) || (defined(HAVE_DECL_CLONE_NEWTIME) && HAVE_DECL_CLONE_NEWTIME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWTIME) == (0x00000080), "CLONE_NEWTIME != 0x00000080");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWTIME 0x00000080
#endif
#if defined(CLONE_VM) || (defined(HAVE_DECL_CLONE_VM) && HAVE_DECL_CLONE_VM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_VM) == (0x00000100), "CLONE_VM != 0x00000100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_VM 0x00000100
#endif
#if defined(CLONE_FS) || (defined(HAVE_DECL_CLONE_FS) && HAVE_DECL_CLONE_FS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_FS) == (0x00000200), "CLONE_FS != 0x00000200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_FS 0x00000200
#endif
#if defined(CLONE_FILES) || (defined(HAVE_DECL_CLONE_FILES) && HAVE_DECL_CLONE_FILES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_FILES) == (0x00000400), "CLONE_FILES != 0x00000400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_FILES 0x00000400
#endif
#if defined(CLONE_SIGHAND) || (defined(HAVE_DECL_CLONE_SIGHAND) && HAVE_DECL_CLONE_SIGHAND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_SIGHAND) == (0x00000800), "CLONE_SIGHAND != 0x00000800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_SIGHAND 0x00000800
#endif
#if defined(CLONE_THREAD) || (defined(HAVE_DECL_CLONE_THREAD) && HAVE_DECL_CLONE_THREAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_THREAD) == (0x00010000), "CLONE_THREAD != 0x00010000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_THREAD 0x00010000
#endif
#if defined(CLONE_NEWNS) || (defined(HAVE_DECL_CLONE_NEWNS) && HAVE_DECL_CLONE_NEWNS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWNS) == (0x00020000), "CLONE_NEWNS != 0x00020000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWNS 0x00020000
#endif
#if defined(CLONE_SYSVSEM) || (defined(HAVE_DECL_CLONE_SYSVSEM) && HAVE_DECL_CLONE_SYSVSEM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_SYSVSEM) == (0x00040000), "CLONE_SYSVSEM != 0x00040000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_SYSVSEM 0x00040000
#endif
#if defined(CLONE_NEWCGROUP) || (defined(HAVE_DECL_CLONE_NEWCGROUP) && HAVE_DECL_CLONE_NEWCGROUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWCGROUP) == (0x02000000), "CLONE_NEWCGROUP != 0x02000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWCGROUP 0x02000000
#endif
#if defined(CLONE_NEWUTS) || (defined(HAVE_DECL_CLONE_NEWUTS) && HAVE_DECL_CLONE_NEWUTS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWUTS) == (0x04000000), "CLONE_NEWUTS != 0x04000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWUTS 0x04000000
#endif
#if defined(CLONE_NEWIPC) || (defined(HAVE_DECL_CLONE_NEWIPC) && HAVE_DECL_CLONE_NEWIPC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWIPC) == (0x08000000), "CLONE_NEWIPC != 0x08000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWIPC 0x08000000
#endif
#if defined(CLONE_NEWUSER) || (defined(HAVE_DECL_CLONE_NEWUSER) && HAVE_DECL_CLONE_NEWUSER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWUSER) == (0x10000000), "CLONE_NEWUSER != 0x10000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWUSER 0x10000000
#endif
#if defined(CLONE_NEWPID) || (defined(HAVE_DECL_CLONE_NEWPID) && HAVE_DECL_CLONE_NEWPID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWPID) == (0x20000000), "CLONE_NEWPID != 0x20000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWPID 0x20000000
#endif
#if defined(CLONE_NEWNET) || (defined(HAVE_DECL_CLONE_NEWNET) && HAVE_DECL_CLONE_NEWNET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((CLONE_NEWNET) == (0x40000000), "CLONE_NEWNET != 0x40000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define CLONE_NEWNET 0x40000000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat unshare_flags in mpers mode

# else

static const struct xlat_data unshare_flags_xdata[] = {
 XLAT(CLONE_NEWTIME),
 #define XLAT_VAL_0 ((unsigned) (CLONE_NEWTIME))
 #define XLAT_STR_0 STRINGIFY(CLONE_NEWTIME)
 XLAT(CLONE_VM),
 #define XLAT_VAL_1 ((unsigned) (CLONE_VM))
 #define XLAT_STR_1 STRINGIFY(CLONE_VM)
 XLAT(CLONE_FS),
 #define XLAT_VAL_2 ((unsigned) (CLONE_FS))
 #define XLAT_STR_2 STRINGIFY(CLONE_FS)
 XLAT(CLONE_FILES),
 #define XLAT_VAL_3 ((unsigned) (CLONE_FILES))
 #define XLAT_STR_3 STRINGIFY(CLONE_FILES)
 XLAT(CLONE_SIGHAND),
 #define XLAT_VAL_4 ((unsigned) (CLONE_SIGHAND))
 #define XLAT_STR_4 STRINGIFY(CLONE_SIGHAND)
 XLAT(CLONE_THREAD),
 #define XLAT_VAL_5 ((unsigned) (CLONE_THREAD))
 #define XLAT_STR_5 STRINGIFY(CLONE_THREAD)
 XLAT(CLONE_NEWNS),
 #define XLAT_VAL_6 ((unsigned) (CLONE_NEWNS))
 #define XLAT_STR_6 STRINGIFY(CLONE_NEWNS)
 XLAT(CLONE_SYSVSEM),
 #define XLAT_VAL_7 ((unsigned) (CLONE_SYSVSEM))
 #define XLAT_STR_7 STRINGIFY(CLONE_SYSVSEM)
 XLAT(CLONE_NEWCGROUP),
 #define XLAT_VAL_8 ((unsigned) (CLONE_NEWCGROUP))
 #define XLAT_STR_8 STRINGIFY(CLONE_NEWCGROUP)
 XLAT(CLONE_NEWUTS),
 #define XLAT_VAL_9 ((unsigned) (CLONE_NEWUTS))
 #define XLAT_STR_9 STRINGIFY(CLONE_NEWUTS)
 XLAT(CLONE_NEWIPC),
 #define XLAT_VAL_10 ((unsigned) (CLONE_NEWIPC))
 #define XLAT_STR_10 STRINGIFY(CLONE_NEWIPC)
 XLAT(CLONE_NEWUSER),
 #define XLAT_VAL_11 ((unsigned) (CLONE_NEWUSER))
 #define XLAT_STR_11 STRINGIFY(CLONE_NEWUSER)
 XLAT(CLONE_NEWPID),
 #define XLAT_VAL_12 ((unsigned) (CLONE_NEWPID))
 #define XLAT_STR_12 STRINGIFY(CLONE_NEWPID)
 XLAT(CLONE_NEWNET),
 #define XLAT_VAL_13 ((unsigned) (CLONE_NEWNET))
 #define XLAT_STR_13 STRINGIFY(CLONE_NEWNET)
};
static
const struct xlat unshare_flags[1] = { {
 .data = unshare_flags_xdata,
 .size = ARRAY_SIZE(unshare_flags_xdata),
 .type = XT_SORTED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
#  ifdef XLAT_VAL_2
  | XLAT_VAL_2
#  endif
#  ifdef XLAT_VAL_3
  | XLAT_VAL_3
#  endif
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
#  endif
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
#  endif
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
#  ifdef XLAT_STR_2
  + sizeof(XLAT_STR_2)
#  endif
#  ifdef XLAT_STR_3
  + sizeof(XLAT_STR_3)
#  endif
#  ifdef XLAT_STR_4
  + sizeof(XLAT_STR_4)
#  endif
#  ifdef XLAT_STR_5
  + sizeof(XLAT_STR_5)
#  endif
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
#  endif
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
#  endif
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
#  undef XLAT_STR_3
#  undef XLAT_VAL_3
#  undef XLAT_STR_4
#  undef XLAT_VAL_4
#  undef XLAT_STR_5
#  undef XLAT_VAL_5
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
