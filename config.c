#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    // {"bdocker", 5,    3 },
    // {"bplayerctl",    0,  1 },
    // {"bplayerctl-previous", 1,    2 },
    // {"bplayerctl-play", 1,    3 },
    // {"bplayerctl-next", 1,    4 },
    {"bupdate", 1800,    5 },
    // {"bmic",   0,    4 },
    // {"bvolume",   0,    6 },
    {"bbattery",    60, 8 },
    {"bnetwork",  10,   7 },
    {"bdate",     15,    10 },
};

const unsigned short blockCount = LEN(blocks);
