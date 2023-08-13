#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"bplayerctl",    1,  1 },
    // {"bplayerctl-previous", 1,    2 },
    // {"bplayerctl-play", 1,    3 },
    // {"bplayerctl-next", 1,    4 },
    {"bupdate", 1800,    5 },
    {"bvolume",   1,    6 },
    // {"brightness-blk",    1, 3 },
    {"bnetwork",  1,   7 },
    // {"bprintstatus",     1,    7 },
    // {"bscreenshot",    0,  11 },
    {"bbattery",    1, 8 },
    {"bcompositor",    0,  9 },
    {"bdate",     5,    10 },
    // {"bpower",     15,    5 },
};

const unsigned short blockCount = LEN(blocks);
