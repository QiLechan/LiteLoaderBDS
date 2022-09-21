/**
 * @file  ClientCacheBlobStatusPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientCacheBlobStatusPacket.
 *
 */
class ClientCacheBlobStatusPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTCACHEBLOBSTATUSPACKET
public:
    class ClientCacheBlobStatusPacket& operator=(class ClientCacheBlobStatusPacket const &) = delete;
    ClientCacheBlobStatusPacket(class ClientCacheBlobStatusPacket const &) = delete;
    ClientCacheBlobStatusPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   895019580
     */
    virtual ~ClientCacheBlobStatusPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ClientCacheBlobStatusPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   147685440
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ClientCacheBlobStatusPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1129462509
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ClientCacheBlobStatusPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1632126534
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ClientCacheBlobStatusPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   78178522
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};