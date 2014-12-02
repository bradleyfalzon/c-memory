Just playing with memory allocation and observing free memory usage by the system and committed memory usage.

This program demonstrates the Linux kernel's memory overcommittment policies by allowing a user to choose
exactly how much memory the program tries to allocate, whilst the user observes the system memory usage.

If the user allocates a very large amount of memory, such as 1000000000 bytes (1GB), the user should observe
system memory free is not affected, but committed memory is. This is the default behaviour, whereby under
most circumstances, the kernel will not allocate memory to a program, until the program tries to use it.

The Kernel's behaviour is configurable via: /proc/sys/vm/{overcommit_memory,overcommit_ratio}

Before running this program, run the following command to continuously view memory usage:

```bash
while true; do COMM=`grep Committed_AS /proc/meminfo | egrep -o '[0-9]+'`; FREE=`egrep '^(MemFree|Buffers|Cached):' /proc/meminfo | egrep -o '[0-9]+' | paste -sd+ | bc`; echo -e 'Committed:' $COMM 'Free Memory:' $FREE ; sleep 3; done
```
