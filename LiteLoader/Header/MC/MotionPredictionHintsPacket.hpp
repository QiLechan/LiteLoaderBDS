// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MotionPredictionHintsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOTIONPREDICTIONHINTSPACKET
public:
    class MotionPredictionHintsPacket& operator=(class MotionPredictionHintsPacket const&) = delete;
    MotionPredictionHintsPacket(class MotionPredictionHintsPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~MotionPredictionHintsPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual void __unk_vfn_0();
    /*5*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~MotionPredictionHintsPacket(){
         (MotionPredictionHintsPacket::*rv)();
        *((void**)&rv) = dlsym("??1MotionPredictionHintsPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI MotionPredictionHintsPacket(class Actor const&);
    MCAPI MotionPredictionHintsPacket();

protected:

private:

};