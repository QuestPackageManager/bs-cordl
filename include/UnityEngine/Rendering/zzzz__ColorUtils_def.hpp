#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ColorUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorUtils)
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ColorUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ColorUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ColorUtils*, "UnityEngine.Rendering", "ColorUtils");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ColorUtils
class CORDL_TYPE ColorUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_LensAttenuation, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_LensAttenuation, put = setStaticF_s_LensAttenuation)) float_t s_LensAttenuation;

  /// @brief Field s_LightMeterCalibrationConstant, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_LightMeterCalibrationConstant, put = setStaticF_s_LightMeterCalibrationConstant)) float_t s_LightMeterCalibrationConstant;

  /// @brief Method CIExyToLMS, addr 0x67b7730, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 CIExyToLMS(float_t x, float_t y);

  /// @brief Method ColorBalanceToLMSCoeffs, addr 0x67b77c0, size 0x160, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ColorBalanceToLMSCoeffs(float_t temperature, float_t tint);

  /// @brief Method ComputeEV100, addr 0x67b8004, size 0x98, virtual false, abstract: false, final false
  static inline float_t ComputeEV100(float_t aperture, float_t shutterSpeed, float_t ISO);

  /// @brief Method ComputeEV100FromAvgLuminance, addr 0x67b81d4, size 0xc8, virtual false, abstract: false, final false
  static inline float_t ComputeEV100FromAvgLuminance(float_t avgLuminance);

  /// @brief Method ComputeISO, addr 0x67b829c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t ComputeISO(float_t aperture, float_t shutterSpeed, float_t targetEV100);

  /// @brief Method ConvertEV100ToExposure, addr 0x67b809c, size 0x78, virtual false, abstract: false, final false
  static inline float_t ConvertEV100ToExposure(float_t EV100);

  /// @brief Method ConvertExposureToEV100, addr 0x67b8114, size 0xc0, virtual false, abstract: false, final false
  static inline float_t ConvertExposureToEV100(float_t exposure);

  /// @brief Method Luminance, addr 0x67b7f48, size 0x30, virtual false, abstract: false, final false
  static inline float_t Luminance(::by_ref<::UnityEngine::Color> color);

  /// @brief Method PrepareLiftGammaGain, addr 0x67b7bb8, size 0x390, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>
  PrepareLiftGammaGain(::by_ref<::UnityEngine::Vector4> inLift, ::by_ref<::UnityEngine::Vector4> inGamma, ::by_ref<::UnityEngine::Vector4> inGain);

  /// @brief Method PrepareShadowsMidtonesHighlights, addr 0x67b7920, size 0x298, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_3<::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4>
  PrepareShadowsMidtonesHighlights(::by_ref<::UnityEngine::Vector4> inShadows, ::by_ref<::UnityEngine::Vector4> inMidtones, ::by_ref<::UnityEngine::Vector4> inHighlights);

  /// @brief Method PrepareSplitToning, addr 0x67b7f78, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector4> PrepareSplitToning(::by_ref<::UnityEngine::Vector4> inShadows, ::by_ref<::UnityEngine::Vector4> inHighlights,
                                                                                                          float_t balance);

  /// @brief Method StandardIlluminantY, addr 0x67b7704, size 0x2c, virtual false, abstract: false, final false
  static inline float_t StandardIlluminantY(float_t x);

  /// @brief Method ToHex, addr 0x67b82d8, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t ToHex(::UnityEngine::Color c);

  /// @brief Method ToRGBA, addr 0x67b8348, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ToRGBA(uint32_t hex);

  static inline float_t getStaticF_s_LensAttenuation();

  static inline float_t getStaticF_s_LightMeterCalibrationConstant();

  /// @brief Method get_lensImperfectionExposureScale, addr 0x67b7690, size 0x74, virtual false, abstract: false, final false
  static inline float_t get_lensImperfectionExposureScale();

  static inline void setStaticF_s_LensAttenuation(float_t value);

  static inline void setStaticF_s_LightMeterCalibrationConstant(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorUtils(ColorUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorUtils(ColorUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12245 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ColorUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
