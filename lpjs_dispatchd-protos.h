/* lpjs_dispatchd.c */
int lpjs_process_events(node_list_t *node_list, job_list_t *job_list);
void lpjs_log_job(const char *incoming_msg);
void lpjs_check_comp_fds(fd_set *read_fds, node_list_t *node_list, job_list_t *job_list);
int lpjs_listen(struct sockaddr_in *server_address);
int lpjs_check_listen_fd(int listen_fd, fd_set *read_fds, struct sockaddr_in *server_address, node_list_t *node_list, job_list_t *job_list);
void lpjs_compute_node_checkin(int msg_fd, node_list_t *node_list);
int lpjs_submit(int msg_fd, node_list_t *node_list, job_list_t *job_list);
void lpjs_dispatch_next_job(node_list_t *node_list, job_list_t *job_list);
