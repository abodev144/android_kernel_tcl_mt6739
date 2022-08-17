
#ifndef TMEM_PR_FMT_H
#define TMEM_PR_FMT_H

#if defined(TMEM_PROFILE_FMT)
#define pr_fmt(fmt) "[TMEM][PROFILE]" fmt
#elif defined(TMEM_UT_TEST_FMT)
#define pr_fmt(fmt) "[TMEM][UT_TEST]" fmt
#else
#define pr_fmt(fmt) "[TMEM]" fmt
#endif

#endif /* end of TMEM_PR_FMT_H */
