   
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"
 int    main()
 {
     int fd;
     char *line;

     fd = open("file.txt", O_RDONLY);
     line = NULL;
     // int i = 0;
     // while (i++ < 30 && line)
     // {
     // line = get_next_line(fd);
     //  printf("main:%s", line);
     // }
      do
      {
          if (line)
          {
              free(line);
              line = NULL;
          }
          line = get_next_line(fd);
          printf("%s", line);
      } while (line);
     close(fd);
 }