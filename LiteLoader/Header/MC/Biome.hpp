// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Biome {

#define AFTER_EXTRA
// Add Member There
public:
enum BiomeTempCategory;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOME
public:
    class Biome& operator=(class Biome const&) = delete;
    Biome(class Biome const&) = delete;
    Biome() = delete;
#endif

public:
    /*0*/ virtual ~Biome();
    MCAPI class Biome& addTag(class HashedString, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType> >&);
    MCAPI bool canHaveSnowfall(class BlockSource const&, class BlockPos const&) const;
    MCAPI enum VanillaBiomeTypes getBiomeType() const;
    MCAPI int getBirchFoliageColor(class BlockPos const&) const;
    MCAPI float getDefaultBiomeTemperature() const;
    MCAPI float getDownfall() const;
    MCAPI int getEvergreenFoliageColor(class BlockPos const&) const;
    MCAPI int getFoliageColor(class BlockPos const&) const;
    MCAPI int getMapBirchFoliageColor(class BlockPos const&) const;
    MCAPI int getMapEvergreenFoliageColor(class BlockPos const&) const;
    MCAPI int getMapFoliageColor(class BlockPos const&) const;
    MCAPI int getMapGrassColor(class BlockPos const&) const;
    MCAPI std::vector<class MobSpawnerData> const& getMobs() const;
    MCAPI std::vector<class MobSpawnerData>& getMobsMutable();
    MCAPI int getSnowAccumulationLayers() const;
    MCAPI float getTemperature(class BlockSource const&, class BlockPos const&) const;
    MCAPI enum Biome::BiomeTempCategory getTemperatureCategory() const;
    MCAPI float getTemperatureWorldGen(class BlockPos const&, short) const;
    MCAPI bool hasTag(struct IDType<struct BiomeTagIDType> const&, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType> > const&) const;
    MCAPI bool hasTag(class WellKnownTagID const&) const;
    MCAPI bool hasTag(unsigned __int64, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType> > const&) const;
    MCAPI bool isHumid() const;
    MCAPI bool isSnowCovered() const;
    MCAPI class Biome& setColor(int);
    MCAPI class Biome& setColor(int, bool);
    MCAPI class Biome& setMapWaterColor(int);
    MCAPI class Biome& setNoRain();
    MCAPI class Biome& setOceanRuinConfig(struct OceanRuinConfiguration const&);
    MCAPI class Biome& setOddColor(int);
    MCAPI void writePacketData(class CompoundTag&, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType> >&);
    MCAPI static class gsl::basic_string_span<char const, -1> const BACKCOMPAT_FOG_NAME;
    MCAPI static class mce::Color const DEFAULT_FOG_COLOR;
    MCAPI static class gsl::basic_string_span<char const, -1> const DEFAULT_FOG_ID;
    MCAPI static class mce::Color const DEFAULT_UNDERWATER_COLOR;
    MCAPI static class mce::Color const DEFAULT_WATER_COLOR;
    MCAPI static float const RAIN_TEMP_THRESHOLD;
    MCAPI static void buildCachedTemperatureNoise(class LevelChunk&);

protected:

private:

};