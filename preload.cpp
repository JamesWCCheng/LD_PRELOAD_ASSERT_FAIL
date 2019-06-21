#include <syscall.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

extern "C"
{
void __assert_fail(const char *__assertion,
                   const char *__file,
                   unsigned int __line,
                   const char *__function) throw()
{
  printf("****************my __assert_fail in %s at line %u in function %s by %s, getpid():%u\n", __file, __line, __function, __assertion, getpid());
}
}
void TestPreload()
{
  printf("**************** TestPreload here\n");
}
