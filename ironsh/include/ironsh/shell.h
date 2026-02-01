#ifndef IRONSH_SHELL_H
#define IRONSH_SHELL_H

/* Initialize the shell */

int ironsh_shell_init(void);

/* Run the main shell loop */
void ironsh_shell_loop(void);

// shutdown and exit the shell
void ironsh_shell_shutdown(void);

#endif /* IRONSH_SHELL_H */ 