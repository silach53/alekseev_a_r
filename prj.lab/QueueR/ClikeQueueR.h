#ifndef PIVOVAROV_A_V_CLIKEQUEUEP_H
#define PIVOVAROV_A_V_CLIKEQUEUEP_H
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif
    struct QueueR;
    struct QueueR* makeQueueR();
    void popQueueR(struct QueueR* q);
    int topQueueR(struct QueueR* q);
    void pushQueueR(struct QueueR* q, int data);
    bool isEmptyQueueR(struct QueueR* q);
    int getLengthQueueR(struct QueueR* q);

#ifdef __cplusplus
};
#endif

#endif
