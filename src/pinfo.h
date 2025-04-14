#ifndef __PINFO_H_
#define __PINFO_H_

/* strip `.info' suffix from  "file" */
void strip_file_from_info_suffix(char *file);
/* add `.info' suffix to "file" */
char *addinfosuffix(char *file);

/* protect against bad, bad macros */
void checksu();

#endif
