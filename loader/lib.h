struct lib
{
    char * rootlib;
    char * rootusrlib;
    int init_lock;
    char * struct_init;
    char * library_name;
    char ** NEEDED;
    int NEEDED_COUNT;
    char library_first_character;
    char * library_len;
    char * library_symbol;
    Elf64_Ehdr * _elf_header;
    Elf64_Phdr * _elf_program_header;
    Elf64_Shdr * _elf_symbol_table;
    char *strtab;
    size_t len;
    char * array;
    char * current_lib;
    char * last_lib;
    int is_mapped;
    size_t align;
    Elf64_Addr mapping_start;
    Elf64_Addr base_address;
    Elf64_Addr mapping_end;
    int init__;
    int PT_DYNAMIC_;
    char * tmp99D;
    Elf64_Dyn * dynamic;
    int First_Load_Header_index;
    int Last_Load_Header_index;
    size_t RELA_PLT_SIZE;
    int _R_X86_64_NONE;
    int _R_X86_64_64;
    int _R_X86_64_PC32;
    int _R_X86_64_GOT32;
    int _R_X86_64_PLT32;
    int _R_X86_64_COPY;
    int _R_X86_64_GLOB_DAT;
    int _R_X86_64_JUMP_SLOT;
    int _R_X86_64_RELATIVE;
    int _R_X86_64_GOTPCREL;
    int _R_X86_64_32;
    int _R_X86_64_32S;
    int _R_X86_64_16;
    int _R_X86_64_PC16;
    int _R_X86_64_8;
    int _R_X86_64_PC8;
    int _R_X86_64_DTPMOD64;
    int _R_X86_64_DTPOFF64;
    int _R_X86_64_TPOFF64;
    int _R_X86_64_TLSGD;
    int _R_X86_64_TLSLD;
    int _R_X86_64_DTPOFF32;
    int _R_X86_64_GOTTPOFF;
    int _R_X86_64_TPOFF32;
    int _R_X86_64_PC64;
    int _R_X86_64_GOTOFF64;
    int _R_X86_64_GOTPC32;
    int _R_X86_64_GOT64;
    int _R_X86_64_GOTPCREL64;
    int _R_X86_64_GOTPC64;
    int _Deprecated1;
    int _R_X86_64_PLTOFF64;
    int _R_X86_64_SIZE32;
    int _R_X86_64_SIZE64;
    int _R_X86_64_GOTPC32_TLSDESC;
    int _R_X86_64_TLSDESC_CALL;
    int _R_X86_64_TLSDESC;
    int _R_X86_64_IRELATIVE;
    int _R_X86_64_RELATIVE64;
    int _Deprecated2;
    int _Deprecated3;
    int _R_X86_64_GOTPLT64;
    int _R_X86_64_GOTPCRELX;
    int _R_X86_64_REX_GOTPCRELX;
    int _R_X86_64_NUM;
    int _R_X86_64_UNKNOWN;
    Elf64_Addr * GOT;
    Elf64_Addr * GOT2;
    Elf64_Addr * PLT;
} library[512];
extern struct lib library[512];

#define depth_default 4
#define rate 8
#define LDD 0
#define LDDR 2
#define LISTR 1
