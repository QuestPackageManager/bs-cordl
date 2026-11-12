#pragma once
// IWYU pragma private; include "UnityEngine/Mathf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mathf)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
struct Mathf;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Mathf);
DEFINE_IL2CPP_CLASS(::UnityEngine::Mathf, "UnityEngine", "Mathf");
// [NativeHeader("Runtime/Math/ColorSpaceConversion.h")]
// [NativeHeader("NativeKernel/Math/FloatConversion.h")]
// [NativeHeader("Runtime/Math/PerlinNoise.h")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Mathf
#pragma pack(push, 0)
struct CORDL_TYPE Mathf {
public:
  // Declarations
  /// @brief Field Epsilon, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Epsilon, put = setStaticF_Epsilon)) float_t Epsilon;

  /// @brief Method Abs, addr 0x6f69d4c, size 0x60, virtual false, abstract: false, final false
  static inline float_t Abs(float_t f);

  /// @brief Method Abs, addr 0x6f69dac, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t Abs(int32_t value);

  /// @brief Method Acos, addr 0x6f69bac, size 0x68, virtual false, abstract: false, final false
  static inline float_t Acos(float_t f);

  /// @brief Method Approximately, addr 0x6f6a570, size 0x94, virtual false, abstract: false, final false
  static inline bool Approximately(float_t a, float_t b);

  /// @brief Method Asin, addr 0x6f69b44, size 0x68, virtual false, abstract: false, final false
  static inline float_t Asin(float_t f);

  /// @brief Method Atan, addr 0x6f69c14, size 0x68, virtual false, abstract: false, final false
  static inline float_t Atan(float_t f);

  /// @brief Method Atan2, addr 0x6f69c7c, size 0x70, virtual false, abstract: false, final false
  static inline float_t Atan2(float_t y, float_t x);

  /// @brief Method Ceil, addr 0x6f6a0f4, size 0x60, virtual false, abstract: false, final false
  static inline float_t Ceil(float_t f);

  /// @brief Method CeilToInt, addr 0x6f6a280, size 0x78, virtual false, abstract: false, final false
  static inline int32_t CeilToInt(float_t f);

  /// @brief Method Clamp, addr 0x6f6a464, size 0x14, virtual false, abstract: false, final false
  static inline float_t Clamp(float_t value, float_t min, float_t max);

  /// @brief Method Clamp, addr 0x6f6a478, size 0x14, virtual false, abstract: false, final false
  static inline int32_t Clamp(int32_t value, int32_t min, int32_t max);

  /// @brief Method Clamp01, addr 0x6f6a48c, size 0x1c, virtual false, abstract: false, final false
  static inline float_t Clamp01(float_t value);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method ClampToFloat, addr 0x6f6a78c, size 0x6c, virtual false, abstract: false, final false
  static inline float_t ClampToFloat(double_t value);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
  /// @brief Method ClampToInt, addr 0x6f6a7f8, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t ClampToInt(int64_t value);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method ClampToUInt, addr 0x6f6a814, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t ClampToUInt(int64_t value);

  /// [FreeFunction(IsThreadSafe = true)]
  /// @brief Method CorrelatedColorTemperatureToRGB, addr 0x6f698b4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color CorrelatedColorTemperatureToRGB(float_t kelvin);

  /// @brief Method CorrelatedColorTemperatureToRGB_Injected, addr 0x6f6990c, size 0x4c, virtual false, abstract: false, final false
  static inline void CorrelatedColorTemperatureToRGB_Injected(float_t kelvin, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method Cos, addr 0x6f69a74, size 0x68, virtual false, abstract: false, final false
  static inline float_t Cos(float_t f);

  /// @brief Method DeltaAngle, addr 0x6f6a73c, size 0x50, virtual false, abstract: false, final false
  static inline float_t DeltaAngle(float_t current, float_t target);

  /// @brief Method DiscardLeastSignificantDecimal, addr 0x6f6a960, size 0x17c, virtual false, abstract: false, final false
  static inline double_t DiscardLeastSignificantDecimal(double_t v);

  /// @brief Method Exp, addr 0x6f69f48, size 0x68, virtual false, abstract: false, final false
  static inline float_t Exp(float_t power);

  /// [FreeFunction(IsThreadSafe = true)]
  /// @brief Method FloatToHalf, addr 0x6f69958, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t FloatToHalf(float_t val);

  /// @brief Method Floor, addr 0x6f6a154, size 0x60, virtual false, abstract: false, final false
  static inline float_t Floor(float_t f);

  /// @brief Method FloorToInt, addr 0x6f6a2f8, size 0x78, virtual false, abstract: false, final false
  static inline int32_t FloorToInt(float_t f);

  /// [FreeFunction(IsThreadSafe = true)]
  /// @brief Method GammaToLinearSpace, addr 0x6f69844, size 0x38, virtual false, abstract: false, final false
  static inline float_t GammaToLinearSpace(float_t value);

  /// @brief Method GetNumberOfDecimalsForMinimumDifference, addr 0x6f6a82c, size 0x98, virtual false, abstract: false, final false
  static inline int32_t GetNumberOfDecimalsForMinimumDifference(double_t minDifference);

  /// [FreeFunction(IsThreadSafe = true)]
  /// @brief Method HalfToFloat, addr 0x6f69990, size 0x3c, virtual false, abstract: false, final false
  static inline float_t HalfToFloat(uint16_t val);

  /// @brief Method InverseLerp, addr 0x6f6a704, size 0x38, virtual false, abstract: false, final false
  static inline float_t InverseLerp(float_t a, float_t b, float_t value);

  /// @brief Method IsPowerOfTwo, addr 0x6f6aafc, size 0x10, virtual false, abstract: false, final false
  static inline bool IsPowerOfTwo(int32_t value);

  /// @brief Method Lerp, addr 0x6f6a4a8, size 0x28, virtual false, abstract: false, final false
  static inline float_t Lerp(float_t a, float_t b, float_t t);

  /// @brief Method LerpAngle, addr 0x6f6a4e0, size 0x6c, virtual false, abstract: false, final false
  static inline float_t LerpAngle(float_t a, float_t b, float_t t);

  /// @brief Method LerpUnclamped, addr 0x6f6a4d0, size 0x10, virtual false, abstract: false, final false
  static inline float_t LerpUnclamped(float_t a, float_t b, float_t t);

  /// [FreeFunction(IsThreadSafe = true)]
  /// @brief Method LinearToGammaSpace, addr 0x6f6987c, size 0x38, virtual false, abstract: false, final false
  static inline float_t LinearToGammaSpace(float_t value);

  /// @brief Method Log, addr 0x6f6a024, size 0x68, virtual false, abstract: false, final false
  static inline float_t Log(float_t f);

  /// @brief Method Log, addr 0x6f69fb0, size 0x74, virtual false, abstract: false, final false
  static inline float_t Log(float_t f, float_t p);

  /// @brief Method Log10, addr 0x6f6a08c, size 0x68, virtual false, abstract: false, final false
  static inline float_t Log10(float_t f);

  /// @brief Method Max, addr 0x6f69e70, size 0xc, virtual false, abstract: false, final false
  static inline float_t Max(float_t a, float_t b);

  /// @brief Method Max, addr 0x6f69e7c, size 0x50, virtual false, abstract: false, final false
  static inline float_t Max(/* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method Max, addr 0x6f69ecc, size 0xc, virtual false, abstract: false, final false
  static inline int32_t Max(int32_t a, int32_t b);

  /// @brief Method Min, addr 0x6f69e08, size 0xc, virtual false, abstract: false, final false
  static inline float_t Min(float_t a, float_t b);

  /// @brief Method Min, addr 0x6f69e14, size 0x50, virtual false, abstract: false, final false
  static inline float_t Min(/* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method Min, addr 0x6f69e64, size 0xc, virtual false, abstract: false, final false
  static inline int32_t Min(int32_t a, int32_t b);

  /// @brief Method MoveTowards, addr 0x6f6a54c, size 0x24, virtual false, abstract: false, final false
  static inline float_t MoveTowards(float_t current, float_t target, float_t maxDelta);

  /// @brief Method NextPowerOfTwo, addr 0x6f6aadc, size 0x20, virtual false, abstract: false, final false
  static inline int32_t NextPowerOfTwo(int32_t value);

  /// [FreeFunction("PerlinNoise::NoiseNormalized", IsThreadSafe = true)]
  /// @brief Method PerlinNoise, addr 0x6f699cc, size 0x40, virtual false, abstract: false, final false
  static inline float_t PerlinNoise(float_t x, float_t y);

  /// @brief Method Pow, addr 0x6f69ed8, size 0x70, virtual false, abstract: false, final false
  static inline float_t Pow(float_t f, float_t p);

  /// @brief Method Repeat, addr 0x6f6a6dc, size 0x28, virtual false, abstract: false, final false
  static inline float_t Repeat(float_t t, float_t length);

  /// @brief Method Round, addr 0x6f6a1b4, size 0xcc, virtual false, abstract: false, final false
  static inline float_t Round(float_t f);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method RoundBasedOnMinimumDifference, addr 0x6f6a8c4, size 0x9c, virtual false, abstract: false, final false
  static inline double_t RoundBasedOnMinimumDifference(double_t valueToRound, double_t minDifference);

  /// @brief Method RoundToInt, addr 0x6f6a370, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t RoundToInt(float_t f);

  /// @brief Method Sign, addr 0x6f6a450, size 0x14, virtual false, abstract: false, final false
  static inline float_t Sign(float_t f);

  /// @brief Method Sin, addr 0x6f69a0c, size 0x68, virtual false, abstract: false, final false
  static inline float_t Sin(float_t f);

  /// @brief Method SmoothDamp, addr 0x6f6a604, size 0xd8, virtual false, abstract: false, final false
  static inline float_t SmoothDamp(float_t current, float_t target, ::by_ref<float_t> currentVelocity, float_t smoothTime, /* [DefaultValue("Mathf.Infinity")] */ float_t maxSpeed,
                                   /* [DefaultValue("Time.deltaTime")] */ float_t deltaTime);

  /// @brief Method Sqrt, addr 0x6f69cec, size 0x60, virtual false, abstract: false, final false
  static inline float_t Sqrt(float_t f);

  /// @brief Method Tan, addr 0x6f69adc, size 0x68, virtual false, abstract: false, final false
  static inline float_t Tan(float_t f);

  static inline float_t getStaticF_Epsilon();

  static inline void setStaticF_Epsilon(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Mathf();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9851 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Mathf) == 0x1, "Size mismatch!");

} // namespace UnityEngine
