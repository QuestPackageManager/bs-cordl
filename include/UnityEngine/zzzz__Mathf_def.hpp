#pragma once
// IWYU pragma private; include "UnityEngine/Mathf.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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

  /// @brief Method Abs, addr 0x6906af0, size 0x60, virtual false, abstract: false, final false
  static inline float_t Abs(float_t f);

  /// @brief Method Abs, addr 0x6906b50, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t Abs(int32_t value);

  /// @brief Method Acos, addr 0x6906950, size 0x68, virtual false, abstract: false, final false
  static inline float_t Acos(float_t f);

  /// @brief Method Approximately, addr 0x69072a8, size 0x94, virtual false, abstract: false, final false
  static inline bool Approximately(float_t a, float_t b);

  /// @brief Method Asin, addr 0x69068e8, size 0x68, virtual false, abstract: false, final false
  static inline float_t Asin(float_t f);

  /// @brief Method Atan, addr 0x69069b8, size 0x68, virtual false, abstract: false, final false
  static inline float_t Atan(float_t f);

  /// @brief Method Atan2, addr 0x6906a20, size 0x70, virtual false, abstract: false, final false
  static inline float_t Atan2(float_t y, float_t x);

  /// @brief Method Ceil, addr 0x6906e98, size 0x60, virtual false, abstract: false, final false
  static inline float_t Ceil(float_t f);

  /// @brief Method CeilToInt, addr 0x6907024, size 0x78, virtual false, abstract: false, final false
  static inline int32_t CeilToInt(float_t f);

  /// @brief Method Clamp, addr 0x6907208, size 0x14, virtual false, abstract: false, final false
  static inline float_t Clamp(float_t value, float_t min, float_t max);

  /// @brief Method Clamp, addr 0x690721c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t Clamp(int32_t value, int32_t min, int32_t max);

  /// @brief Method Clamp01, addr 0x6907230, size 0x1c, virtual false, abstract: false, final false
  static inline float_t Clamp01(float_t value);

  /// @brief Method ClampToFloat, addr 0x69074bc, size 0x6c, virtual false, abstract: false, final false
  static inline float_t ClampToFloat(double_t value);

  /// @brief Method ClampToInt, addr 0x6907528, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t ClampToInt(int64_t value);

  /// @brief Method ClampToUInt, addr 0x6907544, size 0x18, virtual false, abstract: false, final false
  static inline uint32_t ClampToUInt(int64_t value);

  /// @brief Method CorrelatedColorTemperatureToRGB, addr 0x6906694, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color CorrelatedColorTemperatureToRGB(float_t kelvin);

  /// @brief Method CorrelatedColorTemperatureToRGB_Injected, addr 0x69066ec, size 0x4c, virtual false, abstract: false, final false
  static inline void CorrelatedColorTemperatureToRGB_Injected(float_t kelvin, ::ByRef<::UnityEngine::Color> ret);

  /// @brief Method Cos, addr 0x6906818, size 0x68, virtual false, abstract: false, final false
  static inline float_t Cos(float_t f);

  /// @brief Method DeltaAngle, addr 0x690746c, size 0x50, virtual false, abstract: false, final false
  static inline float_t DeltaAngle(float_t current, float_t target);

  /// @brief Method DiscardLeastSignificantDecimal, addr 0x6907690, size 0x17c, virtual false, abstract: false, final false
  static inline double_t DiscardLeastSignificantDecimal(double_t v);

  /// @brief Method Exp, addr 0x6906cec, size 0x68, virtual false, abstract: false, final false
  static inline float_t Exp(float_t power);

  /// @brief Method FloatToHalf, addr 0x6906738, size 0x38, virtual false, abstract: false, final false
  static inline uint16_t FloatToHalf(float_t val);

  /// @brief Method Floor, addr 0x6906ef8, size 0x60, virtual false, abstract: false, final false
  static inline float_t Floor(float_t f);

  /// @brief Method FloorToInt, addr 0x690709c, size 0x78, virtual false, abstract: false, final false
  static inline int32_t FloorToInt(float_t f);

  /// @brief Method GammaToLinearSpace, addr 0x690027c, size 0x38, virtual false, abstract: false, final false
  static inline float_t GammaToLinearSpace(float_t value);

  /// @brief Method GetNumberOfDecimalsForMinimumDifference, addr 0x690755c, size 0x98, virtual false, abstract: false, final false
  static inline int32_t GetNumberOfDecimalsForMinimumDifference(double_t minDifference);

  /// @brief Method InverseLerp, addr 0x6907434, size 0x38, virtual false, abstract: false, final false
  static inline float_t InverseLerp(float_t a, float_t b, float_t value);

  /// @brief Method IsPowerOfTwo, addr 0x690782c, size 0x10, virtual false, abstract: false, final false
  static inline bool IsPowerOfTwo(int32_t value);

  /// @brief Method Lerp, addr 0x690724c, size 0x28, virtual false, abstract: false, final false
  static inline float_t Lerp(float_t a, float_t b, float_t t);

  /// @brief Method LerpUnclamped, addr 0x6907274, size 0x10, virtual false, abstract: false, final false
  static inline float_t LerpUnclamped(float_t a, float_t b, float_t t);

  /// @brief Method LinearToGammaSpace, addr 0x6900364, size 0x38, virtual false, abstract: false, final false
  static inline float_t LinearToGammaSpace(float_t value);

  /// @brief Method Log, addr 0x6906dc8, size 0x68, virtual false, abstract: false, final false
  static inline float_t Log(float_t f);

  /// @brief Method Log, addr 0x6906d54, size 0x74, virtual false, abstract: false, final false
  static inline float_t Log(float_t f, float_t p);

  /// @brief Method Log10, addr 0x6906e30, size 0x68, virtual false, abstract: false, final false
  static inline float_t Log10(float_t f);

  /// @brief Method Max, addr 0x6906c14, size 0xc, virtual false, abstract: false, final false
  static inline float_t Max(float_t a, float_t b);

  /// @brief Method Max, addr 0x6906c20, size 0x50, virtual false, abstract: false, final false
  static inline float_t Max(::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method Max, addr 0x6906c70, size 0xc, virtual false, abstract: false, final false
  static inline int32_t Max(int32_t a, int32_t b);

  /// @brief Method Min, addr 0x6906bac, size 0xc, virtual false, abstract: false, final false
  static inline float_t Min(float_t a, float_t b);

  /// @brief Method Min, addr 0x6906bb8, size 0x50, virtual false, abstract: false, final false
  static inline float_t Min(::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method Min, addr 0x6906c08, size 0xc, virtual false, abstract: false, final false
  static inline int32_t Min(int32_t a, int32_t b);

  /// @brief Method MoveTowards, addr 0x6907284, size 0x24, virtual false, abstract: false, final false
  static inline float_t MoveTowards(float_t current, float_t target, float_t maxDelta);

  /// @brief Method NextPowerOfTwo, addr 0x690780c, size 0x20, virtual false, abstract: false, final false
  static inline int32_t NextPowerOfTwo(int32_t value);

  /// @brief Method PerlinNoise, addr 0x6906770, size 0x40, virtual false, abstract: false, final false
  static inline float_t PerlinNoise(float_t x, float_t y);

  /// @brief Method Pow, addr 0x6906c7c, size 0x70, virtual false, abstract: false, final false
  static inline float_t Pow(float_t f, float_t p);

  /// @brief Method Repeat, addr 0x690740c, size 0x28, virtual false, abstract: false, final false
  static inline float_t Repeat(float_t t, float_t length);

  /// @brief Method Round, addr 0x6906f58, size 0xcc, virtual false, abstract: false, final false
  static inline float_t Round(float_t f);

  /// @brief Method RoundBasedOnMinimumDifference, addr 0x69075f4, size 0x9c, virtual false, abstract: false, final false
  static inline double_t RoundBasedOnMinimumDifference(double_t valueToRound, double_t minDifference);

  /// @brief Method RoundToInt, addr 0x6907114, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t RoundToInt(float_t f);

  /// @brief Method Sign, addr 0x69071f4, size 0x14, virtual false, abstract: false, final false
  static inline float_t Sign(float_t f);

  /// @brief Method Sin, addr 0x69067b0, size 0x68, virtual false, abstract: false, final false
  static inline float_t Sin(float_t f);

  /// @brief Method SmoothDamp, addr 0x690733c, size 0xd0, virtual false, abstract: false, final false
  static inline float_t SmoothDamp(float_t current, float_t target, ::ByRef<float_t> currentVelocity, float_t smoothTime, float_t maxSpeed, float_t deltaTime);

  /// @brief Method Sqrt, addr 0x6906a90, size 0x60, virtual false, abstract: false, final false
  static inline float_t Sqrt(float_t f);

  /// @brief Method Tan, addr 0x6906880, size 0x68, virtual false, abstract: false, final false
  static inline float_t Tan(float_t f);

  static inline float_t getStaticF_Epsilon();

  static inline void setStaticF_Epsilon(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Mathf();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10238 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Mathf, 0x1>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Mathf, "UnityEngine", "Mathf");
