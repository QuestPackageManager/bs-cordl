#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LensFlareDataElementSRP.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__SRPLensFlareBlendMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__SRPLensFlareColorType_def.hpp"
#include "UnityEngine/Rendering/zzzz__SRPLensFlareDistribution_def.hpp"
#include "UnityEngine/Rendering/zzzz__SRPLensFlareType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LensFlareDataElementSRP)
namespace UnityEngine::Rendering {
class LensFlareDataSRP;
}
namespace UnityEngine::Rendering {
class TextureGradient;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LensFlareDataElementSRP;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::LensFlareDataElementSRP);
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Rendering.SRPLensFlareBlendMode, UnityEngine.Rendering.SRPLensFlareColorType, UnityEngine.Rendering.SRPLensFlareDistribution,
// UnityEngine.Rendering.SRPLensFlareType, UnityEngine.Vector2
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LensFlareDataElementSRP
class CORDL_TYPE LensFlareDataElementSRP : public ::System::Object {
public:
  // Declarations
  /// @brief Field allowMultipleElement, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_allowMultipleElement, put = __cordl_internal_set_allowMultipleElement)) bool allowMultipleElement;

  /// @brief Field angularOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_angularOffset, put = __cordl_internal_set_angularOffset)) float_t angularOffset;

  /// @brief Field autoRotate, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get_autoRotate, put = __cordl_internal_set_autoRotate)) bool autoRotate;

  /// @brief Field blendMode, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_blendMode, put = __cordl_internal_set_blendMode)) ::UnityEngine::Rendering::SRPLensFlareBlendMode blendMode;

  /// @brief Field colorGradient, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_colorGradient, put = __cordl_internal_set_colorGradient)) ::UnityEngine::Gradient* colorGradient;

  __declspec(property(get = get_count, put = set_count)) int32_t count;

  /// @brief Field distortionCurve, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_distortionCurve, put = __cordl_internal_set_distortionCurve)) ::UnityEngine::AnimationCurve* distortionCurve;

  /// @brief Field distortionRelativeToCenter, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_distortionRelativeToCenter, put = __cordl_internal_set_distortionRelativeToCenter)) bool distortionRelativeToCenter;

  /// @brief Field distribution, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_distribution, put = __cordl_internal_set_distribution)) ::UnityEngine::Rendering::SRPLensFlareDistribution distribution;

  __declspec(property(get = get_edgeOffset, put = set_edgeOffset)) float_t edgeOffset;

  /// @brief Field enableRadialDistortion, offset 0xe4, size 0x1
  __declspec(property(get = __cordl_internal_get_enableRadialDistortion, put = __cordl_internal_set_enableRadialDistortion)) bool enableRadialDistortion;

  __declspec(property(get = get_fallOff, put = set_fallOff)) float_t fallOff;

  /// @brief Field flareType, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_flareType, put = __cordl_internal_set_flareType)) ::UnityEngine::Rendering::SRPLensFlareType flareType;

  /// @brief Field hoopFactor, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_hoopFactor, put = __cordl_internal_set_hoopFactor)) float_t hoopFactor;

  __declspec(property(get = get_intensityVariation, put = set_intensityVariation)) float_t intensityVariation;

  /// @brief Field inverseSDF, offset 0x10c, size 0x1
  __declspec(property(get = __cordl_internal_get_inverseSDF, put = __cordl_internal_set_inverseSDF)) bool inverseSDF;

  /// @brief Field isFoldOpened, offset 0xa5, size 0x1
  __declspec(property(get = __cordl_internal_get_isFoldOpened, put = __cordl_internal_set_isFoldOpened)) bool isFoldOpened;

  /// @brief Field lengthSpread, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_lengthSpread, put = __cordl_internal_set_lengthSpread)) float_t lengthSpread;

  /// @brief Field lensFlareDataSRP, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lensFlareDataSRP, put = __cordl_internal_set_lensFlareDataSRP)) ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> lensFlareDataSRP;

  /// @brief Field lensFlareTexture, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_lensFlareTexture, put = __cordl_internal_set_lensFlareTexture)) ::UnityW<::UnityEngine::Texture> lensFlareTexture;

  __declspec(property(get = get_localIntensity, put = set_localIntensity)) float_t localIntensity;

  /// @brief Field m_Count, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Count, put = __cordl_internal_set_m_Count)) int32_t m_Count;

  /// @brief Field m_EdgeOffset, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EdgeOffset, put = __cordl_internal_set_m_EdgeOffset)) float_t m_EdgeOffset;

  /// @brief Field m_FallOff, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FallOff, put = __cordl_internal_set_m_FallOff)) float_t m_FallOff;

  /// @brief Field m_IntensityVariation, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IntensityVariation, put = __cordl_internal_set_m_IntensityVariation)) float_t m_IntensityVariation;

  /// @brief Field m_LocalIntensity, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LocalIntensity, put = __cordl_internal_set_m_LocalIntensity)) float_t m_LocalIntensity;

  /// @brief Field m_SdfRoundness, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SdfRoundness, put = __cordl_internal_set_m_SdfRoundness)) float_t m_SdfRoundness;

  /// @brief Field m_SideCount, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SideCount, put = __cordl_internal_set_m_SideCount)) int32_t m_SideCount;

  /// @brief Field modulateByLightColor, offset 0xa4, size 0x1
  __declspec(property(get = __cordl_internal_get_modulateByLightColor, put = __cordl_internal_set_modulateByLightColor)) bool modulateByLightColor;

  /// @brief Field noiseAmplitude, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_noiseAmplitude, put = __cordl_internal_set_noiseAmplitude)) float_t noiseAmplitude;

  /// @brief Field noiseFrequency, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_noiseFrequency, put = __cordl_internal_set_noiseFrequency)) int32_t noiseFrequency;

  /// @brief Field noiseSpeed, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_noiseSpeed, put = __cordl_internal_set_noiseSpeed)) float_t noiseSpeed;

  /// @brief Field position, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) float_t position;

  /// @brief Field positionCurve, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_positionCurve, put = __cordl_internal_set_positionCurve)) ::UnityEngine::AnimationCurve* positionCurve;

  /// @brief Field positionOffset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_positionOffset, put = __cordl_internal_set_positionOffset)) ::UnityEngine::Vector2 positionOffset;

  /// @brief Field positionVariation, offset 0xd4, size 0x8
  __declspec(property(get = __cordl_internal_get_positionVariation, put = __cordl_internal_set_positionVariation)) ::UnityEngine::Vector2 positionVariation;

  /// @brief Field preserveAspectRatio, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_preserveAspectRatio, put = __cordl_internal_set_preserveAspectRatio)) bool preserveAspectRatio;

  /// @brief Field ringThickness, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_ringThickness, put = __cordl_internal_set_ringThickness)) float_t ringThickness;

  /// @brief Field rotation, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation)) float_t rotation;

  /// @brief Field rotationVariation, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationVariation, put = __cordl_internal_set_rotationVariation)) float_t rotationVariation;

  /// @brief Field scaleCurve, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleCurve, put = __cordl_internal_set_scaleCurve)) ::UnityEngine::AnimationCurve* scaleCurve;

  /// @brief Field scaleVariation, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_scaleVariation, put = __cordl_internal_set_scaleVariation)) float_t scaleVariation;

  __declspec(property(get = get_sdfRoundness, put = set_sdfRoundness)) float_t sdfRoundness;

  /// @brief Field seed, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_seed, put = __cordl_internal_set_seed)) int32_t seed;

  /// @brief Field shapeCutOffRadius, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_shapeCutOffRadius, put = __cordl_internal_set_shapeCutOffRadius)) float_t shapeCutOffRadius;

  /// @brief Field shapeCutOffSpeed, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_shapeCutOffSpeed, put = __cordl_internal_set_shapeCutOffSpeed)) float_t shapeCutOffSpeed;

  __declspec(property(get = get_sideCount, put = set_sideCount)) int32_t sideCount;

  /// @brief Field sizeXY, offset 0x64, size 0x8
  __declspec(property(get = __cordl_internal_get_sizeXY, put = __cordl_internal_set_sizeXY)) ::UnityEngine::Vector2 sizeXY;

  /// @brief Field targetSizeDistortion, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_targetSizeDistortion, put = __cordl_internal_set_targetSizeDistortion)) ::UnityEngine::Vector2 targetSizeDistortion;

  /// @brief Field tint, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_tint, put = __cordl_internal_set_tint)) ::UnityEngine::Color tint;

  /// @brief Field tintColorType, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_tintColorType, put = __cordl_internal_set_tintColorType)) ::UnityEngine::Rendering::SRPLensFlareColorType tintColorType;

  /// @brief Field tintGradient, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_tintGradient, put = __cordl_internal_set_tintGradient)) ::UnityEngine::Rendering::TextureGradient* tintGradient;

  /// @brief Field translationScale, offset 0x2c, size 0x8
  __declspec(property(get = __cordl_internal_get_translationScale, put = __cordl_internal_set_translationScale)) ::UnityEngine::Vector2 translationScale;

  /// @brief Field uniformAngle, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_uniformAngle, put = __cordl_internal_set_uniformAngle)) float_t uniformAngle;

  /// @brief Field uniformAngleCurve, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_uniformAngleCurve, put = __cordl_internal_set_uniformAngleCurve)) ::UnityEngine::AnimationCurve* uniformAngleCurve;

  /// @brief Field uniformScale, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_uniformScale, put = __cordl_internal_set_uniformScale)) float_t uniformScale;

  /// @brief Field visible, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_visible, put = __cordl_internal_set_visible)) bool visible;

  /// @brief Method Clone, addr 0x6583464, size 0x51c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::LensFlareDataElementSRP* Clone();

  static inline ::UnityEngine::Rendering::LensFlareDataElementSRP* New_ctor();

  constexpr bool const& __cordl_internal_get_allowMultipleElement() const;

  constexpr bool& __cordl_internal_get_allowMultipleElement();

  constexpr float_t const& __cordl_internal_get_angularOffset() const;

  constexpr float_t& __cordl_internal_get_angularOffset();

  constexpr bool const& __cordl_internal_get_autoRotate() const;

  constexpr bool& __cordl_internal_get_autoRotate();

  constexpr ::UnityEngine::Rendering::SRPLensFlareBlendMode const& __cordl_internal_get_blendMode() const;

  constexpr ::UnityEngine::Rendering::SRPLensFlareBlendMode& __cordl_internal_get_blendMode();

  constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_colorGradient() const;

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get_colorGradient();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_distortionCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_distortionCurve();

  constexpr bool const& __cordl_internal_get_distortionRelativeToCenter() const;

  constexpr bool& __cordl_internal_get_distortionRelativeToCenter();

  constexpr ::UnityEngine::Rendering::SRPLensFlareDistribution const& __cordl_internal_get_distribution() const;

  constexpr ::UnityEngine::Rendering::SRPLensFlareDistribution& __cordl_internal_get_distribution();

  constexpr bool const& __cordl_internal_get_enableRadialDistortion() const;

  constexpr bool& __cordl_internal_get_enableRadialDistortion();

  constexpr ::UnityEngine::Rendering::SRPLensFlareType const& __cordl_internal_get_flareType() const;

  constexpr ::UnityEngine::Rendering::SRPLensFlareType& __cordl_internal_get_flareType();

  constexpr float_t const& __cordl_internal_get_hoopFactor() const;

  constexpr float_t& __cordl_internal_get_hoopFactor();

  constexpr bool const& __cordl_internal_get_inverseSDF() const;

  constexpr bool& __cordl_internal_get_inverseSDF();

  constexpr bool const& __cordl_internal_get_isFoldOpened() const;

  constexpr bool& __cordl_internal_get_isFoldOpened();

  constexpr float_t const& __cordl_internal_get_lengthSpread() const;

  constexpr float_t& __cordl_internal_get_lengthSpread();

  constexpr ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> const& __cordl_internal_get_lensFlareDataSRP() const;

  constexpr ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP>& __cordl_internal_get_lensFlareDataSRP();

  constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_lensFlareTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_lensFlareTexture();

  constexpr int32_t const& __cordl_internal_get_m_Count() const;

  constexpr int32_t& __cordl_internal_get_m_Count();

  constexpr float_t const& __cordl_internal_get_m_EdgeOffset() const;

  constexpr float_t& __cordl_internal_get_m_EdgeOffset();

  constexpr float_t const& __cordl_internal_get_m_FallOff() const;

  constexpr float_t& __cordl_internal_get_m_FallOff();

  constexpr float_t const& __cordl_internal_get_m_IntensityVariation() const;

  constexpr float_t& __cordl_internal_get_m_IntensityVariation();

  constexpr float_t const& __cordl_internal_get_m_LocalIntensity() const;

  constexpr float_t& __cordl_internal_get_m_LocalIntensity();

  constexpr float_t const& __cordl_internal_get_m_SdfRoundness() const;

  constexpr float_t& __cordl_internal_get_m_SdfRoundness();

  constexpr int32_t const& __cordl_internal_get_m_SideCount() const;

  constexpr int32_t& __cordl_internal_get_m_SideCount();

  constexpr bool const& __cordl_internal_get_modulateByLightColor() const;

  constexpr bool& __cordl_internal_get_modulateByLightColor();

  constexpr float_t const& __cordl_internal_get_noiseAmplitude() const;

  constexpr float_t& __cordl_internal_get_noiseAmplitude();

  constexpr int32_t const& __cordl_internal_get_noiseFrequency() const;

  constexpr int32_t& __cordl_internal_get_noiseFrequency();

  constexpr float_t const& __cordl_internal_get_noiseSpeed() const;

  constexpr float_t& __cordl_internal_get_noiseSpeed();

  constexpr float_t const& __cordl_internal_get_position() const;

  constexpr float_t& __cordl_internal_get_position();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_positionCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_positionCurve();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_positionOffset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_positionOffset();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_positionVariation() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_positionVariation();

  constexpr bool const& __cordl_internal_get_preserveAspectRatio() const;

  constexpr bool& __cordl_internal_get_preserveAspectRatio();

  constexpr float_t const& __cordl_internal_get_ringThickness() const;

  constexpr float_t& __cordl_internal_get_ringThickness();

  constexpr float_t const& __cordl_internal_get_rotation() const;

  constexpr float_t& __cordl_internal_get_rotation();

  constexpr float_t const& __cordl_internal_get_rotationVariation() const;

  constexpr float_t& __cordl_internal_get_rotationVariation();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_scaleCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_scaleCurve();

  constexpr float_t const& __cordl_internal_get_scaleVariation() const;

  constexpr float_t& __cordl_internal_get_scaleVariation();

  constexpr int32_t const& __cordl_internal_get_seed() const;

  constexpr int32_t& __cordl_internal_get_seed();

  constexpr float_t const& __cordl_internal_get_shapeCutOffRadius() const;

  constexpr float_t& __cordl_internal_get_shapeCutOffRadius();

  constexpr float_t const& __cordl_internal_get_shapeCutOffSpeed() const;

  constexpr float_t& __cordl_internal_get_shapeCutOffSpeed();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_sizeXY() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_sizeXY();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_targetSizeDistortion() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_targetSizeDistortion();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_tint() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_tint();

  constexpr ::UnityEngine::Rendering::SRPLensFlareColorType const& __cordl_internal_get_tintColorType() const;

  constexpr ::UnityEngine::Rendering::SRPLensFlareColorType& __cordl_internal_get_tintColorType();

  constexpr ::UnityEngine::Rendering::TextureGradient* const& __cordl_internal_get_tintGradient() const;

  constexpr ::UnityEngine::Rendering::TextureGradient*& __cordl_internal_get_tintGradient();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_translationScale() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_translationScale();

  constexpr float_t const& __cordl_internal_get_uniformAngle() const;

  constexpr float_t& __cordl_internal_get_uniformAngle();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_uniformAngleCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_uniformAngleCurve();

  constexpr float_t const& __cordl_internal_get_uniformScale() const;

  constexpr float_t& __cordl_internal_get_uniformScale();

  constexpr bool const& __cordl_internal_get_visible() const;

  constexpr bool& __cordl_internal_get_visible();

  constexpr void __cordl_internal_set_allowMultipleElement(bool value);

  constexpr void __cordl_internal_set_angularOffset(float_t value);

  constexpr void __cordl_internal_set_autoRotate(bool value);

  constexpr void __cordl_internal_set_blendMode(::UnityEngine::Rendering::SRPLensFlareBlendMode value);

  constexpr void __cordl_internal_set_colorGradient(::UnityEngine::Gradient* value);

  constexpr void __cordl_internal_set_distortionCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_distortionRelativeToCenter(bool value);

  constexpr void __cordl_internal_set_distribution(::UnityEngine::Rendering::SRPLensFlareDistribution value);

  constexpr void __cordl_internal_set_enableRadialDistortion(bool value);

  constexpr void __cordl_internal_set_flareType(::UnityEngine::Rendering::SRPLensFlareType value);

  constexpr void __cordl_internal_set_hoopFactor(float_t value);

  constexpr void __cordl_internal_set_inverseSDF(bool value);

  constexpr void __cordl_internal_set_isFoldOpened(bool value);

  constexpr void __cordl_internal_set_lengthSpread(float_t value);

  constexpr void __cordl_internal_set_lensFlareDataSRP(::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> value);

  constexpr void __cordl_internal_set_lensFlareTexture(::UnityW<::UnityEngine::Texture> value);

  constexpr void __cordl_internal_set_m_Count(int32_t value);

  constexpr void __cordl_internal_set_m_EdgeOffset(float_t value);

  constexpr void __cordl_internal_set_m_FallOff(float_t value);

  constexpr void __cordl_internal_set_m_IntensityVariation(float_t value);

  constexpr void __cordl_internal_set_m_LocalIntensity(float_t value);

  constexpr void __cordl_internal_set_m_SdfRoundness(float_t value);

  constexpr void __cordl_internal_set_m_SideCount(int32_t value);

  constexpr void __cordl_internal_set_modulateByLightColor(bool value);

  constexpr void __cordl_internal_set_noiseAmplitude(float_t value);

  constexpr void __cordl_internal_set_noiseFrequency(int32_t value);

  constexpr void __cordl_internal_set_noiseSpeed(float_t value);

  constexpr void __cordl_internal_set_position(float_t value);

  constexpr void __cordl_internal_set_positionCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_positionOffset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_positionVariation(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_preserveAspectRatio(bool value);

  constexpr void __cordl_internal_set_ringThickness(float_t value);

  constexpr void __cordl_internal_set_rotation(float_t value);

  constexpr void __cordl_internal_set_rotationVariation(float_t value);

  constexpr void __cordl_internal_set_scaleCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_scaleVariation(float_t value);

  constexpr void __cordl_internal_set_seed(int32_t value);

  constexpr void __cordl_internal_set_shapeCutOffRadius(float_t value);

  constexpr void __cordl_internal_set_shapeCutOffSpeed(float_t value);

  constexpr void __cordl_internal_set_sizeXY(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_targetSizeDistortion(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_tint(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_tintColorType(::UnityEngine::Rendering::SRPLensFlareColorType value);

  constexpr void __cordl_internal_set_tintGradient(::UnityEngine::Rendering::TextureGradient* value);

  constexpr void __cordl_internal_set_translationScale(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_uniformAngle(float_t value);

  constexpr void __cordl_internal_set_uniformAngleCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_uniformScale(float_t value);

  constexpr void __cordl_internal_set_visible(bool value);

  /// @brief Method .ctor, addr 0x6582e6c, size 0x54c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_count, addr 0x6583988, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_count();

  /// @brief Method get_edgeOffset, addr 0x65839a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_edgeOffset();

  /// @brief Method get_fallOff, addr 0x6583998, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fallOff();

  /// @brief Method get_intensityVariation, addr 0x6583990, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensityVariation();

  /// @brief Method get_localIntensity, addr 0x6583980, size 0x8, virtual false, abstract: false, final false
  inline float_t get_localIntensity();

  /// @brief Method get_sdfRoundness, addr 0x65839b0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sdfRoundness();

  /// @brief Method get_sideCount, addr 0x65839a8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_sideCount();

  /// @brief Method set_count, addr 0x65833cc, size 0x10, virtual false, abstract: false, final false
  inline void set_count(int32_t value);

  /// @brief Method set_edgeOffset, addr 0x6583410, size 0x20, virtual false, abstract: false, final false
  inline void set_edgeOffset(float_t value);

  /// @brief Method set_fallOff, addr 0x65833f0, size 0x20, virtual false, abstract: false, final false
  inline void set_fallOff(float_t value);

  /// @brief Method set_intensityVariation, addr 0x65833dc, size 0x14, virtual false, abstract: false, final false
  inline void set_intensityVariation(float_t value);

  /// @brief Method set_localIntensity, addr 0x65833b8, size 0x14, virtual false, abstract: false, final false
  inline void set_localIntensity(float_t value);

  /// @brief Method set_sdfRoundness, addr 0x6583430, size 0x20, virtual false, abstract: false, final false
  inline void set_sdfRoundness(float_t value);

  /// @brief Method set_sideCount, addr 0x6583450, size 0x14, virtual false, abstract: false, final false
  inline void set_sideCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LensFlareDataElementSRP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LensFlareDataElementSRP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LensFlareDataElementSRP(LensFlareDataElementSRP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LensFlareDataElementSRP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LensFlareDataElementSRP(LensFlareDataElementSRP const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12149 };

  /// @brief Field lensFlareDataSRP, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> ___lensFlareDataSRP;

  /// @brief Field visible, offset: 0x18, size: 0x1, def value: None
  bool ___visible;

  /// @brief Field position, offset: 0x1c, size: 0x4, def value: None
  float_t ___position;

  /// @brief Field positionOffset, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___positionOffset;

  /// @brief Field angularOffset, offset: 0x28, size: 0x4, def value: None
  float_t ___angularOffset;

  /// @brief Field translationScale, offset: 0x2c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___translationScale;

  /// @brief Field ringThickness, offset: 0x34, size: 0x4, def value: None
  float_t ___ringThickness;

  /// @brief Field hoopFactor, offset: 0x38, size: 0x4, def value: None
  float_t ___hoopFactor;

  /// @brief Field noiseAmplitude, offset: 0x3c, size: 0x4, def value: None
  float_t ___noiseAmplitude;

  /// @brief Field noiseFrequency, offset: 0x40, size: 0x4, def value: None
  int32_t ___noiseFrequency;

  /// @brief Field noiseSpeed, offset: 0x44, size: 0x4, def value: None
  float_t ___noiseSpeed;

  /// @brief Field shapeCutOffSpeed, offset: 0x48, size: 0x4, def value: None
  float_t ___shapeCutOffSpeed;

  /// @brief Field shapeCutOffRadius, offset: 0x4c, size: 0x4, def value: None
  float_t ___shapeCutOffRadius;

  /// @brief Field m_LocalIntensity, offset: 0x50, size: 0x4, def value: None
  float_t ___m_LocalIntensity;

  /// @brief Field lensFlareTexture, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> ___lensFlareTexture;

  /// @brief Field uniformScale, offset: 0x60, size: 0x4, def value: None
  float_t ___uniformScale;

  /// @brief Field sizeXY, offset: 0x64, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___sizeXY;

  /// @brief Field allowMultipleElement, offset: 0x6c, size: 0x1, def value: None
  bool ___allowMultipleElement;

  /// @brief Field m_Count, offset: 0x70, size: 0x4, def value: None
  int32_t ___m_Count;

  /// @brief Field preserveAspectRatio, offset: 0x74, size: 0x1, def value: None
  bool ___preserveAspectRatio;

  /// @brief Field rotation, offset: 0x78, size: 0x4, def value: None
  float_t ___rotation;

  /// @brief Field tintColorType, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::Rendering::SRPLensFlareColorType ___tintColorType;

  /// @brief Field tint, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color ___tint;

  /// @brief Field tintGradient, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Rendering::TextureGradient* ___tintGradient;

  /// @brief Field blendMode, offset: 0x98, size: 0x4, def value: None
  ::UnityEngine::Rendering::SRPLensFlareBlendMode ___blendMode;

  /// @brief Field autoRotate, offset: 0x9c, size: 0x1, def value: None
  bool ___autoRotate;

  /// @brief Field flareType, offset: 0xa0, size: 0x4, def value: None
  ::UnityEngine::Rendering::SRPLensFlareType ___flareType;

  /// @brief Field modulateByLightColor, offset: 0xa4, size: 0x1, def value: None
  bool ___modulateByLightColor;

  /// @brief Field isFoldOpened, offset: 0xa5, size: 0x1, def value: None
  bool ___isFoldOpened;

  /// @brief Field distribution, offset: 0xa8, size: 0x4, def value: None
  ::UnityEngine::Rendering::SRPLensFlareDistribution ___distribution;

  /// @brief Field lengthSpread, offset: 0xac, size: 0x4, def value: None
  float_t ___lengthSpread;

  /// @brief Field positionCurve, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___positionCurve;

  /// @brief Field scaleCurve, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___scaleCurve;

  /// @brief Field seed, offset: 0xc0, size: 0x4, def value: None
  int32_t ___seed;

  /// @brief Field colorGradient, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Gradient* ___colorGradient;

  /// @brief Field m_IntensityVariation, offset: 0xd0, size: 0x4, def value: None
  float_t ___m_IntensityVariation;

  /// @brief Field positionVariation, offset: 0xd4, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___positionVariation;

  /// @brief Field scaleVariation, offset: 0xdc, size: 0x4, def value: None
  float_t ___scaleVariation;

  /// @brief Field rotationVariation, offset: 0xe0, size: 0x4, def value: None
  float_t ___rotationVariation;

  /// @brief Field enableRadialDistortion, offset: 0xe4, size: 0x1, def value: None
  bool ___enableRadialDistortion;

  /// @brief Field targetSizeDistortion, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___targetSizeDistortion;

  /// @brief Field distortionCurve, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___distortionCurve;

  /// @brief Field distortionRelativeToCenter, offset: 0xf8, size: 0x1, def value: None
  bool ___distortionRelativeToCenter;

  /// @brief Field m_FallOff, offset: 0xfc, size: 0x4, def value: None
  float_t ___m_FallOff;

  /// @brief Field m_EdgeOffset, offset: 0x100, size: 0x4, def value: None
  float_t ___m_EdgeOffset;

  /// @brief Field m_SideCount, offset: 0x104, size: 0x4, def value: None
  int32_t ___m_SideCount;

  /// @brief Field m_SdfRoundness, offset: 0x108, size: 0x4, def value: None
  float_t ___m_SdfRoundness;

  /// @brief Field inverseSDF, offset: 0x10c, size: 0x1, def value: None
  bool ___inverseSDF;

  /// @brief Field uniformAngle, offset: 0x110, size: 0x4, def value: None
  float_t ___uniformAngle;

  /// @brief Field uniformAngleCurve, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___uniformAngleCurve;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___lensFlareDataSRP) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___visible) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___position) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___positionOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___angularOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___translationScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___ringThickness) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___hoopFactor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___noiseAmplitude) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___noiseFrequency) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___noiseSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___shapeCutOffSpeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___shapeCutOffRadius) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___m_LocalIntensity) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___lensFlareTexture) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___uniformScale) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___sizeXY) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___allowMultipleElement) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___m_Count) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___preserveAspectRatio) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___rotation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___tintColorType) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___tint) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___tintGradient) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___blendMode) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___autoRotate) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___flareType) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___modulateByLightColor) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___isFoldOpened) == 0xa5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___distribution) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___lengthSpread) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___positionCurve) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___scaleCurve) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___seed) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___colorGradient) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___m_IntensityVariation) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___positionVariation) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___scaleVariation) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___rotationVariation) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___enableRadialDistortion) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___targetSizeDistortion) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___distortionCurve) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___distortionRelativeToCenter) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___m_FallOff) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___m_EdgeOffset) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___m_SideCount) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___m_SdfRoundness) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___inverseSDF) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___uniformAngle) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareDataElementSRP, ___uniformAngleCurve) == 0x118, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LensFlareDataElementSRP, 0x120>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::LensFlareDataElementSRP);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareDataElementSRP*, "UnityEngine.Rendering", "LensFlareDataElementSRP");
