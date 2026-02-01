#include "include/ironsh/shell.h"

int main(void) {
    // Initializing the shell
    int status = ironsh_shell_init();

    if(status != 0) {
        return status;
    }

    // Running the shell loop
    ironsh_shell_loop();

    // Shutting down the shell
    ironsh_shell_shutdown();
    return 0;
}