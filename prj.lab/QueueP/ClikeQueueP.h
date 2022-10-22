#ifndef ALEKSEEV_A_R_CLIKEQUEUEP_H
#define ALEKSEEV_A_R_CLIKEQUEUEP_H
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif
    struct QueueP;
    struct QueueP* makeQueueP();
    void popQueueP(struct QueueP* q);
    int topQueueP(struct QueueP* q);
    void pushQueueP(struct QueueP* q, int data);
    bool isEmptyQueueP(struct QueueP* q);
    int getLengthQueueP(struct QueueP* q);

#ifdef __cplusplus
};
#endif

#endif
