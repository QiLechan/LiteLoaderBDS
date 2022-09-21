/**
 * @file  ChangeMobPropertyPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ChangeMobPropertyPacket.
 *
 */
class ChangeMobPropertyPacket : public Packet {

#define AFTER_EXTRA
public:
    ActorUniqueID mUid;
    string mProperty;
    bool mBool;
    string mString;
    int mInt;
    float mFloat;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANGEMOBPROPERTYPACKET
public:
    class ChangeMobPropertyPacket& operator=(class ChangeMobPropertyPacket const &) = delete;
    ChangeMobPropertyPacket(class ChangeMobPropertyPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1218971611
     */
    virtual ~ChangeMobPropertyPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ChangeMobPropertyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -504806671
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ChangeMobPropertyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -543187554
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ChangeMobPropertyPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -723451319
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ChangeMobPropertyPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -309548775
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ChangeMobPropertyPacket@@QEAA@XZ
     * @hash   762089625
     */
    MCAPI ChangeMobPropertyPacket();

};