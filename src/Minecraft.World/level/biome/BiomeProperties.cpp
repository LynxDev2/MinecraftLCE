#include "Minecraft.World/level/biome/BiomeProperties.h"

BiomeProperties::BiomeProperties(const std::wstring& name) : mBiomeName(name) {}

void BiomeProperties::depth(float depth) {
    mDepth = depth;
}

void BiomeProperties::downfall(float downfall) {
    mDownfall = downfall;
}

void BiomeProperties::dry() {
    mIsNotDry = false;
}

// NON_MATCHING: std::wstring inlined
void BiomeProperties::mutated(const std::wstring& mutatedName) {
    mMutatedBiomeName = mutatedName;
}

void BiomeProperties::scale(float scale) {
    mScale = scale;
}

void BiomeProperties::snow() {
    mIsSnow = true;
}

void BiomeProperties::temperature(float temperature) {
    mTemperature = temperature;
}

void BiomeProperties::waterColor(int waterColor) {
    mWaterColor = waterColor;
}
