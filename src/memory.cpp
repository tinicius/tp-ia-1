#include <sys/resource.h>
#include <sys/time.h>

long get_mem_usage() {
  struct rusage usage;
  int ret;
  ret = getrusage(RUSAGE_SELF, &usage);

  return usage.ru_maxrss;  // in KB
}