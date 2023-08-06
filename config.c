#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"bplayerctl",    1,  1 },
    {"bplayerctl-previous", 1,    2 },
    {"bplayerctl-play", 1,    3 },
    {"bplayerctl-next", 1,    4 },
    {"bupdate", 1800,    6 },
    // {"battery-blk",   1,    2 },
    // {"brightness-blk",    1, 3 },
    // {"volume-blk",    1, 4 },
    // {"network-blk",  1,   5 },
    {"bprintstatus",     1,    7 },
    // {"bscreenshot",    0,  11 },
    {"bdate",     5,    8 },
    {"bcompositor",    0,  9 },
    // {"bpower",     15,    5 },
};

const unsigned short blockCount = LEN(blocks);
