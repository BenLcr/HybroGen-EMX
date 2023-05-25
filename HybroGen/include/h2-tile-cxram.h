/* Autogenerated C file */
/* Generation date / time : 2023-05-09 17:10:00.239583 */
#ifndef H2_TILE_CXRAM_H
#define H2_TILE_CXRAM_H
/* Autogenerated CXRAM configuration from ISA-2.0/csram-v2.0.5.json */
#include <stdint.h>
/* Vector len in bytes */
#define CXRAM_VECLEN (16)
/* Memory base address */
#define CXRAM_BASE_ADDR (0x10000000)
/* Memory line size in byte */
#define CXRAM_BASE_SIZE (((2<<14)*16))
/* Type definition */

typedef  union {
  int8_t            i8[CXRAM_VECLEN];
  int16_t           i16[CXRAM_VECLEN/2];
  int32_t           i32[CXRAM_VECLEN/4];
  int64_t           i64[CXRAM_VECLEN/8];
} h2_cxram_line_t;
typedef h2_cxram_line_t (*h2_cxram_array_t);
#define CXRAM_IMC_ADDR  0x80000000 /* Dummy storage to avoid seg fault during sw */
#define CXRAM_IMC_SIZE  0x04000000
/* Tile instance */
h2_cxram_array_t h2_cxram_tiles;
#endif
/* End of generated file h2-tile-cxram.h */