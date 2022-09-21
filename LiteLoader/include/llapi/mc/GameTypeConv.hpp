/**
 * @file  GameTypeConv.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace GameTypeConv.
 *
 */
namespace GameTypeConv {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?gameTypeToNonLocString@GameTypeConv@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4GameType@@@Z
     * @hash   -873361606
     */
    MCAPI std::string gameTypeToNonLocString(enum class GameType);
    /**
     * @symbol ?gameTypeToString@GameTypeConv@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4GameType@@@Z
     * @hash   -1915700358
     */
    MCAPI std::string gameTypeToString(enum class GameType);
    /**
     * @symbol ?intToGameType@GameTypeConv@@YA?AW4GameType@@H@Z
     * @hash   1908789458
     */
    MCAPI enum class GameType intToGameType(int);
    /**
     * @symbol ?stringToGameType@GameTypeConv@@YA?AW4GameType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -651406042
     */
    MCAPI enum class GameType stringToGameType(std::string const &);

};