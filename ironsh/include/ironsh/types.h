#ifndef IRONSH_TYPES_H
#define IRONSH_TYPES_H

#include <sys/types.h>

/* Job execution state */
enum ironsh_job_state {
    JOB_RUNNING,
    JOB_STOPPED,
    JOB_DONE
};

/* Represents a job (one process or a pipeline) */
struct ironsh_job {
    int jid;                    /* shell job id */
    pid_t pgid;                 /* process group id */
    enum ironsh_job_state state;
    int num_procs;              /* number of processes in job */
    char *command;              /* original command line */
};

/* Represents a single command */
struct ironsh_command {
    char **argv;                /* NULL-terminated argument vector */
    int argc;
};

#endif /* IRONSH_TYPES_H */
