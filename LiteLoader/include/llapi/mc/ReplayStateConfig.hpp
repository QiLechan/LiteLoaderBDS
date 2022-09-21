/**
 * @file  ReplayStateConfig.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ReplayStateConfig.
 *
 */
struct ReplayStateConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPLAYSTATECONFIG
public:
    struct ReplayStateConfig& operator=(struct ReplayStateConfig const &) = delete;
    ReplayStateConfig(struct ReplayStateConfig const &) = delete;
    ReplayStateConfig() = delete;
#endif

public:
    /**
     * @symbol ??0ReplayStateConfig@@QEAA@W4ReplayStateMode@@@Z
     * @hash   -975060455
     */
    MCAPI ReplayStateConfig(enum class ReplayStateMode);
    /**
     * @symbol ?usesUnsupportedThresholds@ReplayStateConfig@@QEBA_NXZ
     * @hash   1834518950
     */
    MCAPI bool usesUnsupportedThresholds() const;

};