#include "umoria/src/headers.h"
#include <mutex>


typedef struct{
    Player_t *py;
    Dungeon_t *dg;
    std::string msg;
} vessel;

//extern vessel hold;

//void writing_to_shared_memory(Player_t play, Dungeon_t dung, std::string msg);

//void reading_from_shared_memory();