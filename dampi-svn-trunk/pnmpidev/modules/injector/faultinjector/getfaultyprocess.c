#include <stdio.h>
#include <stdlib.h>
#include <libconfig.h>

#define PARAM_ERROR(name) printf("Failed loading parameter: %s\n", name);

/* Enters to the configuration file and gets the faulty process.
  It prints its rank number to stdout */
int 
main(int argc, char *argv[], char *envp[])
{
    int id;
    struct config_t cfg;
	
    /* Get config file */
    char *filename;
    filename = getenv("FI_CONFIG_FILE");

    /* Initialize the configuration */
    config_init(&cfg);

    /* Load the file */
    if (!config_read_file(&cfg, filename)) {
	printf("Failed loading file: %s\n", filename);
	const char *text = config_error_text(&cfg);
	int line = config_error_line(&cfg);
	printf("%s\nProblem at line: %d\n", text, line);
	fflush(stdout);
	return 0;
    } else {
	config_setting_t *process =
	    config_lookup(&cfg, "experiment.faulty_process");

	if (!process) {
	    PARAM_ERROR("faulty_process");
	    fflush(stdout);
	    return 0;
	} else {
	    id = (int)config_setting_get_int(process);

	    if (id == -1) {
		printf("RANDOM\n");
	    } else {
		printf("%d\n", id);
	    }
	}
    }

    /* Free the configuration */
    config_destroy(&cfg);

    return 1;
}


