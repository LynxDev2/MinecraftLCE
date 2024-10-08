#pragma once

#include <string>

class BiomeProperties {
public:
    BiomeProperties(std::wstring const&);
    void depth(float);
    void downfall(float);
    void dry(void);
    BiomeProperties* mutated(std::wstring const&);
    void scale(float);
    void snow(void);
    void temperature(float);
    void waterColor(int);

private:
    std::wstring mBiomeName = nullptr;
    float mDepth = 0.1f;
    float mScale = 0.2f;
    float mTemperature = 0.5f;
    float mDownfall = 0.5f;
    int mWaterColor = 0xFFFFFF;
    bool mIsSnow = false;
    bool mIsNotDry = true;
    std::wstring mMutatedBiomeName = nullptr;
};