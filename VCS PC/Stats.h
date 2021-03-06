#ifndef __CSTATS
#define __CSTATS

#define STATS_OFFSET        120
#define STATS_BLANK_OFFSET  320

#define METRES_TO_MILES		0.0006213711922f

enum {
    /*********************************
     ALL FLOAT VALUES TO BE ADDED HERE
     *********************************/
    PROGRESS_MADE = 0,
    TOTAL_PROGRESS,
    
    LONGEST_BASKETBALL,
            
    // distances:
    DIST_FOOT,
    DIST_CAR,
    DIST_BIKE,
    DIST_BOAT,
    DIST_GOLF_CART,
    DIST_HELICOPTOR,
    DIST_PLANE,

    LONGEST_WHEELIE_DIST, // 10
    LONGEST_STOPPIE_DIST,
    LONGEST_2WHEEL_DIST,
    
    // cash:
    WEAPON_BUDGET,
    FASHION_BUDGET,
    PROPERTY_BUDGET,
    SPRAYING_BUDGET,

    // times:
    LONGEST_WHEELIE_TIME,
    LONGEST_STOPPIE_TIME,
    LONGEST_2WHEEL_TIME,
    
    FOOD_BUDGET, // 20
    
    FAT,
    STAMINA,
    BODY_MUSCLE,
    MAX_HEALTH,

    SEX_APPEAL,
    
    // new stats for SA
    DIST_SWIMMING,
    DIST_CYCLE,
    DIST_TREADMILL,
    LONGEST_FACE_PLANT,
    
    TATTOO_BUDGET,  // 30
    HAIRDRESSING_BUDGET,
    NOT_USED_FLOAT_6,
    PROSTITUTE_BUDGET,
    NOT_USED_FLOAT_2,
    
    MONEY_SPENT_GAMBLING,
    MONEY_MADE_PIMPING,
    MONEY_WON_GAMBLING,
    BIGGEST_GAMBLING_WIN,
    BIGGEST_GAMBLING_LOSS,
    
    FURTHEST_HOOP_DTRIAL, // 40
    FURTHEST_HOOP_BTRIAL,
    FURTHEST_HOOP_QTTRIAL,
    FURTHEST_HOOP_MTRIAL,
    
    LONGEST_TREADMILL_TIME,
    LONGEST_EXCERSISE_BIKE_TIME,
    
    HEAVIEST_WEIGHT_BENCH_PRESS,
    HEAVIEST_WEIGHT_DUMBELLS,
    
    BEST_TIME_HOTRING,  
    BEST_TIME_BMX,
    NOT_USED_INT_11,  // 50

    LONGEST_CHASE_TIME,
    LAST_CHASE_TIME,
    
    WAGE_BILL,
    
    STRIP_CLUB_BUDGET,
    CAR_MOD_BUDGET,
    
    TIME_SPENT_SHOPPING,
    NOT_USED_INT_1,
    
    NOT_USED_INT_3,
    NOT_USED_INT_4,
    
    NOT_USED_INT_19,  // 60
    NOT_USED_INT_5,
    TOTAL_SHOPPING_BUDGET,
    
    TIME_SPENT_UNDERWATER,

    RESPECT_TOTAL,
    RESPECT_GIRLFRIEND,
    RESPECT_CLOTHES,
    RESPECT_FITNESS,
    RESPECT,

    WEAPONTYPE_PISTOL_SKILL,  // weapon types   // 69
    WEAPONTYPE_PISTOL_SILENCED_SKILL,           // 70
    WEAPONTYPE_DESERT_EAGLE_SKILL,              // 71
    WEAPONTYPE_SHOTGUN_SKILL,                   // 72
    WEAPONTYPE_SAWNOFF_SHOTGUN_SKILL,           // 73
    WEAPONTYPE_SPAS12_SHOTGUN_SKILL,            // 74
    WEAPONTYPE_MICRO_UZI_SKILL,                 // 75
    WEAPONTYPE_MP5_SKILL,                       // 76
    WEAPONTYPE_AK47_SKILL,                      // 77
    WEAPONTYPE_M4_SKILL,                        // 78
    WEAPONTYPE_SNIPERRIFLE_SKILL,               // 79

    SEX_APPEAL_CLOTHES,

    GAMBLING,

    MAX_FLOAT_STATS  // must be last
};


enum {
    /************************************
     ALL INT/BOOL VALUES TO BE ADDED HERE
     ************************************/

    PEOPLE_KILLED_BY_OTHERS = STATS_OFFSET,  // 120 starts off at STATS_OFFSET
    PEOPLE_KILLED_BY_PLAYER,
    
    CARS_DESTROYED,
    BOATS_DESTROYED,
    HELICOPTERS_DESTROYED,
    PROPERTY_DESTROYED,

    ROUNDS_FIRED,
    EXPLOSIVES_USED,
    
    BULLETS_HIT,
    TYRES_POPPED,
    HEADS_POPPED, // 130
    
    WANTED_STARS_ATTAINED,
    WANTED_STARS_EVADED,
    TIMES_ARRESTED,

    DAYS_PASSED,
    TIMES_DIED,
    TIMES_SAVED,
    TIMES_CHEATED,

    SPRAYINGS,
    
    MAX_JUMP_DISTANCE,
    MAX_JUMP_HEIGHT, // 140
    MAX_JUMP_FLIPS,
    MAX_JUMP_SPINS,
    
    BEST_STUNT,
    
    TOTAL_UNIQUE_JUMPS,
    UNIQUE_JUMPS_DONE,
    
    MISSIONS_ATTEMPTED,
    MISSIONS_PASSED,
    TOTAL_MISSIONS,
    
    TAXI_MONEY_MADE,
    PASSENGERS_DELIVERED_IN_TAXI, // 150
    LIVES_SAVED,
    CRIMINALS_CAUGHT,
    FIRES_EXTINGUISHED,
    PIZZAS_DELIVERED,
    ASSASSINATIONS,
    LATEST_DANCE_SCORE,
    
    VIGILANTE_LEVEL,
    AMBULANCE_LEVEL,
    FIREFIGHTER_LEVEL,
    
    DRIVING_SKILL, // 160
    TRUCK_MISSIONS_PASSED,
    TRUCK_MONEY_MADE,
    
    RECRUITED_GANG_MEMBERS_KILLED,
    ARMOUR,
    ENERGY,

    PHOTOS_TAKEN,
    
    TOTAL_KILL_FRENZIES,
    KILL_FRENZIES_PASSED,
    
    FLIGHT_TIME,
    TIMES_DROWNED, // 170
    NUM_GIRLS_PIMPED,
    
    BEST_POSITION_HOTRING,
    FLIGHT_TIME_JETPACK,
    
    SHOOTING_RANGE_SCORE,
    OUTFIT_CHANGES,
    
    KILLS_SINCE_LAST_CHECKPOINT,
    TOTAL_LEGITIMATE_KILLS,
    
    BLOODRING_KILLS,
    BLOODRING_TIME,
    
    NO_MORE_HURRICANES, // 180
    CITIES_PASSED,
    
    // new stats for SA:
    
    POLICE_BRIBES,
    CARS_STOLEN,
    CURRENT_GIRLFRIENDS,
    BAD_DATES,
    GIRLS_DATED,
    TIMES_SCORED_WITH_GIRL,
    DATES,
    GIRLS_DUMPED,
    TIMES_VISITED_PROSTITUTE,
    HOUSES_BURGLED,
    SAFES_CRACKED,
    NOT_USED_INT_2,
    STOLEN_ITEMS_SOLD,
    EIGHT_BALLS_IN_POOL,
    WINS_IN_POOL,
    LOSSES_IN_POOL,
    VISITS_TO_GYM,
    NOT_USED_INT_6,
    
    MEALS_EATEN, // 200
    
    QUARRY_MONEY_MADE,
    QUARRY_COMPLETION_TIME,
    
    NOT_USED_INT_7,
    NOT_USED_INT_8,
    
    HIGHEST_PED_KILLS_ON_SPREE,
    HIGHEST_POLICE_KILLS_ON_SPREE,
    HIGHEST_CIV_VEHICLES_DESTROYED_ON_SPREE,
    HIGHEST_COP_VEHICLES_DESTROYED_ON_SPREE,
    HIGHEST_TANKS_DESTROYED_ON_SPREE,
    
    PIMPING_LEVEL, // 210
    
    KICKSTART_BEST_SCORE, 
    BEST_LAP_TIME_HOTRING,
    
    VEHICLES_EXPORTED, 
    VEHICLES_IMPORTED, 
    HIGHEST_SCORE_IN_BASKETBALL_CHALLENGE, 
    
    FIRES_STARTED,
    BEST_SCORE_CRASH,
    BEST_SCORE_RUSH,
    
    BEST_TIME_PCJ1,
    BEST_TIME_PCJ2, 
    BEST_TIME_PCJ3,
    BEST_TIME_PCJ4,
    
    FLYING_SKILL,
    
    RESPECT_MISSION,
    UNDERWATER_BREATH_STAMINA,
    
    GORE_RATING_LEVEL,
    SEX_RATING_LEVEL,
    
    RESPECT_MISSION_TOTAL,
    BIKE_SKILL,
    CYCLE_SKILL, // 230
    
    SNAPSHOTS_TAKEN,
    TOTAL_SNAPSHOTS,
    
    LUCK,
    
    TERRITORIES_TAKEN_OVER,
    TERRITORIES_LOST,
    NUMBER_TERRITORIES_HELD,
    HIGHEST_NUMBER_TERRITORIES_HELD,
    NUMBER_GANG_MEMBERS_RECRUITED,
    NUMBER_ENEMY_GANG_MEMBERS_KILLED,
    NUMBER_FRIENDLY_GANG_MEMBERS_KILLED, // 240
    
    HORSESHOES_COLLECTED,
    TOTAL_HORSESHOES,
    OYSTERS_COLLECTED,
    TOTAL_OYSTERS,

    CALORIES,
    
	// race stats:
    DTRIAL1_BEST_TIME,
    DTRIAL1_BEST_LAP,
    DTRIAL2_BEST_TIME,
    DTRIAL2_BEST_LAP,
    DTRIAL3_BEST_TIME,
    DTRIAL3_BEST_LAP,  
    DTRIAL4_BEST_TIME,
    DTRIAL4_BEST_LAP,
    DTRIAL5_BEST_TIME,
    DTRIAL5_BEST_LAP,
    DTRIAL6_BEST_TIME,
    DTRIAL6_BEST_LAP,
    DTRIAL7_BEST_TIME,
    DTRIAL7_BEST_LAP,
    DTRIAL8_BEST_TIME,
    DTRIAL8_BEST_LAP,
    DTRIAL9_BEST_TIME,
    DTRIAL9_BEST_LAP,
    DTRIAL10_BEST_TIME,
    DTRIAL10_BEST_LAP,
    DTRIAL11_BEST_TIME,
    DTRIAL11_BEST_LAP,
    DTRIAL12_BEST_TIME,
	DTRIAL12_BEST_LAP,

    BTRIAL1_BEST_TIME,
    BTRIAL1_BEST_LAP,
    BTRIAL2_BEST_TIME,
    BTRIAL2_BEST_LAP,
    BTRIAL3_BEST_TIME,
    BTRIAL3_BEST_LAP,
    BTRIAL4_BEST_TIME,
    BTRIAL4_BEST_LAP,
    BTRIAL5_BEST_TIME,
    BTRIAL5_BEST_LAP,
    BTRIAL6_BEST_TIME,
    BTRIAL6_BEST_LAP,
    BTRIAL7_BEST_TIME,
    BTRIAL7_BEST_LAP,
    BTRIAL8_BEST_TIME,
    BTRIAL8_BEST_LAP,

    QTTRIAL1_BEST_TIME,
    QTTRIAL1_BEST_LAP,
    QTTRIAL2_BEST_TIME,
    QTTRIAL2_BEST_LAP,
    QTTRIAL3_BEST_TIME,
    QTTRIAL3_BEST_LAP,
    QTTRIAL4_BEST_TIME,
    QTTRIAL4_BEST_LAP,
    QTTRIAL5_BEST_TIME,
    QTTRIAL5_BEST_LAP,
    QTTRIAL6_BEST_TIME,
    QTTRIAL6_BEST_LAP,

    MTRIAL1_BEST_TIME,
    MTRIAL1_BEST_LAP,
    MTRIAL2_BEST_TIME,
    MTRIAL2_BEST_LAP,   
    MTRIAL3_BEST_TIME,
    MTRIAL3_BEST_LAP,
    MTRIAL4_BEST_TIME,
    MTRIAL4_BEST_LAP,
    MTRIAL5_BEST_TIME,
    MTRIAL5_BEST_LAP,
    MTRIAL6_BEST_TIME,
	MTRIAL6_BEST_LAP,

    TURISMO1_BEST_TIME,
	TURISMO1_BEST_LAP,
	TURISMO1_BEST_POSITION,
    TURISMO2_BEST_TIME,
	TURISMO2_BEST_LAP,
	TURISMO2_BEST_POSITION,
    TURISMO3_BEST_TIME,
	TURISMO3_BEST_LAP,
	TURISMO3_BEST_POSITION,
    TURISMO4_BEST_TIME,
	TURISMO4_BEST_LAP,
	TURISMO4_BEST_POSITION,
    TURISMO5_BEST_TIME,
	TURISMO5_BEST_LAP,
	TURISMO5_BEST_POSITION,
    TURISMO6_BEST_TIME,
	TURISMO6_BEST_LAP,
	TURISMO6_BEST_POSITION,
    TURISMO7_BEST_TIME,
	TURISMO7_BEST_LAP,
	TURISMO7_BEST_POSITION,
    TURISMO8_BEST_TIME,
	TURISMO8_BEST_LAP,
	TURISMO8_BEST_POSITION,
    TURISMO9_BEST_TIME,
	TURISMO9_BEST_LAP,
	TURISMO9_BEST_POSITION,
    PASSED_STRAP4,
    PASSED_TRUTH2,
    PASSED_VCRASH2,
    STARTED_BADLANDS,
    STARTED_CAT2,
    STARTED_CRASH1, 
    MAX_INT_FLOAT_STATS,  // this must be the last
};

enum {
    //
    // blank stats are ones that have details and are therefore not in the list above
    //
    PLAYING_TIME = STATS_BLANK_OFFSET,
    NOT_USED_BLANK_1,
    NUMBER_TAGS,
    LEAST_FAVORITE_GANG,
    GANG_MEMBERS_WASTED,
    CRIMINALS_WASTED,
    
    MOST_FAVORITE_RADIO_STATION,
    LEAST_FAVORITE_RADIO_STATION,

    CURRENT_WEAPON_SKILL,
    WEAPON_SKILLS,
    
    PILOT_RANKING, // 330
    
    STRONGEST_GANG_1, // 331
    STRONGEST_GANG_2,
    STRONGEST_GANG_3,
    
    MONEY_LOST_GAMBLING,
    HEALTH,
    GANG_MEMBER_COUNT,
    TERRITORY_UNDER_CONTROL,

    MAX_BLANK_STATS  // this is the last in list
};

static_assert(MAX_INT_FLOAT_STATS == 343, "Messed up stats enumerators!");
static_assert(MAX_BLANK_STATS == 338, "Messed up stats enumerators!");

class CStats
{
public:
	static void Init(void);
	static long double	CalcPlayerStat(unsigned int statID);
	static void			IncrementStat(unsigned int statID, float fAmount);
	static const char*	FindCriminalRatingNumber();

	static long			ConstructStatLine(int nStat, int& nIndents);
	static void			BuildStatLine(char* pEntryName, void* pVal1, int nType, void* pVal2);
};

bool	UseMetricSystem();

#endif