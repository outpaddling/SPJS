/***************************************************************************
 *  This file is automatically generated by gen-get-set.  Be sure to keep
 *  track of any manual changes.
 *
 *  These generated functions are not expected to be perfect.  Check and
 *  edit as needed before adding to your code.
 ***************************************************************************/

#include <string.h>
#include <ctype.h>
#include <stdbool.h>        // In case of bool
#include <stdint.h>         // In case of int64_t, etc
#include <xtend/string.h>   // strlcpy() on Linux
#include "job-private.h"


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for job_id member in a job_t structure.
 *      Use this function to get job_id in a job_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member job_id.
 *
 *  Examples:
 *      job_t           job;
 *      unsigned long   job_id;
 *
 *      job_id = job_get_job_id(&job);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

unsigned long    job_get_job_id(job_t *job_ptr)

{
    return job_ptr->job_id;
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for array_index member in a job_t structure.
 *      Use this function to get array_index in a job_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member array_index.
 *
 *  Examples:
 *      job_t           job;
 *      unsigned long   array_index;
 *
 *      array_index = job_get_array_index(&job);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

unsigned long    job_get_array_index(job_t *job_ptr)

{
    return job_ptr->array_index;
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for job_count member in a job_t structure.
 *      Use this function to get job_count in a job_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member job_count.
 *
 *  Examples:
 *      job_t           job;
 *      unsigned        job_count;
 *
 *      job_count = job_get_job_count(&job);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

unsigned    job_get_job_count(job_t *job_ptr)

{
    return job_ptr->job_count;
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for procs_per_job member in a job_t structure.
 *      Use this function to get procs_per_job in a job_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member procs_per_job.
 *
 *  Examples:
 *      job_t           job;
 *      unsigned        procs_per_job;
 *
 *      procs_per_job = job_get_procs_per_job(&job);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

unsigned    job_get_procs_per_job(job_t *job_ptr)

{
    return job_ptr->procs_per_job;
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for min_procs_per_node member in a job_t structure.
 *      Use this function to get min_procs_per_node in a job_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member min_procs_per_node.
 *
 *  Examples:
 *      job_t           job;
 *      unsigned        min_procs_per_node;
 *
 *      min_procs_per_node = job_get_min_procs_per_node(&job);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

unsigned    job_get_min_procs_per_node(job_t *job_ptr)

{
    return job_ptr->min_procs_per_node;
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for mem_per_proc member in a job_t structure.
 *      Use this function to get mem_per_proc in a job_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member mem_per_proc.
 *
 *  Examples:
 *      job_t           job;
 *      size_t          mem_per_proc;
 *
 *      mem_per_proc = job_get_mem_per_proc(&job);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

size_t    job_get_mem_per_proc(job_t *job_ptr)

{
    return job_ptr->mem_per_proc;
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for user_name member in a job_t structure.
 *      Use this function to get user_name in a job_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member user_name.
 *
 *  Examples:
 *      job_t           job;
 *      char *          user_name;
 *
 *      user_name = job_get_user_name(&job);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

char *    job_get_user_name(job_t *job_ptr)

{
    return job_ptr->user_name;
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for an array element of user_name member in a job_t
 *      structure. Use this function to get job_ptr->user_name[c]
 *      in a job_t object from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to get
 *      c               Subscript to the user_name array
 *
 *  Returns:
 *      Value of one element of structure member user_name.
 *
 *  Examples:
 *      job_t           job;
 *      size_t          c;
 *      char *          user_name_element;
 *
 *      user_name_element = job_get_user_name_ae(&job, c);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

char  job_get_user_name_ae(job_t *job_ptr, size_t c)

{
    return job_ptr->user_name[c];
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for primary_group_name member in a job_t structure.
 *      Use this function to get primary_group_name in a job_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member primary_group_name.
 *
 *  Examples:
 *      job_t           job;
 *      char *          primary_group_name;
 *
 *      primary_group_name = job_get_primary_group_name(&job);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

char *    job_get_primary_group_name(job_t *job_ptr)

{
    return job_ptr->primary_group_name;
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for an array element of primary_group_name member in a job_t
 *      structure. Use this function to get job_ptr->primary_group_name[c]
 *      in a job_t object from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to get
 *      c               Subscript to the primary_group_name array
 *
 *  Returns:
 *      Value of one element of structure member primary_group_name.
 *
 *  Examples:
 *      job_t           job;
 *      size_t          c;
 *      char *          primary_group_name_element;
 *
 *      primary_group_name_element = job_get_primary_group_name_ae(&job, c);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

char  job_get_primary_group_name_ae(job_t *job_ptr, size_t c)

{
    return job_ptr->primary_group_name[c];
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for submit_host member in a job_t structure.
 *      Use this function to get submit_host in a job_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member submit_host.
 *
 *  Examples:
 *      job_t           job;
 *      char *          submit_host;
 *
 *      submit_host = job_get_submit_host(&job);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

char *    job_get_submit_host(job_t *job_ptr)

{
    return job_ptr->submit_host;
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for an array element of submit_host member in a job_t
 *      structure. Use this function to get job_ptr->submit_host[c]
 *      in a job_t object from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to get
 *      c               Subscript to the submit_host array
 *
 *  Returns:
 *      Value of one element of structure member submit_host.
 *
 *  Examples:
 *      job_t           job;
 *      size_t          c;
 *      char *          submit_host_element;
 *
 *      submit_host_element = job_get_submit_host_ae(&job, c);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

char  job_get_submit_host_ae(job_t *job_ptr, size_t c)

{
    return job_ptr->submit_host[c];
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for submit_directory member in a job_t structure.
 *      Use this function to get submit_directory in a job_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member submit_directory.
 *
 *  Examples:
 *      job_t           job;
 *      char *          submit_directory;
 *
 *      submit_directory = job_get_submit_directory(&job);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

char *    job_get_submit_directory(job_t *job_ptr)

{
    return job_ptr->submit_directory;
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for an array element of submit_directory member in a job_t
 *      structure. Use this function to get job_ptr->submit_directory[c]
 *      in a job_t object from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to get
 *      c               Subscript to the submit_directory array
 *
 *  Returns:
 *      Value of one element of structure member submit_directory.
 *
 *  Examples:
 *      job_t           job;
 *      size_t          c;
 *      char *          submit_directory_element;
 *
 *      submit_directory_element = job_get_submit_directory_ae(&job, c);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

char  job_get_submit_directory_ae(job_t *job_ptr, size_t c)

{
    return job_ptr->submit_directory[c];
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for script_name member in a job_t structure.
 *      Use this function to get script_name in a job_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member script_name.
 *
 *  Examples:
 *      job_t           job;
 *      char *          script_name;
 *
 *      script_name = job_get_script_name(&job);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

char *    job_get_script_name(job_t *job_ptr)

{
    return job_ptr->script_name;
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for an array element of script_name member in a job_t
 *      structure. Use this function to get job_ptr->script_name[c]
 *      in a job_t object from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to get
 *      c               Subscript to the script_name array
 *
 *  Returns:
 *      Value of one element of structure member script_name.
 *
 *  Examples:
 *      job_t           job;
 *      size_t          c;
 *      char *          script_name_element;
 *
 *      script_name_element = job_get_script_name_ae(&job, c);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

char  job_get_script_name_ae(job_t *job_ptr, size_t c)

{
    return job_ptr->script_name[c];
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for push_command member in a job_t structure.
 *      Use this function to get push_command in a job_t object
 *      from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to set
 *
 *  Returns:
 *      Value of the structure member push_command.
 *
 *  Examples:
 *      job_t           job;
 *      char *          push_command;
 *
 *      push_command = job_get_push_command(&job);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

char *    job_get_push_command(job_t *job_ptr)

{
    return job_ptr->push_command;
}


/***************************************************************************
 *  Library:
 *      #include <job.h>
 *      
 *
 *  Description:
 *      Accessor for an array element of push_command member in a job_t
 *      structure. Use this function to get job_ptr->push_command[c]
 *      in a job_t object from non-member functions.
 *
 *  Arguments:
 *      job_ptr         Pointer to the structure to get
 *      c               Subscript to the push_command array
 *
 *  Returns:
 *      Value of one element of structure member push_command.
 *
 *  Examples:
 *      job_t           job;
 *      size_t          c;
 *      char *          push_command_element;
 *
 *      push_command_element = job_get_push_command_ae(&job, c);
 *
 *  History: 
 *  Date        Name        Modification
 *  2024-04-24  gen-get-set Auto-generated from job-private.h
 ***************************************************************************/

char  job_get_push_command_ae(job_t *job_ptr, size_t c)

{
    return job_ptr->push_command[c];
}
