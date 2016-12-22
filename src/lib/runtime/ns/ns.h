/* 
 * Copyright (c) 2015-2016, Gregory M. Kurtzer. All rights reserved.
 * 
 * “Singularity” Copyright (c) 2016, The Regents of the University of California,
 * through Lawrence Berkeley National Laboratory (subject to receipt of any
 * required approvals from the U.S. Dept. of Energy).  All rights reserved.
 * 
 * This software is licensed under a customized 3-clause BSD license.  Please
 * consult LICENSE file distributed with the sources of this project regarding
 * your rights to use or distribute this software.
 * 
 * NOTICE.  This Software was developed under funding from the U.S. Department of
 * Energy and the U.S. Government consequently retains certain rights. As such,
 * the U.S. Government has been granted for itself and others acting on its
 * behalf a paid-up, nonexclusive, irrevocable, worldwide license in the Software
 * to reproduce, distribute copies to the public, prepare derivative works, and
 * perform publicly and display publicly, and to permit other to do so. 
 * 
*/

#ifndef __SINGULARITY_RUNTIME_NS_H_
#define __SINGULARITY_RUNTIME_NS_H_

extern int singularity_runtime_ns_precheck(void);
extern int singularity_runtime_ns_setup(void);
extern int singularity_runtime_ns_activate(void);
extern int singularity_runtime_ns_contain(void);

#endif /* __SINGULARITY_RUNTIME_NS_H */


/*
    extern int singularity_ns_unshare(void);

    extern int singularity_ns_pid_unshare(void);
    extern int singularity_ns_pid_enabled(void);

    extern int singularity_ns_mnt_unshare(void);
    extern int singularity_ns_mnt_enabled(void);

    extern int singularity_ns_user_unshare(void);
    extern int singularity_ns_user_enabled(void);
    extern int singularity_ns_user_configured(void);

    extern int singularity_ns_join(pid_t attach_pid);

*/