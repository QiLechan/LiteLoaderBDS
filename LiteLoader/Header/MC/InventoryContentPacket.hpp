// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class InventoryContentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYCONTENTPACKET
public:
    class InventoryContentPacket& operator=(class InventoryContentPacket const&) = delete;
    InventoryContentPacket(class InventoryContentPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~InventoryContentPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~InventoryContentPacket(){
         (InventoryContentPacket::*rv)();
        *((void**)&rv) = dlsym("??1InventoryContentPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI InventoryContentPacket(enum ContainerID, std::vector<class ItemStack> const&);
    MCAPI InventoryContentPacket();
    MCAPI static class InventoryContentPacket fromPlayerInventoryId(enum ContainerID, class Player&);

protected:

private:

};