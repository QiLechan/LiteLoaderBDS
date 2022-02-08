// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RemoveEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEENTITYPACKET
public:
    class RemoveEntityPacket& operator=(class RemoveEntityPacket const&) = delete;
    RemoveEntityPacket(class RemoveEntityPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~RemoveEntityPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~RemoveEntityPacket(){
         (RemoveEntityPacket::*rv)();
        *((void**)&rv) = dlsym("??1RemoveEntityPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI RemoveEntityPacket();

protected:

private:

};