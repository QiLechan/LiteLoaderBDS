// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "FilterTest.hpp"
#include "../Utils/Json.h"
#define EXTRA_INCLUDE_PART_ACTORISFAMILYTEST
#include "Extra/ActorIsFamilyTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORISFAMILYTEST
class ActorIsFamilyTest : public FilterTest {
#include "Extra/ActorIsFamilyTestAPI.hpp"
public:
    /*0*/ virtual ~ActorIsFamilyTest();
    /*1*/ virtual bool evaluate(struct FilterContext const&) const;
    /*2*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /*3*/ virtual class gsl::basic_string_span<char const, -1> getName() const;


protected:

private:
};