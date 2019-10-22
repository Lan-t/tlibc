#ifndef __SYSCALL_LIB_H__
#define __SYSCALL_LIB_H__

extern
void* _syscall(long, ...);

extern
void* mmap(void* addr, unsigned long len, unsigned long prot, unsigned long flags, long fd, unsigned long offset);

#define MAP_SHARED      0x01            /* Share changes */
#define MAP_PRIVATE     0x02            /* Changes are private */
#define MAP_SHARED_VALIDATE 0x03        /* share + validate extension flags */

#define MAP_GROWSDOWN   0x0100          /* stack-like segment */
#define MAP_DENYWRITE   0x0800          /* ETXTBSY */
#define MAP_EXECUTABLE  0x1000          /* mark it as an executable */
#define MAP_LOCKED      0x2000          /* pages are locked */
#define MAP_NORESERVE   0x4000          /* don't check for reservations */

#define PROT_READ       0x1             /* page can be read */
#define PROT_WRITE      0x2             /* page can be written */
#define PROT_EXEC       0x4             /* page can be executed */
#define PROT_SEM        0x8             /* page may be used for atomic ops */
#define PROT_NONE       0x0             /* page can not be accessed */
#define PROT_GROWSDOWN  0x01000000      /* mprotect flag: extend change to start of growsdown vma */
#define PROT_GROWSUP    0x02000000      /* mprotect flag: extend change to end of growsup vma */

#define MAP_TYPE        0x0f            /* Mask for type of mapping */
#define MAP_FIXED       0x10            /* Interpret addr exactly */
#define MAP_ANONYMOUS   0x20            /* don't use a file */

#define MAP_POPULATE            0x008000        /* populate (prefault) pagetables */
#define MAP_NONBLOCK            0x010000        /* do not block on IO */
#define MAP_STACK               0x020000        /* give out an address that is best suited for process/thread stacks */
#define MAP_HUGETLB             0x040000        /* create a huge page mapping */
#define MAP_SYNC                0x080000 /* perform synchronous page faults for the mapping */
#define MAP_FIXED_NOREPLACE     0x100000        /* MAP_FIXED which doesn't unmap underlying mapping */

#define MAP_UNINITIALIZED 0x4000000

#endif