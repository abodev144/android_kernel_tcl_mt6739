
#ifndef __APUSYS_REVISER_MEM_H__
#define __APUSYS_REVISER_MEM_H__
#include <linux/types.h>

#include "reviser_mem_def.h"




int reviser_mem_free(struct reviser_mem *mem);
int reviser_mem_alloc(struct device *dev, struct reviser_mem *mem);
int reviser_mem_invalidate(struct device *dev, struct reviser_mem *mem);


#endif
