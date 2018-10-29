#include "types.h"
#include "lib.h"

#define MAX_FILE_NUM 63
#define MAX_DATABLOCK_NUM 1023
#define NUM_INODE_OFFSET 4
#define NUM_DBLK_OFFSET 8
#define DENTRY_START_OFFSET 64
#define INODE_START_OFFSET  4096
#define DATABLK_SIZE  4096
#define datablk(i)  (datablk_start + DATABLK_SIZE*i)

typedef struct {

    uint8_t fname[32];
    uint32_t ftype;
    uint32_t inode;
    uint8_t reserved[24];

} dentry_t;


typedef struct {
 
    uint32_t length;
    uint32_t data_block[MAX_DATABLOCK_NUM];

} inode_t;

void    read_filesys_bootblock();
int32_t read_dentry_by_name (const uint8_t* fname, dentry_t* dentry);
int32_t read_dentry_by_index (uint32_t index, dentry_t* dentry);
int32_t read_data (uint32_t inode, uint32_t offset, uint8_t* buf, uint32_t length);
int32_t read_f_by_name(uint8_t *fname, int32_t offset, uint8_t *buf, uint32_t length);
int32_t read_f_by_index(uint32_t index, int32_t offset, uint8_t *buf, uint32_t length);

int print_allfile_test();
int read_file_test(uint8_t *fname);
