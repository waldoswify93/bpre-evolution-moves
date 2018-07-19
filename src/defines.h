#pragma once
#include "types.h"

// #define JAMBO_LEARNSETS

#include "structs.h"
#include "functions.h"
#include "locations.h"

#include "defines/getattr.h"

#define MOVESET_PAD                                         \
    ++learnset_move_index;                                  \
    move_to_learn = learnset_move->move;                    \
    return pokemon_moveset_pad(pokemon, move_to_learn);
