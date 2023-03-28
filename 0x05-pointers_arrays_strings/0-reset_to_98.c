main.h:1:2: error: stray ‘#’ in program
    1 | i#ifndef MAIN_H
      |  ^
main.h:1:1: error: unknown type name ‘i’
    1 | i#ifndef MAIN_H
      | ^
main.h:1:10: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘MAIN_H’
    1 | i#ifndef MAIN_H
      |          ^~~~~~
In file included from /usr/include/stdio.h:43,
                 from main.h:3,
                 from 0-reset_to_98.c:1:
/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h:95:3: error: unknown type name ‘size_t’
   95 |   size_t __pad5;
      |   ^~~~~~
/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h:98:67: error: ‘size_t’ undeclared here (not in a function)
   98 |   char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
      |                                                                   ^~~~~~
/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h:1:1: note: ‘size_t’ is defined in header ‘<stddef.h>’; did you forget to ‘#include <stddef.h>’?
  +++ |+#incl...
