#ifndef _LPJS_JOB_PRIVATE_H_
#define _LPJS_JOB_PRIVATE_H_

#ifdef  __cplusplus
extern "C" {
#endif

#ifndef _UNISTD_H_
#include <unistd.h>
#endif

#ifndef __NODE_LIST_H__
#include "node-list.h"
#endif

struct job
{
    unsigned long   job_id;
    unsigned long   array_index;
    unsigned        job_count;
    unsigned        procs_per_job;
    unsigned        min_procs_per_node;
    size_t          mem_per_proc;
    pid_t           chaperone_pid;
    pid_t           job_pid;
    int             dispatched;     // 0 = false, 1 = true
    char            *user_name;
    char            *primary_group_name;
    char            *submit_node;
    char            *submit_directory;
    char            *script_name;
    char            *compute_node;
    char            *push_command;
};

#ifndef __JOB_H__
#include "job.h"
#endif

#ifdef  __cplusplus
}
#endif

#endif  // #ifndef _LPJS_JOB_PRIVATE_H_
