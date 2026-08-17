#ifndef GUARD_CONSTANTS_TMS_HMS_H
#define GUARD_CONSTANTS_TMS_HMS_H

#define FOREACH_TM(F) \
    F(FOCUS_PUNCH) \
    F(DRAGON_CLAW) \
    F(WATER_PULSE) \
    F(CALM_MIND) \
    F(ROAR) \
    F(TOXIC) \
    F(HAIL) \
    F(BULK_UP) \
    F(BULLET_SEED) \
    F(WORK_UP) \
    F(SUNNY_DAY) \
    F(TAUNT) \
    F(ICE_BEAM) \
    F(BLIZZARD) \
    F(HYPER_BEAM) \
    F(LIGHT_SCREEN) \
    F(PROTECT) \
    F(RAIN_DANCE) \
    F(GIGA_DRAIN) \
    F(SAFEGUARD) \
    F(DAZZLING_GLEAM) \
    F(SOLAR_BEAM) \
    F(IRON_TAIL) \
    F(THUNDERBOLT) \
    F(THUNDER) \
    F(EARTHQUAKE) \
    F(LOW_SWEEP) \
    F(DIG) \
    F(PSYCHIC) \
    F(SHADOW_BALL) \
    F(BRICK_BREAK) \
    F(DOUBLE_TEAM) \
    F(REFLECT) \
    F(SHOCK_WAVE) \
    F(FLAMETHROWER) \
    F(SLUDGE_BOMB) \
    F(SANDSTORM) \
    F(FIRE_BLAST) \
    F(ROCK_TOMB) \
    F(AERIAL_ACE) \
    F(TORMENT) \
    F(FACADE) \
    F(VOLT_SWITCH) \
    F(REST) \
    F(ATTRACT) \
    F(THIEF) \
    F(STEEL_WING) \
    F(SKILL_SWAP) \
    F(SCALD) \
    F(OVERHEAT) \
    F(ROOST) \
    F(FOCUS_BLAST) \
    F(ENERGY_BALL) \
    F(FALSE_SWIPE) \
    F(BRINE) \
    F(FLING) \
    F(CHARGE_BEAM) \
    F(ENDURE) \
    F(DRAGON_PULSE) \
    F(DRAIN_PUNCH) \
    F(WILL_O_WISP) \
    F(BUG_BUZZ) \
    F(NASTY_PLOT) \
    F(EXPLOSION) \
    F(SHADOW_CLAW) \
    F(PAYBACK) \
    F(RECYCLE) \
    F(GIGA_IMPACT) \
    F(ROCK_POLISH) \
    F(FLASH) \
    F(STONE_EDGE) \
    F(AVALANCHE) \
    F(THUNDER_WAVE) \
    F(GYRO_BALL) \
    F(SWORDS_DANCE) \
    F(STEALTH_ROCK) \
    F(PSYCH_UP) \
    F(SNARL) \
    F(DARK_PULSE) \
    F(ROCK_SLIDE) \
    F(X_SCISSOR) \
    F(SLEEP_TALK) \
    F(BULLDOZE) \
    F(POISON_JAB) \
    F(DREAM_EATER) \
    F(GRASS_KNOT) \
    F(SWAGGER) \
    F(PLUCK) \
    F(U_TURN) \
    F(SUBSTITUTE) \
    F(FLASH_CANNON) \
    F(TRICK_ROOM)
    // TODO: decide on which TMs to use. Below are suggestions:
    // F(WILD_CHARGE) \                 // TM93
    // F(ROCK_SMASH) \                  // TM94. Maybe don't make Rock Smash an HM, like in BW and XY (where it is TM94 instead). However, this did not happen in ORAS.
    // F(INFESTATION or CROSS_CUTTER) \ // TM95. Since Snarl took Captivate's place, replace it by something else. In particular, Infestation is a TM-exclusive move in XY.
    // ???                              // TM96. In Gens VI and VII, this would be Nature Power, but it's banned as of Gen IX. This makes it a "free space".
    // F(FROST_BREATH) \                // TM97. Since Dark Pulse took Frost Breath's place, this inverts things.
    // ???                              // TM98. Used to be Power-Up Punch in XY, but it's banned as of SV. This makes it a "free space".
    // ???                              // TM99. In Gens VI and VII, this would be Dazzling Gleam, but it took Frustration's place.
    // F(CONFIDE or MEGAPHONE)          // TM100. They are almost the same move, but Megaphone has more PP.

    // Unused moves that were TMs (these could be added to TMs, or used in Move Tutors):
    // Hone Claws   (TM01 in Gens V-VI)
    // Psyshock     (TM03 in Gens V-VII)
    // Venoshock    (TM09 in Gens V-VII)
    // Smack Down   (TM23 in Gens V-VII)
    // Leech Life   (TM28 in Gen VII)
    // Sludge Wave  (TM34 in Gens V-VII)
    // Flame Charge (TM43 in Gens V-VII)
    // Round        (TM48 in Gens V-VII)
    // Echoed Voice (TM49 in Gens V-VII)
    // Ally Switch  (TM51 in Gen V)
    // Incinerate   (TM59 in Gens V-VI)
    // Brutal Swing (TM59 in Gen VII, banned in BDSP)
    // Quash        (TM60 in Gens V-VII)
    // Acrobatics   (TM64 in Gens V-VII)
    // Retaliate    (TM67 in Gens V-VI)
    // Smart Strike (TM67 in Gen VII)
    // Aurora Veil  (TM70 in Gen VII)
    // Struggle Bug (TM76 in Gens V-VI)
    // Frost Breath (TM79 in Gens V-VII)
    // Dragon Tail  (TM82 in Gens V-VII)
    // Infestation  (TM83 in Gens VI-VII)
    // Wild Charge  (TM93 in Gens V-VII)
    // Rock Smash   (TM94 in Gens V-VI)

    // Differently-numbered TMs
    // Work Up      (TM01 in Gen VII)
    // Roost        (TM19 in Gens VI-VII)
    // Low Sweep    (TM47 in Gens V-VII)
    // Steel Wing   (TM51 in Gens VI-VII)
    // Scald        (TM55 in Gens V-VII)
    // Volt Switch  (TM72 in Gens V-VII)
    // Bulldoze     (TM78 in Gens V-VII)
    // Work Up      (TM83 in Gen V)
    // Sleep Talk   (TM88 in Gens VI-VII)
    // Snarl        (TM95 in Gens V-VII)
    // Dark Pulse   (TM97 in Gens VI-VII)
    // Dazzl. Gleam (TM99 in Gens VI-VII)
    // Confide      (TM100 in Gens VI-VII)

    // Gen II only TMs (became Move Tutor Moves in later generations)
    // Dynamic Punch
    // Headbutt
    // Curse
    // Rollout
    // Zap Cannon
    // Sweet Scent
    // Snore
    // Icy Wind
    // Dragon Breath
    // Mud-Slap
    // Ice Punch
    // Swift
    // Defense Curl
    // Thunder Punch
    // Detect
    // Fire Punch
    // Fury Cutter
    // Nightmare

#define FOREACH_HM(F) \
    F(CUT) \
    F(FLY) \
    F(SURF) \
    F(STRENGTH) \
    F(WHIRLPOOL) \
    F(ROCK_SMASH) \
    F(WATERFALL) \
    F(ROCK_CLIMB)

#define FOREACH_TMHM(F) \
    FOREACH_TM(F) \
    FOREACH_HM(F)

#endif
