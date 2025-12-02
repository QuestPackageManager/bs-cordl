#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LensFlareComponentSRP.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LensFlareComponentSRP)
namespace UnityEngine::Rendering {
struct LensFlareComponentSRP_Version;
}
namespace UnityEngine::Rendering {
class LensFlareDataSRP;
}
namespace UnityEngine::Rendering {
class TextureCurve;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LensFlareComponentSRP_Version;
}
namespace UnityEngine::Rendering {
class LensFlareComponentSRP;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LensFlareComponentSRP_Version);
MARK_REF_PTR_T(::UnityEngine::Rendering::LensFlareComponentSRP);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LensFlareComponentSRP/Version
struct CORDL_TYPE LensFlareComponentSRP_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LensFlareComponentSRP_Version_Unwrapped
  enum struct __LensFlareComponentSRP_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LensFlareComponentSRP_Version_Unwrapped() const noexcept {
    return static_cast<__LensFlareComponentSRP_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LensFlareComponentSRP_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LensFlareComponentSRP_Version(int32_t value__) noexcept;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::LensFlareComponentSRP_Version const Initial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12143 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP_Version, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LensFlareComponentSRP_Version, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rendering.LensFlareComponentSRP::Version
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LensFlareComponentSRP
class CORDL_TYPE LensFlareComponentSRP : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Version = ::UnityEngine::Rendering::LensFlareComponentSRP_Version;

  /// @brief Field allowOffScreen, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_allowOffScreen, put = __cordl_internal_set_allowOffScreen)) bool allowOffScreen;

  /// @brief Field attenuationByLightShape, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_attenuationByLightShape, put = __cordl_internal_set_attenuationByLightShape)) bool attenuationByLightShape;

  /// @brief Field distanceAttenuationCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_distanceAttenuationCurve, put = __cordl_internal_set_distanceAttenuationCurve)) ::UnityEngine::AnimationCurve* distanceAttenuationCurve;

  /// @brief Field environmentOcclusion, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get_environmentOcclusion, put = __cordl_internal_set_environmentOcclusion)) bool environmentOcclusion;

  /// @brief Field intensity, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) float_t intensity;

  __declspec(property(get = get_lensFlareData, put = set_lensFlareData)) ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> lensFlareData;

  /// @brief Field lightOverride, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_lightOverride, put = __cordl_internal_set_lightOverride)) ::UnityW<::UnityEngine::Light> lightOverride;

  /// @brief Field m_LensFlareData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LensFlareData, put = __cordl_internal_set_m_LensFlareData)) ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> m_LensFlareData;

  /// @brief Field maxAttenuationDistance, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAttenuationDistance, put = __cordl_internal_set_maxAttenuationDistance)) float_t maxAttenuationDistance;

  /// @brief Field maxAttenuationScale, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAttenuationScale, put = __cordl_internal_set_maxAttenuationScale)) float_t maxAttenuationScale;

  /// @brief Field occlusionOffset, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_occlusionOffset, put = __cordl_internal_set_occlusionOffset)) float_t occlusionOffset;

  /// @brief Field occlusionRadius, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_occlusionRadius, put = __cordl_internal_set_occlusionRadius)) float_t occlusionRadius;

  /// @brief Field occlusionRemapCurve, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_occlusionRemapCurve, put = __cordl_internal_set_occlusionRemapCurve)) ::UnityEngine::Rendering::TextureCurve* occlusionRemapCurve;

  /// @brief Field radialScreenAttenuationCurve, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_radialScreenAttenuationCurve, put = __cordl_internal_set_radialScreenAttenuationCurve)) ::UnityEngine::AnimationCurve* radialScreenAttenuationCurve;

  /// @brief Field sCelestialAngularRadius, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_sCelestialAngularRadius, put = setStaticF_sCelestialAngularRadius)) float_t sCelestialAngularRadius;

  /// @brief Field sampleCount, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_sampleCount, put = __cordl_internal_set_sampleCount)) uint32_t sampleCount;

  /// @brief Field scale, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_scale, put = __cordl_internal_set_scale)) float_t scale;

  /// @brief Field scaleByDistanceCurve, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleByDistanceCurve, put = __cordl_internal_set_scaleByDistanceCurve)) ::UnityEngine::AnimationCurve* scaleByDistanceCurve;

  /// @brief Field useBackgroundCloudOcclusion, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_useBackgroundCloudOcclusion, put = __cordl_internal_set_useBackgroundCloudOcclusion)) bool useBackgroundCloudOcclusion;

  /// @brief Field useOcclusion, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_useOcclusion, put = __cordl_internal_set_useOcclusion)) bool useOcclusion;

  /// @brief Field useWaterOcclusion, offset 0x5b, size 0x1
  __declspec(property(get = __cordl_internal_get_useWaterOcclusion, put = __cordl_internal_set_useWaterOcclusion)) bool useWaterOcclusion;

  /// @brief Field version, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::UnityEngine::Rendering::LensFlareComponentSRP_Version version;

  /// @brief Field volumetricCloudOcclusion, offset 0x6d, size 0x1
  __declspec(property(get = __cordl_internal_get_volumetricCloudOcclusion, put = __cordl_internal_set_volumetricCloudOcclusion)) bool volumetricCloudOcclusion;

  /// @brief Method Awake, addr 0x6582a8c, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::UnityEngine::Rendering::LensFlareComponentSRP* New_ctor();

  /// @brief Method OnDestroy, addr 0x6582bb8, size 0x18, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x6582b54, size 0x64, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x6582a90, size 0xc4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x65829ac, size 0xe0, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr bool const& __cordl_internal_get_allowOffScreen() const;

  constexpr bool& __cordl_internal_get_allowOffScreen();

  constexpr bool const& __cordl_internal_get_attenuationByLightShape() const;

  constexpr bool& __cordl_internal_get_attenuationByLightShape();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_distanceAttenuationCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_distanceAttenuationCurve();

  constexpr bool const& __cordl_internal_get_environmentOcclusion() const;

  constexpr bool& __cordl_internal_get_environmentOcclusion();

  constexpr float_t const& __cordl_internal_get_intensity() const;

  constexpr float_t& __cordl_internal_get_intensity();

  constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_lightOverride() const;

  constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_lightOverride();

  constexpr ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> const& __cordl_internal_get_m_LensFlareData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP>& __cordl_internal_get_m_LensFlareData();

  constexpr float_t const& __cordl_internal_get_maxAttenuationDistance() const;

  constexpr float_t& __cordl_internal_get_maxAttenuationDistance();

  constexpr float_t const& __cordl_internal_get_maxAttenuationScale() const;

  constexpr float_t& __cordl_internal_get_maxAttenuationScale();

  constexpr float_t const& __cordl_internal_get_occlusionOffset() const;

  constexpr float_t& __cordl_internal_get_occlusionOffset();

  constexpr float_t const& __cordl_internal_get_occlusionRadius() const;

  constexpr float_t& __cordl_internal_get_occlusionRadius();

  constexpr ::UnityEngine::Rendering::TextureCurve* const& __cordl_internal_get_occlusionRemapCurve() const;

  constexpr ::UnityEngine::Rendering::TextureCurve*& __cordl_internal_get_occlusionRemapCurve();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_radialScreenAttenuationCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_radialScreenAttenuationCurve();

  constexpr uint32_t const& __cordl_internal_get_sampleCount() const;

  constexpr uint32_t& __cordl_internal_get_sampleCount();

  constexpr float_t const& __cordl_internal_get_scale() const;

  constexpr float_t& __cordl_internal_get_scale();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_scaleByDistanceCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_scaleByDistanceCurve();

  constexpr bool const& __cordl_internal_get_useBackgroundCloudOcclusion() const;

  constexpr bool& __cordl_internal_get_useBackgroundCloudOcclusion();

  constexpr bool const& __cordl_internal_get_useOcclusion() const;

  constexpr bool& __cordl_internal_get_useOcclusion();

  constexpr bool const& __cordl_internal_get_useWaterOcclusion() const;

  constexpr bool& __cordl_internal_get_useWaterOcclusion();

  constexpr ::UnityEngine::Rendering::LensFlareComponentSRP_Version const& __cordl_internal_get_version() const;

  constexpr ::UnityEngine::Rendering::LensFlareComponentSRP_Version& __cordl_internal_get_version();

  constexpr bool const& __cordl_internal_get_volumetricCloudOcclusion() const;

  constexpr bool& __cordl_internal_get_volumetricCloudOcclusion();

  constexpr void __cordl_internal_set_allowOffScreen(bool value);

  constexpr void __cordl_internal_set_attenuationByLightShape(bool value);

  constexpr void __cordl_internal_set_distanceAttenuationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_environmentOcclusion(bool value);

  constexpr void __cordl_internal_set_intensity(float_t value);

  constexpr void __cordl_internal_set_lightOverride(::UnityW<::UnityEngine::Light> value);

  constexpr void __cordl_internal_set_m_LensFlareData(::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> value);

  constexpr void __cordl_internal_set_maxAttenuationDistance(float_t value);

  constexpr void __cordl_internal_set_maxAttenuationScale(float_t value);

  constexpr void __cordl_internal_set_occlusionOffset(float_t value);

  constexpr void __cordl_internal_set_occlusionRadius(float_t value);

  constexpr void __cordl_internal_set_occlusionRemapCurve(::UnityEngine::Rendering::TextureCurve* value);

  constexpr void __cordl_internal_set_radialScreenAttenuationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_sampleCount(uint32_t value);

  constexpr void __cordl_internal_set_scale(float_t value);

  constexpr void __cordl_internal_set_scaleByDistanceCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_useBackgroundCloudOcclusion(bool value);

  constexpr void __cordl_internal_set_useOcclusion(bool value);

  constexpr void __cordl_internal_set_useWaterOcclusion(bool value);

  constexpr void __cordl_internal_set_version(::UnityEngine::Rendering::LensFlareComponentSRP_Version value);

  constexpr void __cordl_internal_set_volumetricCloudOcclusion(bool value);

  /// @brief Method .ctor, addr 0x6582bd0, size 0x248, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method celestialProjectedOcclusionRadius, addr 0x657e0e8, size 0xd0, virtual false, abstract: false, final false
  inline float_t celestialProjectedOcclusionRadius(::UnityEngine::Camera* mainCam);

  static inline float_t getStaticF_sCelestialAngularRadius();

  /// @brief Method get_lensFlareData, addr 0x658299c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> get_lensFlareData();

  static inline void setStaticF_sCelestialAngularRadius(float_t value);

  /// @brief Method set_lensFlareData, addr 0x65829a4, size 0x8, virtual false, abstract: false, final false
  inline void set_lensFlareData(::UnityEngine::Rendering::LensFlareDataSRP* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LensFlareComponentSRP();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LensFlareComponentSRP", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LensFlareComponentSRP(LensFlareComponentSRP&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LensFlareComponentSRP", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LensFlareComponentSRP(LensFlareComponentSRP const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12144 };

  /// @brief Field m_LensFlareData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> ___m_LensFlareData;

  /// @brief Field version, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Rendering::LensFlareComponentSRP_Version ___version;

  /// @brief Field intensity, offset: 0x2c, size: 0x4, def value: None
  float_t ___intensity;

  /// @brief Field maxAttenuationDistance, offset: 0x30, size: 0x4, def value: None
  float_t ___maxAttenuationDistance;

  /// @brief Field maxAttenuationScale, offset: 0x34, size: 0x4, def value: None
  float_t ___maxAttenuationScale;

  /// @brief Field distanceAttenuationCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___distanceAttenuationCurve;

  /// @brief Field scaleByDistanceCurve, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___scaleByDistanceCurve;

  /// @brief Field attenuationByLightShape, offset: 0x48, size: 0x1, def value: None
  bool ___attenuationByLightShape;

  /// @brief Field radialScreenAttenuationCurve, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___radialScreenAttenuationCurve;

  /// @brief Field useOcclusion, offset: 0x58, size: 0x1, def value: None
  bool ___useOcclusion;

  /// @brief Field useBackgroundCloudOcclusion, offset: 0x59, size: 0x1, def value: None
  bool ___useBackgroundCloudOcclusion;

  /// @brief Field environmentOcclusion, offset: 0x5a, size: 0x1, def value: None
  bool ___environmentOcclusion;

  /// @brief Field useWaterOcclusion, offset: 0x5b, size: 0x1, def value: None
  bool ___useWaterOcclusion;

  /// @brief Field occlusionRadius, offset: 0x5c, size: 0x4, def value: None
  float_t ___occlusionRadius;

  /// @brief Field sampleCount, offset: 0x60, size: 0x4, def value: None
  uint32_t ___sampleCount;

  /// @brief Field occlusionOffset, offset: 0x64, size: 0x4, def value: None
  float_t ___occlusionOffset;

  /// @brief Field scale, offset: 0x68, size: 0x4, def value: None
  float_t ___scale;

  /// @brief Field allowOffScreen, offset: 0x6c, size: 0x1, def value: None
  bool ___allowOffScreen;

  /// @brief Field volumetricCloudOcclusion, offset: 0x6d, size: 0x1, def value: None
  bool ___volumetricCloudOcclusion;

  /// @brief Field occlusionRemapCurve, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::TextureCurve* ___occlusionRemapCurve;

  /// @brief Field lightOverride, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Light> ___lightOverride;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___m_LensFlareData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___version) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___intensity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___maxAttenuationDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___maxAttenuationScale) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___distanceAttenuationCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___scaleByDistanceCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___attenuationByLightShape) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___radialScreenAttenuationCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___useOcclusion) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___useBackgroundCloudOcclusion) == 0x59, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___environmentOcclusion) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___useWaterOcclusion) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___occlusionRadius) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___sampleCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___occlusionOffset) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___scale) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___allowOffScreen) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___volumetricCloudOcclusion) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___occlusionRemapCurve) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LensFlareComponentSRP, ___lightOverride) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LensFlareComponentSRP, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareComponentSRP_Version, "UnityEngine.Rendering", "LensFlareComponentSRP/Version");
NEED_NO_BOX(::UnityEngine::Rendering::LensFlareComponentSRP);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareComponentSRP*, "UnityEngine.Rendering", "LensFlareComponentSRP");
