
/*
 *  Generated by /usr/local/bin/auto-gen-get-set-opaque
 *
 *  Mutator functions for setting with no sanity checking.  Use these to
 *  set structure members from functions outside the job_list_t
 *  class.  These macros perform no data validation.  Hence, they achieve
 *  maximum performance where data are guaranteed correct by other means.
 *  Use the mutator functions (same name as the macro, but lower case)
 *  for more robust code with a small performance penalty.
 *
 *  These generated macros are not expected to be perfect.  Check and edit
 *  as needed before adding to your code.
 */

/* temp-job-list-mutators.c */
int job_list_set_count(job_list_t *job_list_ptr, unsigned long new_count);
int job_list_set_jobs_ae(job_list_t *job_list_ptr, size_t c, job_t *new_jobs_element);
int job_list_set_jobs_cpy(job_list_t *job_list_ptr, job_t *new_jobs[], size_t array_size);