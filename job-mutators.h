
/*
 *  Generated by /usr/local/bin/auto-gen-get-set-opaque
 *
 *  Mutator functions for setting with no sanity checking.  Use these to
 *  set structure members from functions outside the job_t
 *  class.  These macros perform no data validation.  Hence, they achieve
 *  maximum performance where data are guaranteed correct by other means.
 *  Use the mutator functions (same name as the macro, but lower case)
 *  for more robust code with a small performance penalty.
 *
 *  These generated macros are not expected to be perfect.  Check and edit
 *  as needed before adding to your code.
 */

/* temp-job-mutators.c */
int job_set_job_id(job_t *job_ptr, unsigned long new_job_id);
int job_set_job_count(job_t *job_ptr, unsigned new_job_count);
int job_set_cores_per_job(job_t *job_ptr, unsigned new_cores_per_job);
int job_set_min_cores_per_node(job_t *job_ptr, unsigned new_min_cores_per_node);
int job_set_mem_per_core(job_t *job_ptr, size_t new_mem_per_core);
int job_set_user_name(job_t *job_ptr, char *new_user_name);
int job_set_user_name_ae(job_t *job_ptr, size_t c, char new_user_name_element);
int job_set_user_name_cpy(job_t *job_ptr, char *new_user_name, size_t array_size);
int job_set_working_directory(job_t *job_ptr, char *new_working_directory);
int job_set_working_directory_ae(job_t *job_ptr, size_t c, char new_working_directory_element);
int job_set_working_directory_cpy(job_t *job_ptr, char *new_working_directory, size_t array_size);
int job_set_script_name(job_t *job_ptr, char *new_script_name);
int job_set_script_name_ae(job_t *job_ptr, size_t c, char new_script_name_element);
int job_set_script_name_cpy(job_t *job_ptr, char *new_script_name, size_t array_size);
