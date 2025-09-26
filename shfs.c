typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef long __ssize_t;

typedef ulong size_t;

typedef __ssize_t (__io_write_fn)(void *, char *, size_t);

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef void _IO_lock_t;

typedef long __off64_t;

struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};

typedef __ssize_t (__io_read_fn)(void *, char *, size_t);

typedef int (__io_seek_fn)(void *, __off64_t *, int);

typedef int (__io_close_fn)(void *);

typedef struct _IO_cookie_io_functions_t _IO_cookie_io_functions_t, *P_IO_cookie_io_functions_t;

struct _IO_cookie_io_functions_t {
    __io_read_fn *read;
    __io_write_fn *write;
    __io_seek_fn *seek;
    __io_close_fn *close;
};

typedef struct rlimit64 rlimit64, *Prlimit64;

typedef ulong __rlim64_t;

typedef __rlim64_t rlim64_t;

struct rlimit64 {
    rlim64_t rlim_cur;
    rlim64_t rlim_max;
};

typedef enum __rlimit_resource {
    RLIMIT_CPU=0,
    RLIMIT_FSIZE=1,
    RLIMIT_DATA=2,
    RLIMIT_STACK=3,
    RLIMIT_CORE=4,
    __RLIMIT_RSS=5,
    __RLIMIT_NPROC=6,
    RLIMIT_NOFILE=7,
    __RLIMIT_MEMLOCK=8,
    __RLIMIT_OFILE=8,
    RLIMIT_AS=9,
    __RLIMIT_LOCKS=10,
    __RLIMIT_SIGPENDING=11,
    __RLIMIT_MSGQUEUE=12,
    __RLIMIT_NICE=13,
    __RLIMIT_RTPRIO=14,
    __RLIMIT_NLIMITS=15,
    __RLIM_NLIMITS=16
} __rlimit_resource;

typedef enum __rlimit_resource __rlimit_resource_t;

typedef struct stat64 stat64, *Pstat64;

typedef ulong __dev_t;

typedef ulong __ino64_t;

typedef ulong __nlink_t;

typedef uint __mode_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef long __blkcnt64_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat64 {
    __dev_t st_dev;
    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __unused[3];
};

typedef struct statfs64 statfs64, *Pstatfs64;

typedef ulong __fsblkcnt64_t;

typedef ulong __fsfilcnt64_t;

typedef struct __fsid_t __fsid_t, *P__fsid_t;

struct __fsid_t {
    int __val[2];
};

struct statfs64 {
    long f_type;
    long f_bsize;
    __fsblkcnt64_t f_blocks;
    __fsblkcnt64_t f_bfree;
    __fsblkcnt64_t f_bavail;
    __fsfilcnt64_t f_files;
    __fsfilcnt64_t f_ffree;
    struct __fsid_t f_fsid;
    long f_namelen;
    long f_frsize;
    long f_flags;
    long f_spare[4];
};

typedef struct statvfs64 statvfs64, *Pstatvfs64;

struct statvfs64 {
    ulong f_bsize;
    ulong f_frsize;
    __fsblkcnt64_t f_blocks;
    __fsblkcnt64_t f_bfree;
    __fsblkcnt64_t f_bavail;
    __fsfilcnt64_t f_files;
    __fsfilcnt64_t f_ffree;
    __fsfilcnt64_t f_favail;
    ulong f_fsid;
    ulong f_flag;
    ulong f_namemax;
    int __f_spare[6];
};

typedef struct _IO_FILE FILE;

typedef __ssize_t ssize_t;

typedef struct dirent64 dirent64, *Pdirent64;

struct dirent64 {
    __ino64_t d_ino;
    __off64_t d_off;
    ushort d_reclen;
    uchar d_type;
    char d_name[256];
};

typedef struct __dirstream __dirstream, *P__dirstream;

typedef struct __dirstream DIR;

struct __dirstream {
};

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

typedef struct __pthread_internal_list __pthread_internal_list, *P__pthread_internal_list;

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_internal_list {
    struct __pthread_internal_list *__prev;
    struct __pthread_internal_list *__next;
};

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    uint __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
};

union pthread_mutex_t {
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
};

typedef void *__gnuc_va_list;

typedef void (*__sighandler_t)(int);

typedef enum Elf_ProgramHeaderType {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType;

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};



undefined shfs_main;
char DAT_0041b548;
undefined DAT_00415040;
undefined UNK_00415048;
undefined mix_64byte_blocks;
undefined mix_four_128bit_blocks;
undefined initialize_12_blocks_with_constants;
undefined mix_with_predefined_constants_64;
undefined has_cfg_extension;
ulong DAT_0041b5c0;
uint DAT_0041b5b8;
uint DAT_0041b5a8;
uint DAT_0041b380;
uint DAT_0041b5ac;
undefined DAT_0041b5e0;
undefined DAT_0041b580;
undefined versionsort64;
undefined DAT_0041b5e8;
undefined8 UNK_0041b5f8;
int DAT_0041b5b8;
undefined8 DAT_0041b5c0;
undefined DAT_004159ae;
undefined DAT_00415794;
undefined DAT_004159ee;
undefined4 *DAT_0041b560;
undefined DAT_004158f3;
undefined DAT_0041b5f0;
long DAT_0041b3e0;
int DAT_0041b380;
undefined4 DAT_0041b5ac;
int DAT_0041b5a8;
long DAT_0041b5b0;
undefined8 DAT_0041b5b0;
undefined8 DAT_0041b560;
undefined *DAT_0041b3e0;
undefined log_received_signal;
undefined DAT_004173d3;
undefined *PTR_shfs_getattr_0041b3a0;
undefined8 stdout;
undefined shfs_link;
undefined8 stderr;
undefined DAT_00417420;
undefined8 DAT_0041bbe0;
char *DAT_0041bf00;
undefined *PTR_no_op_return_zero_0041b500;
undefined *PTR_log_message_0041b508;
undefined *PTR_no_op_return_zero_0041b510;
undefined *PTR_no_op_return_zero_0041b518;
undefined pclose;
undefined fclose;

void _DT_INIT(void)

{
  __gmon_start__();
  return;
}



void call_null_pointer(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int utimensat(int __fd,char *__path,timespec *__times,int __flags)

{
  int iVar1;
  
  iVar1 = utimensat(__fd,__path,__times,__flags);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = unlink(__name);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopencookie(void *__magic_cookie,char *__modes,_IO_cookie_io_functions_t __io_funcs)

{
  FILE *pFVar1;
  
  pFVar1 = fopencookie(__magic_cookie,__modes,__io_funcs);
  return pFVar1;
}



void __isoc23_strtoull(void)

{
  __isoc23_strtoull();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = mkdir(__path,__mode);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int toupper(int __c)

{
  int iVar1;
  
  iVar1 = toupper(__c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t llistxattr(char *__path,char *__list,size_t __size)

{
  ssize_t sVar1;
  
  sVar1 = llistxattr(__path,__list,__size);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = readlink(__path,__buf,__len);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = vasprintf(__ptr,__f,__arg);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int lstat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = lstat64(__file,__buf);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t lgetxattr(char *__path,char *__name,void *__value,size_t __size)

{
  ssize_t sVar1;
  
  sVar1 = lgetxattr(__path,__name,__value,__size);
  return sVar1;
}



void fuse_get_context(void)

{
  fuse_get_context();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = opendir(__name);
  return pDVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * stpcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = stpcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int rmdir(char *__path)

{
  int iVar1;
  
  iVar1 = rmdir(__path);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fallocate64(int __fd,int __mode,__off64_t __offset,__off64_t __len)

{
  int iVar1;
  
  iVar1 = fallocate64(__fd,__mode,__offset,__len);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int chdir(char *__path)

{
  int iVar1;
  
  iVar1 = chdir(__path);
  return iVar1;
}



void fuse_main_real(void)

{
  fuse_main_real();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = stat64(__file,__buf);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int symlink(char *__from,char *__to)

{
  int iVar1;
  
  iVar1 = symlink(__from,__to);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pclose(FILE *__stream)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



void __isoc23_strtoll(void)

{
  __isoc23_strtoll();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strrchr(__s,__c);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int dup(int __fd)

{
  int iVar1;
  
  iVar1 = dup(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// WARNING: Enum "__rlimit_resource": Some values do not have unique names

int setrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
  int iVar1;
  
  iVar1 = setrlimit64(__resource,__rlimits);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int statfs64(char *__file,statfs64 *__buf)

{
  int iVar1;
  
  iVar1 = statfs64(__file,__buf);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = ioctl(__fd,__request);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = strnlen(__string,__maxlen);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = getcwd(__buf,__size);
  return pcVar1;
}



void copy_file_range(void)

{
  copy_file_range();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncat(__dest,__src,__n);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = closedir(__dirp);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strtok_r(char *__s,char *__delim,char **__save_ptr)

{
  char *pcVar1;
  
  pcVar1 = strtok_r(__s,__delim,__save_ptr);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fstatat64(int __fd,char *__file,stat64 *__buf,int __flag)

{
  int iVar1;
  
  iVar1 = fstatat64(__fd,__file,__buf,__flag);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int dirfd(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = dirfd(__dirp);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = syscall(__sysno);
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int mkfifo(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = mkfifo(__path,__mode);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__mode_t umask(__mode_t __mask)

{
  __mode_t _Var1;
  
  _Var1 = umask(__mask);
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen64(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int mknod(char *__path,__mode_t __mode,__dev_t __dev)

{
  int iVar1;
  
  iVar1 = mknod(__path,__mode,__dev);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t sendfile64(int __out_fd,int __in_fd,__off64_t *__offset,size_t __count)

{
  ssize_t sVar1;
  
  sVar1 = sendfile64(__out_fd,__in_fd,__offset,__count);
  return sVar1;
}



void __isoc23_strtol(void)

{
  __isoc23_strtol();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// WARNING: Enum "__rlimit_resource": Some values do not have unique names

int getrlimit64(__rlimit_resource_t __resource,rlimit64 *__rlimits)

{
  int iVar1;
  
  iVar1 = getrlimit64(__resource,__rlimits);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int tolower(int __c)

{
  int iVar1;
  
  iVar1 = tolower(__c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void syslog(int __pri,char *__fmt,...)

{
  syslog(__pri,__fmt);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int scandir64(char *__dir,dirent64 ***__namelist,__selector *__selector,__cmp *__cmp)

{
  int iVar1;
  
  iVar1 = scandir64(__dir,__namelist,__selector,__cmp);
  return iVar1;
}



void fuse_buf_copy(void)

{
  fuse_buf_copy();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int lsetxattr(char *__path,char *__name,void *__value,size_t __size,int __flags)

{
  int iVar1;
  
  iVar1 = lsetxattr(__path,__name,__value,__size,__flags);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int lchown(char *__file,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = lchown(__file,__owner,__group);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int truncate64(char *__file,__off64_t __length)

{
  int iVar1;
  
  iVar1 = truncate64(__file,__length);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int chown(char *__file,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = chown(__file,__owner,__group);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int asprintf(char **__ptr,char *__fmt,...)

{
  int iVar1;
  
  iVar1 = asprintf(__ptr,__fmt);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int ftruncate64(int __fd,__off64_t __length)

{
  int iVar1;
  
  iVar1 = ftruncate64(__fd,__length);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fchmod(int __fd,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = fchmod(__fd,__mode);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = setvbuf(__stream,__buf,__modes,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int chmod(char *__file,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = chmod(__file,__mode);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open64(__file,__oflag);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

dirent64 * readdir64(DIR *__dirp)

{
  dirent64 *pdVar1;
  
  pdVar1 = readdir64(__dirp);
  return pdVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fsync(int __fd)

{
  int iVar1;
  
  iVar1 = fsync(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = access(__name,__type);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * popen(char *__command,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = popen(__command,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fchown(int __fd,__uid_t __owner,__gid_t __group)

{
  int iVar1;
  
  iVar1 = fchown(__fd,__owner,__group);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = rename(__old,__new);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int futimens(int __fd,timespec *__times)

{
  int iVar1;
  
  iVar1 = futimens(__fd,__times);
  return iVar1;
}



void fuse_pkgversion(void)

{
  fuse_pkgversion();
  return;
}



void flock(void)

{
  flock();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
  __ssize_t _Var1;
  
  _Var1 = getline(__lineptr,__n,__stream);
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcat(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int link(char *__from,char *__to)

{
  int iVar1;
  
  iVar1 = link(__from,__to);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



void fuse_lowlevel_version(void)

{
  fuse_lowlevel_version();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  __off64_t _Var1;
  
  _Var1 = lseek64(__fd,__offset,__whence);
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fstat64(int __fd,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = fstat64(__fd,__buf);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setxattr(char *__path,char *__name,void *__value,size_t __size,int __flags)

{
  int iVar1;
  
  iVar1 = setxattr(__path,__name,__value,__size,__flags);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strdup(char *__s)

{
  char *pcVar1;
  
  pcVar1 = strdup(__s);
  return pcVar1;
}



void fuse_buf_size(void)

{
  fuse_buf_size();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int lremovexattr(char *__path,char *__name)

{
  int iVar1;
  
  iVar1 = lremovexattr(__path,__name);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int versionsort64(dirent64 **__e1,dirent64 **__e2)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = __ctype_b_loc();
  return ppuVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int statvfs64(char *__file,statvfs64 *__buf)

{
  int iVar1;
  
  iVar1 = statvfs64(__file,__buf);
  return iVar1;
}



void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(shfs_main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void noop(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00403713)
// WARNING: Removing unreachable block (ram,0x0040371f)

void noop(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00403754)
// WARNING: Removing unreachable block (ram,0x00403760)

void noop(void)

{
  return;
}



void _FINI_0(void)

{
  if (DAT_0041b548 == '\0') {
    noop();
    DAT_0041b548 = 1;
    return;
  }
  return;
}



void _INIT_0(void)

{
  noop();
  return;
}



uint fibonacci_hash_top_bits(int param_1,char param_2)

{
  return (uint)(param_1 * -0x61c88647) >> (0x20U - param_2 & 0x1f);
}



ulong mix64_splitmix_final(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (param_1 ^ param_1 >> 0x1e) * -0x40a7b892e31b1a47;
  uVar1 = (uVar1 ^ uVar1 >> 0x1b) * -0x6b2fb644ecceee15;
  return uVar1 ^ uVar1 >> 0x1f;
}



uint fnv1a_hash32(byte *param_1)

{
  byte *local_18;
  uint local_c;
  
  local_c = 0x811c9dce;
  for (local_18 = param_1; *local_18 != 0; local_18 = local_18 + 1) {
    local_c = (local_c ^ *local_18) * 0x1000193;
  }
  return local_c;
}



void fnv1a_hash32_wrapper(undefined8 param_1)

{
  fnv1a_hash32(param_1);
  return;
}



bool strings_equal(char *param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,param_3);
  return iVar1 == 0;
}



void allocate_24_bytes(void)

{
  calloc(1,0x18);
  return;
}



uint bloom_filter_check_or_probe(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_c;
  
  if (*(long *)(param_1 + 4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1 << ((byte)*param_1 & 0x1f);
    uVar2 = fibonacci_hash_top_bits(param_3,*param_1);
    local_c = uVar2;
    do {
      if (((*(uint *)(*(long *)(param_1 + 2) + (ulong)(local_c >> 5) * 4) >> ((byte)local_c & 0x1f)
           & 1) == 0) ||
         (puVar1 = (undefined8 *)(*(long *)(param_1 + 4) + (ulong)local_c * 0xc),
         iVar3 = strings_equal(*puVar1,*(undefined4 *)(puVar1 + 1),*param_2,
                               *(undefined4 *)(param_2 + 1)), iVar3 != 0)) {
        if ((*(uint *)(*(long *)(param_1 + 2) + (ulong)(local_c >> 5) * 4) >> ((byte)local_c & 0x1f)
            & 1) != 0) {
          return local_c;
        }
        return uVar4;
      }
      local_c = local_c + 1 & uVar4 - 1;
    } while (local_c != uVar2);
  }
  return uVar4;
}



void bloom_filter_insert_or_check(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = fnv1a_hash32_wrapper(*param_2,*(undefined4 *)(param_2 + 1));
  bloom_filter_check_or_probe(param_1,param_2,uVar1);
  return;
}



undefined8 resize_and_rehash_hash_table(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  size_t sVar5;
  void *__s;
  void *pvVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_40;
  undefined4 local_38;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = param_2;
  while (local_10 = local_10 >> 1, local_10 != 0) {
    local_c = local_c + 1;
  }
  if ((param_2 - 1 & param_2) != 0) {
    local_c = local_c + 1;
  }
  uVar2 = local_c;
  if (local_c < 2) {
    uVar2 = 2;
  }
  uVar8 = 1 << ((byte)uVar2 & 0x1f);
  if ((uVar8 >> 2) + (uVar8 >> 1) < param_1[1]) {
    uVar4 = 0;
  }
  else {
    if (uVar8 < 0x20) {
      sVar5 = 4;
    }
    else {
      sVar5 = (ulong)(uVar8 >> 5) << 2;
    }
    __s = malloc(sVar5);
    if (uVar8 < 0x20) {
      sVar5 = 4;
    }
    else {
      sVar5 = (ulong)(uVar8 >> 5) * 4;
    }
    memset(__s,0,sVar5);
    if (__s == (void *)0x0) {
      uVar4 = 0xffffffff;
    }
    else {
      if (*(long *)(param_1 + 4) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1 << ((byte)*param_1 & 0x1f);
      }
      if (uVar9 < uVar8) {
        pvVar6 = realloc(*(void **)(param_1 + 4),(ulong)uVar8 * 0xc);
        if (pvVar6 == (void *)0x0) {
          free(__s);
          return 0xffffffff;
        }
        *(void **)(param_1 + 4) = pvVar6;
      }
      for (local_c = 0; local_c != uVar9; local_c = local_c + 1) {
        if ((*(uint *)(*(long *)(param_1 + 2) + (ulong)(local_c >> 5) * 4) >> ((byte)local_c & 0x1f)
            & 1) != 0) {
          puVar7 = (undefined8 *)((ulong)local_c * 0xc + *(long *)(param_1 + 4));
          local_40 = *puVar7;
          local_38 = *(undefined4 *)(puVar7 + 1);
          *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_c >> 5) * 4) =
               *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_c >> 5) * 4) &
               ~(1 << ((byte)local_c & 0x1f));
          while( true ) {
            uVar3 = fnv1a_hash32_wrapper(local_40,local_38);
            local_14 = fibonacci_hash_top_bits(uVar3,uVar2);
            while (bVar1 = (byte)local_14,
                  (*(uint *)((long)__s + (ulong)(local_14 >> 5) * 4) >> (bVar1 & 0x1f) & 1) != 0) {
              local_14 = local_14 + 1 & uVar8 - 1;
            }
            *(uint *)((long)__s + (ulong)(local_14 >> 5) * 4) =
                 *(uint *)((long)__s + (ulong)(local_14 >> 5) * 4) | 1 << (bVar1 & 0x1f);
            if ((uVar9 <= local_14) ||
               ((*(uint *)(*(long *)(param_1 + 2) + (ulong)(local_14 >> 5) * 4) >> (bVar1 & 0x1f) &
                1) == 0)) break;
            puVar7 = (undefined8 *)((ulong)local_14 * 0xc + *(long *)(param_1 + 4));
            uVar4 = *puVar7;
            uVar3 = *(undefined4 *)(puVar7 + 1);
            puVar7 = (undefined8 *)((ulong)local_14 * 0xc + *(long *)(param_1 + 4));
            *puVar7 = local_40;
            *(undefined4 *)(puVar7 + 1) = local_38;
            *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_14 >> 5) * 4) =
                 *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_14 >> 5) * 4) &
                 ~(1 << (bVar1 & 0x1f));
            local_40 = uVar4;
            local_38 = uVar3;
          }
          puVar7 = (undefined8 *)((ulong)local_14 * 0xc + *(long *)(param_1 + 4));
          *puVar7 = local_40;
          *(undefined4 *)(puVar7 + 1) = local_38;
        }
      }
      if (uVar8 < uVar9) {
        pvVar6 = realloc(*(void **)(param_1 + 4),(ulong)uVar8 * 0xc);
        *(void **)(param_1 + 4) = pvVar6;
      }
      free(*(void **)(param_1 + 2));
      *(void **)(param_1 + 2) = __s;
      *param_1 = uVar2;
      uVar4 = 0;
    }
  }
  return uVar4;
}



uint hash_table_insert_or_find
               (undefined4 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  uint local_c;
  
  if (*(long *)(param_1 + 4) == 0) {
    local_c = 0;
  }
  else {
    local_c = 1 << ((byte)*param_1 & 0x1f);
  }
  *param_4 = 0xffffffff;
  if ((local_c >> 2) + (local_c >> 1) <= (uint)param_1[1]) {
    iVar2 = resize_and_rehash_hash_table(param_1,local_c + 1);
    if (iVar2 < 0) {
      return local_c;
    }
    local_c = 1 << ((byte)*param_1 & 0x1f);
  }
  uVar3 = fibonacci_hash_top_bits(param_3,*param_1);
  local_10 = uVar3;
  do {
    if (((*(uint *)(*(long *)(param_1 + 2) + (ulong)(local_10 >> 5) * 4) >> ((byte)local_10 & 0x1f)
         & 1) == 0) ||
       (puVar1 = (undefined8 *)(*(long *)(param_1 + 4) + (ulong)local_10 * 0xc),
       iVar2 = strings_equal(*puVar1,*(undefined4 *)(puVar1 + 1),*param_2,
                             *(undefined4 *)(param_2 + 1)), iVar2 != 0)) break;
    local_10 = local_10 + 1 & local_c - 1;
  } while (local_10 != uVar3);
  if ((*(uint *)(*(long *)(param_1 + 2) + (ulong)(local_10 >> 5) * 4) >> ((byte)local_10 & 0x1f) & 1
      ) == 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 4) + (ulong)local_10 * 0xc);
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_10 >> 5) * 4) =
         *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_10 >> 5) * 4) |
         1 << ((byte)local_10 & 0x1f);
    param_1[1] = param_1[1] + 1;
    *param_4 = 1;
  }
  else {
    *param_4 = 0;
  }
  return local_10;
}



void insert_into_hash_table_with_fnv1a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = fnv1a_hash32_wrapper(*param_2,*(undefined4 *)(param_2 + 1));
  hash_table_insert_or_find(param_1,param_2,uVar1,param_3);
  return;
}



undefined8 hash_table_remove_entry(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint local_2c;
  uint local_14;
  
  if (*(long *)(param_1 + 4) == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *param_1;
    local_2c = param_2;
    local_14 = param_2;
    while ((local_14 = local_14 + 1 & (1 << ((byte)uVar1 & 0x1f)) - 1U, local_14 != local_2c &&
           ((*(uint *)(*(long *)(param_1 + 2) + (ulong)(local_14 >> 5) * 4) >>
             ((byte)local_14 & 0x1f) & 1) != 0))) {
      uVar2 = *param_1;
      puVar6 = (undefined8 *)((ulong)local_14 * 0xc + *(long *)(param_1 + 4));
      uVar3 = fnv1a_hash32_wrapper(*puVar6,*(undefined4 *)(puVar6 + 1));
      uVar4 = fibonacci_hash_top_bits(uVar3,uVar2);
      if (((local_2c < local_14) && ((uVar4 <= local_2c || (local_14 < uVar4)))) ||
         ((local_14 < local_2c && ((uVar4 <= local_2c && (local_14 < uVar4)))))) {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 4) + (ulong)local_14 * 0xc);
        puVar7 = (undefined8 *)((ulong)local_2c * 0xc + *(long *)(param_1 + 4));
        *puVar7 = *puVar6;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
        local_2c = local_14;
      }
    }
    *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_2c >> 5) * 4) =
         *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_2c >> 5) * 4) &
         ~(1 << ((byte)local_2c & 0x1f));
    param_1[1] = param_1[1] + -1;
    uVar5 = 1;
  }
  return uVar5;
}



void allocate_24_bytes_wrapper(void)

{
  allocate_24_bytes();
  return;
}



void bloom_filter_insert_or_check_wrapper(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_14;
  
  local_14 = param_2;
  bloom_filter_insert_or_check(param_1,&local_14);
  return;
}



void hash_table_remove_entry_wrapper(undefined8 param_1,undefined4 param_2)

{
  hash_table_remove_entry(param_1,param_2);
  return;
}



void hash_table_insert_with_fnv1a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_14;
  
  local_14 = param_2;
  insert_into_hash_table_with_fnv1a(param_1,&local_14,param_3);
  return;
}



void hash_mix64_wrapper(undefined8 param_1)

{
  mix64_splitmix_final(param_1);
  return;
}



bool is_equal_long(long param_1,undefined8 param_2,long param_3)

{
  return param_1 == param_3;
}



void alloc_zeroed_24(void)

{
  calloc(1,0x18);
  return;
}



void free_struct(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(*(void **)((long)param_1 + 0x10));
    free(*(void **)((long)param_1 + 8));
    free(param_1);
  }
  return;
}



undefined8 hash_table_resize(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  size_t sVar5;
  void *__s;
  void *pvVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_40;
  undefined4 local_38;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = param_2;
  while (local_10 = local_10 >> 1, local_10 != 0) {
    local_c = local_c + 1;
  }
  if ((param_2 - 1 & param_2) != 0) {
    local_c = local_c + 1;
  }
  uVar2 = local_c;
  if (local_c < 2) {
    uVar2 = 2;
  }
  uVar8 = 1 << ((byte)uVar2 & 0x1f);
  if ((uVar8 >> 2) + (uVar8 >> 1) < param_1[1]) {
    uVar4 = 0;
  }
  else {
    if (uVar8 < 0x20) {
      sVar5 = 4;
    }
    else {
      sVar5 = (ulong)(uVar8 >> 5) << 2;
    }
    __s = malloc(sVar5);
    if (uVar8 < 0x20) {
      sVar5 = 4;
    }
    else {
      sVar5 = (ulong)(uVar8 >> 5) * 4;
    }
    memset(__s,0,sVar5);
    if (__s == (void *)0x0) {
      uVar4 = 0xffffffff;
    }
    else {
      if (*(long *)(param_1 + 4) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1 << ((byte)*param_1 & 0x1f);
      }
      if (uVar9 < uVar8) {
        pvVar6 = realloc(*(void **)(param_1 + 4),(ulong)uVar8 * 0xc);
        if (pvVar6 == (void *)0x0) {
          free(__s);
          return 0xffffffff;
        }
        *(void **)(param_1 + 4) = pvVar6;
      }
      for (local_c = 0; local_c != uVar9; local_c = local_c + 1) {
        if ((*(uint *)(*(long *)(param_1 + 2) + (ulong)(local_c >> 5) * 4) >> ((byte)local_c & 0x1f)
            & 1) != 0) {
          puVar7 = (undefined8 *)((ulong)local_c * 0xc + *(long *)(param_1 + 4));
          local_40 = *puVar7;
          local_38 = *(undefined4 *)(puVar7 + 1);
          *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_c >> 5) * 4) =
               *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_c >> 5) * 4) &
               ~(1 << ((byte)local_c & 0x1f));
          while( true ) {
            uVar3 = hash_mix64_wrapper(local_40,local_38);
            local_14 = fibonacci_hash_top_bits(uVar3,uVar2);
            while (bVar1 = (byte)local_14,
                  (*(uint *)((long)__s + (ulong)(local_14 >> 5) * 4) >> (bVar1 & 0x1f) & 1) != 0) {
              local_14 = local_14 + 1 & uVar8 - 1;
            }
            *(uint *)((long)__s + (ulong)(local_14 >> 5) * 4) =
                 *(uint *)((long)__s + (ulong)(local_14 >> 5) * 4) | 1 << (bVar1 & 0x1f);
            if ((uVar9 <= local_14) ||
               ((*(uint *)(*(long *)(param_1 + 2) + (ulong)(local_14 >> 5) * 4) >> (bVar1 & 0x1f) &
                1) == 0)) break;
            puVar7 = (undefined8 *)((ulong)local_14 * 0xc + *(long *)(param_1 + 4));
            uVar4 = *puVar7;
            uVar3 = *(undefined4 *)(puVar7 + 1);
            puVar7 = (undefined8 *)((ulong)local_14 * 0xc + *(long *)(param_1 + 4));
            *puVar7 = local_40;
            *(undefined4 *)(puVar7 + 1) = local_38;
            *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_14 >> 5) * 4) =
                 *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_14 >> 5) * 4) &
                 ~(1 << (bVar1 & 0x1f));
            local_40 = uVar4;
            local_38 = uVar3;
          }
          puVar7 = (undefined8 *)((ulong)local_14 * 0xc + *(long *)(param_1 + 4));
          *puVar7 = local_40;
          *(undefined4 *)(puVar7 + 1) = local_38;
        }
      }
      if (uVar8 < uVar9) {
        pvVar6 = realloc(*(void **)(param_1 + 4),(ulong)uVar8 * 0xc);
        *(void **)(param_1 + 4) = pvVar6;
      }
      free(*(void **)(param_1 + 2));
      *(void **)(param_1 + 2) = __s;
      *param_1 = uVar2;
      uVar4 = 0;
    }
  }
  return uVar4;
}



uint hash_table_insert_or_find_long
               (undefined4 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  uint local_c;
  
  if (*(long *)(param_1 + 4) == 0) {
    local_c = 0;
  }
  else {
    local_c = 1 << ((byte)*param_1 & 0x1f);
  }
  *param_4 = 0xffffffff;
  if ((local_c >> 2) + (local_c >> 1) <= (uint)param_1[1]) {
    iVar2 = hash_table_resize(param_1,local_c + 1);
    if (iVar2 < 0) {
      return local_c;
    }
    local_c = 1 << ((byte)*param_1 & 0x1f);
  }
  uVar3 = fibonacci_hash_top_bits(param_3,*param_1);
  local_10 = uVar3;
  do {
    if (((*(uint *)(*(long *)(param_1 + 2) + (ulong)(local_10 >> 5) * 4) >> ((byte)local_10 & 0x1f)
         & 1) == 0) ||
       (puVar1 = (undefined8 *)(*(long *)(param_1 + 4) + (ulong)local_10 * 0xc),
       iVar2 = is_equal_long(*puVar1,*(undefined4 *)(puVar1 + 1),*param_2,
                             *(undefined4 *)(param_2 + 1)), iVar2 != 0)) break;
    local_10 = local_10 + 1 & local_c - 1;
  } while (local_10 != uVar3);
  if ((*(uint *)(*(long *)(param_1 + 2) + (ulong)(local_10 >> 5) * 4) >> ((byte)local_10 & 0x1f) & 1
      ) == 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 4) + (ulong)local_10 * 0xc);
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_10 >> 5) * 4) =
         *(uint *)(*(long *)(param_1 + 2) + (ulong)(local_10 >> 5) * 4) |
         1 << ((byte)local_10 & 0x1f);
    param_1[1] = param_1[1] + 1;
    *param_4 = 1;
  }
  else {
    *param_4 = 0;
  }
  return local_10;
}



void hash_table_insert(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = hash_mix64_wrapper(*param_2,*(undefined4 *)(param_2 + 1));
  hash_table_insert_or_find_long(param_1,param_2,uVar1,param_3);
  return;
}



void alloc_zeroed_24_bytes(void)

{
  alloc_zeroed_24();
  return;
}



void free_hash_table_entry(undefined8 param_1)

{
  free_struct(param_1);
  return;
}



void hash_table_insert_wrapper(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_14;
  
  local_14 = param_2;
  hash_table_insert(param_1,&local_14,param_3);
  return;
}



void alloc_size(size_t param_1)

{
  malloc(param_1);
  return;
}



void free_ptr(void *param_1)

{
  free(param_1);
  return;
}



void memcpy_wrapper(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return;
}



undefined4 get_uint_value(undefined4 *param_1)

{
  return *param_1;
}



void consume_uint_value(undefined8 param_1)

{
  get_uint_value(param_1);
  return;
}



uint byteswap32(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = get_uint_value(param_1);
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}



ulong get_or_consume_uint(uint *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 1) {
    uVar1 = consume_uint_value(param_1);
  }
  else {
    uVar1 = (ulong)*param_1;
  }
  return uVar1;
}



int mix32_fibonacci_hash(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 + param_2 * -0x7a143589;
  return (uVar1 * 0x2000 | uVar1 >> 0x13) * -0x61c8864f;
}



uint finalize_fibonacci_hash32(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 ^ param_1 >> 0xf) * -0x7a143589;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51c3;
  return uVar1 ^ uVar1 >> 0x10;
}



void init_fibonacci_hash_state(int *param_1,int param_2)

{
  *param_1 = param_2 + 0x24234428;
  param_1[1] = param_2 + -0x7a143589;
  param_1[2] = param_2;
  param_1[3] = param_2 + 0x61c8864f;
  return;
}



ulong mix_fibonacci_hash_block_32(undefined4 *param_1,ulong param_2,long param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulong local_30;
  
  local_30 = param_2;
  do {
    uVar1 = get_or_consume_uint(local_30,param_4);
    uVar1 = mix32_fibonacci_hash(*param_1,uVar1);
    *param_1 = uVar1;
    uVar1 = get_or_consume_uint(local_30 + 4,param_4);
    uVar1 = mix32_fibonacci_hash(param_1[1],uVar1);
    param_1[1] = uVar1;
    uVar1 = get_or_consume_uint(local_30 + 8,param_4);
    uVar1 = mix32_fibonacci_hash(param_1[2],uVar1);
    param_1[2] = uVar1;
    uVar1 = get_or_consume_uint(local_30 + 0xc,param_4);
    uVar1 = mix32_fibonacci_hash(param_1[3],uVar1);
    param_1[3] = uVar1;
    local_30 = local_30 + 0x10;
  } while (local_30 < (param_3 + param_2) - 0xf);
  return local_30;
}



int mix_four_ints(int *param_1)

{
  return ((uint)param_1[3] >> 0xe | param_1[3] << 0x12) +
         (*param_1 << 1 | (uint)(*param_1 < 0)) + (param_1[1] << 7 | (uint)param_1[1] >> 0x19) +
         (param_1[2] << 0xc | (uint)param_1[2] >> 0x14);
}



void fibonacci_hash_update_bytes(int param_1,byte *param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  ulong local_20;
  byte *local_18;
  int local_c;
  
  local_18 = param_2;
  local_c = param_1;
  for (local_20 = param_3 & 0xf; 3 < local_20; local_20 = local_20 - 4) {
    iVar2 = get_or_consume_uint(local_18,param_4);
    uVar1 = local_c + iVar2 * -0x3d4d51c3;
    local_18 = local_18 + 4;
    local_c = (uVar1 >> 0xf | uVar1 * 0x20000) * 0x27d4eb2f;
  }
  for (; local_20 != 0; local_20 = local_20 - 1) {
    uVar1 = local_c + (uint)*local_18 * 0x165667b1;
    local_c = (uVar1 * 0x800 | uVar1 >> 0x15) * -0x61c8864f;
    local_18 = local_18 + 1;
  }
  finalize_fibonacci_hash32(local_c);
  return;
}



void fibonacci_hash_update(undefined8 param_1,ulong param_2,int param_3,undefined4 param_4)

{
  undefined8 local_30;
  undefined1 local_28 [28];
  int local_c;
  
  if (param_2 < 0x10) {
    local_c = param_3 + 0x165667b1;
    local_30 = param_1;
  }
  else {
    init_fibonacci_hash_state(local_28,param_3);
    local_30 = mix_fibonacci_hash_block_32(local_28,param_1,param_2,param_4);
    local_c = mix_four_ints(local_28);
  }
  local_c = local_c + (uint)param_2;
  fibonacci_hash_update_bytes(local_c,local_30,(uint)param_2 & 0xf,param_4);
  return;
}



undefined8 return_uint64_ptr(undefined8 *param_1)

{
  return *param_1;
}



void noop_return_uint64_ptr(undefined8 param_1)

{
  return_uint64_ptr(param_1);
  return;
}



ulong byteswap_uint64(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = return_uint64_ptr(param_1);
  return uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
         (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
         (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
}



undefined8 noop_return_uint64_ptr(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 1) {
    uVar1 = noop_return_uint64_ptr(param_1);
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}



long fibonacci_mix64(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = param_1 + param_2 * -0x3d4d51c2d82b14b1;
  return (uVar1 * 0x80000000 | uVar1 >> 0x21) * -0x61c8864e7a143579;
}



long keyed_fibonacci_mix64(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = fibonacci_mix64(0,param_2);
  return (param_1 ^ uVar1) * -0x61c8864e7a143579 + -0x7a1435883d4d519d;
}



ulong mix64_murmur_final(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (param_1 ^ param_1 >> 0x21) * -0x3d4d51c2d82b14b1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1d) * 0x165667b19e3779f9;
  return uVar1 ^ uVar1 >> 0x20;
}



void init_xoroshiro_state(long *param_1,long param_2)

{
  *param_1 = param_2 + 0x60ea27eeadc0b5d6;
  param_1[1] = param_2 + -0x3d4d51c2d82b14b1;
  param_1[2] = param_2;
  param_1[3] = param_2 + 0x61c8864e7a143579;
  return;
}



ulong mix_32byte_blocks(undefined8 *param_1,ulong param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ulong local_30;
  
  local_30 = param_2;
  do {
    uVar1 = noop_return_uint64_ptr(local_30,param_4);
    uVar1 = fibonacci_mix64(*param_1,uVar1);
    *param_1 = uVar1;
    uVar1 = noop_return_uint64_ptr(local_30 + 8,param_4);
    uVar1 = fibonacci_mix64(param_1[1],uVar1);
    param_1[1] = uVar1;
    uVar1 = noop_return_uint64_ptr(local_30 + 0x10,param_4);
    uVar1 = fibonacci_mix64(param_1[2],uVar1);
    param_1[2] = uVar1;
    uVar1 = noop_return_uint64_ptr(local_30 + 0x18,param_4);
    uVar1 = fibonacci_mix64(param_1[3],uVar1);
    param_1[3] = uVar1;
    local_30 = local_30 + 0x20;
  } while (local_30 < (param_3 + param_2) - 0x1f);
  return local_30;
}



undefined8 mix_four_uint64_keyed(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = keyed_fibonacci_mix64
                    ((param_1[3] << 0x12 | (ulong)param_1[3] >> 0x2e) +
                     (*param_1 << 1 | (ulong)(*param_1 < 0)) +
                     (param_1[1] << 7 | (ulong)param_1[1] >> 0x39) +
                     (param_1[2] << 0xc | (ulong)param_1[2] >> 0x34),*param_1);
  uVar1 = keyed_fibonacci_mix64(uVar1,param_1[1]);
  uVar1 = keyed_fibonacci_mix64(uVar1,param_1[2]);
  uVar1 = keyed_fibonacci_mix64(uVar1,param_1[3]);
  return uVar1;
}



void mix_bytes_with_bounds(ulong param_1,byte *param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong local_30;
  byte *local_28;
  ulong local_20;
  
  local_28 = param_2;
  local_20 = param_1;
  for (local_30 = param_3 & 0x1f; 7 < local_30; local_30 = local_30 - 8) {
    uVar2 = noop_return_uint64_ptr(local_28,param_4);
    uVar3 = fibonacci_mix64(0,uVar2);
    local_28 = local_28 + 8;
    local_20 = ((local_20 ^ uVar3) << 0x1b | (local_20 ^ uVar3) >> 0x25) * -0x61c8864e7a143579 +
               0x85ebca77c2b2ae63;
  }
  if (3 < local_30) {
    uVar1 = get_or_consume_uint(local_28,param_4);
    local_20 = local_20 ^ (ulong)uVar1 * -0x61c8864e7a143579;
    local_20 = (local_20 << 0x17 | local_20 >> 0x29) * -0x3d4d51c2d82b14b1 + 0x165667b19e3779f9;
    local_30 = local_30 - 4;
    local_28 = local_28 + 4;
  }
  for (; local_30 != 0; local_30 = local_30 - 1) {
    local_20 = local_20 ^ (ulong)*local_28 * 0x27d4eb2f165667c5;
    local_20 = (local_20 << 0xb | local_20 >> 0x35) * -0x61c8864e7a143579;
    local_28 = local_28 + 1;
  }
  mix64_murmur_final(local_20);
  return;
}



void hash_or_mix_bytes(undefined8 param_1,ulong param_2,long param_3,undefined4 param_4)

{
  undefined8 local_40;
  undefined1 local_38 [40];
  long local_10;
  
  if (param_2 < 0x20) {
    local_10 = param_3 + 0x27d4eb2f165667c5;
    local_40 = param_1;
  }
  else {
    init_xoroshiro_state(local_38,param_3);
    local_40 = mix_32byte_blocks(local_38,param_1,param_2,param_4);
    local_10 = mix_four_uint64_keyed(local_38);
  }
  local_10 = local_10 + param_2;
  mix_bytes_with_bounds(local_10,local_40,param_2,param_4);
  return;
}



undefined1  [16] mul128_from_two64(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar1 * auVar2;
}



ulong xor_fold_128_to_64(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = mul128_from_two64(param_1,param_2);
  return auVar1._8_8_ ^ auVar1._0_8_;
}



ulong xor_shift64(ulong param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x3f) ^ param_1;
}



undefined8 mix64_xorshift_mul(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = xor_shift64(param_1,0x25);
  uVar2 = xor_shift64(lVar1 * 0x165667919e3779f9,0x20);
  return uVar2;
}



void mix64_xorshift_blend(ulong param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (param_1 ^ (param_1 << 0x18 | param_1 >> 0x28) ^ (param_1 >> 0xf | param_1 << 0x31)) *
          -0x604de39ae16720db;
  xor_shift64((uVar1 ^ param_2 + (uVar1 >> 0x23)) * -0x604de39ae16720db,0x1c);
  return;
}



void hash_bytes_with_seed(byte *param_1,ulong param_2,long param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = *param_1;
  bVar2 = param_1[param_2 >> 1];
  bVar3 = param_1[param_2 - 1];
  uVar4 = consume_uint_value(param_3);
  uVar5 = consume_uint_value(param_3 + 4);
  mix64_murmur_final((ulong)((int)param_2 << 8 |
                            (uint)bVar1 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar3) ^
                     param_4 + (ulong)(uVar5 ^ uVar4));
  return;
}



void mix64_bytes_with_bounds(long param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = (uint)param_4;
  uVar2 = consume_uint_value(param_1);
  uVar3 = consume_uint_value(param_1 + param_2 + -4);
  uVar4 = noop_return_uint64_ptr(param_3 + 8);
  uVar5 = noop_return_uint64_ptr(param_3 + 0x10);
  mix64_xorshift_blend
            (CONCAT44(uVar2,uVar3) ^
             (uVar5 ^ uVar4) -
             (param_4 ^
             (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                    ) << 0x20),param_2);
  return;
}



void fold_and_mix_edge_blocks_128_to_64(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = noop_return_uint64_ptr(param_3 + 0x18);
  uVar2 = noop_return_uint64_ptr(param_3 + 0x20);
  uVar3 = noop_return_uint64_ptr(param_3 + 0x28);
  uVar4 = noop_return_uint64_ptr(param_3 + 0x30);
  uVar5 = noop_return_uint64_ptr(param_1);
  uVar5 = uVar5 ^ param_4 + (uVar1 ^ uVar2);
  uVar1 = noop_return_uint64_ptr(param_1 + param_2 + -8);
  uVar1 = uVar1 ^ (uVar4 ^ uVar3) - param_4;
  lVar6 = xor_fold_128_to_64(uVar5,uVar1);
  mix64_xorshift_mul(lVar6 + (uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 |
                              (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8 |
                              (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
                              (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38) + param_2 + uVar1);
  return;
}



void adaptive_hash_bytes_128(undefined8 param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 < 9) {
    if (param_2 < 4) {
      if (param_2 == 0) {
        uVar1 = noop_return_uint64_ptr(param_3 + 0x38);
        uVar2 = noop_return_uint64_ptr(param_3 + 0x40);
        mix64_murmur_final(uVar2 ^ uVar1 ^ param_4);
      }
      else {
        hash_bytes_with_seed(param_1,param_2,param_3,param_4);
      }
    }
    else {
      mix64_bytes_with_bounds(param_1,param_2,param_3,param_4);
    }
  }
  else {
    fold_and_mix_edge_blocks_128_to_64(param_1,param_2,param_3,param_4);
  }
  return;
}



void xor_fold_and_combine_blocks_128_to_64(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = noop_return_uint64_ptr(param_1);
  uVar2 = noop_return_uint64_ptr(param_1 + 8);
  lVar3 = noop_return_uint64_ptr(param_2 + 8);
  lVar4 = noop_return_uint64_ptr(param_2);
  xor_fold_128_to_64(lVar4 + param_3 ^ uVar1,lVar3 - param_3 ^ uVar2);
  return;
}



void fold_and_mix_large_128bit_blocks
               (long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long local_10;
  
  local_10 = param_2 * -0x61c8864e7a143579;
  if (0x20 < param_2) {
    if (0x40 < param_2) {
      if (0x60 < param_2) {
        lVar1 = xor_fold_and_combine_blocks_128_to_64(param_1 + 0x30,param_3 + 0x60,param_5);
        lVar2 = xor_fold_and_combine_blocks_128_to_64
                          ((param_2 - 0x40) + param_1,param_3 + 0x70,param_5);
        local_10 = local_10 + lVar1 + lVar2;
      }
      lVar1 = xor_fold_and_combine_blocks_128_to_64(param_1 + 0x20,param_3 + 0x40,param_5);
      lVar2 = xor_fold_and_combine_blocks_128_to_64
                        ((param_2 - 0x30) + param_1,param_3 + 0x50,param_5);
      local_10 = local_10 + lVar1 + lVar2;
    }
    lVar1 = xor_fold_and_combine_blocks_128_to_64(param_1 + 0x10,param_3 + 0x20,param_5);
    lVar2 = xor_fold_and_combine_blocks_128_to_64((param_2 - 0x20) + param_1,param_3 + 0x30,param_5)
    ;
    local_10 = local_10 + lVar1 + lVar2;
  }
  lVar1 = xor_fold_and_combine_blocks_128_to_64(param_1,param_3,param_5);
  lVar2 = xor_fold_and_combine_blocks_128_to_64((param_2 - 0x10) + param_1,param_3 + 0x10,param_5);
  mix64_xorshift_mul(local_10 + lVar1 + lVar2);
  return;
}



void fold_and_mix_variable_128bit_blocks
               (long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  uint local_1c;
  long local_18;
  long local_10;
  
  local_10 = param_2 * -0x61c8864e7a143579;
  for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
    lVar1 = xor_fold_and_combine_blocks_128_to_64
                      ((ulong)(local_1c << 4) + param_1,(ulong)(local_1c << 4) + param_3,param_5);
    local_10 = local_10 + lVar1;
  }
  local_18 = xor_fold_and_combine_blocks_128_to_64
                       ((param_2 - 0x10) + param_1,param_3 + 0x77,param_5);
  lVar1 = mix64_xorshift_mul(local_10);
  for (local_1c = 8; local_1c < ((uint)(param_2 >> 4) & 0xfffffff); local_1c = local_1c + 1) {
    lVar2 = xor_fold_and_combine_blocks_128_to_64
                      ((ulong)(local_1c << 4) + param_1,(ulong)((local_1c - 8) * 0x10) + 3 + param_3
                       ,param_5);
    local_18 = local_18 + lVar2;
  }
  mix64_xorshift_mul(local_18 + lVar1);
  return;
}



void store_uint64(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  memcpy_wrapper(param_1,&local_18,8);
  return;
}



void mix_four_blocks(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar9;
  undefined1 auVar8 [16];
  long lStack_80;
  ulong local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    puVar4 = (ulong *)(param_2 + local_10 * 0x10);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    puVar4 = (ulong *)(param_3 + local_10 * 0x10);
    uVar7 = *puVar4 ^ uVar1;
    uVar9 = puVar4[1] ^ uVar2;
    auVar8._8_4_ = (int)uVar1;
    auVar8._0_8_ = uVar2;
    auVar8._12_4_ = (int)(uVar1 >> 0x20);
    plVar5 = (long *)(param_1 + local_10 * 0x10);
    lVar3 = plVar5[1];
    lStack_80 = auVar8._8_8_;
    plVar6 = (long *)(param_1 + local_10 * 0x10);
    *plVar6 = uVar2 + *plVar5 + (uVar7 >> 0x20) * (uVar7 & 0xffffffff);
    plVar6[1] = lStack_80 + lVar3 + (uVar9 >> 0x20) * (uVar9 & 0xffffffff);
  }
  return;
}



void mix_64byte_blocks(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 local_10;
  
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
    mix_four_blocks(param_1,param_2 + local_10 * 0x40,local_10 * 8 + param_3);
  }
  return;
}



void mix_four_128bit_blocks(long param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    puVar1 = (ulong *)(param_1 + local_10 * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    puVar1 = (ulong *)(param_2 + local_10 * 0x10);
    uVar3 = *puVar1 ^ uVar3 >> 0x2f ^ uVar3;
    uVar4 = puVar1[1] ^ uVar4 >> 0x2f ^ uVar4;
    plVar2 = (long *)(param_1 + local_10 * 0x10);
    *plVar2 = ((uVar3 >> 0x20) * 0x9e3779b1 << 0x20) + (uVar3 & 0xffffffff) * 0x9e3779b1;
    plVar2[1] = (uVar4 >> 0x20) * 0x9e3779b1 + (uVar4 & 0xffffffff) * 0x9e3779b1;
  }
  return;
}



void initialize_12_blocks_with_constants(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  int local_c;
  
  for (local_c = 0; local_c < 0xc; local_c = local_c + 1) {
    lVar1 = *(long *)(&UNK_00415048 + (long)local_c * 0x10);
    plVar2 = (long *)(param_1 + (long)local_c * 0x10);
    *plVar2 = param_2 + *(long *)(&DAT_00415040 + (long)local_c * 0x10);
    plVar2[1] = lVar1 - param_2;
  }
  return;
}



long mul32_add64(ulong param_1,ulong param_2,long param_3)

{
  return param_3 + (param_1 & 0xffffffff) * (param_2 & 0xffffffff);
}



void mix_two_64bit_blocks(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = noop_return_uint64_ptr(param_2 + param_4 * 8);
  uVar2 = noop_return_uint64_ptr(param_3 + param_4 * 8);
  *(ulong *)(param_1 + (param_4 ^ 1) * 8) = uVar1 + *(long *)(param_1 + (param_4 ^ 1) * 8);
  uVar3 = mul32_add64(uVar2 ^ uVar1,(uVar2 ^ uVar1) >> 0x20,*(undefined8 *)(param_1 + param_4 * 8));
  *(undefined8 *)(param_4 * 8 + param_1) = uVar3;
  return;
}



void mix_eight_64bit_blocks(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    mix_two_64bit_blocks(param_1,param_2,param_3,local_10);
  }
  return;
}



void mix_64bit_blocks_loop(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 local_10;
  
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
    mix_eight_64bit_blocks(param_1,param_2 + local_10 * 0x40,local_10 * 8 + param_3);
  }
  return;
}



void mix_array_element_64(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = noop_return_uint64_ptr(param_2 + param_3 * 8);
  uVar2 = xor_shift64(*(undefined8 *)(param_1 + param_3 * 8),0x2f);
  *(ulong *)(param_3 * 8 + param_1) = (uVar2 ^ uVar1) * 0x9e3779b1;
  return;
}



void mix_8_array_elements_64(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    mix_array_element_64(param_1,param_2,local_10);
  }
  return;
}



void initialize_constants_with_offset(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int local_c;
  
  for (local_c = 0; local_c < 0xc; local_c = local_c + 1) {
    lVar1 = noop_return_uint64_ptr(&DAT_00415040 + (local_c << 4));
    lVar2 = noop_return_uint64_ptr(&UNK_00415048 + (local_c << 4));
    store_uint64((local_c << 4) + param_1,lVar1 + param_2);
    store_uint64((long)(local_c << 4) + 8 + param_1,lVar2 - param_2);
  }
  return;
}



void process_and_mix_blocks
               (undefined8 param_1,long param_2,long param_3,long param_4,long param_5,code *param_6
               ,code *param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_10;
  
  uVar1 = param_5 - 0x40U >> 3;
  uVar2 = uVar1 * 0x40;
  uVar3 = (param_3 - 1U) / uVar2;
  for (local_10 = 0; local_10 < uVar3; local_10 = local_10 + 1) {
    (*param_6)(param_1,local_10 * uVar2 + param_2,param_4,uVar1);
    (*param_7)(param_1,param_5 + -0x40 + param_4);
  }
  (*param_6)(param_1,uVar3 * uVar2 + param_2,param_4,(param_3 - uVar2 * uVar3) - 1 >> 6);
  mix_four_blocks(param_1,param_2 + param_3 + -0x40,param_5 + -0x47 + param_4);
  return;
}



void xor_fold_blocks_128_to_64(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1[1];
  uVar3 = noop_return_uint64_ptr(param_2 + 8);
  uVar2 = *param_1;
  uVar4 = noop_return_uint64_ptr(param_2);
  xor_fold_128_to_64(uVar4 ^ uVar2,uVar1 ^ uVar3);
  return;
}



void fold_and_mix_four_blocks_64(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = param_3;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    lVar1 = xor_fold_blocks_128_to_64(param_1 + local_18 * 0x10,local_18 * 0x10 + param_2);
    local_10 = local_10 + lVar1;
  }
  mix64_xorshift_mul(local_10);
  return;
}



void fold_and_mix_four_blocks_64_with_multiplier(undefined8 param_1,long param_2,long param_3)

{
  fold_and_mix_four_blocks_64(param_1,param_2 + 0xb,param_3 * -0x61c8864e7a143579);
  return;
}



void initialize_constants_and_mix_blocks_64
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = 0xc2b2ae3d;
  local_40 = 0x9e3779b185ebca87;
  local_38 = 0xc2b2ae3d27d4eb4f;
  local_30 = 0x165667b19e3779f9;
  local_28 = 0x85ebca77c2b2ae63;
  local_20 = 0x85ebca77;
  local_18 = 0x27d4eb2f165667c5;
  local_10 = 0x9e3779b1;
  process_and_mix_blocks(&local_48,param_1,param_2,param_3,param_4,param_5,param_6);
  fold_and_mix_four_blocks_64_with_multiplier(&local_48,param_3,param_2);
  return;
}



void initialize_constants_and_mix_64byte_blocks
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  initialize_constants_and_mix_blocks_64
            (param_1,param_2,param_4,param_5,mix_64byte_blocks,mix_four_128bit_blocks);
  return;
}



void mix_with_predefined_constants_64(undefined8 param_1,undefined8 param_2)

{
  initialize_constants_and_mix_blocks_64
            (param_1,param_2,&DAT_00415040,0xc0,mix_64byte_blocks,mix_four_128bit_blocks);
  return;
}



void initialize_and_mix_64byte_blocks
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,code *param_6)

{
  undefined1 local_c8 [192];
  
  if (param_3 == 0) {
    initialize_constants_and_mix_blocks_64(param_1,param_2,&DAT_00415040,0xc0,param_4,param_5);
  }
  else {
    (*param_6)(local_c8,param_3);
    initialize_constants_and_mix_blocks_64(param_1,param_2,local_c8,0xc0,param_4,param_5);
  }
  return;
}



void initialize_and_mix_64byte_blocks_with_constants
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  initialize_and_mix_64byte_blocks
            (param_1,param_2,param_3,mix_64byte_blocks,mix_four_128bit_blocks,
             initialize_12_blocks_with_constants);
  return;
}



void hash_or_fold_128bit_blocks_dispatch
               (undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,code *param_6)

{
  if (param_2 < 0x11) {
    adaptive_hash_bytes_128(param_1,param_2,param_4,param_3);
  }
  else if (param_2 < 0x81) {
    fold_and_mix_large_128bit_blocks(param_1,param_2,param_4,param_5,param_3);
  }
  else if (param_2 < 0xf1) {
    fold_and_mix_variable_128bit_blocks(param_1,param_2,param_4,param_5,param_3);
  }
  else {
    (*param_6)(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



void hash_bytes_with_constants(undefined8 param_1,undefined8 param_2)

{
  hash_or_fold_128bit_blocks_dispatch
            (param_1,param_2,0,&DAT_00415040,0xc0,mix_with_predefined_constants_64);
  return;
}



long allocate_and_store_size_byte(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = alloc_size(param_2 + param_1);
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    param_2 = param_2 - (param_2 - 1U & uVar1);
    lVar2 = param_2 + uVar1;
    *(char *)(lVar2 + -1) = (char)param_2;
  }
  return lVar2;
}



void free_aligned_block(long param_1)

{
  if (param_1 != 0) {
    free_ptr(param_1 - (ulong)*(byte *)(param_1 + -1));
  }
  return;
}



void initialize_hash_state(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  memset(param_1 + 0x40,0,0x18);
  *param_1 = 0xc2b2ae3d;
  param_1[1] = 0x9e3779b185ebca87;
  param_1[2] = 0xc2b2ae3d27d4eb4f;
  param_1[3] = 0x165667b19e3779f9;
  param_1[4] = 0x85ebca77c2b2ae63;
  param_1[5] = 0x85ebca77;
  param_1[6] = 0x27d4eb2f165667c5;
  param_1[7] = 0x9e3779b1;
  param_1[0x45] = param_2;
  *(uint *)((long)param_1 + 0x204) = (uint)(param_2 != 0);
  param_1[0x47] = param_3;
  param_1[0x44] = param_4 + -0x40;
  param_1[0x43] = (ulong)param_1[0x44] >> 3;
  return;
}



long process_and_fold_blocks
               (undefined8 param_1,long *param_2,ulong param_3,long param_4,ulong param_5,
               long param_6,long param_7,code *param_8,code *param_9)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = param_6 + *param_2 * 8;
  local_40 = param_5;
  local_38 = param_4;
  if (param_3 - *param_2 <= param_5) {
    local_18 = param_3 - *param_2;
    do {
      (*param_8)(param_1,local_38,local_10,local_18);
      (*param_9)(param_1,param_6 + param_7);
      local_38 = local_38 + local_18 * 0x40;
      local_40 = local_40 - local_18;
      local_18 = param_3;
      local_10 = param_6;
    } while (param_3 <= local_40);
    *param_2 = 0;
  }
  if (local_40 != 0) {
    (*param_8)(param_1,local_38,local_10,local_40);
    local_38 = local_38 + local_40 * 0x40;
    *param_2 = *param_2 + local_40;
  }
  return local_38;
}



undefined8
buffered_hash_update(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long local_78;
  undefined1 local_68 [64];
  ulong local_28;
  ulong local_20;
  long local_18;
  long local_10;
  
  if (param_2 != 0) {
    local_10 = param_3 + param_2;
    if (*(long *)(param_1 + 0x238) == 0) {
      local_18 = param_1 + 0x40;
    }
    else {
      local_18 = *(long *)(param_1 + 0x238);
    }
    memcpy_wrapper(local_68,param_1,0x40);
    *(ulong *)(param_1 + 0x210) = *(long *)(param_1 + 0x210) + param_3;
    if (0x100 - *(int *)(param_1 + 0x200) < param_3) {
      local_78 = param_2;
      if (*(int *)(param_1 + 0x200) != 0) {
        local_20 = (ulong)(0x100 - *(int *)(param_1 + 0x200));
        memcpy_wrapper(param_1 + 0x100 + (ulong)*(uint *)(param_1 + 0x200),param_2,local_20);
        local_78 = param_2 + local_20;
        process_and_fold_blocks
                  (local_68,param_1 + 0x208,*(undefined8 *)(param_1 + 0x218),param_1 + 0x100,4,
                   local_18,*(undefined8 *)(param_1 + 0x220),param_4,param_5);
        *(undefined4 *)(param_1 + 0x200) = 0;
      }
      if (0x100 < local_10 - local_78) {
        local_28 = (ulong)((local_10 + -1) - local_78) >> 6;
        local_78 = process_and_fold_blocks
                             (local_68,param_1 + 0x208,*(undefined8 *)(param_1 + 0x218),local_78,
                              local_28,local_18,*(undefined8 *)(param_1 + 0x220),param_4,param_5);
        memcpy_wrapper(param_1 + 0x1c0,local_78 + -0x40,0x40);
      }
      memcpy_wrapper(param_1 + 0x100,local_78,local_10 - local_78);
      *(int *)(param_1 + 0x200) = (int)local_10 - (int)local_78;
      memcpy_wrapper(param_1,local_68,0x40);
    }
    else {
      memcpy_wrapper(param_1 + 0x100 + (ulong)*(uint *)(param_1 + 0x200),param_2,param_3);
      *(int *)(param_1 + 0x200) = (int)param_3 + *(int *)(param_1 + 0x200);
    }
  }
  return 0;
}



void finalize_and_mix_blocks_128(undefined8 param_1,long param_2,long param_3)

{
  undefined8 local_70;
  undefined1 local_68 [72];
  ulong local_20;
  ulong local_18;
  undefined1 *local_10;
  
  memcpy_wrapper(param_1,param_2,0x40);
  if (*(uint *)(param_2 + 0x200) < 0x40) {
    local_18 = (ulong)(0x40 - *(int *)(param_2 + 0x200));
    memcpy_wrapper(local_68,param_2 + (0x200 - local_18),local_18);
    memcpy_wrapper(local_68 + local_18,param_2 + 0x100,*(undefined4 *)(param_2 + 0x200));
    local_10 = local_68;
  }
  else {
    local_20 = (ulong)(*(int *)(param_2 + 0x200) - 1U >> 6);
    local_70 = *(undefined8 *)(param_2 + 0x208);
    process_and_fold_blocks
              (param_1,&local_70,*(undefined8 *)(param_2 + 0x218),param_2 + 0x100,local_20,param_3,
               *(undefined8 *)(param_2 + 0x220),mix_64byte_blocks,mix_four_128bit_blocks);
    local_10 = (undefined1 *)((ulong)*(uint *)(param_2 + 0x200) + param_2 + 0xc0);
  }
  mix_four_blocks(param_1,local_10,*(long *)(param_2 + 0x220) + -7 + param_3);
  return;
}



undefined1  [16] murmur_fold_consume_128(byte *param_1,ulong param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  bVar1 = param_1[param_2 - 1];
  uVar3 = (int)param_2 << 8;
  uVar4 = uVar3 | (uint)*param_1 << 0x10 | (uint)param_1[param_2 >> 1] << 0x18 | (uint)bVar1;
  uVar3 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8;
  uVar5 = consume_uint_value(param_3);
  uVar6 = consume_uint_value(param_3 + 4);
  uVar7 = consume_uint_value(param_3 + 8);
  uVar8 = consume_uint_value(param_3 + 0xc);
  uVar9 = mix64_murmur_final((ulong)uVar4 ^ param_4 + (ulong)(uVar6 ^ uVar5));
  uVar10 = mix64_murmur_final((ulong)(uVar3 << 0xd | (uVar3 | (uint)bVar1 << 0x18) >> 0x13) ^
                              (ulong)(uVar8 ^ uVar7) - param_4);
  auVar2._8_8_ = uVar10;
  auVar2._0_8_ = uVar9;
  return auVar2;
}



undefined1  [16] fold_consume_xor_mul_128(long param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  uVar1 = (uint)param_4;
  uVar2 = consume_uint_value(param_1);
  uVar3 = consume_uint_value(param_1 + param_2 + -4);
  uVar4 = noop_return_uint64_ptr(param_3 + 0x10);
  uVar5 = noop_return_uint64_ptr(param_3 + 0x18);
  auVar9 = mul128_from_two64(CONCAT44(uVar3,uVar2) ^
                             (param_4 ^
                             (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8
                                    | uVar1 << 0x18) << 0x20) + (uVar4 ^ uVar5),
                             param_2 * 4 + -0x61c8864e7a143579);
  uVar4 = auVar9._8_8_ + auVar9._0_8_ * 2;
  lVar6 = xor_shift64(auVar9._0_8_ ^ uVar4 >> 3,0x23);
  uVar7 = xor_shift64(lVar6 * -0x604de39ae16720db,0x1c);
  uVar8 = mix64_xorshift_mul(uVar4);
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



undefined1  [16] fold_xor_consume_mul_mix_128(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  uVar1 = noop_return_uint64_ptr(param_3 + 0x20);
  uVar2 = noop_return_uint64_ptr(param_3 + 0x28);
  uVar3 = noop_return_uint64_ptr(param_3 + 0x30);
  uVar4 = noop_return_uint64_ptr(param_3 + 0x38);
  uVar5 = noop_return_uint64_ptr(param_1);
  uVar6 = noop_return_uint64_ptr(param_1 + param_2 + -8);
  auVar9 = mul128_from_two64(uVar5 ^ uVar6 ^ (uVar2 ^ uVar1) - param_4,0x9e3779b185ebca87);
  uVar6 = uVar6 ^ param_4 + (uVar3 ^ uVar4);
  uVar6 = auVar9._8_8_ + uVar6 + (uVar6 & 0xffffffff) * 0x85ebca76;
  auVar9 = mul128_from_two64((uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 |
                              (uVar6 & 0xff0000000000) >> 0x18 | (uVar6 & 0xff00000000) >> 8 |
                              (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
                              (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38) ^
                             auVar9._0_8_ + (param_2 + -1 << 0x36),0xc2b2ae3d27d4eb4f);
  uVar7 = mix64_xorshift_mul(auVar9._0_8_);
  uVar8 = mix64_xorshift_mul(uVar6 * -0x3d4d51c2d82b14b1 + auVar9._8_8_);
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



undefined8 adaptive_128bit_mix(undefined8 param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 < 9) {
    if (param_2 < 4) {
      if (param_2 == 0) {
        uVar2 = noop_return_uint64_ptr(param_3 + 0x40);
        uVar3 = noop_return_uint64_ptr(param_3 + 0x48);
        uVar4 = noop_return_uint64_ptr(param_3 + 0x50);
        uVar5 = noop_return_uint64_ptr(param_3 + 0x58);
        uVar1 = mix64_murmur_final(param_4 ^ uVar3 ^ uVar2);
        mix64_murmur_final(param_4 ^ uVar5 ^ uVar4);
      }
      else {
        uVar1 = murmur_fold_consume_128(param_1,param_2,param_3,param_4);
      }
    }
    else {
      uVar1 = fold_consume_xor_mul_128(param_1,param_2,param_3,param_4);
    }
  }
  else {
    uVar1 = fold_xor_consume_mul_mix_128(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}



undefined1  [16]
fold_and_xor_two_blocks_128_to_128
          (long param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = xor_fold_and_combine_blocks_128_to_64(param_3,param_5,param_6);
  lVar3 = noop_return_uint64_ptr(param_4);
  lVar4 = noop_return_uint64_ptr(param_4 + 8);
  lVar5 = xor_fold_and_combine_blocks_128_to_64(param_4,param_5 + 0x10,param_6);
  lVar6 = noop_return_uint64_ptr(param_3);
  lVar7 = noop_return_uint64_ptr(param_3 + 8);
  auVar1._8_8_ = lVar5 + param_2 ^ lVar6 + lVar7;
  auVar1._0_8_ = lVar2 + param_1 ^ lVar3 + lVar4;
  return auVar1;
}



undefined1  [16]
fold_mix_128_blocks_fixed_rounds
          (long param_1,ulong param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 local_18;
  undefined8 local_10;
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2 * -0x61c8864e7a143579;
  if (0x20 < param_2) {
    if (0x40 < param_2) {
      if (0x60 < param_2) {
        auVar4 = fold_and_xor_two_blocks_128_to_128
                           (param_2 * -0x61c8864e7a143579,0,param_1 + 0x30,
                            (param_2 - 0x40) + param_1,param_3 + 0x60,param_5);
      }
      local_10 = auVar4._8_8_;
      local_18 = auVar4._0_8_;
      auVar4 = fold_and_xor_two_blocks_128_to_128
                         (local_18,local_10,param_1 + 0x20,(param_2 - 0x30) + param_1,param_3 + 0x40
                          ,param_5);
    }
    local_10 = auVar4._8_8_;
    local_18 = auVar4._0_8_;
    auVar4 = fold_and_xor_two_blocks_128_to_128
                       (local_18,local_10,param_1 + 0x10,(param_2 - 0x20) + param_1,param_3 + 0x20,
                        param_5);
  }
  local_10 = auVar4._8_8_;
  local_18 = auVar4._0_8_;
  auVar4 = fold_and_xor_two_blocks_128_to_128
                     (local_18,local_10,param_1,(param_2 - 0x10) + param_1,param_3,param_5);
  uVar2 = mix64_xorshift_mul(auVar4._8_8_ + auVar4._0_8_);
  lVar3 = mix64_xorshift_mul((param_2 - param_5) * -0x3d4d51c2d82b14b1 +
                             auVar4._0_8_ * -0x61c8864e7a143579 + auVar4._8_8_ * -0x7a1435883d4d519d
                            );
  auVar1._8_8_ = -lVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



undefined1  [16]
fold_mix_128_blocks_variable_rounds
          (long param_1,ulong param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 local_28;
  undefined8 local_20;
  uint local_c;
  
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2 * -0x61c8864e7a143579;
  local_c = 0x20;
  while( true ) {
    local_20 = auVar6._8_8_;
    local_28 = auVar6._0_8_;
    if (0x9f < local_c) break;
    auVar6 = fold_and_xor_two_blocks_128_to_128
                       (local_28,local_20,((ulong)local_c - 0x20) + param_1,
                        ((ulong)local_c - 0x10) + param_1,((ulong)local_c - 0x20) + param_3,param_5)
    ;
    local_c = local_c + 0x20;
  }
  uVar2 = mix64_xorshift_mul(local_28);
  uVar3 = mix64_xorshift_mul(local_20);
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar2;
  local_c = 0xa0;
  while( true ) {
    local_20 = auVar5._8_8_;
    local_28 = auVar5._0_8_;
    if (param_2 < local_c) break;
    auVar5 = fold_and_xor_two_blocks_128_to_128
                       (local_28,local_20,((ulong)local_c - 0x20) + param_1,
                        ((ulong)local_c - 0x10) + param_1,((ulong)local_c - 0x9d) + param_3,param_5)
    ;
    local_c = local_c + 0x20;
  }
  auVar6 = fold_and_xor_two_blocks_128_to_128
                     (local_28,local_20,(param_2 - 0x10) + param_1,(param_2 - 0x20) + param_1,
                      param_3 + 0x67,-param_5);
  uVar2 = mix64_xorshift_mul(auVar6._8_8_ + auVar6._0_8_);
  lVar4 = mix64_xorshift_mul((param_2 - param_5) * -0x3d4d51c2d82b14b1 +
                             auVar6._0_8_ * -0x61c8864e7a143579 + auVar6._8_8_ * -0x7a1435883d4d519d
                            );
  auVar1._8_8_ = -lVar4;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



undefined1  [16]
fold_and_mix_two_64bit_blocks(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = fold_and_mix_four_blocks_64_with_multiplier(param_1,param_2,param_4);
  uVar3 = fold_and_mix_four_blocks_64
                    (param_1,param_3 + -0x4b + param_2,~(param_4 * -0x3d4d51c2d82b14b1));
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



void process_and_fold_mix_blocks_128
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = 0xc2b2ae3d;
  local_40 = 0x9e3779b185ebca87;
  local_38 = 0xc2b2ae3d27d4eb4f;
  local_30 = 0x165667b19e3779f9;
  local_28 = 0x85ebca77c2b2ae63;
  local_20 = 0x85ebca77;
  local_18 = 0x27d4eb2f165667c5;
  local_10 = 0x9e3779b1;
  process_and_mix_blocks(&local_48,param_1,param_2,param_3,param_4,param_5,param_6);
  fold_and_mix_two_64bit_blocks(&local_48,param_3,param_4,param_2);
  return;
}



void fold_and_mix_128bit_blocks_with_constants(undefined8 param_1,undefined8 param_2)

{
  process_and_fold_mix_blocks_128
            (param_1,param_2,&DAT_00415040,0xc0,mix_64byte_blocks,mix_four_128bit_blocks);
  return;
}



void process_and_fold_128bit_blocks
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  process_and_fold_mix_blocks_128
            (param_1,param_2,param_4,param_5,mix_64byte_blocks,mix_four_128bit_blocks);
  return;
}



void conditional_process_and_fold_blocks_128
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,code *param_6)

{
  undefined1 local_c8 [192];
  
  if (param_3 == 0) {
    process_and_fold_mix_blocks_128(param_1,param_2,&DAT_00415040,0xc0,param_4,param_5);
  }
  else {
    (*param_6)(local_c8,param_3);
    process_and_fold_mix_blocks_128(param_1,param_2,local_c8,0xc0,param_4,param_5);
  }
  return;
}



void process_or_fold_128bit_blocks(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  conditional_process_and_fold_blocks_128
            (param_1,param_2,param_3,mix_64byte_blocks,mix_four_128bit_blocks,
             initialize_12_blocks_with_constants);
  return;
}



void dispatch_128bit_mix(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,code *param_6)

{
  if (param_2 < 0x11) {
    adaptive_128bit_mix(param_1,param_2,param_4,param_3);
  }
  else if (param_2 < 0x81) {
    fold_mix_128_blocks_fixed_rounds(param_1,param_2,param_4,param_5,param_3);
  }
  else if (param_2 < 0xf1) {
    fold_mix_128_blocks_variable_rounds(param_1,param_2,param_4,param_5,param_3);
  }
  else {
    (*param_6)(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



void xor_update_two_u64(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = noop_return_uint64_ptr(param_1);
  store_uint64(param_1,param_2 ^ uVar1);
  uVar1 = noop_return_uint64_ptr(param_1 + 8);
  store_uint64(param_1 + 8,param_3 ^ uVar1);
  return;
}



void print_fuse_capabilities(uint *param_1)

{
  undefined8 uVar1;
  
  uVar1 = fuse_pkgversion();
  printf("FUSE library version %s\n",uVar1);
  fuse_lowlevel_version();
  printf("Protocol version: %d.%d\n",(ulong)*param_1,(ulong)param_1[1]);
  puts("Capabilities:");
  if ((param_1[5] & 1) != 0) {
    puts("\tFUSE_CAP_ASYNC_READ");
  }
  if ((param_1[5] & 2) != 0) {
    puts("\tFUSE_CAP_POSIX_LOCKS");
  }
  if ((param_1[5] & 8) != 0) {
    puts("\tFUSE_CAP_ATOMIC_O_TRUNC");
  }
  if ((param_1[5] & 0x10) != 0) {
    puts("\tFUSE_CAP_EXPORT_SUPPORT");
  }
  if ((param_1[5] & 0x40) != 0) {
    puts("\tFUSE_CAP_DONT_MASK");
  }
  if ((param_1[5] & 0x100) != 0) {
    puts("\tFUSE_CAP_SPLICE_MOVE");
  }
  if ((param_1[5] & 0x200) != 0) {
    puts("\tFUSE_CAP_SPLICE_READ");
  }
  if ((param_1[5] & 0x80) != 0) {
    puts("\tFUSE_CAP_SPLICE_WRITE");
  }
  if ((param_1[5] & 0x400) != 0) {
    puts("\tFUSE_CAP_FLOCK_LOCKS");
  }
  if ((param_1[5] & 0x800) != 0) {
    puts("\tFUSE_CAP_IOCTL_DIR");
  }
  if ((param_1[5] & 0x1000) != 0) {
    puts("\tFUSE_CAP_AUTO_INVAL_DATA");
  }
  if ((param_1[5] & 0x2000) != 0) {
    puts("\tFUSE_CAP_READDIRPLUS");
  }
  if ((param_1[5] & 0x4000) != 0) {
    puts("\tFUSE_CAP_READDIRPLUS_AUTO");
  }
  if ((param_1[5] & 0x8000) != 0) {
    puts("\tFUSE_CAP_ASYNC_DIO");
  }
  if ((param_1[5] & 0x10000) != 0) {
    puts("\tFUSE_CAP_WRITEBACK_CACHE");
  }
  if ((param_1[5] & 0x20000) != 0) {
    puts("\tFUSE_CAP_NO_OPEN_SUPPORT");
  }
  if ((param_1[5] & 0x40000) != 0) {
    puts("\tFUSE_CAP_PARALLEL_DIROPS");
  }
  if ((param_1[5] & 0x80000) != 0) {
    puts("\tFUSE_CAP_POSIX_ACL");
  }
  if ((param_1[5] & 0x800000) != 0) {
    puts("\tFUSE_CAP_CACHE_SYMLINKS");
  }
  if ((param_1[5] & 0x1000000) != 0) {
    puts("\tFUSE_CAP_NO_OPENDIR_SUPPORT");
  }
  if ((param_1[5] & 0x2000000) != 0) {
    puts("\tFUSE_CAP_EXPLICIT_INVAL_DATA");
  }
  if ((param_1[5] & 0x4000000) != 0) {
    puts("\tFUSE_CAP_EXPIRE_ONLY");
  }
  if ((param_1[5] & 0x8000000) != 0) {
    puts("\tFUSE_CAP_SETXATTR_EXT");
  }
  if ((param_1[5] & 0x100000) != 0) {
    puts("\tFUSE_CAP_HANDLE_KILLPRIV");
  }
  return;
}



// WARNING: Enum "__rlimit_resource": Some values do not have unique names

ulong set_nofile(uint param_1)

{
  int iVar1;
  rlimit64 local_18;
  
  iVar1 = getrlimit64(RLIMIT_NOFILE,&local_18);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("set_nofile");
    if (iVar1 != 0) {
      syslog(7,"debug: %s: getrlimit","set_nofile");
    }
    local_18.rlim_cur = 0xffffffff;
  }
  else {
    iVar1 = is_debug_enabled("set_nofile");
    if (iVar1 != 0) {
      syslog(7,"debug: %s: rlim_cur/rlim_max is %d/%d\n","set_nofile",local_18.rlim_cur & 0xffffffff
             ,local_18.rlim_max & 0xffffffff);
    }
    if (local_18.rlim_max < (ulong)(long)(int)param_1) {
      syslog(6,"set_nofile: setting rlim_max to %d\n",(ulong)param_1);
      local_18.rlim_cur = (rlim64_t)(int)param_1;
      local_18.rlim_max = local_18.rlim_cur;
      iVar1 = setrlimit64(RLIMIT_NOFILE,&local_18);
      if (iVar1 == -1) {
        iVar1 = is_debug_enabled("set_nofile");
        if (iVar1 != 0) {
          syslog(7,"debug: %s: setrlimit: %d","set_nofile",(ulong)param_1);
        }
        local_18.rlim_cur = 0xffffffff;
      }
      else {
        iVar1 = getrlimit64(RLIMIT_NOFILE,&local_18);
        if (iVar1 == -1) {
          iVar1 = is_debug_enabled("set_nofile");
          if (iVar1 != 0) {
            syslog(7,"debug: %s: getrlimit","set_nofile");
          }
          local_18.rlim_cur = 0xffffffff;
        }
        else {
          syslog(6,"set_nofile: rlim_cur/rlim_max is %d/%d\n",local_18.rlim_cur & 0xffffffff,
                 local_18.rlim_max & 0xffffffff);
        }
      }
    }
  }
  return local_18.rlim_cur;
}



undefined8 read_pool_config(undefined8 param_1,uint *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  char *local_28;
  char *local_20;
  int local_14;
  FILE *local_10;
  
  *param_2 = 0;
  *param_3 = 0;
  asprintf(&local_20,"/boot/config/pools/%s",param_1);
  local_10 = fopen64(local_20,"r");
  free(local_20);
  if (local_10 != (FILE *)0x0) {
    local_28 = (char *)0x0;
    local_30 = 0;
    while( true ) {
      local_14 = trimmed_getline(&local_28,&local_30,local_10);
      if (local_14 == -1) break;
      if (*local_28 != '#') {
        lVar2 = get_value_for_key(local_28,local_28,"diskShareEnabled");
        if (lVar2 == 0) {
          lVar2 = get_value_for_key(local_28,local_28,"diskShareFloor");
          if (lVar2 != 0) {
            uVar3 = parse_size_suffix(local_28);
            *param_3 = uVar3;
          }
        }
        else {
          iVar1 = strcmp(local_28,"yes");
          *param_2 = (uint)(iVar1 == 0);
        }
      }
    }
    free(local_28);
    fclose(local_10);
  }
  return 0;
}



undefined8 has_cfg_extension(long param_1)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen((char *)(param_1 + 0x13));
  if ((4 < (int)sVar2) &&
     (iVar1 = strcmp((char *)(param_1 + ((int)sVar2 + -4) + 0x13),".cfg"), iVar1 == 0)) {
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void read_config(ulong param_1)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  long lVar4;
  undefined8 local_168;
  int local_15c;
  undefined8 local_158;
  char *local_150;
  char local_148 [264];
  dirent64 **local_40;
  int local_34;
  uint local_30;
  int local_2c;
  FILE *local_28;
  char *local_20;
  ulong local_18;
  uint local_10;
  uint local_c;
  
  local_20 = "/boot/config/share.cfg";
  local_18 = 0;
  local_28 = fopen64("/boot/config/share.cfg","r");
  if (local_28 != (FILE *)0x0) {
    local_150 = (char *)0x0;
    local_158 = 0;
    while( true ) {
      local_2c = trimmed_getline(&local_150,&local_158,local_28);
      if (local_2c == -1) break;
      if (*local_150 != '#') {
        lVar4 = get_value_for_key(local_150,local_150,"shareUserExclusive");
        if (lVar4 == 0) {
          lVar4 = get_value_for_key(local_150,local_150,"fuse_useino");
          if (lVar4 == 0) {
            lVar4 = get_value_for_key(local_150,local_150,"fuse_directio");
            if (lVar4 == 0) {
              lVar4 = get_value_for_key(local_150,local_150,"shareNOFILE");
              if (lVar4 == 0) {
                lVar4 = get_value_for_key(local_150,local_150,"shfs_debug");
                if (lVar4 != 0) {
                  init_debug_modules(local_150);
                }
              }
              else {
                local_18 = __isoc23_strtol(local_150,0,10);
              }
            }
            else {
              iVar1 = strcmp(local_150,"yes");
              DAT_0041b5ac = (uint)(iVar1 == 0);
            }
          }
          else {
            iVar1 = strcmp(local_150,"yes");
            DAT_0041b380 = (uint)(iVar1 == 0);
          }
        }
        else {
          iVar1 = strcmp(local_150,"yes");
          DAT_0041b5a8 = (uint)(iVar1 == 0);
        }
      }
    }
    free(local_150);
    fclose(local_28);
  }
  local_30 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0041b580);
  if (local_30 != 0) {
    puVar2 = (uint *)__errno_location();
    syslog(3,"error: %s, %d: %m (%d): pthread_mutex_lock: %d","read_config",0x139,(ulong)*puVar2,
           (ulong)local_30);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  DAT_0041b5c0 = 0;
  _DAT_0041b5e0 = 0;
  local_c = 2;
  uRam000000000041b5f8 = 0;
  local_30 = 0;
  for (local_10 = 1; (int)local_10 < 0x1d; local_10 = local_10 + 1) {
    free(*(void **)(&DAT_0041b5e0 + (long)(int)local_c * 0x18));
    *(undefined8 *)(&DAT_0041b5e0 + (long)(int)local_c * 0x18) = 0;
    if ((param_1 >> ((byte)local_10 & 0x3f) & 1) != 0) {
      asprintf((char **)(&DAT_0041b5e0 + (long)(int)local_c * 0x18),"/mnt/disk%d",(ulong)local_10);
      *(undefined8 *)(&DAT_0041b5e8 + (long)(int)local_c * 0x18) = 0;
      iVar1 = is_debug_enabled("read_config");
      if (iVar1 != 0) {
        syslog(7,"debug: %s: branch[%d]: %s","read_config",(ulong)local_c,
               *(undefined8 *)(&DAT_0041b5e0 + (long)(int)local_c * 0x18));
      }
      DAT_0041b5c0 = DAT_0041b5c0 | 1L << ((byte)local_c & 0x3f);
    }
    local_c = local_c + 1;
  }
  pcVar3 = getcwd(local_148,0x104);
  pcVar3 = strstr(pcVar3,"user0");
  if (pcVar3 == (char *)0x0) {
    local_34 = scandir64("/boot/config/pools",&local_40,has_cfg_extension,versionsort64);
    if (local_34 < 0) {
      syslog(6,"scandir %m");
    }
    else {
      local_10 = 0;
      while ((int)local_10 < local_34) {
        if ((int)local_c < 0x40) {
          read_pool_config(local_40[(int)local_10]->d_name,&local_15c,&local_168);
          if (local_15c != 0) {
            free(*(void **)(&DAT_0041b5e0 + (long)(int)local_c * 0x18));
            asprintf((char **)(&DAT_0041b5e0 + (long)(int)local_c * 0x18),"/mnt/%s",
                     local_40[(int)local_10]->d_name);
            pcVar3 = strrchr(*(char **)(&DAT_0041b5e0 + (long)(int)local_c * 0x18),0x2e);
            *pcVar3 = '\0';
            *(undefined8 *)(&DAT_0041b5e8 + (long)(int)local_c * 0x18) = local_168;
            iVar1 = is_debug_enabled("read_config");
            if (iVar1 != 0) {
              syslog(7,"debug: %s: branch[%d]: %s floor: %llu","read_config",(ulong)local_c,
                     *(undefined8 *)(&DAT_0041b5e0 + (long)(int)local_c * 0x18),
                     *(undefined8 *)(&DAT_0041b5e8 + (long)(int)local_c * 0x18));
            }
            DAT_0041b5c0 = DAT_0041b5c0 | 1L << ((byte)local_c & 0x3f);
            local_c = local_c + 1;
          }
        }
        lVar4 = (long)(int)local_10;
        local_10 = local_10 + 1;
        free(local_40[lVar4]);
      }
      free(local_40);
    }
  }
  DAT_0041b5b8 = local_c;
  local_30 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0041b580);
  if (local_30 != 0) {
    puVar2 = (uint *)__errno_location();
    syslog(3,"error: %s, %d: %m (%d): pthread_mutex_unlock: %d","read_config",0x171,(ulong)*puVar2,
           (ulong)local_30);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  iVar1 = is_debug_enabled("read_config");
  if (iVar1 != 0) {
    syslog(7,"debug: %s: g_disk_mask: %lx","read_config",DAT_0041b5c0);
  }
  iVar1 = is_debug_enabled("read_config");
  if (iVar1 != 0) {
    syslog(7,"debug: %s: g_num_disks: %d","read_config",(ulong)DAT_0041b5b8);
  }
  set_nofile(local_18 & 0xffffffff);
  return;
}



void log_received_signal(uint param_1)

{
  syslog(6,"received signal %d",(ulong)param_1);
  return;
}



void log_share_config(long param_1)

{
  syslog(6,"share_path: %s",param_1);
  syslog(6,"include: %lu",*(undefined8 *)(param_1 + 0x108));
  syslog(6,"exclude: %lu",*(undefined8 *)(param_1 + 0x110));
  syslog(6,"use_cache: %i",(ulong)*(uint *)(param_1 + 0x118));
  syslog(6,"cache_pool: %s",param_1 + 0x11c);
  syslog(6,"cache_pool2: %s",param_1 + 0x220);
  syslog(6,"cache_pool_floor: %llu",*(undefined8 *)(param_1 + 0x328));
  syslog(6,"nocow: %i",(ulong)*(uint *)(param_1 + 0x330));
  syslog(6,"allocator: %s",param_1 + 0x334);
  syslog(6,"floor: %llu",*(undefined8 *)(param_1 + 0x438));
  syslog(6,"split_level: %i",(ulong)*(uint *)(param_1 + 0x440));
  syslog(6,"constrain: %s",param_1 + 0x444);
  syslog(6,"split0: %i",(ulong)*(uint *)(param_1 + 0x548));
  syslog(6,"nfs_export: %i",(ulong)*(uint *)(param_1 + 0x54c));
  syslog(6,"disk_mask: %lx",*(undefined8 *)(param_1 + 0x550));
  syslog(6,"refcount: %i",(ulong)*(uint *)(param_1 + 0x558));
  syslog(6,"should_free: %i",(ulong)*(uint *)(param_1 + 0x55c));
  return;
}



void find_and_set_cache_disk(long param_1)

{
  int iVar1;
  char *pcVar2;
  int local_14;
  char *local_10;
  
  local_10 = (char *)0x0;
  for (local_14 = 0x1e; local_14 < DAT_0041b5b8; local_14 = local_14 + 1) {
    iVar1 = check_file_mode(*(undefined8 *)(&DAT_0041b5e0 + (long)local_14 * 0x18),0x41c0);
    if (iVar1 != 0) {
      local_10 = strrchr(*(char **)(&DAT_0041b5e0 + (long)local_14 * 0x18),0x2f);
      local_10 = local_10 + 1;
      local_14 = local_14 + 1;
      break;
    }
  }
  if ((local_10 != (char *)0x0) && (iVar1 = strcmp(local_10,"cache"), iVar1 != 0)) {
    for (; local_14 < DAT_0041b5b8; local_14 = local_14 + 1) {
      pcVar2 = strrchr(*(char **)(&DAT_0041b5e0 + (long)local_14 * 0x18),0x2f);
      iVar1 = strcmp(pcVar2 + 1,"cache");
      if (iVar1 == 0) {
        iVar1 = check_file_mode(*(undefined8 *)(&DAT_0041b5e0 + (long)local_14 * 0x18),0x41c0);
        if (iVar1 != 0) {
          local_10 = "cache";
        }
        break;
      }
    }
  }
  if (local_10 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x440) = 1;
  }
  else {
    sprintf((char *)(param_1 + 0x11c),"/mnt/%s",local_10);
    *(undefined4 *)(param_1 + 0x118) = 2;
  }
  return;
}



char * malloc_share_info(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  char *local_140;
  undefined8 local_138;
  char *local_130;
  char local_128 [260];
  int local_24;
  FILE *local_20;
  char *local_18;
  int local_c;
  
  local_18 = (char *)calloc(1,0x560);
  if (local_18 == (char *)0x0) {
                    // WARNING: Subroutine does not return
    exit(1);
  }
  strcpy(local_18,param_1);
  iVar1 = strcmp(local_18,"/");
  if (iVar1 != 0) {
    snprintf(local_128,0x104,"/boot/config/shares/%s.cfg",local_18 + 1);
    local_20 = fopen64(local_128,"r");
    if (local_20 == (FILE *)0x0) {
      iVar1 = is_debug_enabled("malloc_share_info");
      if (iVar1 != 0) {
        syslog(7,"debug: %s: %s: %m","malloc_share_info",local_128);
      }
      find_and_set_cache_disk(local_18);
      local_18[0x55c] = '\x01';
      local_18[0x55d] = '\0';
      local_18[0x55e] = '\0';
      local_18[0x55f] = '\0';
    }
    else {
      local_130 = (char *)0x0;
      local_138 = 0;
      iVar1 = is_debug_enabled("malloc_share_info");
      if (iVar1 != 0) {
        syslog(7,"debug: %s: reading: %s","malloc_share_info",local_128);
      }
      while( true ) {
        local_24 = trimmed_getline(&local_130,&local_138,local_20);
        if (local_24 == -1) break;
        if (*local_130 != '#') {
          lVar3 = get_value_for_key(local_130,local_130,"shareInclude");
          if (lVar3 == 0) {
            lVar3 = get_value_for_key(local_130,local_130,"shareExclude");
            if (lVar3 == 0) {
              lVar3 = get_value_for_key(local_130,local_130,"shareUseCache");
              if (lVar3 == 0) {
                lVar3 = get_value_for_key(local_130,local_130,"shareCOW");
                if (lVar3 == 0) {
                  lVar3 = get_value_for_key(local_130,local_130,"shareCachePool");
                  if (lVar3 == 0) {
                    lVar3 = get_value_for_key(local_130,local_130,"shareCachePool2");
                    if (lVar3 == 0) {
                      lVar3 = get_value_for_key(local_130,local_130,"shareAllocator");
                      if (lVar3 == 0) {
                        lVar3 = get_value_for_key(local_130,local_130,"shareFloor");
                        if (lVar3 == 0) {
                          lVar3 = get_value_for_key(local_130,local_130,"shareSplitLevel");
                          if (lVar3 == 0) {
                            lVar3 = get_value_for_key(local_130,local_130,"shareExportNFS");
                            if (lVar3 != 0) {
                              iVar1 = strcmp(local_130,"e");
                              *(uint *)(local_18 + 0x54c) = (uint)(iVar1 == 0);
                              iVar1 = is_debug_enabled("malloc_share_info");
                              if (iVar1 != 0) {
                                syslog(7,"debug: %s: nfs_export: %d","malloc_share_info",
                                       (ulong)*(uint *)(local_18 + 0x54c));
                              }
                            }
                          }
                          else {
                            uVar2 = __isoc23_strtol(local_130,&local_140,10);
                            *(undefined4 *)(local_18 + 0x440) = uVar2;
                            if (*local_140 == '\0') {
                              if ((local_140 != local_130) && (*(int *)(local_18 + 0x440) == 0)) {
                                local_18[0x548] = '\x01';
                                local_18[0x549] = '\0';
                                local_18[0x54a] = '\0';
                                local_18[0x54b] = '\0';
                              }
                            }
                            else {
                              strcpy(local_18 + 0x444,local_130);
                              local_18[0x440] = '\0';
                              local_18[0x441] = '\0';
                              local_18[0x442] = '\0';
                              local_18[0x443] = '\0';
                            }
                            iVar1 = is_debug_enabled("malloc_share_info");
                            if (iVar1 != 0) {
                              syslog(7,"debug: %s: split_level: %d","malloc_share_info",
                                     (ulong)*(uint *)(local_18 + 0x440));
                            }
                            iVar1 = is_debug_enabled("malloc_share_info");
                            if (iVar1 != 0) {
                              syslog(7,"debug: %s: constrain: %s","malloc_share_info",
                                     local_18 + 0x444);
                            }
                            iVar1 = is_debug_enabled("malloc_share_info");
                            if (iVar1 != 0) {
                              syslog(7,"debug: %s: split0: %d","malloc_share_info",
                                     (ulong)*(uint *)(local_18 + 0x548));
                            }
                          }
                        }
                        else {
                          uVar4 = parse_size_suffix(local_130);
                          *(undefined8 *)(local_18 + 0x438) = uVar4;
                          iVar1 = is_debug_enabled("malloc_share_info");
                          if (iVar1 != 0) {
                            syslog(7,"debug: %s: floor: %lld","malloc_share_info",
                                   *(undefined8 *)(local_18 + 0x438));
                          }
                        }
                      }
                      else {
                        strcpy(local_18 + 0x334,local_130);
                        iVar1 = is_debug_enabled("malloc_share_info");
                        if (iVar1 != 0) {
                          syslog(7,"debug: %s: allocator: %s","malloc_share_info",local_18 + 0x334);
                        }
                      }
                    }
                    else {
                      if (*local_130 != '\0') {
                        sprintf(local_18 + 0x220,"/mnt/%s",local_130);
                      }
                      iVar1 = is_debug_enabled("malloc_share_info");
                      if (iVar1 != 0) {
                        syslog(7,"debug: %s: cache2: %s","malloc_share_info",local_18 + 0x220);
                      }
                    }
                  }
                  else {
                    if (*local_130 != '\0') {
                      sprintf(local_18 + 0x11c,"/mnt/%s",local_130);
                    }
                    iVar1 = is_debug_enabled("malloc_share_info");
                    if (iVar1 != 0) {
                      syslog(7,"debug: %s: cache: %s","malloc_share_info",local_18 + 0x11c);
                    }
                  }
                }
                else {
                  iVar1 = strcmp(local_130,"no");
                  if (iVar1 == 0) {
                    local_18[0x330] = '\x01';
                    local_18[0x331] = '\0';
                    local_18[0x332] = '\0';
                    local_18[0x333] = '\0';
                  }
                  iVar1 = is_debug_enabled("malloc_share_info");
                  if (iVar1 != 0) {
                    syslog(7,"debug: %s: nocow: %d","malloc_share_info",
                           (ulong)*(uint *)(local_18 + 0x330));
                  }
                }
              }
              else {
                iVar1 = strcmp(local_130,"yes");
                if (iVar1 == 0) {
                  local_18[0x118] = '\x01';
                  local_18[0x119] = '\0';
                  local_18[0x11a] = '\0';
                  local_18[0x11b] = '\0';
                }
                else {
                  iVar1 = strcmp(local_130,"only");
                  if (iVar1 == 0) {
                    local_18[0x118] = '\x02';
                    local_18[0x119] = '\0';
                    local_18[0x11a] = '\0';
                    local_18[0x11b] = '\0';
                  }
                  else {
                    iVar1 = strcmp(local_130,"prefer");
                    if (iVar1 == 0) {
                      local_18[0x118] = '\x03';
                      local_18[0x119] = '\0';
                      local_18[0x11a] = '\0';
                      local_18[0x11b] = '\0';
                    }
                  }
                }
                iVar1 = is_debug_enabled("malloc_share_info");
                if (iVar1 != 0) {
                  syslog(7,"debug: %s: use_cache: %d","malloc_share_info",
                         (ulong)*(uint *)(local_18 + 0x118));
                }
              }
            }
            else {
              uVar4 = parse_disk_bitmask(local_130);
              *(undefined8 *)(local_18 + 0x110) = uVar4;
              iVar1 = is_debug_enabled("malloc_share_info");
              if (iVar1 != 0) {
                syslog(7,"debug: %s: exclude: %lx","malloc_share_info",
                       *(undefined8 *)(local_18 + 0x110));
              }
            }
          }
          else {
            uVar4 = parse_disk_bitmask(local_130);
            *(undefined8 *)(local_18 + 0x108) = uVar4;
            iVar1 = is_debug_enabled("malloc_share_info");
            if (iVar1 != 0) {
              syslog(7,"debug: %s: include: %lx","malloc_share_info",
                     *(undefined8 *)(local_18 + 0x108));
            }
          }
        }
      }
      free(local_130);
      fclose(local_20);
      if ((*(int *)(local_18 + 0x118) != 0) && (local_18[0x11c] == '\0')) {
        builtin_strncpy(local_18 + 0x11c,"/mnt/cache",0xb);
      }
    }
  }
  *(undefined8 *)(local_18 + 0x550) = DAT_0041b5c0;
  if (*(int *)(local_18 + 0x118) != 0) {
    for (local_c = 0x1e; local_c < DAT_0041b5b8; local_c = local_c + 1) {
      iVar1 = strcmp(local_18 + 0x11c,*(char **)(&DAT_0041b5e0 + (long)local_c * 0x18));
      if (iVar1 == 0) {
        *(ulong *)(local_18 + 0x550) = *(ulong *)(local_18 + 0x550) | 1;
        *(ulong *)(local_18 + 0x550) =
             *(ulong *)(local_18 + 0x550) & ~(1L << ((byte)local_c & 0x3f));
        *(undefined8 *)(local_18 + 0x328) = *(undefined8 *)(&DAT_0041b5e8 + (long)local_c * 0x18);
      }
      else {
        iVar1 = strcmp(local_18 + 0x220,*(char **)(&DAT_0041b5e0 + (long)local_c * 0x18));
        if (iVar1 == 0) {
          *(ulong *)(local_18 + 0x550) = *(ulong *)(local_18 + 0x550) | 2;
          *(ulong *)(local_18 + 0x550) =
               *(ulong *)(local_18 + 0x550) & ~(1L << ((byte)local_c & 0x3f));
          *(undefined8 *)(local_18 + 0x328) = *(undefined8 *)(&DAT_0041b5e8 + (long)local_c * 0x18);
        }
      }
    }
  }
  return local_18;
}



int create_default_share_config_if_missing(long param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  char local_138 [272];
  char *local_28;
  FILE *local_20;
  char *local_18;
  char *local_10;
  
  local_18 = (char *)(param_1 + 1);
  local_10 = "";
  snprintf(local_138,0x104,"/boot/config/shares/%s.cfg",local_18);
  iVar1 = check_file_mode(local_138,0x8000);
  if (iVar1 == 0) {
    syslog(6,"creating %s",local_138);
    iVar1 = strcmp(local_18,"system");
    if (iVar1 == 0) {
      local_10 = "system data";
    }
    iVar1 = strcmp(local_18,"appdata");
    if (iVar1 == 0) {
      local_10 = "application data";
    }
    iVar1 = strcmp(local_18,"domains");
    if (iVar1 == 0) {
      local_10 = "saved VM instances";
    }
    iVar1 = strcmp(local_18,"isos");
    if (iVar1 == 0) {
      local_10 = "ISO images";
    }
    local_20 = fopen64(local_138,"w");
    if (local_20 == (FILE *)0x0) {
      puVar2 = (uint *)__errno_location();
      syslog(3,"error: %s, %d: %m (%d): fopen: %s","maybe_create_share_cfg",0x296,(ulong)*puVar2,
             local_138);
      piVar3 = __errno_location();
      iVar1 = -*piVar3;
    }
    else {
      fwrite("# Generated settings:\r\n",1,0x17,local_20);
      fprintf(local_20,"shareComment=\"%s\"\r\n",local_10);
      fprintf(local_20,"shareExport=\"%s\"\r\n",&DAT_004159ae);
      if (*(char *)(param_1 + 0x11c) == '\0') {
        fprintf(local_20,"shareSplitLevel=\"%s\"\r\n",&DAT_004159ee);
      }
      else {
        local_28 = strrchr((char *)(param_1 + 0x11c),0x2f);
        local_28 = local_28 + 1;
        fprintf(local_20,"shareCachePool=\"%s\"\r\n",local_28);
        fprintf(local_20,"shareUseCache=\"%s\"\r\n",&DAT_00415794);
      }
      fclose(local_20);
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



undefined8 copy_first_share_path_component(char *param_1,char *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  int local_c;
  
  if (*param_2 == '/') {
    *param_1 = *param_2;
    for (local_c = 1; (param_2[local_c] != '\0' && (param_2[local_c] != '/')); local_c = local_c + 1
        ) {
      if (local_c == 0x104) {
        puVar1 = (uint *)__errno_location();
        syslog(3,"error: %s, %d: %m (%d): path too long: %s","strcpy_share_path",0x2b8,
               (ulong)*puVar1,param_2);
        return 0xffffffff;
      }
      param_1[local_c] = param_2[local_c];
    }
    param_1[local_c] = '\0';
    uVar2 = 0;
  }
  else {
    puVar1 = (uint *)__errno_location();
    syslog(3,"error: %s, %d: %m (%d): path not absolute: %s","strcpy_share_path",0x2b0,
           (ulong)*puVar1,param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



long get_share_info(undefined8 param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int local_13c;
  undefined1 local_138 [272];
  uint local_28;
  uint local_24;
  long local_20;
  
  local_20 = 0;
  iVar1 = copy_first_share_path_component(local_138,param_1);
  if (iVar1 == -1) {
                    // WARNING: Subroutine does not return
    exit(1);
  }
  local_24 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0041b580);
  if (local_24 != 0) {
    puVar2 = (uint *)__errno_location();
    syslog(3,"error: %s, %d: %m (%d): pthread_mutex_lock: %d","get_share_info",0x2d3,(ulong)*puVar2,
           (ulong)local_24);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  local_28 = bloom_filter_insert_or_check_wrapper(DAT_0041b560,local_138);
  if (*(long *)(DAT_0041b560 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1 << ((byte)*DAT_0041b560 & 0x1f);
  }
  if (uVar3 == local_28) {
    local_20 = malloc_share_info(local_138);
    if (*(int *)(local_20 + 0x55c) == 0) {
      iVar1 = is_debug_enabled("get_share_info");
      if (iVar1 != 0) {
        syslog(7,"debug: %s: creating record: %s","get_share_info",local_138);
      }
      local_28 = hash_table_insert_with_fnv1a(DAT_0041b560,local_20,&local_13c);
      if (local_13c == 0) {
        puVar2 = (uint *)__errno_location();
        syslog(3,"error: %s, %d: %m (%d): mapstr_put failure: %s %d","get_share_info",0x2e5,
               (ulong)*puVar2,local_138,0);
                    // WARNING: Subroutine does not return
        exit(1);
      }
    }
  }
  else {
    iVar1 = is_debug_enabled("get_share_info");
    if (iVar1 != 0) {
      syslog(7,"debug: %s: retrieving record: %s","get_share_info",local_138);
    }
    local_20 = *(long *)((ulong)local_28 * 0xc + *(long *)(DAT_0041b560 + 4));
  }
  *(int *)(local_20 + 0x558) = *(int *)(local_20 + 0x558) + 1;
  iVar1 = is_debug_enabled("get_share_info");
  if (iVar1 != 0) {
    log_share_config(local_20);
  }
  local_24 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0041b580);
  if (local_24 != 0) {
    puVar2 = (uint *)__errno_location();
    syslog(3,"error: %s, %d: %m (%d): pthread_mutex_unlock: %d","get_share_info",0x2f8,
           (ulong)*puVar2,(ulong)local_24);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  return local_20;
}



void del_share_info(undefined8 param_1)

{
  void *__ptr;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  iVar1 = is_debug_enabled("del_share_info");
  if (iVar1 != 0) {
    syslog(7,"debug: %s: del_share_info: %s","del_share_info",param_1);
  }
  uVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0041b580);
  if (uVar2 != 0) {
    puVar3 = (uint *)__errno_location();
    syslog(3,"error: %s, %d: %m (%d): pthread_mutex_lock: %d","del_share_info",0x30b,(ulong)*puVar3,
           (ulong)uVar2);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  uVar2 = bloom_filter_insert_or_check_wrapper(DAT_0041b560,param_1);
  if (*(long *)(DAT_0041b560 + 4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1 << ((byte)*DAT_0041b560 & 0x1f);
  }
  if (uVar4 == uVar2) {
    iVar1 = is_debug_enabled("del_share_info");
    if (iVar1 != 0) {
      syslog(7,"debug: %s: already no record: %s","del_share_info",param_1);
    }
  }
  else {
    iVar1 = is_debug_enabled("del_share_info");
    if (iVar1 != 0) {
      syslog(7,"debug: %s: deleting record: %s","del_share_info",param_1);
    }
    __ptr = *(void **)((ulong)uVar2 * 0xc + *(long *)(DAT_0041b560 + 4));
    hash_table_remove_entry_wrapper(DAT_0041b560,uVar2);
    if (*(int *)((long)__ptr + 0x558) == 0) {
      free(__ptr);
    }
    else {
      *(undefined4 *)((long)__ptr + 0x55c) = 1;
    }
  }
  uVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0041b580);
  if (uVar2 != 0) {
    puVar3 = (uint *)__errno_location();
    syslog(3,"error: %s, %d: %m (%d): pthread_mutex_unlock: %d","del_share_info",0x324,
           (ulong)*puVar3,(ulong)uVar2);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  return;
}



void free_share_info(void *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_1 != (void *)0x0) {
    uVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0041b580);
    if (uVar1 != 0) {
      puVar2 = (uint *)__errno_location();
      syslog(3,"error: %s, %d: %m (%d): pthread_mutex_lock: %d","free_share_info",0x333,
             (ulong)*puVar2,(ulong)uVar1);
                    // WARNING: Subroutine does not return
      exit(1);
    }
    if (*(int *)((long)param_1 + 0x558) == 0) {
      puVar2 = (uint *)__errno_location();
      syslog(3,"error: %s, %d: %m (%d): refcount already 0","free_share_info",0x338,(ulong)*puVar2);
                    // WARNING: Subroutine does not return
      exit(1);
    }
    *(int *)((long)param_1 + 0x558) = *(int *)((long)param_1 + 0x558) + -1;
    if ((*(int *)((long)param_1 + 0x558) == 0) && (*(int *)((long)param_1 + 0x55c) != 0)) {
      free(param_1);
    }
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0041b580);
    if (uVar1 != 0) {
      puVar2 = (uint *)__errno_location();
      syslog(3,"error: %s, %d: %m (%d): pthread_mutex_unlock: %d","free_share_info",0x341,
             (ulong)*puVar2,(ulong)uVar1);
                    // WARNING: Subroutine does not return
      exit(1);
    }
  }
  return;
}



undefined8 is_item_included(long param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x108) == 0) ||
     ((*(ulong *)(param_1 + 0x108) >> (param_2 - 1U & 0x3f) & 1) != 0)) {
    if ((*(long *)(param_1 + 0x110) == 0) ||
       ((*(ulong *)(param_1 + 0x110) >> (param_2 - 1U & 0x3f) & 1) == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



size_t copy_path_after_prefix(char *param_1,char *param_2)

{
  size_t sVar1;
  char *pcVar2;
  
  *param_1 = '\0';
  sVar1 = strlen(param_2);
  if (sVar1 < 5) {
    sVar1 = 0;
  }
  else {
    param_2 = param_2 + 5;
    pcVar2 = strchr(param_2,0x2f);
    if (pcVar2 == (char *)0x0) {
      strcpy(param_1,param_2);
    }
    else {
      strncat(param_1,param_2,(long)pcVar2 - (long)param_2);
    }
    sVar1 = strlen(param_1);
  }
  return sVar1;
}



int enable_direct_io(char *param_1)

{
  int iVar1;
  uint local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_10 = open64(param_1,0x800);
  if (local_10 == -1) {
    local_c = -1;
  }
  else {
    iVar1 = ioctl(local_10,0x80086601,&local_14);
    if (iVar1 == -1) {
      close(local_10);
      local_c = -1;
    }
    else {
      local_14 = local_14 | 0x800000;
      local_c = ioctl(local_10,0x40086602,&local_14);
      close(local_10);
    }
  }
  return local_c;
}



char * pointer_to_third_path_component(char *param_1)

{
  char *local_20;
  int local_c;
  
  if (*param_1 == '/') {
    local_c = 1;
    local_20 = param_1;
    do {
      local_20 = local_20 + 1;
      if (*local_20 == '\0') goto LAB_0040a92c;
    } while ((*local_20 != '/') || (local_c = local_c + 1, local_c != 3));
  }
  else {
LAB_0040a92c:
    local_20 = (char *)0x0;
  }
  return local_20;
}



void exec_zfs_silent_single(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = open_path_or_exec("exec /usr/sbin/zfs %s \'%s\' 2>&1",param_1,param_2);
  consume_and_close_stream(uVar1);
  return;
}



void exec_zfs_silent(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = open_path_or_exec("exec /usr/sbin/zfs %s \'%s\' \'%s\' 2>&1",param_1,param_2,param_3);
  consume_and_close_stream(uVar1);
  return;
}



undefined8 get_fs_size_zfs(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined1 local_128 [264];
  long local_20;
  long local_18;
  long local_10;
  
  copy_path_after_prefix(local_128,param_1);
  local_10 = stream_open("exec /usr/sbin/zfs get -Hp -o value available,used %s 2>&1",local_128);
  iVar1 = read_trimmed_line(local_10);
  if (iVar1 == -1) {
    local_18 = 0;
  }
  else {
    local_18 = __isoc23_strtoull(*(undefined8 *)(local_10 + 8),0,10);
  }
  iVar1 = read_trimmed_line(local_10);
  if (iVar1 == -1) {
    local_20 = 0;
  }
  else {
    local_20 = __isoc23_strtoull(*(undefined8 *)(local_10 + 8),0,10);
  }
  *param_2 = local_18 + local_20;
  iVar1 = is_debug_enabled("get_fs_size_zfs");
  if (iVar1 != 0) {
    syslog(7,"debug: %s: %s: size %llu avail %llu used %llu","get_fs_size_zfs",local_128,*param_2,
           local_18,local_20);
  }
  consume_and_close_stream(local_10);
  return 0;
}



int mkdir_(char *param_1,long param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  uint *puVar4;
  statfs64 local_1a8;
  char local_128 [264];
  char *local_20;
  long local_18;
  int local_c;
  
  local_18 = get_root_from_path(local_128,param_1);
  pcVar2 = strchr((char *)(local_18 + 1),0x2f);
  if (pcVar2 == (char *)0x0) {
    local_c = statfs64(local_128,&local_1a8);
    if (local_c == -1) {
      local_c = -1;
    }
    else {
      iVar1 = is_debug_enabled("mkdir_");
      if (iVar1 != 0) {
        syslog(7,"debug: %s: mkdir_ f_type %lx","mkdir_",local_1a8.f_type);
      }
      if (local_1a8.f_type == 0x2fc12fc1) {
        local_20 = strchr(param_1 + 1,0x2f);
        local_20 = local_20 + 1;
        local_c = exec_zfs_silent_single("create",local_20);
        if (local_c != 0) {
          piVar3 = __errno_location();
          *piVar3 = 0x16;
          local_c = -1;
        }
        if (((local_c == 0) && (local_c = chmod(param_1,param_3), local_c == -1)) &&
           (iVar1 = is_debug_enabled("mkdir_"), iVar1 != 0)) {
          syslog(7,"debug: %s: chmod: \'%s\' %#o %m","mkdir_",param_1,(ulong)param_3);
        }
      }
      else {
        local_c = mkdir(param_1,param_3);
        if ((((local_c != -1) && (*(int *)(param_2 + 0x330) != 0)) &&
            (iVar1 = enable_direct_io(param_1), iVar1 == -1)) &&
           (iVar1 = is_debug_enabled("mkdir_"), iVar1 != 0)) {
          puVar4 = (uint *)__errno_location();
          syslog(7,"debug: %s: set_nocow: %s (%d) %m","mkdir_",param_1,(ulong)*puVar4);
        }
      }
      create_default_share_config_if_missing(param_2);
    }
  }
  else {
    local_c = mkdir(param_1,param_3);
  }
  return local_c;
}



ulong has_few_entries(char *param_1)

{
  DIR *__dirp;
  ulong uVar1;
  dirent64 *pdVar2;
  undefined4 local_c;
  
  local_c = 0;
  __dirp = opendir(param_1);
  if (__dirp == (DIR *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    do {
      pdVar2 = readdir64(__dirp);
      if (pdVar2 == (dirent64 *)0x0) break;
      local_c = local_c + 1;
    } while (local_c < 3);
    closedir(__dirp);
    uVar1 = (ulong)(local_c < 3);
  }
  return uVar1;
}



int remove_path_or_zfs_dataset(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  statfs64 local_1a8;
  char local_128 [264];
  char *local_20;
  long local_18;
  int local_c;
  
  local_18 = get_root_from_path(local_128,param_1);
  pcVar2 = strchr((char *)(local_18 + 1),0x2f);
  if (pcVar2 == (char *)0x0) {
    local_c = has_few_entries(param_1);
    if (local_c == -1) {
      return -1;
    }
    if (local_c == 0) {
      piVar3 = __errno_location();
      *piVar3 = 0x27;
      return -1;
    }
    local_c = statfs64(local_128,&local_1a8);
    if (local_c == -1) {
      return -1;
    }
    if (local_1a8.f_type == 0x2fc12fc1) {
      local_20 = strchr(param_1 + 1,0x2f);
      local_20 = local_20 + 1;
      local_c = exec_zfs_silent_single("unmount",local_20);
      if (local_c == 0) {
        local_c = exec_zfs_silent_single("destroy",local_20);
        if (local_c == 0) {
          return 0;
        }
        iVar1 = exec_zfs_silent_single("mount",local_20);
        return iVar1;
      }
    }
  }
  iVar1 = rmdir(param_1);
  return iVar1;
}



int rename_with_zfs_fallback(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  statfs64 local_1b8;
  char local_138 [272];
  char *local_28;
  char *local_20;
  int local_14;
  long local_10;
  
  local_10 = get_root_from_path(local_138,param_1);
  pcVar2 = strchr((char *)(local_10 + 1),0x2f);
  if (pcVar2 == (char *)0x0) {
    local_14 = statfs64(local_138,&local_1b8);
    if (local_14 == -1) {
      return -1;
    }
    if (local_1b8.f_type == 0x2fc12fc1) {
      local_20 = strchr(param_1 + 1,0x2f);
      local_20 = local_20 + 1;
      local_28 = strchr(param_2 + 1,0x2f);
      local_28 = local_28 + 1;
      local_14 = exec_zfs_silent("rename",local_20,local_28);
      if (local_14 == 0) {
        return 0;
      }
    }
  }
  iVar1 = rename(param_1,param_2);
  return iVar1;
}



int build_path(char *param_1,char *param_2,long param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int *piVar4;
  char *__dest;
  char *local_20;
  
  if (param_4 == 0) {
    local_20 = (char *)(param_3 + 0x11c);
  }
  else if (param_4 == 1) {
    local_20 = (char *)(param_3 + 0x220);
  }
  else {
    local_20 = *(char **)(&DAT_0041b5e0 + (long)param_4 * 0x18);
  }
  sVar2 = strlen(local_20);
  sVar3 = strlen(param_2);
  iVar1 = (int)sVar3 + (int)sVar2;
  if (iVar1 < 0x1000) {
    __dest = stpcpy(param_1,local_20);
    strcpy(__dest,param_2);
  }
  else {
    piVar4 = __errno_location();
    *piVar4 = 0x24;
    iVar1 = -1;
  }
  return iVar1;
}



long get_root_from_path(char *param_1,char *param_2)

{
  long lVar1;
  uint *puVar2;
  
  lVar1 = pointer_to_third_path_component(param_2);
  *param_1 = '\0';
  if (lVar1 == 0) {
    puVar2 = (uint *)__errno_location();
    syslog(3,"error: %s, %d: %m (%d): real_path: %s","strcpy_disk_path",0x4a8,(ulong)*puVar2,param_2
          );
  }
  else {
    strncat(param_1,param_2,(long)((int)lVar1 - (int)param_2));
  }
  return lVar1;
}



undefined8
lookup(char *param_1,undefined8 param_2,long param_3,ulong param_4,stat64 *param_5,int *param_6)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  
  do {
    while( true ) {
      if (DAT_0041b5b8 <= *param_6) {
        piVar3 = __errno_location();
        *piVar3 = 2;
        return 0xffffffff;
      }
      if (((*(ulong *)(param_3 + 0x550) & ~param_4) >> ((byte)*param_6 & 0x3f) & 1) != 0) break;
      *param_6 = *param_6 + 1;
    }
    iVar1 = *param_6;
    *param_6 = iVar1 + 1;
    iVar1 = build_path(param_1,param_2,param_3,iVar1);
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    iVar1 = lstat64(param_1,param_5);
    if (iVar1 != -1) {
      iVar1 = is_debug_enabled("lookup");
      if (iVar1 != 0) {
        syslog(7,"debug: %s: real path: %s","lookup",param_1);
      }
      return 0;
    }
    piVar3 = __errno_location();
  } while (*piVar3 == 2);
  iVar1 = is_debug_enabled("lookup");
  if (iVar1 != 0) {
    puVar2 = (uint *)__errno_location();
    syslog(7,"debug: %s: stat: %s (%d) %m","lookup",param_1,(ulong)*puVar2);
  }
  return 0xffffffff;
}



undefined8 locate(char *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  stat64 local_a8;
  int local_c;
  
  local_c = 0;
  while( true ) {
    while( true ) {
      if (DAT_0041b5b8 <= local_c) {
        piVar4 = __errno_location();
        *piVar4 = 2;
        return 0xffffffff;
      }
      if (((*(ulong *)(param_3 + 0x550) & ~param_4) >> ((byte)local_c & 0x3f) & 1) != 0) break;
      local_c = local_c + 1;
    }
    iVar1 = build_path(param_1,param_2,param_3,local_c);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    pcVar2 = strrchr(param_1,0x2f);
    *pcVar2 = '\0';
    iVar1 = lstat64(param_1,&local_a8);
    if (iVar1 != -1) {
      if ((local_a8.st_mode & 0xf000) != 0x4000) {
        iVar1 = is_debug_enabled("locate");
        if (iVar1 != 0) {
          syslog(7,"debug: %s: not a directory: %s","locate",param_1);
        }
        piVar4 = __errno_location();
        *piVar4 = 0x14;
        return 0xffffffff;
      }
      build_path(param_1,&DAT_004158f3,param_3,local_c);
      iVar1 = is_debug_enabled("locate");
      if (iVar1 != 0) {
        syslog(7,"debug: %s: locate: disk_path %s","locate",param_1);
      }
      return 0;
    }
    piVar4 = __errno_location();
    if (*piVar4 != 2) break;
    local_c = local_c + 1;
  }
  iVar1 = is_debug_enabled("locate");
  if (iVar1 != 0) {
    puVar3 = (uint *)__errno_location();
    syslog(7,"debug: %s: stat: %s (%d) %m","locate",param_1,(ulong)*puVar3);
  }
  return 0xffffffff;
}



undefined8 assign_cache(char *param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint *puVar5;
  statvfs64 local_78;
  
  if ((~param_4 & (uint)*(undefined8 *)(param_2 + 0x550) & 1) == 0) {
    if (*(int *)(param_2 + 0x118) == 2) {
      piVar2 = __errno_location();
      *piVar2 = 0x7b;
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    pcVar4 = strchr((char *)(param_3 + 1),0x2f);
    if ((pcVar4 == (char *)0x0) && (*(int *)(param_2 + 0x118) < 2)) {
      uVar3 = 0;
    }
    else {
      iVar1 = statvfs64((char *)(param_2 + 0x11c),&local_78);
      if (iVar1 == -1) {
        iVar1 = is_debug_enabled("assign_cache");
        if (iVar1 != 0) {
          puVar5 = (uint *)__errno_location();
          syslog(7,"debug: %s: statvfs: %s (%d) %m","assign_cache",param_1,(ulong)*puVar5);
        }
        if (*(int *)(param_2 + 0x118) == 2) {
          piVar2 = __errno_location();
          *piVar2 = 0x7b;
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (local_78.f_bfree * local_78.f_bsize < *(ulong *)(param_2 + 0x438)) {
        syslog(6,"share cache full");
        if (*(int *)(param_2 + 0x118) == 2) {
          piVar2 = __errno_location();
          *piVar2 = 0x1c;
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = 0;
        }
      }
      else if (local_78.f_bfree * local_78.f_bsize < *(ulong *)(param_2 + 0x328)) {
        syslog(6,"cache disk full");
        if (*(int *)(param_2 + 0x118) == 2) {
          piVar2 = __errno_location();
          *piVar2 = 0x1c;
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        strcpy(param_1,(char *)(param_2 + 0x11c));
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



undefined8
assign_cache2(char *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  int *piVar4;
  statvfs64 local_78;
  
  if ((~(uint)param_4 & (uint)*(undefined8 *)(param_2 + 0x550) & 2) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = statvfs64((char *)(param_2 + 0x220),&local_78);
    if (iVar1 == -1) {
      iVar1 = is_debug_enabled("assign_cache2");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: statvfs: %s (%d) %m","assign_cache2",param_1,(ulong)*puVar3,param_6,
               param_4,param_3);
      }
      piVar4 = __errno_location();
      *piVar4 = 0x7b;
      uVar2 = 0xffffffff;
    }
    else if (local_78.f_bfree * local_78.f_bsize < *(ulong *)(param_2 + 0x438)) {
      syslog(6,"share cache2 full");
      piVar4 = __errno_location();
      *piVar4 = 0x1c;
      uVar2 = 0xffffffff;
    }
    else if (local_78.f_bfree * local_78.f_bsize < *(ulong *)(param_2 + 0x328)) {
      syslog(6,"cache2 disk full");
      piVar4 = __errno_location();
      *piVar4 = 0x1c;
      uVar2 = 0xffffffff;
    }
    else {
      strcpy(param_1,(char *)(param_2 + 0x220));
      uVar2 = 1;
    }
  }
  return uVar2;
}



undefined8 update_path_if_exceeds_limits(char *param_1,long param_2,char *param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  int local_14;
  char *local_10;
  
  iVar1 = strcmp(param_4,(char *)(param_2 + 0x11c));
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(param_2 + 0x444) == '\0') {
    if (*(int *)(param_2 + 0x440) == 0) {
      return 0;
    }
    local_10 = param_3 + 1;
    local_14 = 0;
    while ((local_10 = strchr(local_10,0x2f), local_10 != (char *)0x0 &&
           (local_14 = local_14 + 1, local_14 <= *(int *)(param_2 + 0x440)))) {
      local_10 = local_10 + 1;
    }
    if (local_14 <= *(int *)(param_2 + 0x440)) {
      return 0;
    }
  }
  else {
    pcVar2 = strstr(param_3,(char *)(param_2 + 0x444));
    if ((pcVar2 == (char *)0x0) || (pcVar2 = strchr(pcVar2,0x2f), pcVar2 == (char *)0x0)) {
      return 0;
    }
  }
  strcpy(param_1,param_4);
  return 1;
}



undefined8
eligible_disk(char *param_1,ulong param_2,long param_3,int param_4,undefined8 param_5,long *param_6,
             ulong *param_7)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  uint *puVar4;
  statfs64 local_88;
  
  if (((*(ulong *)(param_3 + 0x550) & ~param_2) >> ((byte)param_4 & 0x3f) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = is_item_included(param_3,param_4);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (*(int *)(param_3 + 0x548) == 0) {
        build_path(param_1,&DAT_004158f3,param_3,param_4);
      }
      else {
        iVar1 = build_path(param_1,param_5,param_3,param_4);
        if (iVar1 < 0) {
          return 0xffffffff;
        }
        pcVar3 = strrchr(param_1,0x2f);
        *pcVar3 = '\0';
      }
      iVar1 = statfs64(param_1,&local_88);
      if (iVar1 == -1) {
        iVar1 = is_debug_enabled("eligible_disk");
        if (iVar1 != 0) {
          puVar4 = (uint *)__errno_location();
          syslog(7,"debug: %s: statfs: %s (%d) %m","eligible_disk",param_1,(ulong)*puVar4);
        }
        uVar2 = 0;
      }
      else {
        if (local_88.f_type == 0x2fc12fc1) {
          *param_6 = *(long *)(&DAT_0041b5f0 + (long)param_4 * 0x18);
          if (*param_6 == 0) {
            get_fs_size_zfs(param_1,param_6);
            *(long *)(&DAT_0041b5f0 + (long)param_4 * 0x18) = *param_6;
          }
        }
        else {
          *param_6 = local_88.f_bsize * local_88.f_blocks;
        }
        *param_7 = local_88.f_bsize * local_88.f_bfree;
        iVar1 = is_debug_enabled("eligible_disk");
        if (iVar1 != 0) {
          syslog(7,"debug: %s: %s size %llu free %llu","eligible_disk",param_1,*param_6,*param_7);
        }
        if (*param_7 < *(ulong *)(param_3 + 0x438)) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}



int find_disk_with_max_value
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 local_40;
  undefined8 local_38;
  void *local_30;
  void *local_28;
  int local_1c;
  int local_18;
  int local_14;
  ulong local_10;
  
  local_18 = 2;
  local_28 = calloc(0x1d,8);
  local_30 = calloc(0x1d,8);
  local_10 = 0;
  for (local_1c = 1; local_1c < 0x1d; local_1c = local_1c + 1) {
    local_14 = eligible_disk(param_1,param_4,param_2,local_18,param_3,&local_38,&local_40);
    if (local_14 == -1) goto LAB_0040bd15;
    if (local_14 != 0) {
      *(undefined8 *)((long)local_1c * 8 + (long)local_28) = local_38;
      *(undefined8 *)((long)local_1c * 8 + (long)local_30) = local_40;
      if (local_10 < *(ulong *)((long)local_28 + (long)local_1c * 8)) {
        local_10 = *(ulong *)((long)local_28 + (long)local_1c * 8);
      }
    }
    local_18 = local_18 + 1;
  }
  while (local_10 = local_10 >> 1, local_10 != 0) {
    local_18 = 2;
    for (local_1c = 1; local_1c < 0x1d; local_1c = local_1c + 1) {
      if (local_10 < *(ulong *)((long)local_30 + (long)local_1c * 8)) {
        build_path(param_1,&DAT_004158f3,param_2,local_18);
        local_14 = 0;
        goto LAB_0040bd15;
      }
      local_18 = local_18 + 1;
    }
  }
  piVar1 = __errno_location();
  *piVar1 = 0x1c;
  local_14 = -1;
LAB_0040bd15:
  free(local_28);
  free(local_30);
  return local_14;
}



undefined8
select_disk_by_free_capacity
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  ulong local_30;
  undefined1 local_28 [8];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  ulong local_10;
  
  local_10 = 0;
  local_18 = 2;
  local_1c = 1;
  while( true ) {
    if (0x1c < local_1c) {
      if (local_10 == 0) {
        piVar1 = __errno_location();
        *piVar1 = 0x1c;
        uVar2 = 0xffffffff;
      }
      else {
        build_path(param_1,&DAT_004158f3,param_2,local_14);
        uVar2 = 0;
      }
      return uVar2;
    }
    local_20 = eligible_disk(param_1,param_4,param_2,local_18,param_3,local_28,&local_30);
    if (local_20 == -1) break;
    if ((local_20 == 1) && (local_10 < local_30)) {
      local_10 = local_30;
      local_14 = local_18;
    }
    local_1c = local_1c + 1;
    local_18 = local_18 + 1;
  }
  return 0xffffffff;
}



undefined8
locate_disk_path(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_28 [8];
  undefined1 local_20 [12];
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 2;
  for (local_10 = 1; local_10 < 0x1d; local_10 = local_10 + 1) {
    local_14 = eligible_disk(param_1,param_4,param_2,local_c,param_3,local_20,local_28);
    if (local_14 == -1) {
      return 0xffffffff;
    }
    if (local_14 == 1) break;
    local_c = local_c + 1;
  }
  if (local_10 == 0x1d) {
    piVar1 = __errno_location();
    *piVar1 = 0x1c;
    uVar2 = 0xffffffff;
  }
  else {
    build_path(param_1,&DAT_004158f3,param_2,local_c);
    uVar2 = 0;
  }
  return uVar2;
}



int assign_disk(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  char *pcVar2;
  int local_c;
  
  local_c = assign_cache(param_1,param_2,param_3,param_4);
  if (local_c == 0) {
    local_c = assign_cache2(param_1,param_2,param_3,param_4);
    if (local_c == 0) {
      local_c = update_path_if_exceeds_limits(param_1,param_2,param_3,param_5);
      if (local_c == 0) {
        pcVar2 = strstr((char *)(param_2 + 0x334),"mostfree");
        if (pcVar2 == (char *)0x0) {
          pcVar2 = strstr((char *)(param_2 + 0x334),"fillup");
          if (pcVar2 == (char *)0x0) {
            local_c = find_disk_with_max_value(param_1,param_2,param_3,param_4);
          }
          else {
            local_c = locate_disk_path(param_1,param_2,param_3,param_4);
          }
        }
        else {
          local_c = select_disk_by_free_capacity(param_1,param_2,param_3,param_4);
        }
      }
      else if (local_c == 1) {
        local_c = 0;
        iVar1 = is_debug_enabled("assign_disk");
        if (iVar1 != 0) {
          syslog(7,"debug: %s: unsplittable","assign_disk");
        }
      }
    }
    else if (local_c == 1) {
      local_c = 0;
      iVar1 = is_debug_enabled("assign_disk");
      if (iVar1 != 0) {
        syslog(7,"debug: %s: assigning cache2","assign_disk");
      }
    }
  }
  else if (local_c == 1) {
    local_c = 0;
    iVar1 = is_debug_enabled("assign_disk");
    if (iVar1 != 0) {
      syslog(7,"debug: %s: assigning cache","assign_disk");
    }
  }
  if (local_c == 0) {
    iVar1 = is_debug_enabled("assign_disk");
    if (iVar1 != 0) {
      syslog(7,"debug: %s: disk_path: %s","assign_disk",param_1);
    }
  }
  return local_c;
}



int copy_xattr(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  char *__list;
  ssize_t sVar3;
  size_t local_28;
  int local_1c;
  void *local_18;
  char *local_10;
  
  local_18 = (void *)0x0;
  sVar2 = llistxattr(param_2,(char *)0x0,0);
  if (sVar2 == 0xffffffffffffffff) {
    local_1c = -1;
  }
  else if (sVar2 == 0) {
    local_1c = 0;
  }
  else {
    __list = (char *)malloc(sVar2);
    if (__list == (char *)0x0) {
      local_1c = -1;
    }
    else {
      sVar3 = llistxattr(param_2,__list,sVar2);
      local_10 = __list;
      if (sVar3 == -1) {
        local_1c = -1;
      }
      else {
        for (; local_18 = (void *)0x0, local_10 < __list + sVar3; local_10 = local_10 + sVar2 + 1) {
          local_28 = lgetxattr(param_2,local_10,(void *)0x0,0);
          if (local_28 == 0xffffffffffffffff) {
            local_1c = -1;
            goto LAB_0040c2a2;
          }
          if (local_28 != 0) {
            local_18 = malloc(local_28);
            if (local_18 == (void *)0x0) {
              local_1c = -1;
              goto LAB_0040c2a2;
            }
            local_28 = lgetxattr(param_2,local_10,local_18,local_28);
            if (local_28 == 0xffffffffffffffff) {
              local_1c = -1;
              goto LAB_0040c2a2;
            }
          }
          iVar1 = is_debug_enabled("copy_xattr");
          if (iVar1 != 0) {
            syslog(7,"debug: %s: path: %s name: %s","copy_xattr",param_1,local_10);
          }
          local_1c = lsetxattr(param_1,local_10,local_18,local_28,0);
          if (local_1c == -1) goto LAB_0040c2a2;
          free(local_18);
          sVar2 = strlen(local_10);
        }
        local_1c = 0;
      }
LAB_0040c2a2:
      free(local_18);
      free(__list);
    }
  }
  return local_1c;
}



undefined8 compare_timespec(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_1 < param_3) {
    uVar1 = 0xffffffff;
  }
  else if (param_3 < param_1) {
    uVar1 = 1;
  }
  else if (param_2 < param_4) {
    uVar1 = 0xffffffff;
  }
  else if (param_4 < param_2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 get_file_times(char *param_1,__time_t *param_2)

{
  int iVar1;
  undefined8 uVar2;
  stat64 local_98;
  
  iVar1 = lstat64(param_1,&local_98);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    *param_2 = local_98.st_atim.tv_sec;
    param_2[1] = local_98.st_atim.tv_nsec;
    param_2[2] = local_98.st_mtim.tv_sec;
    param_2[3] = local_98.st_mtim.tv_nsec;
    uVar2 = 0;
  }
  return uVar2;
}



void set_file_times(char *param_1,timespec *param_2)

{
  utimensat(-100,param_1,param_2,0x100);
  return;
}



undefined8 copy_meta(char *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_c;
  
  iVar1 = lchown(param_1,*(__uid_t *)(param_3 + 0x1c),*(__gid_t *)(param_3 + 0x20));
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("copy_meta");
    if (iVar1 != 0) {
      syslog(7,"debug: %s: lchown: %s","copy_meta",param_1);
    }
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = copy_xattr(param_1,param_2);
    if (iVar1 == -1) {
      iVar1 = is_debug_enabled("copy_meta");
      if (iVar1 != 0) {
        syslog(7,"debug: %s: copyxattr: %s %s","copy_meta",param_1,param_2);
      }
      uVar2 = 0xffffffff;
    }
    else {
      local_30 = *(undefined8 *)(param_3 + 0x50);
      local_38 = *(undefined8 *)(param_3 + 0x48);
      local_20 = *(undefined8 *)(param_3 + 0x60);
      local_28 = *(undefined8 *)(param_3 + 0x58);
      iVar1 = set_file_times(param_1,&local_38);
      if (iVar1 == -1) {
        iVar1 = is_debug_enabled("copy_meta");
        if (iVar1 != 0) {
          syslog(7,"debug: %s: set_times: %s","copy_meta",param_1);
        }
        uVar2 = 0xffffffff;
      }
      else {
        if (((*(uint *)(param_3 + 0x18) & 0xf000) == 0x8000) ||
           ((*(uint *)(param_3 + 0x18) & 0xf000) == 0x4000)) {
          local_c = open64(param_2,0);
          if (local_c == -1) {
            return 0xffffffff;
          }
          iVar1 = ioctl(local_c,0x80086601,&local_3c);
          if (iVar1 == -1) {
            local_3c = 0;
          }
          close(local_c);
          if (local_3c != 0) {
            local_c = open64(param_1,1);
            if (local_c == -1) {
              return 0xffffffff;
            }
            ioctl(local_c,0x40086602,&local_3c);
            close(local_c);
          }
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



void * allocate_path_buffer(void)

{
  void *pvVar1;
  uint *puVar2;
  
  pvVar1 = malloc(0x1000);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (uint *)__errno_location();
    syslog(3,"error: %s, %d: %m (%d): out of memory","malloc_path",0x708,(ulong)*puVar2);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  return pvVar1;
}



undefined4 create_path(char *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int *piVar4;
  char *local_f8;
  __time_t local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  stat64 local_c8;
  char *local_30;
  undefined4 local_24;
  char *local_20;
  
  local_20 = (char *)0x0;
  local_24 = 0xffffffff;
  sVar2 = strlen(param_1);
  sVar3 = strlen(param_2);
  if (sVar3 + sVar2 + 1 < 0x1001) {
    iVar1 = strcmp(param_1,param_3);
    local_f8 = param_2;
    if (iVar1 != 0) {
      local_20 = (char *)allocate_path_buffer();
      while (local_30 = strchr(local_f8 + 1,0x2f), local_30 != (char *)0x0) {
        strncat(param_3,local_f8,(long)local_30 - (long)local_f8);
        strcpy(local_20,param_1);
        strncat(param_1,local_f8,(long)local_30 - (long)local_f8);
        iVar1 = lstat64(param_1,&local_c8);
        if (iVar1 == -1) {
          iVar1 = get_file_times(local_20,&local_e8);
          if (iVar1 == -1) {
            iVar1 = is_debug_enabled("create_path");
            if (iVar1 != 0) {
              syslog(7,"debug: %s: get_times: %s","create_path",local_20);
            }
            goto LAB_0040cadd;
          }
          iVar1 = lstat64(param_3,&local_c8);
          if (iVar1 == -1) {
            iVar1 = is_debug_enabled("create_path");
            if (iVar1 != 0) {
              syslog(7,"debug: %s: lstat: %s","create_path",param_3);
            }
            goto LAB_0040cadd;
          }
          iVar1 = mkdir_(param_1,param_4,local_c8.st_mode);
          if (iVar1 == -1) {
            iVar1 = is_debug_enabled("create_path");
            if (iVar1 != 0) {
              syslog(7,"debug: %s: mkdir_: %s","create_path",param_1);
            }
            goto LAB_0040cadd;
          }
          iVar1 = copy_meta(param_1,param_3,&local_c8);
          if (iVar1 == -1) {
            iVar1 = is_debug_enabled("create_path");
            if (iVar1 != 0) {
              syslog(7,"debug: %s: copy_meta: %s","create_path",param_1);
            }
            goto LAB_0040cadd;
          }
          iVar1 = set_file_times(local_20,&local_e8);
          if (iVar1 == -1) {
            iVar1 = is_debug_enabled("create_path");
            if (iVar1 != 0) {
              syslog(7,"debug: %s: set_times: %s","create_path",local_20);
            }
            goto LAB_0040cadd;
          }
        }
        else {
          if ((local_c8.st_mode & 0xf000) != 0x4000) {
            piVar4 = __errno_location();
            *piVar4 = 0x14;
            goto LAB_0040cadd;
          }
          iVar1 = get_file_times(param_3,&local_e8);
          if (iVar1 == -1) {
            iVar1 = is_debug_enabled("create_path");
            if (iVar1 != 0) {
              syslog(7,"debug: %s: get_times: %s","create_path",param_3);
            }
            goto LAB_0040cadd;
          }
          iVar1 = compare_timespec(local_c8.st_atim.tv_sec,local_c8.st_atim.tv_nsec,local_e8,
                                   local_e0);
          if (0 < iVar1) {
            local_e8 = local_c8.st_atim.tv_sec;
            local_e0 = local_c8.st_atim.tv_nsec;
          }
          iVar1 = compare_timespec(local_c8.st_mtim.tv_sec,local_c8.st_mtim.tv_nsec,local_d8,
                                   local_d0);
          if (0 < iVar1) {
            local_c8.st_dev = local_c8.st_mtim.tv_sec;
            local_c8.st_ino = local_c8.st_mtim.tv_nsec;
          }
          iVar1 = set_file_times(param_1,&local_e8);
          if (iVar1 == -1) {
            iVar1 = is_debug_enabled("create_path");
            if (iVar1 != 0) {
              syslog(7,"debug: %s: set_times: %s","create_path",param_1);
            }
            goto LAB_0040cadd;
          }
        }
        local_f8 = local_30;
      }
    }
    strcat(param_1,local_f8);
    local_24 = 0;
  }
  else {
    piVar4 = __errno_location();
    *piVar4 = 0x24;
  }
LAB_0040cadd:
  free(local_20);
  return local_24;
}



ulong * hack_stbuf(ulong *param_1)

{
  int iVar1;
  
  if (DAT_0041b3e0 != 0) {
    if ((0xffff < *param_1) || (0xffffffffffff < param_1[1])) {
      iVar1 = is_debug_enabled("hack_stbuf");
      if (iVar1 != 0) {
        syslog(7,"debug: %s: warning: st_dev %lx st_ino %lx","hack_stbuf",*param_1,param_1[1]);
      }
    }
    param_1[1] = param_1[1] | *param_1 << 0x30;
  }
  if ((param_1[3] & 0xf000) == 0x4000) {
    param_1[2] = 1;
  }
  return param_1;
}



undefined8 shfs_init(long param_1,long param_2)

{
  int iVar1;
  
  if (DAT_0041b380 != 0) {
    *(undefined4 *)(param_2 + 0x40) = 1;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  iVar1 = is_debug_enabled("shfs_init");
  if (iVar1 != 0) {
    syslog(7,"debug: %s: use_ino: %d","shfs_init",(ulong)*(uint *)(param_2 + 0x40));
  }
  *(undefined4 *)(param_2 + 0x48) = DAT_0041b5ac;
  iVar1 = is_debug_enabled("shfs_init");
  if (iVar1 != 0) {
    syslog(7,"debug: %s: direct_io: %d","shfs_init",(ulong)*(uint *)(param_2 + 0x48));
  }
  if ((*(uint *)(param_1 + 0x14) & 0x800) != 0) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x800;
  }
  iVar1 = is_debug_enabled("shfs_init");
  if (iVar1 != 0) {
    syslog(7,"debug: %s: PATH_MAX %d","shfs_init",0x1000);
  }
  iVar1 = is_debug_enabled("shfs_init");
  if (iVar1 != 0) {
    print_fuse_capabilities(param_1);
  }
  return 0;
}



void noop(void)

{
  return;
}



int shfs_getattr(char *param_1,stat64 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined1 local_c8 [24];
  uint local_b0;
  __time_t local_80;
  long local_78;
  __time_t local_70;
  long local_68;
  __time_t local_60;
  long local_58;
  int local_2c;
  int local_28;
  int local_24;
  void *local_20;
  int local_14;
  long local_10;
  
  local_10 = 0;
  local_20 = (void *)0x0;
  local_2c = 0;
  iVar1 = is_debug_enabled("shfs_getattr");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s fi: %p","shfs_getattr",(ulong)*(uint *)(lVar2 + 0x10),
           param_1,param_3);
  }
  if (param_3 != 0) {
    iVar1 = is_debug_enabled("shfs_getattr");
    if (iVar1 != 0) {
      syslog(7,"debug: %s: shfs_getattr: got a non-null \'fi\' for: %s","shfs_getattr",param_1);
    }
    local_14 = fstat64((int)*(undefined8 *)(param_3 + 0x10),param_2);
    if (local_14 == -1) {
      iVar1 = is_debug_enabled("shfs_getattr");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: fstat: %s (%d) %m","shfs_getattr",param_1,(ulong)*puVar3);
      }
    }
    else if ((param_2->st_mode & 0xf000) != 0x4000) {
      hack_stbuf(param_2);
      goto LAB_0040d120;
    }
  }
  local_10 = get_share_info(param_1);
  local_20 = (void *)allocate_path_buffer();
  local_14 = lookup(local_20,param_1,local_10,0,param_2,&local_2c);
  if (local_14 == -1) {
    iVar1 = is_debug_enabled("shfs_getattr");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_getattr",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_14 = -*piVar4;
    if (local_14 == -2) {
      iVar1 = strcmp(param_1,"/");
      if (iVar1 == 0) {
        memset(param_2,0,0x90);
        param_2->st_mode = 0x4000;
        hack_stbuf(param_2);
        local_14 = 0;
      }
    }
    goto LAB_0040d120;
  }
  if ((param_2->st_mode & 0xf000) == 0x4000) {
    if (param_1[1] == '\0') {
LAB_0040cf85:
      local_28 = 0;
    }
    else {
      pcVar5 = strchr(param_1 + 1,0x2f);
      if (pcVar5 != (char *)0x0) goto LAB_0040cf85;
      local_28 = 1;
    }
    local_24 = 0;
    if (local_2c == 1) {
      local_24 = 1;
    }
    while( true ) {
      iVar1 = lookup(local_20,param_1,local_10,0,local_c8,&local_2c);
      if (iVar1 == -1) break;
      if ((local_b0 & 0xf000) == 0x4000) {
        if (local_24 != 0) {
          local_24 = local_24 + 1;
        }
        iVar1 = compare_timespec(local_80,local_78,(param_2->st_atim).tv_sec,
                                 (param_2->st_atim).tv_nsec);
        if (0 < iVar1) {
          (param_2->st_atim).tv_sec = local_80;
          (param_2->st_atim).tv_nsec = local_78;
        }
        iVar1 = compare_timespec(local_70,local_68,(param_2->st_mtim).tv_sec,
                                 (param_2->st_mtim).tv_nsec);
        if (0 < iVar1) {
          (param_2->st_mtim).tv_sec = local_70;
          (param_2->st_mtim).tv_nsec = local_68;
        }
        iVar1 = compare_timespec(local_60,local_58,(param_2->st_ctim).tv_sec,
                                 (param_2->st_ctim).tv_nsec);
        if (0 < iVar1) {
          (param_2->st_ctim).tv_sec = local_60;
          (param_2->st_ctim).tv_nsec = local_58;
        }
      }
    }
    if ((((DAT_0041b5a8 != 0) && (local_28 != 0)) && (*(int *)(local_10 + 0x118) == 2)) &&
       ((*(int *)(local_10 + 0x54c) == 0 && (local_24 == 1)))) {
      param_2->st_mode = param_2->st_mode & 0xffff0e00 | 0xa1ff;
      goto LAB_0040d120;
    }
  }
  hack_stbuf(param_2);
LAB_0040d120:
  free(local_20);
  free_share_info(local_10);
  return local_14;
}



int shfs_access(undefined8 param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 local_bc;
  undefined1 local_b8 [152];
  undefined8 local_20;
  char *local_18;
  int local_c;
  
  local_18 = (char *)0x0;
  local_bc = 0;
  iVar1 = is_debug_enabled("shfs_access");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s mask: %#x","shfs_access",(ulong)*(uint *)(lVar2 + 0x10),
           param_1,(ulong)param_2);
  }
  local_20 = get_share_info(param_1);
  local_18 = (char *)allocate_path_buffer();
  iVar1 = lookup(local_18,param_1,local_20,0,local_b8,&local_bc);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_access");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_access",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  else {
    local_c = access(local_18,param_2);
    if (local_c == -1) {
      iVar1 = is_debug_enabled("shfs_access");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: access: %s (%d) %m","shfs_access",local_18,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_c = -*piVar4;
    }
  }
  free(local_18);
  free_share_info(local_20);
  return local_c;
}



int shfs_readlink(long param_1,char *param_2,size_t param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  uint *puVar4;
  int *piVar5;
  ssize_t sVar6;
  undefined4 local_bc;
  undefined1 local_b8 [152];
  long local_20;
  char *local_18;
  int local_c;
  
  local_20 = 0;
  local_18 = (char *)0x0;
  local_bc = 0;
  iVar1 = is_debug_enabled("shfs_readlink");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s bufsiz: %lu","shfs_readlink",
           (ulong)*(uint *)(lVar2 + 0x10),param_1,param_3);
  }
  local_20 = get_share_info(param_1);
  pcVar3 = strchr((char *)(param_1 + 1),0x2f);
  if ((pcVar3 == (char *)0x0) && (*(int *)(local_20 + 0x118) == 2)) {
    snprintf(param_2,param_3,"..%s%s",local_20 + 0x120,param_1);
    local_c = 0;
  }
  else {
    local_18 = (char *)allocate_path_buffer();
    iVar1 = lookup(local_18,param_1,local_20,0,local_b8,&local_bc);
    if (iVar1 == -1) {
      iVar1 = is_debug_enabled("shfs_readlink");
      if (iVar1 != 0) {
        puVar4 = (uint *)__errno_location();
        syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_readlink",param_1,(ulong)*puVar4);
      }
      piVar5 = __errno_location();
      local_c = -*piVar5;
    }
    else {
      sVar6 = readlink(local_18,param_2,param_3 - 1);
      local_c = (int)sVar6;
      if (local_c == -1) {
        iVar1 = is_debug_enabled("shfs_readlink");
        if (iVar1 != 0) {
          puVar4 = (uint *)__errno_location();
          syslog(7,"debug: %s: readlink: %s (%d) %m","shfs_readlink",local_18,(ulong)*puVar4);
        }
        piVar5 = __errno_location();
        local_c = -*piVar5;
      }
      else {
        param_2[local_c] = '\0';
        local_c = 0;
      }
    }
  }
  free(local_18);
  free_share_info(local_20);
  return local_c;
}



void debug_shfs_readdir_collision(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = is_debug_enabled("collision");
  if (iVar1 != 0) {
    syslog(7,"debug: %s: shfs_readdir: collision: %s%s","collision",param_1,param_2);
  }
  return;
}



// WARNING: Type propagation algorithm not settling

int shfs_readdir(char *param_1,undefined8 param_2,code *param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  size_t sVar6;
  int local_f0 [2];
  stat64 local_e8;
  undefined8 local_50;
  dirent64 *local_48;
  DIR *local_40;
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  
  iVar2 = strcmp(param_1,"/");
  local_20 = (uint)(iVar2 == 0);
  local_28 = 0;
  local_1c = 0;
  local_30 = (char *)0x0;
  local_f0[1] = 0;
  local_38 = alloc_zeroed_24_bytes();
  iVar2 = is_debug_enabled("shfs_readdir");
  if (iVar2 != 0) {
    lVar3 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s","shfs_readdir",(ulong)*(uint *)(lVar3 + 0x10),param_1);
  }
  local_28 = get_share_info(param_1);
  local_30 = (char *)allocate_path_buffer();
  do {
    while( true ) {
      do {
        iVar2 = lookup(local_30,param_1,local_28,0,&local_e8,local_f0 + 1);
        if (iVar2 == -1) goto LAB_0040d8f2;
      } while ((local_e8.st_mode & 0xf000) != 0x4000);
      local_40 = opendir(local_30);
      if (local_40 != (DIR *)0x0) break;
      iVar2 = is_debug_enabled("shfs_readdir");
      if (iVar2 != 0) {
        syslog(7,"debug: %s: opendir: %s","shfs_readdir",local_30);
      }
    }
    while (local_48 = readdir64(local_40), local_48 != (dirent64 *)0x0) {
      pcVar1 = local_48->d_name;
      iVar2 = dirfd(local_40);
      iVar2 = fstatat64(iVar2,pcVar1,&local_e8,0x100);
      if (iVar2 == -1) {
        piVar4 = __errno_location();
        if (*piVar4 != 2) {
          iVar2 = is_debug_enabled("shfs_readdir");
          if (iVar2 != 0) {
            puVar5 = (uint *)__errno_location();
            syslog(7,"debug: %s: fstatat: %s (%d) %m","shfs_readdir",local_48->d_name,(ulong)*puVar5
                  );
          }
          piVar4 = __errno_location();
          local_1c = -*piVar4;
          break;
        }
        iVar2 = is_debug_enabled("shfs_readdir");
        if (iVar2 != 0) {
          syslog(7,"debug: %s: fstatat: %s","shfs_readdir",local_48->d_name);
        }
      }
      else if (((local_e8.st_mode & 0xf000) != 0x4000 & local_20) == 0) {
        sVar6 = strlen(local_48->d_name);
        local_50 = hash_bytes_with_constants(local_48->d_name,sVar6);
        hash_table_insert_wrapper(local_38,local_50,local_f0);
        if (local_f0[0] == 0) {
          if ((local_e8.st_mode & 0xf000) != 0x4000) {
            debug_shfs_readdir_collision(local_30,local_48->d_name);
          }
        }
        else {
          iVar2 = strcmp(local_48->d_name,"..");
          if (iVar2 != 0) {
            hack_stbuf(&local_e8);
          }
          iVar2 = (*param_3)(param_2,local_48->d_name,&local_e8,0,0);
          if (iVar2 == 1) {
            pcVar1 = local_48->d_name;
            puVar5 = (uint *)__errno_location();
            syslog(3,"error: %s, %d: %m (%d): filler: %s","shfs_readdir",0x8b0,(ulong)*puVar5,pcVar1
                  );
          }
        }
      }
    }
    closedir(local_40);
  } while (local_1c == 0);
LAB_0040d8f2:
  free_hash_table_entry(local_38);
  free(local_30);
  free_share_info(local_28);
  return local_1c;
}



int shfs_mkdir(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *__ptr;
  uint *puVar4;
  int *piVar5;
  char *pcVar6;
  char *local_18;
  int local_c;
  
  local_18 = (char *)0x0;
  iVar1 = is_debug_enabled("shfs_mkdir");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s mode: %#o","shfs_mkdir",(ulong)*(uint *)(lVar2 + 0x10),
           param_1,(ulong)param_2);
  }
  uVar3 = get_share_info(param_1);
  __ptr = (void *)allocate_path_buffer();
  iVar1 = locate(__ptr,param_1,uVar3,0);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_mkdir");
    if (iVar1 != 0) {
      puVar4 = (uint *)__errno_location();
      syslog(7,"debug: %s: locate: %s (%d) %m","shfs_mkdir",param_1,(ulong)*puVar4);
    }
    piVar5 = __errno_location();
    local_c = -*piVar5;
  }
  else {
    local_18 = (char *)allocate_path_buffer();
    iVar1 = assign_disk(local_18,uVar3,param_1,0,__ptr);
    if (iVar1 == -1) {
      puVar4 = (uint *)__errno_location();
      syslog(6,"assign_disk: %s (%d) %m",param_1,(ulong)*puVar4);
      piVar5 = __errno_location();
      local_c = -*piVar5;
    }
    else {
      iVar1 = create_path(local_18,param_1,__ptr,uVar3);
      if (iVar1 == -1) {
        iVar1 = is_debug_enabled("shfs_mkdir");
        if (iVar1 != 0) {
          puVar4 = (uint *)__errno_location();
          syslog(7,"debug: %s: create_path: %s %s %s (%d) %m","shfs_mkdir",local_18,param_1,__ptr,
                 (ulong)*puVar4);
        }
        piVar5 = __errno_location();
        local_c = -*piVar5;
      }
      else {
        iVar1 = is_debug_enabled("shfs_mkdir");
        if (iVar1 != 0) {
          syslog(7,"debug: %s: real_path: %s","shfs_mkdir",local_18);
        }
        iVar1 = mkdir_(local_18,uVar3,param_2);
        if (iVar1 == -1) {
          iVar1 = is_debug_enabled("shfs_mkdir");
          if (iVar1 != 0) {
            puVar4 = (uint *)__errno_location();
            syslog(7,"debug: %s: mkdir_: %s (%d) %m","shfs_mkdir",local_18,(ulong)*puVar4);
          }
          piVar5 = __errno_location();
          local_c = -*piVar5;
        }
        else {
          lVar2 = fuse_get_context();
          local_c = lchown(local_18,*(__uid_t *)(lVar2 + 8),*(__gid_t *)(lVar2 + 0xc));
          if (local_c == -1) {
            iVar1 = is_debug_enabled("shfs_mkdir");
            if (iVar1 != 0) {
              puVar4 = (uint *)__errno_location();
              syslog(7,"debug: %s: lchown: %s %d %d (%d) %m","shfs_mkdir",local_18,
                     (ulong)*(uint *)(lVar2 + 8),(ulong)*(uint *)(lVar2 + 0xc),(ulong)*puVar4);
            }
            piVar5 = __errno_location();
            local_c = -*piVar5;
          }
        }
      }
    }
  }
  if (local_c != 0) {
    pcVar6 = strchr((char *)(param_1 + 1),0x2f);
    if (pcVar6 == (char *)0x0) {
      del_share_info(param_1);
    }
  }
  free(local_18);
  free(__ptr);
  free_share_info(uVar3);
  return local_c;
}



int shfs_symlink(char *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *__ptr;
  uint *puVar4;
  int *piVar5;
  char *local_18;
  int local_c;
  
  local_18 = (char *)0x0;
  iVar1 = is_debug_enabled("shfs_symlink");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d target: %s path: %s","shfs_symlink",(ulong)*(uint *)(lVar2 + 0x10),
           param_1,param_2);
  }
  uVar3 = get_share_info(param_2);
  __ptr = (void *)allocate_path_buffer();
  iVar1 = locate(__ptr,param_2,uVar3,0);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_symlink");
    if (iVar1 != 0) {
      puVar4 = (uint *)__errno_location();
      syslog(7,"debug: %s: locate: %s (%d) %m","shfs_symlink",param_2,(ulong)*puVar4);
    }
    piVar5 = __errno_location();
    local_c = -*piVar5;
  }
  else {
    local_18 = (char *)allocate_path_buffer();
    iVar1 = assign_disk(local_18,uVar3,param_2,0,__ptr);
    if (iVar1 == -1) {
      puVar4 = (uint *)__errno_location();
      syslog(6,"assign_disk: %s (%d) %m",param_2,(ulong)*puVar4);
      piVar5 = __errno_location();
      local_c = -*piVar5;
    }
    else {
      iVar1 = create_path(local_18,param_2,__ptr,uVar3);
      if (iVar1 == -1) {
        iVar1 = is_debug_enabled("shfs_symlink");
        if (iVar1 != 0) {
          puVar4 = (uint *)__errno_location();
          syslog(7,"debug: %s: create_path: %s %s %s (%d) %m","shfs_symlink",local_18,param_2,__ptr,
                 (ulong)*puVar4);
        }
        piVar5 = __errno_location();
        local_c = -*piVar5;
      }
      else {
        iVar1 = is_debug_enabled("shfs_symlink");
        if (iVar1 != 0) {
          syslog(7,"debug: %s: real_path: %s","shfs_symlink",local_18);
        }
        iVar1 = symlink(param_1,local_18);
        if (iVar1 == -1) {
          iVar1 = is_debug_enabled("shfs_symlink");
          if (iVar1 != 0) {
            puVar4 = (uint *)__errno_location();
            syslog(7,"debug: %s: open: %s (%d) %m","shfs_symlink",local_18,(ulong)*puVar4);
          }
          piVar5 = __errno_location();
          local_c = -*piVar5;
        }
        else {
          lVar2 = fuse_get_context();
          local_c = lchown(local_18,*(__uid_t *)(lVar2 + 8),*(__gid_t *)(lVar2 + 0xc));
          if (local_c == -1) {
            iVar1 = is_debug_enabled("shfs_symlink");
            if (iVar1 != 0) {
              puVar4 = (uint *)__errno_location();
              syslog(7,"debug: %s: lchown: %s %d %d (%d) %m","shfs_symlink",local_18,
                     (ulong)*(uint *)(lVar2 + 8),(ulong)*(uint *)(lVar2 + 0xc),(ulong)*puVar4);
            }
            piVar5 = __errno_location();
            local_c = -*piVar5;
          }
        }
      }
    }
  }
  free(local_18);
  free(__ptr);
  free_share_info(uVar3);
  return local_c;
}



int shfs_unlink(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 local_bc;
  undefined1 local_b8 [152];
  char *local_20;
  undefined8 local_18;
  int local_c;
  
  local_18 = 0;
  local_20 = (char *)0x0;
  local_bc = 0;
  iVar1 = is_debug_enabled("shfs_unlink");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s","shfs_unlink",(ulong)*(uint *)(lVar2 + 0x10),param_1);
  }
  local_18 = get_share_info(param_1);
  local_20 = (char *)allocate_path_buffer();
  iVar1 = lookup(local_20,param_1,local_18,0,local_b8,&local_bc);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_unlink");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_unlink",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  else {
    local_c = unlink(local_20);
    if (local_c == -1) {
      iVar1 = is_debug_enabled("shfs_unlink");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: unlink: %s (%d) %m","shfs_unlink",local_20,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_c = -*piVar4;
    }
  }
  free(local_20);
  free_share_info(local_18);
  return local_c;
}



int shfs_rmdir(long param_1)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 local_bc;
  undefined1 local_b8 [24];
  uint local_a0;
  void *local_20;
  undefined8 local_18;
  int local_c;
  
  local_18 = 0;
  local_20 = (void *)0x0;
  local_bc = 0;
  iVar1 = is_debug_enabled("shfs_rmdir");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s","shfs_rmdir",(ulong)*(uint *)(lVar2 + 0x10),param_1);
  }
  local_18 = get_share_info(param_1);
  local_20 = (void *)allocate_path_buffer();
  iVar1 = lookup(local_20,param_1,local_18,0,local_b8,&local_bc);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_rmdir");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_rmdir",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  else {
    iVar1 = remove_path_or_zfs_dataset(local_20);
    if (iVar1 == -1) {
      iVar1 = is_debug_enabled("shfs_rmdir");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: rmdir_: %s (%d) %m","shfs_rmdir",local_20,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_c = -*piVar4;
    }
    else {
      do {
        do {
          iVar1 = lookup(local_20,param_1,local_18,0,local_b8,&local_bc);
          if (iVar1 == -1) {
            piVar4 = __errno_location();
            if (*piVar4 == 2) {
              pcVar5 = strchr((char *)(param_1 + 1),0x2f);
              if (pcVar5 == (char *)0x0) {
                del_share_info(param_1);
              }
              local_c = 0;
            }
            else {
              iVar1 = is_debug_enabled("shfs_rmdir");
              if (iVar1 != 0) {
                puVar3 = (uint *)__errno_location();
                syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_rmdir",param_1,(ulong)*puVar3);
              }
              piVar4 = __errno_location();
              local_c = -*piVar4;
            }
            goto LAB_0040e374;
          }
        } while ((local_a0 & 0xf000) != 0x4000);
        iVar1 = remove_path_or_zfs_dataset(local_20);
      } while (iVar1 != -1);
      iVar1 = is_debug_enabled("shfs_rmdir");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: rmdir_: %s (%d) %m","shfs_rmdir",local_20,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_c = -*piVar4;
    }
  }
LAB_0040e374:
  free(local_20);
  free_share_info(local_18);
  return local_c;
}



int shfs_rename(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 local_cc;
  undefined1 local_c8 [24];
  uint local_b0;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  char *local_20;
  char *local_18;
  int local_c;
  
  local_30 = 0;
  local_18 = (char *)0x0;
  local_38 = (void *)0x0;
  local_20 = (char *)0x0;
  local_28 = (void *)0x0;
  local_cc = 0;
  iVar1 = is_debug_enabled("shfs_rename");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d oldpath: %s newpath: %s","shfs_rename",
           (ulong)*(uint *)(lVar2 + 0x10),param_1,param_2);
  }
  if (param_3 == 0) {
    local_30 = get_share_info(param_1);
    local_18 = (char *)allocate_path_buffer();
    iVar1 = lookup(local_18,param_2,local_30,0,local_c8,&local_cc);
    if ((iVar1 != 0) || ((local_b0 & 0xf000) == 0x4000)) {
      free(local_18);
      local_18 = (char *)0x0;
    }
    local_cc = 0;
    local_38 = (void *)allocate_path_buffer();
    iVar1 = lookup(local_38,param_1,local_30,0,local_c8,&local_cc);
    if (iVar1 == -1) {
      iVar1 = is_debug_enabled("shfs_rename");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_rename",local_38,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_c = -*piVar4;
    }
    else {
      local_28 = (void *)allocate_path_buffer();
      iVar1 = locate(local_28,param_2,local_30,0);
      if (iVar1 == -1) {
        iVar1 = is_debug_enabled("shfs_rename");
        if (iVar1 != 0) {
          puVar3 = (uint *)__errno_location();
          syslog(7,"debug: %s: locate: %s (%d) %m","shfs_rename",param_2,(ulong)*puVar3);
        }
        piVar4 = __errno_location();
        local_c = -*piVar4;
      }
      else {
        local_20 = (char *)allocate_path_buffer();
        get_root_from_path(local_20,local_38);
        iVar1 = create_path(local_20,param_2,local_28,local_30);
        if (iVar1 == -1) {
          iVar1 = is_debug_enabled("shfs_rename");
          if (iVar1 != 0) {
            puVar3 = (uint *)__errno_location();
            syslog(7,"debug: %s: create_path: %s (%d) %m","shfs_rename",param_2,(ulong)*puVar3);
          }
          piVar4 = __errno_location();
          local_c = -*piVar4;
        }
        else {
          iVar1 = rename_with_zfs_fallback(local_38,local_20);
          if (iVar1 == -1) {
            iVar1 = is_debug_enabled("shfs_rename");
            if (iVar1 != 0) {
              puVar3 = (uint *)__errno_location();
              syslog(7,"debug: %s: rename_: %s %s (%d) %m","shfs_rename",local_38,local_20,
                     (ulong)*puVar3);
            }
            piVar4 = __errno_location();
            local_c = -*piVar4;
          }
          else if ((local_b0 & 0xf000) == 0x4000) {
            do {
              do {
                iVar1 = lookup(local_38,param_1,local_30,0,local_c8,&local_cc);
                if (iVar1 == -1) {
                  piVar4 = __errno_location();
                  if (*piVar4 == 2) {
                    pcVar5 = strchr((char *)(param_1 + 1),0x2f);
                    if (pcVar5 == (char *)0x0) {
                      del_share_info(param_1);
                    }
                    goto LAB_0040e969;
                  }
                  iVar1 = is_debug_enabled("shfs_rename");
                  if (iVar1 != 0) {
                    puVar3 = (uint *)__errno_location();
                    syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_rename",param_1,(ulong)*puVar3);
                  }
                  piVar4 = __errno_location();
                  local_c = -*piVar4;
                  goto LAB_0040e970;
                }
              } while ((local_b0 & 0xf000) != 0x4000);
              iVar1 = locate(local_28,param_2,local_30,0);
              if (iVar1 == -1) {
                iVar1 = is_debug_enabled("shfs_rename");
                if (iVar1 != 0) {
                  puVar3 = (uint *)__errno_location();
                  syslog(7,"debug: %s: locate: %s (%d) %m","shfs_rename",param_2,(ulong)*puVar3);
                }
                piVar4 = __errno_location();
                local_c = -*piVar4;
                goto LAB_0040e970;
              }
              get_root_from_path(local_20,local_38);
              iVar1 = create_path(local_20,param_2,local_28,local_30);
              if (iVar1 == -1) {
                iVar1 = is_debug_enabled("shfs_rename");
                if (iVar1 != 0) {
                  puVar3 = (uint *)__errno_location();
                  syslog(7,"debug: %s: create_path: %s (%d) %m","shfs_rename",param_2,(ulong)*puVar3
                        );
                }
                piVar4 = __errno_location();
                local_c = -*piVar4;
                goto LAB_0040e970;
              }
              iVar1 = rename_with_zfs_fallback(local_38,local_20);
            } while (iVar1 != -1);
            iVar1 = is_debug_enabled("shfs_rename");
            if (iVar1 != 0) {
              puVar3 = (uint *)__errno_location();
              syslog(7,"debug: %s: rename_: %s %s (%d) %m","shfs_rename",local_38,local_20,
                     (ulong)*puVar3);
            }
            piVar4 = __errno_location();
            local_c = -*piVar4;
          }
          else if (((local_18 == (char *)0x0) || (iVar1 = strcmp(local_18,local_20), iVar1 == 0)) ||
                  (local_c = unlink(local_18), local_c != -1)) {
LAB_0040e969:
            local_c = 0;
          }
          else {
            iVar1 = is_debug_enabled("shfs_rename");
            if (iVar1 != 0) {
              puVar3 = (uint *)__errno_location();
              syslog(7,"debug: %s: unlink: %s (%d) %m","shfs_rename",local_18,(ulong)*puVar3);
            }
            piVar4 = __errno_location();
            local_c = -*piVar4;
          }
        }
      }
    }
LAB_0040e970:
    free(local_28);
    free(local_20);
    free(local_38);
    free(local_18);
    free_share_info(local_30);
  }
  else {
    local_c = -0x16;
  }
  return local_c;
}



int shfs_link(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 local_cc;
  undefined1 local_c8 [152];
  char *local_30;
  undefined8 local_28;
  void *local_20;
  char *local_18;
  int local_c;
  
  local_28 = 0;
  local_30 = (char *)0x0;
  local_18 = (char *)0x0;
  local_20 = (void *)0x0;
  local_cc = 0;
  iVar1 = is_debug_enabled("shfs_link");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d oldpath: %s newpath: %s","shfs_link",(ulong)*(uint *)(lVar2 + 0x10)
           ,param_1,param_2);
  }
  local_28 = get_share_info(param_1);
  local_30 = (char *)allocate_path_buffer();
  iVar1 = lookup(local_30,param_1,local_28,0,local_c8,&local_cc);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_link");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_link",local_30,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  else {
    local_20 = (void *)allocate_path_buffer();
    iVar1 = locate(local_20,param_2,local_28,0);
    if (iVar1 == -1) {
      iVar1 = is_debug_enabled("shfs_link");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: locate: %s (%d) %m","shfs_link",param_2,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_c = -*piVar4;
    }
    else {
      local_18 = (char *)allocate_path_buffer();
      get_root_from_path(local_18,local_30);
      iVar1 = create_path(local_18,param_2,local_20,local_28);
      if (iVar1 == -1) {
        iVar1 = is_debug_enabled("shfs_link");
        if (iVar1 != 0) {
          puVar3 = (uint *)__errno_location();
          syslog(7,"debug: %s: create_path: %s (%d) %m","shfs_link",param_2,(ulong)*puVar3);
        }
        piVar4 = __errno_location();
        local_c = -*piVar4;
      }
      else {
        iVar1 = link(local_30,local_18);
        if (iVar1 == -1) {
          iVar1 = is_debug_enabled("shfs_link");
          if (iVar1 != 0) {
            puVar3 = (uint *)__errno_location();
            syslog(7,"debug: %s: link: %s %s (%d) %m","shfs_link",local_30,local_18,(ulong)*puVar3);
          }
          piVar4 = __errno_location();
          local_c = -*piVar4;
        }
        else {
          local_c = 0;
        }
      }
    }
  }
  free(local_20);
  free(local_18);
  free(local_30);
  free_share_info(local_28);
  return local_c;
}



int shfs_mknod(undefined8 param_1,uint param_2,__dev_t param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *__ptr;
  uint *puVar4;
  int *piVar5;
  char *local_18;
  int local_c;
  
  local_18 = (char *)0x0;
  iVar1 = is_debug_enabled("shfs_mknod");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s mode: %#o dev: %lx","shfs_mknod",
           (ulong)*(uint *)(lVar2 + 0x10),param_1,(ulong)param_2,param_3);
  }
  uVar3 = get_share_info(param_1);
  __ptr = (void *)allocate_path_buffer();
  iVar1 = locate(__ptr,param_1,uVar3,0);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_mknod");
    if (iVar1 != 0) {
      puVar4 = (uint *)__errno_location();
      syslog(7,"debug: %s: locate: %s (%d) %m","shfs_mknod",param_1,(ulong)*puVar4);
    }
    piVar5 = __errno_location();
    local_c = -*piVar5;
  }
  else {
    local_18 = (char *)allocate_path_buffer();
    iVar1 = assign_disk(local_18,uVar3,param_1,0,__ptr);
    if (iVar1 == -1) {
      puVar4 = (uint *)__errno_location();
      syslog(6,"assign_disk: %s %m (%d) %m",param_1,(ulong)*puVar4);
      piVar5 = __errno_location();
      local_c = -*piVar5;
    }
    else {
      iVar1 = create_path(local_18,param_1,__ptr,uVar3);
      if (iVar1 == -1) {
        iVar1 = is_debug_enabled("shfs_mknod");
        if (iVar1 != 0) {
          puVar4 = (uint *)__errno_location();
          syslog(7,"debug: %s: create_path: %s %s %s (%d) %m","shfs_mknod",local_18,param_1,__ptr,
                 (ulong)*puVar4);
        }
        piVar5 = __errno_location();
        local_c = -*piVar5;
      }
      else {
        iVar1 = is_debug_enabled("shfs_mknod");
        if (iVar1 != 0) {
          syslog(7,"debug: %s: real_path: %s","shfs_mknod",local_18);
        }
        if ((param_2 & 0xf000) == 0x1000) {
          local_c = mkfifo(local_18,param_2);
        }
        else {
          local_c = mknod(local_18,param_2,param_3);
        }
        if (local_c == -1) {
          iVar1 = is_debug_enabled("shfs_mknod");
          if (iVar1 != 0) {
            puVar4 = (uint *)__errno_location();
            syslog(7,"debug: %s: mknod: %s (%d) %m","shfs_mknod",local_18,(ulong)*puVar4);
          }
          piVar5 = __errno_location();
          local_c = -*piVar5;
        }
        else {
          lVar2 = fuse_get_context();
          iVar1 = chown(local_18,*(__uid_t *)(lVar2 + 8),*(__gid_t *)(lVar2 + 0xc));
          if (iVar1 == -1) {
            iVar1 = is_debug_enabled("shfs_mknod");
            if (iVar1 != 0) {
              puVar4 = (uint *)__errno_location();
              syslog(7,"debug: %s: chown: %s %d %d (%d) %m","shfs_mknod",local_18,
                     (ulong)*(uint *)(lVar2 + 8),(ulong)*(uint *)(lVar2 + 0xc),(ulong)*puVar4);
            }
            piVar5 = __errno_location();
            local_c = -*piVar5;
          }
          else {
            local_c = 0;
          }
        }
      }
    }
  }
  free(local_18);
  free(__ptr);
  free_share_info(uVar3);
  return local_c;
}



int shfs_chmod(undefined8 param_1,uint param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 local_bc;
  stat64 local_b8;
  char *local_20;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = (char *)0x0;
  local_bc = 0;
  iVar1 = is_debug_enabled("shfs_chmod");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s mode: %#o","shfs_chmod",(ulong)*(uint *)(lVar2 + 0x10),
           param_1,(ulong)param_2);
  }
  param_2 = param_2 & 0xfff;
  if (param_3 != 0) {
    local_14 = fstat64((int)*(undefined8 *)(param_3 + 0x10),&local_b8);
    if (local_14 == -1) {
      iVar1 = is_debug_enabled("shfs_chmod");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: fstat: %s (%d) %m","shfs_chmod",param_1,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_14 = -*piVar4;
    }
    if ((local_b8.st_mode & 0xf000) != 0x4000) {
      local_14 = fchmod((int)*(undefined8 *)(param_3 + 0x10),param_2);
      if (local_14 == -1) {
        iVar1 = is_debug_enabled("shfs_chmod");
        if (iVar1 != 0) {
          puVar3 = (uint *)__errno_location();
          syslog(7,"debug: %s: fchmod: %s %#o (%d) %m","shfs_chmod",param_1,(ulong)param_2,
                 (ulong)*puVar3);
        }
        piVar4 = __errno_location();
        local_14 = -*piVar4;
      }
      goto LAB_0040f381;
    }
  }
  local_10 = get_share_info(param_1);
  local_20 = (char *)allocate_path_buffer();
  iVar1 = lookup(local_20,param_1,local_10,0,&local_b8,&local_bc);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_chmod");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_chmod",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_14 = -*piVar4;
  }
  else {
    iVar1 = chmod(local_20,param_2);
    if (iVar1 == -1) {
      iVar1 = is_debug_enabled("shfs_chmod");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: chmod: %s %#o (%d) %m","shfs_chmod",local_20,(ulong)param_2,
               (ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_14 = -*piVar4;
    }
    else if ((local_b8.st_mode & 0xf000) == 0x4000) {
      do {
        iVar1 = lookup(local_20,param_1,local_10,0,&local_b8,&local_bc);
        if (iVar1 == -1) {
          piVar4 = __errno_location();
          if (*piVar4 == 2) goto LAB_0040f377;
          iVar1 = is_debug_enabled("shfs_chmod");
          if (iVar1 != 0) {
            puVar3 = (uint *)__errno_location();
            syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_chmod",param_1,(ulong)*puVar3);
          }
          piVar4 = __errno_location();
          local_14 = -*piVar4;
          goto LAB_0040f381;
        }
      } while (((local_b8.st_mode & 0xf000) != 0x4000) ||
              (iVar1 = chmod(local_20,param_2), iVar1 != -1));
      iVar1 = is_debug_enabled("shfs_chmod");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: chmod: %s %#o (%d) %m","shfs_chmod",local_20,(ulong)param_2,
               (ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_14 = -*piVar4;
    }
    else {
LAB_0040f377:
      local_14 = 0;
    }
  }
LAB_0040f381:
  free(local_20);
  free_share_info(local_10);
  return local_14;
}



int shfs_chown(undefined8 param_1,uint param_2,uint param_3,long param_4)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 local_bc;
  stat64 local_b8;
  char *local_20;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = (char *)0x0;
  local_bc = 0;
  iVar1 = is_debug_enabled("shfs_chown");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s uid: %d gid: %d","shfs_chown",
           (ulong)*(uint *)(lVar2 + 0x10),param_1,(ulong)param_2,(ulong)param_3);
  }
  if (param_4 != 0) {
    local_14 = fstat64((int)*(undefined8 *)(param_4 + 0x10),&local_b8);
    if (local_14 == -1) {
      iVar1 = is_debug_enabled("shfs_chown");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: fstat: %s (%d) %m","shfs_chown",param_1,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_14 = -*piVar4;
    }
    if ((local_b8.st_mode & 0xf000) != 0x4000) {
      local_14 = fchown((int)*(undefined8 *)(param_4 + 0x10),param_2,param_3);
      if (local_14 == -1) {
        iVar1 = is_debug_enabled("shfs_chown");
        if (iVar1 != 0) {
          puVar3 = (uint *)__errno_location();
          syslog(7,"debug: %s: fchown: %s %d %d (%d) %m","shfs_chown",param_1,(ulong)param_2,
                 (ulong)param_3,(ulong)*puVar3);
        }
        piVar4 = __errno_location();
        local_14 = -*piVar4;
      }
      goto LAB_0040f7bc;
    }
  }
  local_10 = get_share_info(param_1);
  local_20 = (char *)allocate_path_buffer();
  iVar1 = lookup(local_20,param_1,local_10,0,&local_b8,&local_bc);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_chown");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_chown",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_14 = -*piVar4;
  }
  else {
    iVar1 = lchown(local_20,param_2,param_3);
    if (iVar1 == -1) {
      iVar1 = is_debug_enabled("shfs_chown");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: lchown: %s %d %d (%d) %m","shfs_chown",local_20,(ulong)param_2,
               (ulong)param_3,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_14 = -*piVar4;
    }
    else if ((local_b8.st_mode & 0xf000) == 0x4000) {
      do {
        iVar1 = lookup(local_20,param_1,local_10,0,&local_b8,&local_bc);
        if (iVar1 == -1) {
          piVar4 = __errno_location();
          if (*piVar4 == 2) goto LAB_0040f7b2;
          iVar1 = is_debug_enabled("shfs_chown");
          if (iVar1 != 0) {
            puVar3 = (uint *)__errno_location();
            syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_chown",param_1,(ulong)*puVar3);
          }
          piVar4 = __errno_location();
          local_14 = -*piVar4;
          goto LAB_0040f7bc;
        }
      } while (((local_b8.st_mode & 0xf000) != 0x4000) ||
              (iVar1 = lchown(local_20,param_2,param_3), iVar1 != -1));
      iVar1 = is_debug_enabled("shfs_chown");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: lchown: %s %d %d (%d) %m","shfs_chown",local_20,(ulong)param_2,
               (ulong)param_3,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_14 = -*piVar4;
    }
    else {
LAB_0040f7b2:
      local_14 = 0;
    }
  }
LAB_0040f7bc:
  free(local_20);
  free_share_info(local_10);
  return local_14;
}



int shfs_truncate(undefined8 param_1,__off64_t param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 local_bc;
  undefined1 local_b8 [152];
  char *local_20;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = (char *)0x0;
  local_bc = 0;
  iVar1 = is_debug_enabled("shfs_truncate");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s size: %ji","shfs_truncate",(ulong)*(uint *)(lVar2 + 0x10),
           param_1,param_2);
  }
  if (param_3 == 0) {
    local_10 = get_share_info(param_1);
    local_20 = (char *)allocate_path_buffer();
    iVar1 = lookup(local_20,param_1,local_10,0,local_b8,&local_bc);
    if (iVar1 == -1) {
      iVar1 = is_debug_enabled("shfs_truncate");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_truncate",param_1,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_14 = -*piVar4;
    }
    else {
      local_14 = truncate64(local_20,param_2);
      if (local_14 == -1) {
        iVar1 = is_debug_enabled("shfs_truncate");
        if (iVar1 != 0) {
          puVar3 = (uint *)__errno_location();
          syslog(7,"debug: %s: truncate: %s (%d) %m","shfs_truncate",local_20,(ulong)*puVar3);
        }
        piVar4 = __errno_location();
        local_14 = -*piVar4;
      }
    }
  }
  else {
    local_14 = ftruncate64((int)*(undefined8 *)(param_3 + 0x10),param_2);
    if (local_14 == -1) {
      iVar1 = is_debug_enabled("shfs_truncate");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: ftruncate: %s (%d) %m","shfs_truncate",local_20,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_14 = -*piVar4;
    }
  }
  free(local_20);
  free_share_info(local_10);
  return local_14;
}



int shfs_fallocate(undefined8 param_1,uint param_2,__off64_t param_3,__off64_t param_4,long param_5)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  int local_c;
  
  iVar1 = is_debug_enabled("shfs_fallocate");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s mode: %d offset: %ji len: %ji","shfs_fallocate",
           (ulong)*(uint *)(lVar2 + 0x10),param_1,(ulong)param_2,param_3,param_4);
  }
  local_c = fallocate64((int)*(undefined8 *)(param_5 + 0x10),param_2,param_3,param_4);
  if (local_c == -1) {
    iVar1 = is_debug_enabled("shfs_fallocate");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: fallocate: %s (%d) %m","shfs_fallocate",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  return local_c;
}



int shfs_utimens(undefined8 param_1,timespec *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 local_bc;
  stat64 local_b8;
  char *local_20;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = (char *)0x0;
  local_bc = 0;
  iVar1 = is_debug_enabled("shfs_utimens");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s","shfs_utimens",(ulong)*(uint *)(lVar2 + 0x10),param_1);
  }
  if (param_3 != 0) {
    local_14 = fstat64((int)*(undefined8 *)(param_3 + 0x10),&local_b8);
    if (local_14 == -1) {
      iVar1 = is_debug_enabled("shfs_utimens");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: fstat: %s (%d) %m","shfs_utimens",param_1,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_14 = -*piVar4;
    }
    if ((local_b8.st_mode & 0xf000) != 0x4000) {
      local_14 = futimens((int)*(undefined8 *)(param_3 + 0x10),param_2);
      if (local_14 == -1) {
        iVar1 = is_debug_enabled("shfs_utimens");
        if (iVar1 != 0) {
          puVar3 = (uint *)__errno_location();
          syslog(7,"debug: %s: futimens: %s (%d) %m","shfs_utimens",param_1,(ulong)*puVar3);
        }
        piVar4 = __errno_location();
        local_14 = -*piVar4;
      }
      goto LAB_0040fd4e;
    }
  }
  local_10 = get_share_info(param_1);
  local_20 = (char *)allocate_path_buffer();
  iVar1 = lookup(local_20,param_1,local_10,0,&local_b8,&local_bc);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_utimens");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_utimens",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_14 = -*piVar4;
  }
  else {
    local_14 = utimensat(-100,local_20,param_2,0x100);
    if (local_14 == -1) {
      iVar1 = is_debug_enabled("shfs_utimens");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: utimensat: %s (%d) %m","shfs_utimens",local_20,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_14 = -*piVar4;
    }
  }
LAB_0040fd4e:
  free(local_20);
  free_share_info(local_10);
  return local_14;
}



int shfs_create(undefined8 param_1,uint param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *__ptr;
  uint *puVar4;
  int *piVar5;
  char *local_18;
  int local_c;
  
  local_18 = (char *)0x0;
  iVar1 = is_debug_enabled("shfs_create");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s mode: %#o","shfs_create",(ulong)*(uint *)(lVar2 + 0x10),
           param_1,(ulong)param_2);
  }
  uVar3 = get_share_info(param_1);
  __ptr = (void *)allocate_path_buffer();
  iVar1 = locate(__ptr,param_1,uVar3,0);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_create");
    if (iVar1 != 0) {
      puVar4 = (uint *)__errno_location();
      syslog(7,"debug: %s: locate: %s (%d) %m","shfs_create",param_1,(ulong)*puVar4);
    }
    piVar5 = __errno_location();
    local_c = -*piVar5;
  }
  else {
    local_18 = (char *)allocate_path_buffer();
    iVar1 = assign_disk(local_18,uVar3,param_1,0,__ptr);
    if (iVar1 == -1) {
      puVar4 = (uint *)__errno_location();
      syslog(6,"assign_disk: %s (%d) %m",param_1,(ulong)*puVar4);
      piVar5 = __errno_location();
      local_c = -*piVar5;
    }
    else {
      iVar1 = create_path(local_18,param_1,__ptr,uVar3);
      if (iVar1 == -1) {
        iVar1 = is_debug_enabled("shfs_create");
        if (iVar1 != 0) {
          puVar4 = (uint *)__errno_location();
          syslog(7,"debug: %s: create_path: %s %s %s (%d) %m","shfs_create",local_18,param_1,__ptr,
                 (ulong)*puVar4);
        }
        piVar5 = __errno_location();
        local_c = -*piVar5;
      }
      else {
        iVar1 = is_debug_enabled("shfs_create");
        if (iVar1 != 0) {
          syslog(7,"debug: %s: real_path: %s","shfs_create",local_18);
        }
        iVar1 = open64(local_18,*param_3,(ulong)param_2);
        *(long *)(param_3 + 4) = (long)iVar1;
        if (*(long *)(param_3 + 4) == -1) {
          iVar1 = is_debug_enabled("shfs_create");
          if (iVar1 != 0) {
            puVar4 = (uint *)__errno_location();
            syslog(7,"debug: %s: open: %s (%d) %m","shfs_create",local_18,(ulong)*puVar4);
          }
          piVar5 = __errno_location();
          local_c = -*piVar5;
        }
        else {
          lVar2 = fuse_get_context();
          iVar1 = fchown((int)*(undefined8 *)(param_3 + 4),*(__uid_t *)(lVar2 + 8),
                         *(__gid_t *)(lVar2 + 0xc));
          if (iVar1 == -1) {
            iVar1 = is_debug_enabled("shfs_create");
            if (iVar1 != 0) {
              puVar4 = (uint *)__errno_location();
              syslog(7,"debug: %s: fchown: %s %d %d (%d) %m","shfs_create",local_18,
                     (ulong)*(uint *)(lVar2 + 8),(ulong)*(uint *)(lVar2 + 0xc),(ulong)*puVar4);
            }
            piVar5 = __errno_location();
            local_c = -*piVar5;
          }
          else {
            local_c = 0;
          }
        }
      }
    }
  }
  free(local_18);
  free(__ptr);
  free_share_info(uVar3);
  return local_c;
}



int shfs_open(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 local_bc;
  undefined1 local_b8 [148];
  int local_24;
  char *local_20;
  undefined8 local_18;
  int local_c;
  
  local_18 = 0;
  local_20 = (char *)0x0;
  local_bc = 0;
  iVar1 = is_debug_enabled("shfs_open");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s","shfs_open",(ulong)*(uint *)(lVar2 + 0x10),param_1);
  }
  local_18 = get_share_info(param_1);
  local_20 = (char *)allocate_path_buffer();
  iVar1 = lookup(local_20,param_1,local_18,0,local_b8,&local_bc);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_open");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_open",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  else {
    local_24 = open64(local_20,*param_2);
    if (local_24 == -1) {
      iVar1 = is_debug_enabled("shfs_open");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: open: %s (%d) %m","shfs_open",local_20,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_c = -*piVar4;
    }
    else {
      *(long *)(param_2 + 4) = (long)local_24;
      local_c = 0;
    }
  }
  free(local_20);
  free_share_info(local_18);
  return local_c;
}



undefined8
shfs_read_buffer(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  iVar1 = is_debug_enabled("shfs_read_buf");
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(param_5 + 0x10);
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s fd: %llu size: %zu offset: %ji","shfs_read_buf",
           (ulong)*(uint *)(lVar2 + 0x10),param_1,uVar4,param_3,param_4);
  }
  puVar3 = (undefined8 *)malloc(0x40);
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = 0xfffffff4;
  }
  else {
    *puVar3 = 1;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = param_3;
    *(undefined4 *)(puVar3 + 4) = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0xffffffff;
    puVar3[7] = 0;
    *(undefined4 *)(puVar3 + 4) = 6;
    *(int *)(puVar3 + 6) = (int)*(undefined8 *)(param_5 + 0x10);
    puVar3[7] = param_4;
    *param_2 = puVar3;
    uVar4 = 0;
  }
  return uVar4;
}



void shfs_write_buf(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  
  local_58 = 1;
  local_50 = 0;
  local_48 = 0;
  local_40 = fuse_buf_size(param_2);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0xffffffff;
  local_20 = 0;
  iVar2 = is_debug_enabled("shfs_write_buf");
  if (iVar2 != 0) {
    uVar3 = fuse_buf_size(param_2);
    uVar1 = *(undefined8 *)(param_4 + 0x10);
    lVar4 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s fd: %llu size: %zu offset: %ji","shfs_write_buf",
           (ulong)*(uint *)(lVar4 + 0x10),param_1,uVar1,uVar3,param_3);
  }
  local_38 = 6;
  local_28 = (undefined4)*(undefined8 *)(param_4 + 0x10);
  local_20 = param_3;
  fuse_buf_copy(&local_58,param_2,0x10);
  return;
}



long shfs_copy_file_range
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
               undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  long local_20;
  
  local_58 = param_6;
  local_50 = param_5;
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  iVar3 = is_debug_enabled("shfs_copy_file_range");
  uVar2 = local_40;
  uVar1 = local_58;
  if (iVar3 != 0) {
    lVar4 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path_in: %s off_in: %ji path_out: %s off_out: %ji size: %zu",
           "shfs_copy_file_range",(ulong)*(uint *)(lVar4 + 0x10),local_30,uVar2,local_48,uVar1,
           param_7);
  }
  local_20 = copy_file_range(*(ulong *)(local_38 + 0x10) & 0xffffffff,&local_40,
                             *(ulong *)(local_50 + 0x10) & 0xffffffff,&local_58,param_7,param_8);
  if (local_20 == -1) {
    piVar5 = __errno_location();
    local_20 = (long)-*piVar5;
  }
  return local_20;
}



__off64_t shfs_lseek(undefined8 param_1,__off64_t param_2,uint param_3,long param_4)

{
  int iVar1;
  long lVar2;
  __off64_t _Var3;
  int *piVar4;
  
  iVar1 = is_debug_enabled("shfs_lseek");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s offset: %ji whence: %i","shfs_lseek",
           (ulong)*(uint *)(lVar2 + 0x10),param_1,param_2,(ulong)param_3);
  }
  _Var3 = lseek64((int)*(undefined8 *)(param_4 + 0x10),param_2,param_3);
  if (_Var3 == -1) {
    piVar4 = __errno_location();
    _Var3 = (__off64_t)-*piVar4;
  }
  return _Var3;
}



undefined8 normalize_and_accumulate_fs_stats(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong local_20 [3];
  
  if (*param_1 == 0x2fc12fc1) {
    get_fs_size_zfs(param_3,local_20);
    param_1[2] = local_20[0] / (ulong)param_1[1];
  }
  if (param_1[1] < 0x1000) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = SUB168(SEXT816(0x1000),8);
    uVar2 = SUB168((auVar1 << 0x40 | ZEXT816(0x1000)) / SEXT816(param_1[1]),0);
    param_1[2] = (ulong)param_1[2] / uVar2;
    param_1[3] = (ulong)param_1[3] / uVar2;
    param_1[4] = (ulong)param_1[4] / uVar2;
  }
  else if (0x1000 < param_1[1]) {
    lVar3 = param_1[1];
    if (lVar3 < 0) {
      lVar3 = lVar3 + 0xfff;
    }
    lVar3 = lVar3 >> 0xc;
    param_1[2] = param_1[2] * lVar3;
    param_1[3] = param_1[3] * lVar3;
    param_1[4] = param_1[4] * lVar3;
  }
  *param_2 = 0x1000;
  param_2[1] = 0x1000;
  param_2[2] = param_2[2] + param_1[2];
  param_2[3] = param_2[3] + param_1[3];
  param_2[4] = param_2[4] + param_1[4];
  param_2[5] = param_2[5] + param_1[5];
  param_2[6] = param_2[6] + param_1[6];
  param_2[7] = param_2[7] + param_1[4];
  param_2[8] = 0;
  param_2[9] = param_1[10];
  if ((param_2[10] == 0) || ((ulong)param_1[8] < (ulong)param_2[10])) {
    param_2[10] = param_1[8];
  }
  return 0;
}



int shfs_statfs(undefined8 param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  statfs64 local_a8;
  char *local_28;
  long local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_20 = 0;
  local_28 = (char *)0x0;
  local_10 = 0;
  iVar1 = is_debug_enabled("shfs_statfs");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s","shfs_statfs",(ulong)*(uint *)(lVar2 + 0x10),param_1);
  }
  local_20 = get_share_info(param_1);
  local_28 = (char *)allocate_path_buffer();
  memset(param_2,0,0x70);
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    if ((*(ulong *)(local_20 + 0x550) >> ((byte)local_10 & 0x3f) & 1) != 0) {
      iVar1 = build_path(local_28,&DAT_004158f3,local_20,local_10);
      if (iVar1 < 0) {
        piVar3 = __errno_location();
        local_c = -*piVar3;
        goto LAB_00410b1e;
      }
      iVar1 = statfs64(local_28,&local_a8);
      if (iVar1 == -1) {
        piVar3 = __errno_location();
        if (*piVar3 != 2) {
          piVar3 = __errno_location();
          local_c = -*piVar3;
          goto LAB_00410b1e;
        }
      }
      else {
        normalize_and_accumulate_fs_stats(&local_a8,param_2,local_28);
      }
    }
    local_10 = local_10 + 1;
  }
  if ((*(int *)(local_20 + 0x118) == 2) || ((*(ulong *)(local_20 + 0x550) & 2) != 0)) {
    local_c = 0;
  }
  else {
    for (local_14 = 1; local_14 < 0x1d; local_14 = local_14 + 1) {
      if (((*(ulong *)(local_20 + 0x550) >> ((byte)local_10 & 0x3f) & 1) != 0) &&
         (iVar1 = is_item_included(local_20,local_10), iVar1 != 0)) {
        if (*(int *)(local_20 + 0x548) == 0) {
          iVar1 = build_path(local_28,&DAT_004158f3,local_20,local_10);
          if (iVar1 == -1) {
            piVar3 = __errno_location();
            local_c = -*piVar3;
            goto LAB_00410b1e;
          }
        }
        else {
          iVar1 = build_path(local_28,param_1,local_20,local_10);
          if (iVar1 == -1) {
            piVar3 = __errno_location();
            local_c = -*piVar3;
            goto LAB_00410b1e;
          }
        }
        iVar1 = statfs64(local_28,&local_a8);
        if (iVar1 == -1) {
          piVar3 = __errno_location();
          if (*piVar3 != 2) {
            piVar3 = __errno_location();
            local_c = -*piVar3;
            goto LAB_00410b1e;
          }
        }
        else {
          normalize_and_accumulate_fs_stats(&local_a8,param_2,local_28);
        }
      }
      local_10 = local_10 + 1;
    }
    local_c = 0;
  }
LAB_00410b1e:
  free(local_28);
  free_share_info(local_20);
  return local_c;
}



int shfs_flush(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  int local_c;
  
  iVar1 = is_debug_enabled("shfs_flush");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s","shfs_flush",(ulong)*(uint *)(lVar2 + 0x10),param_1);
  }
  iVar1 = dup((int)*(undefined8 *)(param_2 + 0x10));
  local_c = close(iVar1);
  if (local_c == -1) {
    iVar1 = is_debug_enabled("shfs_flush");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: close: %s (%d) %m","shfs_flush",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  return local_c;
}



undefined8 shfs_release(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = is_debug_enabled("shfs_release");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s","shfs_release",(ulong)*(uint *)(lVar2 + 0x10),param_1);
  }
  close((int)*(undefined8 *)(param_2 + 0x10));
  return 0;
}



int shfs_fsync(undefined8 param_1,uint param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  int local_c;
  
  iVar1 = is_debug_enabled("shfs_fsync");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s isdatasync: %d fi: %p","shfs_fsync",
           (ulong)*(uint *)(lVar2 + 0x10),param_1,(ulong)param_2,param_3);
  }
  local_c = fsync((int)*(undefined8 *)(param_3 + 0x10));
  if (local_c == -1) {
    iVar1 = is_debug_enabled("shfs_fsync");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: fsync: %s (%d) %m","shfs_fsync",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  return local_c;
}



int shfs_flock(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  int local_c;
  
  iVar1 = is_debug_enabled("shfs_flock");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s op: %i","shfs_flock",(ulong)*(uint *)(lVar2 + 0x10),
           param_1,(ulong)param_3);
  }
  local_c = flock(*(ulong *)(param_2 + 0x10) & 0xffffffff,param_3);
  if (local_c == -1) {
    iVar1 = is_debug_enabled("shfs_flock");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: flock: %s (%d) %m","shfs_flock",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  return local_c;
}



int shfs_setxattr(undefined8 param_1,char *param_2,void *param_3,size_t param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 local_bc;
  undefined1 local_b8 [24];
  uint local_a0;
  char *local_20;
  undefined8 local_18;
  int local_c;
  
  local_18 = 0;
  local_20 = (char *)0x0;
  local_bc = 0;
  iVar1 = is_debug_enabled("shfs_setxattr");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s name: %s size: %zu flags: %#x","shfs_setxattr",
           (ulong)*(uint *)(lVar2 + 0x10),param_1,param_2,param_4,(ulong)param_5);
  }
  local_18 = get_share_info(param_1);
  local_20 = (char *)allocate_path_buffer();
  iVar1 = lookup(local_20,param_1,local_18,0,local_b8,&local_bc);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_setxattr");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_setxattr",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  else {
    iVar1 = lsetxattr(local_20,param_2,param_3,param_4,param_5);
    if (iVar1 == -1) {
      iVar1 = is_debug_enabled("shfs_setxattr");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: lsetxattr: %s %s (%d) %m","shfs_setxattr",param_2,local_20,
               (ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_c = -*piVar4;
    }
    else if ((local_a0 & 0xf000) == 0x4000) {
      do {
        iVar1 = lookup(local_20,param_1,local_18,0,local_b8,&local_bc);
        if (iVar1 == -1) {
          piVar4 = __errno_location();
          if (*piVar4 == 2) goto LAB_004110c7;
          iVar1 = is_debug_enabled("shfs_setxattr");
          if (iVar1 != 0) {
            puVar3 = (uint *)__errno_location();
            syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_setxattr",param_1,(ulong)*puVar3);
          }
          piVar4 = __errno_location();
          local_c = -*piVar4;
          goto LAB_004110ce;
        }
      } while (((local_a0 & 0xf000) != 0x4000) ||
              (iVar1 = setxattr(local_20,param_2,param_3,param_4,param_5), iVar1 != -1));
      iVar1 = is_debug_enabled("shfs_setxattr");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: lsetxattr: %s %s (%d) %m","shfs_setxattr",param_2,local_20,
               (ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_c = -*piVar4;
    }
    else {
LAB_004110c7:
      local_c = 0;
    }
  }
LAB_004110ce:
  free(local_20);
  free_share_info(local_18);
  return local_c;
}



int shfs_getxattr(undefined8 param_1,char *param_2,void *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  ssize_t sVar5;
  undefined1 local_158 [156];
  undefined4 local_bc;
  undefined1 local_b8 [152];
  char *local_20;
  undefined8 local_18;
  int local_c;
  
  local_18 = 0;
  local_20 = (char *)0x0;
  local_bc = 0;
  iVar1 = is_debug_enabled("shfs_getxattr");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s name: %s size: %zu","shfs_getxattr",
           (ulong)*(uint *)(lVar2 + 0x10),param_1,param_2,param_4);
  }
  local_18 = get_share_info(param_1);
  local_20 = (char *)allocate_path_buffer();
  iVar1 = lookup(local_20,param_1,local_18,0,local_b8,&local_bc);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_getxattr");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_getxattr",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  else {
    iVar1 = strcmp(param_2,"system.LOCATION");
    if (iVar1 == 0) {
      if (param_4 == 0) {
        local_c = 0x1000;
      }
      else if (param_4 < 0x1000) {
        local_c = -0x22;
      }
      else {
        local_c = copy_path_after_prefix(param_3,local_20);
      }
    }
    else {
      iVar1 = strcmp(param_2,"system.LOCATIONS");
      if (iVar1 == 0) {
        if (param_4 == 0) {
          local_c = 0x1000;
        }
        else if (param_4 < 0x1000) {
          local_c = -0x22;
        }
        else {
          local_c = copy_path_after_prefix(param_3,local_20);
          while (iVar1 = lookup(local_20,param_1,local_18,0,local_158,&local_bc), iVar1 != -1) {
            iVar1 = local_c + 1;
            *(undefined2 *)((long)param_3 + (long)local_c) = 0x2c;
            local_c = iVar1;
            iVar1 = copy_path_after_prefix((long)iVar1 + (long)param_3,local_20);
            local_c = local_c + iVar1;
          }
        }
      }
      else {
        sVar5 = lgetxattr(local_20,param_2,param_3,param_4);
        local_c = (int)sVar5;
        if (local_c == -1) {
          iVar1 = is_debug_enabled("shfs_getxattr");
          if (iVar1 != 0) {
            puVar3 = (uint *)__errno_location();
            syslog(7,"debug: %s: lgetxattr: %s name %s size %zu (%d) %m","shfs_getxattr",local_20,
                   param_2,param_4,(ulong)*puVar3);
          }
          piVar4 = __errno_location();
          local_c = -*piVar4;
        }
      }
    }
  }
  free(local_20);
  free_share_info(local_18);
  return local_c;
}



int shfs_listxattr(undefined8 param_1,char *param_2,size_t param_3)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  ssize_t sVar5;
  undefined4 local_bc;
  undefined1 local_b8 [152];
  char *local_20;
  undefined8 local_18;
  int local_c;
  
  local_18 = 0;
  local_20 = (char *)0x0;
  local_bc = 0;
  iVar1 = is_debug_enabled("shfs_listxattr");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s","shfs_listxattr",(ulong)*(uint *)(lVar2 + 0x10),param_1);
  }
  local_18 = get_share_info(param_1);
  local_20 = (char *)allocate_path_buffer();
  iVar1 = lookup(local_20,param_1,local_18,0,local_b8,&local_bc);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_listxattr");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_listxattr",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  else {
    sVar5 = llistxattr(local_20,param_2,param_3);
    local_c = (int)sVar5;
    if (local_c == -1) {
      iVar1 = is_debug_enabled("shfs_listxattr");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: llistxattr: %s (%d) %m","shfs_listxattr",local_20,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_c = -*piVar4;
    }
  }
  free(local_20);
  free_share_info(local_18);
  return local_c;
}



int shfs_removexattr(undefined8 param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 local_bc;
  undefined1 local_b8 [24];
  uint local_a0;
  char *local_20;
  undefined8 local_18;
  int local_c;
  
  local_18 = 0;
  local_20 = (char *)0x0;
  local_bc = 0;
  iVar1 = is_debug_enabled("shfs_removexattr");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s name: %s","shfs_removexattr",
           (ulong)*(uint *)(lVar2 + 0x10),param_1,param_2);
  }
  local_18 = get_share_info(param_1);
  local_20 = (char *)allocate_path_buffer();
  iVar1 = lookup(local_20,param_1,local_18,0,local_b8,&local_bc);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("shfs_removexattr");
    if (iVar1 != 0) {
      puVar3 = (uint *)__errno_location();
      syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_removexattr",param_1,(ulong)*puVar3);
    }
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  else {
    local_c = -0x3d;
    iVar1 = lremovexattr(local_20,param_2);
    if (iVar1 == -1) {
      piVar4 = __errno_location();
      if (*piVar4 != 0x3d) {
        iVar1 = is_debug_enabled("shfs_removexattr");
        if (iVar1 != 0) {
          puVar3 = (uint *)__errno_location();
          syslog(7,"debug: %s: lremovexattr: %s (%d) %m","shfs_removexattr",local_20,(ulong)*puVar3)
          ;
        }
        piVar4 = __errno_location();
        local_c = -*piVar4;
        goto LAB_00411868;
      }
    }
    else {
      local_c = 0;
    }
    if ((local_a0 & 0xf000) == 0x4000) {
      do {
        while( true ) {
          do {
            iVar1 = lookup(local_20,param_1,local_18,0,local_b8,&local_bc);
            if (iVar1 == -1) {
              piVar4 = __errno_location();
              if (*piVar4 != 2) {
                iVar1 = is_debug_enabled("shfs_removexattr");
                if (iVar1 != 0) {
                  puVar3 = (uint *)__errno_location();
                  syslog(7,"debug: %s: lookup: %s (%d) %m","shfs_removexattr",param_1,(ulong)*puVar3
                        );
                }
                piVar4 = __errno_location();
                local_c = -*piVar4;
              }
              goto LAB_00411868;
            }
          } while ((local_a0 & 0xf000) != 0x4000);
          iVar1 = lremovexattr(local_20,param_2);
          if (iVar1 == -1) break;
          local_c = 0;
        }
        piVar4 = __errno_location();
      } while (*piVar4 == 0x3d);
      iVar1 = is_debug_enabled("shfs_removexattr");
      if (iVar1 != 0) {
        puVar3 = (uint *)__errno_location();
        syslog(7,"debug: %s: lremovexattr: %s (%d) %m","shfs_removexattr",local_20,(ulong)*puVar3);
      }
      piVar4 = __errno_location();
      local_c = -*piVar4;
    }
  }
LAB_00411868:
  free(local_20);
  free_share_info(local_18);
  return local_c;
}



char * dirname_strdup(char *param_1)

{
  char *__s;
  char *pcVar1;
  
  __s = strdup(param_1);
  if ((__s != (char *)0x0) && (pcVar1 = strrchr(__s,0x2f), pcVar1 != (char *)0x0)) {
    *pcVar1 = '\0';
    return __s;
  }
  free(__s);
  return (char *)0x0;
}



long _copy_file(int param_1,int param_2,ulong param_3)

{
  int iVar1;
  __off64_t _Var2;
  int *piVar3;
  __off64_t _Var4;
  ssize_t sVar5;
  size_t local_20;
  long local_18;
  ulong local_10;
  
  local_10 = 0;
  local_18 = 0;
  iVar1 = ftruncate64(param_2,param_3);
  if (iVar1 == -1) {
    local_18 = -1;
  }
  else {
    while (local_10 < param_3) {
      _Var2 = lseek64(param_1,local_10,3);
      if (_Var2 == -1) {
        piVar3 = __errno_location();
        if (*piVar3 == 6) {
          return local_18;
        }
        return -1;
      }
      local_10 = lseek64(param_1,_Var2,4);
      if (local_10 == 0xffffffffffffffff) {
        return -1;
      }
      local_20 = local_10 - _Var2;
      if (0 < (long)local_20) {
        _Var4 = lseek64(param_1,_Var2,0);
        if (_Var4 == -1) {
          return -1;
        }
        _Var2 = lseek64(param_2,_Var2,0);
        if (_Var2 == -1) {
          return -1;
        }
        for (; local_20 != 0; local_20 = local_20 - sVar5) {
          sVar5 = sendfile64(param_2,param_1,(__off64_t *)0x0,local_20);
          iVar1 = is_debug_enabled("_copy_file");
          if (iVar1 != 0) {
            syslog(7,"debug: %s: sendfile %lu","_copy_file",sVar5);
          }
          if (sVar5 == -1) {
            return -1;
          }
          local_18 = local_18 + sVar5;
          DAT_0041b5b0 = sVar5 + DAT_0041b5b0;
        }
      }
    }
  }
  return local_18;
}



undefined4 copy_file(char *param_1,char *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = is_debug_enabled("copy_file");
  if (iVar1 != 0) {
    syslog(7,"debug: %s: %s to %s","copy_file",param_2,param_1);
  }
  iVar1 = open64(param_2,0);
  if (iVar1 == -1) {
    iVar1 = is_debug_enabled("copy_file");
    if (iVar1 != 0) {
      syslog(7,"debug: %s: open: %s","copy_file",param_2);
    }
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = open64(param_1,0xc1,(ulong)*(uint *)(param_3 + 0x18));
    if (iVar2 == -1) {
      iVar2 = is_debug_enabled("copy_file");
      if (iVar2 != 0) {
        syslog(7,"debug: %s: creat: %s","copy_file",param_1);
      }
      close(iVar1);
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = _copy_file(iVar1,iVar2,*(undefined8 *)(param_3 + 0x30));
      close(iVar1);
      close(iVar2);
    }
  }
  return uVar3;
}



int get_disk_index_from_name(char *param_1)

{
  int iVar1;
  ushort **ppuVar2;
  char *local_20;
  int local_c;
  
  iVar1 = strncmp(param_1,"disk",4);
  if (iVar1 == 0) {
    local_c = 0;
    local_20 = param_1 + 4;
    while (ppuVar2 = __ctype_b_loc(), ((*ppuVar2)[*local_20] & 0x800) != 0) {
      local_c = *local_20 + -0x30 + local_c * 10;
      local_20 = local_20 + 1;
    }
    if (*local_20 == '\0') {
      return local_c;
    }
    if (*local_20 == '/') {
      return local_c;
    }
  }
  return 0;
}



ulong resolve_disk_mask_from_path(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  char local_118 [260];
  int local_14;
  ulong local_10;
  
  copy_path_after_prefix(local_118,param_2);
  local_14 = get_disk_index_from_name(local_118);
  if (local_14 == 0) {
    iVar1 = strcmp(local_118,(char *)(param_3 + 0x121));
    if (iVar1 == 0) {
      local_10 = 1;
    }
    else {
      iVar1 = strcmp(local_118,(char *)(param_3 + 0x225));
      if (iVar1 == 0) {
        local_10 = 0xfffffffffffffffe;
      }
      else {
        piVar2 = __errno_location();
        *piVar2 = 2;
        local_10 = 0xffffffffffffffff;
      }
    }
  }
  else {
    local_10 = 1L << ((char)local_14 + 1U & 0x3f);
    if (param_1 != 0) {
      local_10 = local_10 | 3;
    }
  }
  return local_10;
}



bool compare_disk_roots(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char local_228 [272];
  char local_118 [272];
  
  get_root_from_path(local_118,param_1);
  get_root_from_path(local_228,param_2);
  iVar1 = strcmp(local_118,local_228);
  return iVar1 == 0;
}



undefined4 move_object(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  uint *puVar4;
  ssize_t sVar5;
  __time_t local_208;
  long local_200;
  __time_t local_1f8;
  long local_1f0;
  undefined4 local_1dc;
  undefined1 local_1d8 [24];
  uint local_1c0;
  __time_t local_190;
  long local_188;
  __time_t local_180;
  long local_178;
  undefined1 local_148 [32];
  stat64 local_128;
  undefined1 local_98 [44];
  int local_6c;
  int local_68;
  uint local_64;
  long local_60;
  int local_58;
  undefined4 local_54;
  char *local_50;
  char *local_48;
  char *local_40;
  void *local_38;
  char *local_30;
  void *local_28;
  void *local_20;
  long local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = (void *)0x0;
  local_28 = (void *)0x0;
  local_30 = (char *)0x0;
  local_38 = (void *)0x0;
  local_40 = (char *)0x0;
  local_48 = (char *)0x0;
  local_50 = (char *)0x0;
  local_54 = 0xffffffff;
  iVar1 = is_debug_enabled("move_object");
  if (iVar1 != 0) {
    syslog(7,"debug: %s: emptying: %d source_real_path: %s linkpath: %s","move_object",
           (ulong)param_1,param_2,param_3);
  }
  local_60 = pointer_to_third_path_component(param_2);
  if (local_60 == 0) {
    piVar2 = __errno_location();
    *piVar2 = 2;
  }
  else {
    iVar1 = lstat64(param_2,&local_128);
    if (iVar1 == -1) {
      iVar1 = is_debug_enabled("move_object");
      if (iVar1 != 0) {
        syslog(7,"debug: %s: lstat: %s %m","move_object",param_2);
      }
    }
    else {
      local_20 = (void *)dirname_strdup(param_2);
      if (local_20 == (void *)0x0) {
        iVar1 = is_debug_enabled("move_object");
        if (iVar1 != 0) {
          syslog(7,"debug: %s: parent_of_strdup: %s %m","move_object",param_2);
        }
      }
      else {
        iVar1 = get_file_times(local_20,local_98);
        if (iVar1 == -1) {
          iVar1 = is_debug_enabled("move_object");
          if (iVar1 != 0) {
            syslog(7,"debug: %s: get_times: %s %m","move_object",local_20);
          }
        }
        else {
          local_10 = get_share_info(local_60);
          local_18 = resolve_disk_mask_from_path(param_1,param_2,local_10);
          if (local_18 != -1) {
            if (*param_3 != '\0') {
              local_48 = (char *)allocate_path_buffer();
              local_1dc = 0;
              uVar3 = pointer_to_third_path_component(param_3);
              iVar1 = lookup(local_48,uVar3,local_10,local_18,local_1d8,&local_1dc);
              if (iVar1 != 0) {
                puVar4 = (uint *)__errno_location();
                syslog(3,"error: %s, %d: %m (%d): linkpath %s","move_object",0xef2,(ulong)*puVar4,
                       param_3);
                goto LAB_00412b28;
              }
              local_18 = (long)~(1 << ((char)local_1dc - 1U & 0x1f));
            }
            iVar1 = is_debug_enabled("move_object");
            if (iVar1 != 0) {
              syslog(7,"debug: %s: exclude: %lx","move_object",local_18);
            }
            local_30 = (char *)allocate_path_buffer();
            local_1dc = 0;
            iVar1 = lookup(local_30,local_60,local_10,local_18,local_1d8,&local_1dc);
            local_64 = (uint)(iVar1 == 0);
            iVar1 = is_debug_enabled("move_object");
            if (iVar1 != 0) {
              syslog(7,"debug: %s: path: %s exists: %d","move_object",local_60,(ulong)local_64);
            }
            if (local_64 == 0) {
              local_38 = (void *)allocate_path_buffer();
              iVar1 = locate(local_38,local_60,local_10,local_18);
              if (iVar1 == -1) {
                iVar1 = is_debug_enabled("move_object");
                if (iVar1 != 0) {
                  syslog(7,"debug: %s: locate: %s %m","move_object",local_60);
                }
                goto LAB_00412b28;
              }
              iVar1 = assign_disk(local_30,local_10,local_60,local_18,local_38);
              if (iVar1 == -1) {
                syslog(6,"assign_disk: %s %m",local_60);
                goto LAB_00412b28;
              }
              iVar1 = create_path(local_30,local_60,local_38,local_10);
              if (iVar1 == -1) {
                iVar1 = is_debug_enabled("move_object");
                if (iVar1 != 0) {
                  syslog(7,"debug: %s: create_path: %s %s %s","move_object",local_30,local_60,
                         local_28);
                }
                goto LAB_00412b28;
              }
            }
            local_28 = (void *)dirname_strdup(local_30);
            if (local_28 == (void *)0x0) {
              iVar1 = is_debug_enabled("move_object");
              if (iVar1 != 0) {
                syslog(7,"debug: %s: parent_of_strdup: %s %m","move_object",local_30);
              }
            }
            else {
              iVar1 = get_file_times(local_28,local_148);
              if (iVar1 == -1) {
                iVar1 = is_debug_enabled("move_object");
                if (iVar1 != 0) {
                  syslog(7,"debug: %s: get_times: %s %m","move_object",local_28);
                }
              }
              else {
                if ((local_128.st_mode & 0xf000) == 0x4000) {
                  if (local_64 == 0) {
                    iVar1 = mkdir_(local_30,local_10,local_128.st_mode);
                    if (iVar1 == -1) {
                      iVar1 = is_debug_enabled("move_object");
                      if (iVar1 != 0) {
                        syslog(7,"debug: %s: mkdir_: %s %m","move_object",local_30);
                      }
                      goto LAB_00412b28;
                    }
                    iVar1 = copy_meta(local_30,param_2,&local_128);
                    if (iVar1 == -1) {
                      iVar1 = is_debug_enabled("move_object");
                      if (iVar1 != 0) {
                        syslog(7,"debug: %s: copy_meta: %s %m","move_object",local_30);
                      }
                      goto LAB_00412b28;
                    }
                    iVar1 = set_file_times(local_28,local_148);
                    if (iVar1 == -1) {
                      iVar1 = is_debug_enabled("move_object");
                      if (iVar1 != 0) {
                        syslog(7,"debug: %s: set_times: %s %m","move_object",local_28);
                      }
                      goto LAB_00412b28;
                    }
                  }
                  else {
                    if ((local_1c0 & 0xf000) != 0x4000) {
                      piVar2 = __errno_location();
                      *piVar2 = 0x14;
                      goto LAB_00412b28;
                    }
                    iVar1 = compare_timespec(local_190,local_188,local_128.st_atim.tv_sec,
                                             local_128.st_atim.tv_nsec);
                    if (iVar1 < 1) {
                      local_208 = local_128.st_atim.tv_sec;
                      local_200 = local_128.st_atim.tv_nsec;
                    }
                    else {
                      local_208 = local_190;
                      local_200 = local_188;
                    }
                    iVar1 = compare_timespec(local_180,local_178,local_128.st_mtim.tv_sec,
                                             local_128.st_mtim.tv_nsec);
                    if (iVar1 < 1) {
                      local_1f8 = local_128.st_mtim.tv_sec;
                      local_1f0 = local_128.st_mtim.tv_nsec;
                    }
                    else {
                      local_1f8 = local_180;
                      local_1f0 = local_178;
                    }
                    iVar1 = set_file_times(local_30,&local_208);
                    if (iVar1 == -1) {
                      iVar1 = is_debug_enabled("move_object");
                      if (iVar1 != 0) {
                        syslog(7,"debug: %s: set_times: %s %m","move_object",local_30);
                      }
                      goto LAB_00412b28;
                    }
                  }
                  iVar1 = remove_path_or_zfs_dataset(param_2);
                  if (iVar1 == -1) {
                    iVar1 = is_debug_enabled("move_object");
                    if (iVar1 != 0) {
                      syslog(7,"debug: %s: rmdir_: %s %m","move_object",param_2);
                    }
                    goto LAB_00412b28;
                  }
                }
                else {
                  if (local_64 != 0) {
                    piVar2 = __errno_location();
                    *piVar2 = 0x11;
                    goto LAB_00412b28;
                  }
                  if (*param_3 == '\0') {
                    if ((local_128.st_mode & 0xf000) == 0x8000) {
                      iVar1 = compare_disk_roots(param_2,local_30);
                      if (iVar1 != 0) {
                        piVar2 = __errno_location();
                        *piVar2 = 0x16;
                        goto LAB_00412b28;
                      }
                      local_40 = (char *)allocate_path_buffer();
                      local_58 = snprintf(local_40,0x1000,"%s.partial",local_30);
                      if (0xfff < local_58) {
                        piVar2 = __errno_location();
                        *piVar2 = 0x24;
                        local_58 = -1;
                      }
                      if (local_58 == -1) {
                        puVar4 = (uint *)__errno_location();
                        syslog(6,"copy_file: %s (%d) %m",local_30,(ulong)*puVar4);
                        goto LAB_00412b28;
                      }
                      iVar1 = copy_file(local_40,param_2,&local_128);
                      if (iVar1 == -1) {
                        puVar4 = (uint *)__errno_location();
                        syslog(6,"copy_file: %s %s (%d) %m",param_2,local_40,(ulong)*puVar4);
                        piVar2 = __errno_location();
                        local_6c = *piVar2;
                        unlink(local_40);
                        set_file_times(local_28,local_148);
                        piVar2 = __errno_location();
                        *piVar2 = local_6c;
                        goto LAB_00412b28;
                      }
                      iVar1 = rename_with_zfs_fallback(local_40,local_30);
                      if (iVar1 == -1) {
                        iVar1 = is_debug_enabled("move_object");
                        if (iVar1 != 0) {
                          syslog(7,"debug: %s: rename_: %s %s","move_object",local_40,local_30);
                        }
                        goto LAB_00412b28;
                      }
                    }
                    else if ((local_128.st_mode & 0xf000) == 0xa000) {
                      iVar1 = compare_disk_roots(param_2,local_30);
                      if (iVar1 != 0) {
                        piVar2 = __errno_location();
                        *piVar2 = 0x16;
                        goto LAB_00412b28;
                      }
                      local_50 = (char *)allocate_path_buffer();
                      sVar5 = readlink(param_2,local_50,0xfff);
                      local_68 = (int)sVar5;
                      if (local_68 == -1) {
                        iVar1 = is_debug_enabled("move_object");
                        if (iVar1 != 0) {
                          syslog(7,"debug: %s: readlink: %s %m","move_object",param_2);
                        }
                        goto LAB_00412b28;
                      }
                      local_50[local_68] = '\0';
                      iVar1 = symlink(local_50,local_30);
                      if (iVar1 == -1) {
                        iVar1 = is_debug_enabled("move_object");
                        if (iVar1 != 0) {
                          syslog(7,"debug: %s: symlink: %s %m","move_object",local_30);
                        }
                        goto LAB_00412b28;
                      }
                    }
                    else {
                      iVar1 = compare_disk_roots(param_2,local_30);
                      if (iVar1 != 0) {
                        piVar2 = __errno_location();
                        *piVar2 = 0x16;
                        goto LAB_00412b28;
                      }
                      iVar1 = mknod(local_30,local_128.st_mode,local_128.st_rdev);
                      if (iVar1 == -1) {
                        iVar1 = is_debug_enabled("move_object");
                        if (iVar1 != 0) {
                          syslog(7,"debug: %s: mknod: %s %m","move_object",local_30);
                        }
                        goto LAB_00412b28;
                      }
                    }
                  }
                  else {
                    iVar1 = compare_disk_roots(local_48,local_30);
                    if (iVar1 == 0) {
                      piVar2 = __errno_location();
                      *piVar2 = 0x16;
                      goto LAB_00412b28;
                    }
                    iVar1 = link(local_48,local_30);
                    if (iVar1 == -1) {
                      iVar1 = is_debug_enabled("move_object");
                      if (iVar1 != 0) {
                        syslog(7,"debug: %s: link: %s %s","move_object",local_48,local_30);
                      }
                      goto LAB_00412b28;
                    }
                  }
                  iVar1 = copy_meta(local_30,param_2,&local_128);
                  if (iVar1 == -1) {
                    iVar1 = is_debug_enabled("move_object");
                    if (iVar1 != 0) {
                      syslog(7,"debug: %s: copy_meta: %s %m","move_object",local_30);
                    }
                    goto LAB_00412b28;
                  }
                  iVar1 = set_file_times(local_28,local_148);
                  if (iVar1 == -1) {
                    iVar1 = is_debug_enabled("move_object");
                    if (iVar1 != 0) {
                      syslog(7,"debug: %s: set_times: %s %m","move_object",local_28);
                    }
                    goto LAB_00412b28;
                  }
                  iVar1 = unlink(param_2);
                  if (iVar1 == -1) {
                    iVar1 = is_debug_enabled("move_object");
                    if (iVar1 != 0) {
                      syslog(7,"debug: %s: unlink: %s %m","move_object",param_2);
                    }
                    goto LAB_00412b28;
                  }
                }
                iVar1 = set_file_times(local_20,local_98);
                if (iVar1 == -1) {
                  iVar1 = is_debug_enabled("move_object");
                  if (iVar1 != 0) {
                    syslog(7,"debug: %s: set_times: %s %m","move_object",local_20);
                  }
                }
                else {
                  local_54 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00412b28:
  free(local_28);
  free(local_30);
  free(local_40);
  free(local_38);
  free(local_20);
  free(local_48);
  free(local_50);
  free_share_info(local_10);
  return local_54;
}



int shfs_ioctl(undefined8 param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  int *piVar4;
  char *in_R9;
  int local_c;
  
  iVar1 = is_debug_enabled("shfs_ioctl");
  if (iVar1 != 0) {
    lVar2 = fuse_get_context();
    syslog(7,"debug: %s: pid: %d path: %s cmd: %x","shfs_ioctl",(ulong)*(uint *)(lVar2 + 0x10),
           param_1,(ulong)param_2);
  }
  if (param_2 == 0x4104e601) {
    init_debug_modules(in_R9);
    local_c = 0;
    goto LAB_00412da3;
  }
  if ((int)param_2 < 0x4104e602) {
    if (param_2 == 0x4104e501) {
      sVar3 = strlen(in_R9);
      local_c = shfs_rename(in_R9,in_R9 + sVar3 + 1,0);
      goto LAB_00412da3;
    }
    if ((int)param_2 < 0x4104e502) {
      if (param_2 == 0x4104e401) {
        local_c = shfs_rmdir(in_R9);
        goto LAB_00412da3;
      }
      if ((int)param_2 < 0x4104e402) {
        if (param_2 == 0x4104e301) {
          local_c = shfs_mkdir(in_R9,0x1ff);
          goto LAB_00412da3;
        }
        if ((int)param_2 < 0x4104e302) {
          if (param_2 == 0x4104e201) {
            del_share_info(in_R9);
            local_c = 0;
            goto LAB_00412da3;
          }
          if ((int)param_2 < 0x4104e202) {
            if (param_2 == 0x8008e101) {
              *(undefined8 *)in_R9 = DAT_0041b5b0;
              local_c = 0;
              goto LAB_00412da3;
            }
            if (param_2 == 0xe004e001) {
              local_c = move_object(*(undefined4 *)in_R9,in_R9 + 4,in_R9 + 0x1004);
              goto LAB_00412da3;
            }
          }
        }
      }
    }
  }
  iVar1 = is_debug_enabled("shfs_ioctl");
  if (iVar1 != 0) {
    syslog(7,"debug: %s: invalid ioctl cmd: %x","shfs_ioctl",(ulong)param_2);
  }
  piVar4 = __errno_location();
  *piVar4 = 0x19;
  local_c = -1;
LAB_00412da3:
  if (local_c == -1) {
    piVar4 = __errno_location();
    local_c = -*piVar4;
  }
  return local_c;
}



uint shfs_main(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *__ptr;
  __sighandler_t p_Var3;
  uint *puVar4;
  int local_2c;
  uint local_28;
  int local_24;
  undefined8 local_20;
  
  __ptr = (undefined8 *)calloc((long)param_1,8);
  create_write_only_log_stream(&stdout);
  create_write_only_log_stream(&stderr);
  p_Var3 = signal(1,log_received_signal);
  if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
    local_28 = 1;
  }
  else {
    *__ptr = *param_2;
    local_24 = 2;
    __ptr[1] = param_2[1];
    for (local_2c = 2; local_2c < param_1; local_2c = local_2c + 1) {
      iVar2 = strcmp((char *)param_2[local_2c],"-disks");
      if (iVar2 == 0) {
        local_2c = local_2c + 1;
        local_20 = __isoc23_strtol(param_2[local_2c],0,0);
      }
      else {
        __ptr[local_24] = param_2[local_2c];
        local_24 = local_24 + 1;
      }
    }
    iVar2 = chdir((char *)param_2[1]);
    if (iVar2 == -1) {
      uVar1 = param_2[1];
      puVar4 = (uint *)__errno_location();
      syslog(3,"error: %s, %d: %m (%d): \ncan\'t chdir: %s %m\n",&DAT_004173d3,0x1067,(ulong)*puVar4
             ,uVar1);
      local_28 = 0xffffffff;
    }
    else {
      umask(0);
      DAT_0041b560 = allocate_24_bytes_wrapper();
      read_config(local_20);
      if (DAT_0041b380 != 0) {
        DAT_0041b3e0 = shfs_link;
      }
      local_28 = fuse_main_real(local_24,__ptr,&PTR_shfs_getattr_0041b3a0,0x150,0);
      if (local_28 != 0) {
        syslog(6,"fuse_main exit: %d",(ulong)local_28);
      }
    }
    free(__ptr);
  }
  return local_28;
}



void duplicate_string(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  void *pvVar2;
  
  sVar1 = strlen(param_2);
  pvVar2 = malloc(sVar1 + 1);
  *param_1 = pvVar2;
  strcpy((char *)*param_1,param_2);
  return;
}



void append_or_allocate_string(long *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  void *pvVar3;
  
  if (*param_1 == 0) {
    duplicate_string(param_1,param_2);
  }
  else {
    sVar1 = strlen((char *)*param_1);
    sVar2 = strlen(param_2);
    pvVar3 = realloc((void *)*param_1,sVar2 + sVar1 + 1);
    *param_1 = (long)pvVar3;
    strcat((char *)*param_1,param_2);
  }
  return;
}



void generate_random_hex_string(char **param_1)

{
  undefined8 local_10;
  
  syscall(0x13e,&local_10,8,0);
  asprintf(param_1,"%llX",local_10);
  return;
}



undefined8 check_file_mode(char *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  stat64 local_98;
  
  iVar1 = stat64(param_1,&local_98);
  if ((iVar1 == 0) && (param_2 == (local_98.st_mode & param_2))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 check_symlink_mode(char *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  stat64 local_98;
  
  iVar1 = lstat64(param_1,&local_98);
  if ((iVar1 == 0) && (param_2 == (local_98.st_mode & param_2))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



bool is_visible_file(long param_1)

{
  return *(char *)(param_1 + 0x13) != '.';
}



long trimmed_getline(char **param_1,size_t *param_2,FILE *param_3)

{
  char *pcVar1;
  ushort **ppuVar2;
  long local_10;
  
  local_10 = getline(param_1,param_2,param_3);
  pcVar1 = *param_1;
  while( true ) {
    if (local_10 < 1) {
      return local_10;
    }
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[pcVar1[local_10 + -1]] & 0x2000) == 0) break;
    local_10 = local_10 + -1;
    pcVar1[local_10] = '\0';
  }
  return local_10;
}



ssize_t read_symlink_combined(undefined8 param_1,undefined8 param_2,char *param_3,long param_4)

{
  char *local_18;
  ssize_t local_10;
  
  asprintf(&local_18,"%s/%s",param_1,param_2);
  local_10 = readlink(local_18,param_3,param_4 - 1);
  if (-1 < local_10) {
    param_3[local_10] = '\0';
  }
  free(local_18);
  return local_10;
}



char * find_end_of_substring(char *param_1,char *param_2)

{
  size_t sVar1;
  char *local_10;
  
  local_10 = strstr(param_1,param_2);
  if (local_10 != (char *)0x0) {
    sVar1 = strlen(param_2);
    local_10 = local_10 + sVar1;
  }
  return local_10;
}



char * append_sanitized_string(char *param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  ushort **ppuVar2;
  ulong local_30;
  ulong local_18;
  char *local_10;
  
  sVar1 = strlen(param_1);
  local_10 = param_1 + sVar1;
  local_30 = strnlen(param_2,param_3);
  while ((local_30 != 0 &&
         (ppuVar2 = __ctype_b_loc(), ((*ppuVar2)[param_2[local_30 - 1]] & 0x2000) != 0))) {
    local_30 = local_30 - 1;
  }
  local_18 = 0;
  while ((local_18 < local_30 &&
         (ppuVar2 = __ctype_b_loc(), ((*ppuVar2)[param_2[local_18]] & 0x2000) != 0))) {
    local_18 = local_18 + 1;
  }
  while (local_18 < local_30) {
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[param_2[local_18]] & 0x2000) != 0) {
      while (ppuVar2 = __ctype_b_loc(), ((*ppuVar2)[param_2[local_18]] & 0x2000) != 0) {
        local_18 = local_18 + 1;
      }
      *local_10 = '_';
      local_10 = local_10 + 1;
    }
    *local_10 = param_2[local_18];
    local_18 = local_18 + 1;
    local_10 = local_10 + 1;
  }
  *local_10 = '\0';
  return param_1;
}



void * get_value_for_key(void *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  char *local_28;
  char *local_10;
  
  local_28 = param_2;
  while( true ) {
    pcVar1 = local_28;
    if (*local_28 == '\0') {
      return (void *)0x0;
    }
    local_10 = local_28;
    for (; (*local_28 != '\0' && (*local_28 != '=')); local_28 = local_28 + 1) {
    }
    if (*local_28 != '=') break;
    sVar4 = strlen(param_3);
    if ((sVar4 != (long)local_28 - (long)pcVar1) ||
       (iVar3 = strncmp(param_3,pcVar1,(long)local_28 - (long)pcVar1), iVar3 != 0)) {
      local_10 = (char *)0x0;
    }
    pcVar1 = local_28 + 1;
    pcVar2 = pcVar1;
    if (*pcVar1 == '\"') {
      pcVar1 = local_28 + 2;
      for (local_28 = local_28 + 2; (*local_28 != '\0' && (*local_28 != '\"'));
          local_28 = local_28 + 1) {
      }
      if (*local_28 != '\"') {
        return (void *)0x0;
      }
      if (local_10 != (char *)0x0) {
        memmove(param_1,pcVar1,(long)local_28 - (long)pcVar1);
        *(undefined1 *)((long)param_1 + ((long)local_28 - (long)pcVar1)) = 0;
        return param_1;
      }
      local_28 = local_28 + 1;
    }
    else {
      while (((local_28 = pcVar2, *local_28 != '\0' && (*local_28 != '&')) && (*local_28 != ' '))) {
        pcVar2 = local_28 + 1;
      }
      if (local_10 != (char *)0x0) {
        memmove(param_1,pcVar1,(long)local_28 - (long)pcVar1);
        *(undefined1 *)((long)param_1 + ((long)local_28 - (long)pcVar1)) = 0;
        return param_1;
      }
    }
    for (; (*local_28 == ' ' || (*local_28 == '&')); local_28 = local_28 + 1) {
    }
  }
  return (void *)0x0;
}



char * str_to_lower(char *param_1)

{
  int iVar1;
  char *local_10;
  
  local_10 = param_1;
  if (param_1 != (char *)0x0) {
    while (*local_10 != '\0') {
      iVar1 = tolower((int)*local_10);
      *local_10 = (char)iVar1;
      local_10 = local_10 + 1;
    }
  }
  return param_1;
}



char * str_to_upper(char *param_1)

{
  int iVar1;
  char *local_10;
  
  local_10 = param_1;
  if (param_1 != (char *)0x0) {
    while (*local_10 != '\0') {
      iVar1 = toupper((int)*local_10);
      *local_10 = (char)iVar1;
      local_10 = local_10 + 1;
    }
  }
  return param_1;
}



char * remove_spaces_inplace(char *param_1)

{
  char *local_18;
  char *local_10;
  
  local_18 = param_1;
  local_10 = param_1;
  if (param_1 != (char *)0x0) {
    for (; *local_10 != '\0'; local_10 = local_10 + 1) {
      if (*local_10 != ' ') {
        *local_18 = *local_10;
        local_18 = local_18 + 1;
      }
    }
    *local_18 = *local_10;
  }
  return param_1;
}



long parse_size_suffix(undefined8 param_1)

{
  int iVar1;
  char *local_18;
  long local_10;
  
  local_10 = __isoc23_strtoll(param_1,&local_18,10);
  iVar1 = strcmp(local_18,"K");
  if (iVar1 == 0) {
    local_10 = local_10 << 10;
  }
  else {
    iVar1 = strcmp(local_18,"M");
    if (iVar1 == 0) {
      local_10 = local_10 << 0x14;
    }
    else {
      iVar1 = strcmp(local_18,"G");
      if (iVar1 == 0) {
        local_10 = local_10 << 0x1e;
      }
      else {
        iVar1 = strcmp(local_18,"T");
        if (iVar1 == 0) {
          local_10 = local_10 << 0x28;
        }
        else {
          iVar1 = strcmp(local_18,"KB");
          if (iVar1 == 0) {
            local_10 = local_10 * 1000;
          }
          else {
            iVar1 = strcmp(local_18,"MB");
            if (iVar1 == 0) {
              local_10 = local_10 * 1000000;
            }
            else {
              iVar1 = strcmp(local_18,"GB");
              if (iVar1 == 0) {
                local_10 = local_10 * 1000000000;
              }
              else {
                iVar1 = strcmp(local_18,"TB");
                if (iVar1 == 0) {
                  local_10 = local_10 * 1000000000000;
                }
                else {
                  local_10 = local_10 << 10;
                }
              }
            }
          }
        }
      }
    }
  }
  return local_10;
}



ulong parse_disk_bitmask(char *param_1)

{
  int iVar1;
  ushort **ppuVar2;
  char *local_30 [2];
  int local_1c;
  int local_18;
  int local_14;
  ulong local_10;
  
  local_10 = 0;
  local_30[0] = param_1;
LAB_004139c0:
  do {
    local_30[0] = strstr(local_30[0],"disk");
    if (local_30[0] == (char *)0x0) {
      return local_10;
    }
    local_30[0] = local_30[0] + 4;
    ppuVar2 = __ctype_b_loc();
  } while (((((*ppuVar2)[*local_30[0]] & 0x800) == 0) ||
           (local_1c = __isoc23_strtol(local_30[0],local_30,10), local_1c == 0)) ||
          (0x1c < local_1c));
  iVar1 = local_1c;
  if (*local_30[0] == '-') goto code_r0x00413952;
  goto LAB_0041398f;
code_r0x00413952:
  local_30[0] = local_30[0] + 1;
  local_18 = __isoc23_strtol(local_30[0],local_30,10);
  if ((local_1c < local_18) && (iVar1 = local_18, local_18 < 0x1d)) {
LAB_0041398f:
    local_18 = iVar1;
    for (local_14 = local_1c; local_14 <= local_18; local_14 = local_14 + 1) {
      local_10 = local_10 | 1L << ((byte)local_14 & 0x3f);
    }
  }
  goto LAB_004139c0;
}



int first_word_length(long param_1)

{
  undefined4 local_c;
  
  for (local_c = 0; (*(char *)(param_1 + local_c) != '\0' && (*(char *)(param_1 + local_c) != ' '));
      local_c = local_c + 1) {
  }
  return local_c;
}



undefined8 compare_first_words(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = first_word_length(param_1);
  iVar2 = first_word_length(param_2);
  if ((iVar1 == iVar2) && (iVar1 = strncmp(param_1,param_2,(long)iVar1), iVar1 == 0)) {
    return 1;
  }
  return 0;
}



long skip_first_word(long param_1)

{
  undefined4 local_c;
  
  for (local_c = first_word_length(param_1); *(char *)(param_1 + local_c) == ' ';
      local_c = local_c + 1) {
  }
  return param_1 + local_c;
}



undefined8 has_common_word(char *param_1,char *param_2)

{
  int iVar1;
  char *local_18;
  char *local_10;
  
  if ((*param_1 != '\0') && (local_10 = param_1, *param_2 != '\0')) {
    for (; local_18 = param_2, *local_10 != '\0'; local_10 = (char *)skip_first_word(local_10)) {
      for (; *local_18 != '\0'; local_18 = (char *)skip_first_word(local_18)) {
        iVar1 = compare_first_words(local_10,local_18);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



long base64_decode(byte *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  int local_3c;
  byte *local_18;
  char *local_10;
  
  local_3c = param_3;
  pbVar6 = param_1;
  local_10 = param_2;
  while ((local_18 = pbVar6, 3 < local_3c && (*local_10 != '\0'))) {
    cVar2 = *local_10;
    if ((cVar2 < '\0') || ((&DAT_00417420)[(int)cVar2] == -1)) break;
    cVar3 = local_10[1];
    if ((cVar3 < '\0') || ((&DAT_00417420)[(int)cVar3] == -1)) break;
    pcVar1 = local_10 + 3;
    cVar4 = local_10[2];
    if ((cVar4 != '=') && ((cVar4 < '\0' || ((&DAT_00417420)[(int)cVar4] == -1)))) break;
    local_10 = local_10 + 4;
    cVar5 = *pcVar1;
    local_3c = local_3c + -4;
    if ((cVar5 != '=') && ((cVar5 < '\0' || ((&DAT_00417420)[(int)cVar5] == -1)))) break;
    if (cVar2 < '\0') {
      bVar8 = 0xfc;
    }
    else {
      bVar8 = (&DAT_00417420)[(int)cVar2] * '\x04';
    }
    if (cVar3 < '\0') {
      bVar7 = 3;
    }
    else {
      bVar7 = (char)(&DAT_00417420)[(int)cVar3] >> 4 & 3;
    }
    *local_18 = bVar8 | bVar7;
    pbVar6 = local_18 + 1;
    if (cVar4 != '=') {
      if (cVar3 < '\0') {
        bVar8 = 0xf0;
      }
      else {
        bVar8 = (&DAT_00417420)[(int)cVar3] << 4;
      }
      if (cVar4 < '\0') {
        bVar7 = 0xf;
      }
      else {
        bVar7 = (char)(&DAT_00417420)[(int)cVar4] >> 2 & 0xf;
      }
      local_18[1] = bVar8 | bVar7;
      pbVar6 = local_18 + 2;
      if (cVar5 != '=') {
        if (cVar4 < '\0') {
          bVar8 = 0xc0;
        }
        else {
          bVar8 = (&DAT_00417420)[(int)cVar4] << 6;
        }
        if (cVar5 < '\0') {
          bVar7 = 0x3f;
        }
        else {
          bVar7 = (&DAT_00417420)[(int)cVar5] & 0x3f;
        }
        local_18[2] = bVar8 | bVar7;
        pbVar6 = local_18 + 3;
      }
    }
  }
  *local_18 = 0;
  return (long)local_18 - (long)param_1;
}



int base64_decode_to_file(char *param_1,FILE *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  size_t sVar6;
  byte bVar7;
  byte local_19;
  int local_18;
  int local_14;
  char *local_10;
  
  local_10 = param_1;
  sVar6 = strlen(param_1);
  local_14 = (int)sVar6;
  local_18 = 0;
  while( true ) {
    if ((local_14 < 4) || (*local_10 == '\0')) {
      return local_18;
    }
    cVar2 = *local_10;
    if (cVar2 < '\0') {
      return local_18;
    }
    if ((&DAT_00417420)[(int)cVar2] == -1) break;
    cVar3 = local_10[1];
    if (cVar3 < '\0') {
      return local_18;
    }
    if ((&DAT_00417420)[(int)cVar3] == -1) {
      return local_18;
    }
    pcVar1 = local_10 + 3;
    cVar4 = local_10[2];
    if (cVar4 != '=') {
      if (cVar4 < '\0') {
        return local_18;
      }
      if ((&DAT_00417420)[(int)cVar4] == -1) {
        return local_18;
      }
    }
    local_10 = local_10 + 4;
    cVar5 = *pcVar1;
    local_14 = local_14 + -4;
    if (cVar5 != '=') {
      if (cVar5 < '\0') {
        return local_18;
      }
      if ((&DAT_00417420)[(int)cVar5] == -1) {
        return local_18;
      }
    }
    if (cVar2 < '\0') {
      bVar7 = 0xfc;
    }
    else {
      bVar7 = (&DAT_00417420)[(int)cVar2] * '\x04';
    }
    if (cVar3 < '\0') {
      local_19 = 3;
    }
    else {
      local_19 = (char)(&DAT_00417420)[(int)cVar3] >> 4 & 3;
    }
    local_19 = local_19 | bVar7;
    sVar6 = fwrite(&local_19,1,1,param_2);
    if (sVar6 != 1) {
      return local_18;
    }
    local_18 = local_18 + 1;
    if (cVar4 != '=') {
      if (cVar3 < '\0') {
        bVar7 = 0xf0;
      }
      else {
        bVar7 = (&DAT_00417420)[(int)cVar3] << 4;
      }
      if (cVar4 < '\0') {
        local_19 = 0xf;
      }
      else {
        local_19 = (char)(&DAT_00417420)[(int)cVar4] >> 2 & 0xf;
      }
      local_19 = local_19 | bVar7;
      sVar6 = fwrite(&local_19,1,1,param_2);
      if (sVar6 != 1) {
        return local_18;
      }
      local_18 = local_18 + 1;
      if (cVar5 != '=') {
        if (cVar4 < '\0') {
          bVar7 = 0xc0;
        }
        else {
          bVar7 = (&DAT_00417420)[(int)cVar4] << 6;
        }
        if (cVar5 < '\0') {
          local_19 = 0x3f;
        }
        else {
          local_19 = (&DAT_00417420)[(int)cVar5] & 0x3f;
        }
        local_19 = local_19 | bVar7;
        sVar6 = fwrite(&local_19,1,1,param_2);
        if (sVar6 != 1) {
          return local_18;
        }
        local_18 = local_18 + 1;
      }
    }
  }
  return local_18;
}



bool is_debug_enabled(char *param_1)

{
  int iVar1;
  bool bVar2;
  long *local_10;
  
  local_10 = &DAT_0041bbe0;
  if (param_1 == (char *)0x0) {
    bVar2 = DAT_0041bbe0 != 0;
  }
  else {
    do {
      if (*local_10 == 0) {
        return false;
      }
      iVar1 = strcmp((char *)*local_10,"all");
      if (iVar1 == 0) break;
      iVar1 = strcmp((char *)*local_10,param_1);
      local_10 = local_10 + 1;
    } while (iVar1 != 0);
    bVar2 = true;
  }
  return bVar2;
}



undefined8 init_debug_modules(char *param_1)

{
  char *local_20;
  int local_14;
  char *local_10;
  
  local_14 = 0;
  syslog(6,"init_debugging: %s",param_1);
  if (DAT_0041bf00 != (char *)0x0) {
    free(DAT_0041bf00);
  }
  DAT_0041bf00 = strdup(param_1);
  local_10 = strtok_r(DAT_0041bf00,", ",&local_20);
  while ((local_10 != (char *)0x0 && (local_14 < 99))) {
    (&DAT_0041bbe0)[local_14] = local_10;
    local_14 = local_14 + 1;
    local_10 = strtok_r((char *)0x0,", ",&local_20);
  }
  (&DAT_0041bbe0)[local_14] = 0;
  return 0;
}



ulong log_message(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  syslog(6,"%.*s",param_3 & 0xffffffff,param_2);
  return param_3;
}



undefined8 no_op_return_zero(void)

{
  return 0;
}



void create_write_only_log_stream(undefined8 *param_1)

{
  _IO_cookie_io_functions_t __io_funcs;
  FILE *pFVar1;
  
  __io_funcs.write = PTR_log_message_0041b508;
  __io_funcs.read = PTR_no_op_return_zero_0041b500;
  __io_funcs.seek = PTR_no_op_return_zero_0041b510;
  __io_funcs.close = PTR_no_op_return_zero_0041b518;
  pFVar1 = fopencookie((void *)0x0,"w",__io_funcs);
  *param_1 = pFVar1;
  setvbuf((FILE *)*param_1,(char *)0x0,1,0);
  return;
}



char * read_file_by_formatted_path
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  int iVar1;
  long lVar2;
  long local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  FILE *local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  iVar1 = vasprintf(&local_e0,param_9,&local_d8);
  local_e8 = (long)iVar1;
  if (local_e8 == -1) {
    local_e0 = (char *)0x0;
  }
  else {
    local_c0 = fopen64(local_e0,"r");
    if (local_c0 == (FILE *)0x0) {
      free(local_e0);
      local_e0 = (char *)0x0;
    }
    else {
      lVar2 = trimmed_getline(&local_e0,&local_e8,local_c0);
      if (lVar2 == -1) {
        free(local_e0);
        local_e0 = (char *)0x0;
      }
      fclose(local_c0);
    }
  }
  return local_e0;
}



long * stream_open(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  int iVar1;
  FILE *pFVar2;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long *local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  local_c0 = (long *)malloc(0x20);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  iVar1 = vasprintf((char **)(local_c0 + 1),param_9,&local_d8);
  local_c0[2] = (long)iVar1;
  if (local_c0[2] == -1) {
    free(local_c0);
    local_c0 = (long *)0x0;
  }
  else {
    local_c0[2] = local_c0[2] + 1;
    iVar1 = is_debug_enabled("stream_open");
    if (iVar1 != 0) {
      syslog(7,"debug: %s: %s","stream_open",local_c0[1]);
    }
    iVar1 = strncmp((char *)local_c0[1],"exec ",5);
    if (iVar1 == 0) {
      pFVar2 = popen((char *)local_c0[1],"r");
      *local_c0 = (long)pFVar2;
      local_c0[3] = (long)pclose;
    }
    else {
      pFVar2 = fopen64((char *)local_c0[1],"r");
      *local_c0 = (long)pFVar2;
      local_c0[3] = (long)fclose;
    }
    if (*local_c0 == 0) {
      free((void *)local_c0[1]);
      free(local_c0);
      local_c0 = (long *)0x0;
    }
  }
  return local_c0;
}



long * open_path_or_exec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                        undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  int iVar1;
  FILE *pFVar2;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long *local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  local_c0 = (long *)malloc(0x20);
  local_d8 = 8;
  local_d4 = 0x30;
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  iVar1 = vasprintf((char **)(local_c0 + 1),param_9,&local_d8);
  local_c0[2] = (long)iVar1;
  if (local_c0[2] == -1) {
    free(local_c0);
    local_c0 = (long *)0x0;
  }
  else {
    local_c0[2] = local_c0[2] + 1;
    iVar1 = strncmp((char *)local_c0[1],"exec ",5);
    if (iVar1 == 0) {
      syslog(6,"%s",local_c0[1] + 5);
      pFVar2 = popen((char *)local_c0[1],"r");
      *local_c0 = (long)pFVar2;
      local_c0[3] = (long)pclose;
    }
    else {
      syslog(6,"%s",local_c0[1]);
      pFVar2 = fopen64((char *)local_c0[1],"r");
      *local_c0 = (long)pFVar2;
      local_c0[3] = (long)fclose;
    }
    if (*local_c0 == 0) {
      free((void *)local_c0[1]);
      free(local_c0);
      local_c0 = (long *)0x0;
    }
  }
  return local_c0;
}



undefined4 read_trimmed_line(undefined8 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    piVar2 = __errno_location();
    *piVar2 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = trimmed_getline(param_1 + 1,param_1 + 2,*param_1);
  }
  return uVar1;
}



int read_and_log_nonempty_line(long param_1)

{
  int iVar1;
  
  do {
    iVar1 = read_trimmed_line(param_1);
    if (iVar1 == -1) {
      return -1;
    }
  } while (iVar1 < 1);
  syslog(6,"%s",*(undefined8 *)(param_1 + 8));
  return iVar1;
}



uint consume_and_close_stream(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    piVar3 = __errno_location();
    *piVar3 = 0x16;
    uVar2 = 0xffffffff;
  }
  else {
    do {
      iVar1 = read_trimmed_line(param_1);
    } while (iVar1 != -1);
    iVar1 = (*(code *)param_1[3])(*param_1);
    uVar2 = iVar1 >> 8 & 0xff;
    free((void *)param_1[1]);
    free(param_1);
  }
  return uVar2;
}



void _DT_FINI(void)

{
  return;
}


