#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SupportedRenderingFeatures.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_def.hpp"
#include "UnityEngine/zzzz__LightmapsMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SupportedRenderingFeatures)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct SupportedRenderingFeatures_LightmapMixedBakeModes;
}
namespace UnityEngine::Rendering {
struct SupportedRenderingFeatures_ReflectionProbeModes;
}
namespace UnityEngine {
struct LightmapBakeType;
}
namespace UnityEngine {
struct LightmapsMode;
}
namespace UnityEngine {
struct MixedLightingMode;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SupportedRenderingFeatures_LightmapMixedBakeModes;
}
namespace UnityEngine::Rendering {
struct SupportedRenderingFeatures_ReflectionProbeModes;
}
namespace UnityEngine::Rendering {
class SupportedRenderingFeatures;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes);
MARK_VAL_T(::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes);
MARK_REF_PTR_T(::UnityEngine::Rendering::SupportedRenderingFeatures);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes
struct CORDL_TYPE SupportedRenderingFeatures_ReflectionProbeModes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SupportedRenderingFeatures_ReflectionProbeModes_Unwrapped
  enum struct __SupportedRenderingFeatures_ReflectionProbeModes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Rotation = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SupportedRenderingFeatures_ReflectionProbeModes_Unwrapped() const noexcept {
    return static_cast<__SupportedRenderingFeatures_ReflectionProbeModes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SupportedRenderingFeatures_ReflectionProbeModes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SupportedRenderingFeatures_ReflectionProbeModes(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes const None;

  /// @brief Field Rotation value: I32(1)
  static ::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes const Rotation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11238 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes
struct CORDL_TYPE SupportedRenderingFeatures_LightmapMixedBakeModes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SupportedRenderingFeatures_LightmapMixedBakeModes_Unwrapped
  enum struct __SupportedRenderingFeatures_LightmapMixedBakeModes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IndirectOnly = static_cast<int32_t>(0x1),
    __E_Subtractive = static_cast<int32_t>(0x2),
    __E_Shadowmask = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SupportedRenderingFeatures_LightmapMixedBakeModes_Unwrapped() const noexcept {
    return static_cast<__SupportedRenderingFeatures_LightmapMixedBakeModes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SupportedRenderingFeatures_LightmapMixedBakeModes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SupportedRenderingFeatures_LightmapMixedBakeModes(int32_t value__) noexcept;

  /// @brief Field IndirectOnly value: I32(1)
  static ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes const IndirectOnly;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes const None;

  /// @brief Field Shadowmask value: I32(4)
  static ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes const Shadowmask;

  /// @brief Field Subtractive value: I32(2)
  static ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes const Subtractive;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11239 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.LightmapBakeType, UnityEngine.LightmapsMode, UnityEngine.Rendering.SupportedRenderingFeatures::LightmapMixedBakeModes,
// UnityEngine.Rendering.SupportedRenderingFeatures::ReflectionProbeModes
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SupportedRenderingFeatures
class CORDL_TYPE SupportedRenderingFeatures : public ::System::Object {
public:
  // Declarations
  using LightmapMixedBakeModes = ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes;

  using ReflectionProbeModes = ::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes;

  /// @brief Field <autoAmbientProbeBaking>k__BackingField, offset 0x37, size 0x1
  __declspec(property(get = __cordl_internal_get__autoAmbientProbeBaking_k__BackingField,
                      put = __cordl_internal_set__autoAmbientProbeBaking_k__BackingField)) bool _autoAmbientProbeBaking_k__BackingField;

  /// @brief Field <autoDefaultReflectionProbeBaking>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__autoDefaultReflectionProbeBaking_k__BackingField,
                      put = __cordl_internal_set__autoDefaultReflectionProbeBaking_k__BackingField)) bool _autoDefaultReflectionProbeBaking_k__BackingField;

  /// @brief Field <defaultMixedLightingModes>k__BackingField, offset 0x14, size 0x4
  __declspec(property(
      get = __cordl_internal_get__defaultMixedLightingModes_k__BackingField,
      put = __cordl_internal_set__defaultMixedLightingModes_k__BackingField)) ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes _defaultMixedLightingModes_k__BackingField;

  /// @brief Field <editableMaterialRenderQueue>k__BackingField, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__editableMaterialRenderQueue_k__BackingField,
                      put = __cordl_internal_set__editableMaterialRenderQueue_k__BackingField)) bool _editableMaterialRenderQueue_k__BackingField;

  /// @brief Field <enlightenLightmapper>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__enlightenLightmapper_k__BackingField, put = __cordl_internal_set__enlightenLightmapper_k__BackingField)) bool _enlightenLightmapper_k__BackingField;

  /// @brief Field <enlighten>k__BackingField, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get__enlighten_k__BackingField, put = __cordl_internal_set__enlighten_k__BackingField)) bool _enlighten_k__BackingField;

  /// @brief Field <lightProbeProxyVolumes>k__BackingField, offset 0x26, size 0x1
  __declspec(property(get = __cordl_internal_get__lightProbeProxyVolumes_k__BackingField,
                      put = __cordl_internal_set__lightProbeProxyVolumes_k__BackingField)) bool _lightProbeProxyVolumes_k__BackingField;

  /// @brief Field <lightmapBakeTypes>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__lightmapBakeTypes_k__BackingField,
                      put = __cordl_internal_set__lightmapBakeTypes_k__BackingField)) ::UnityEngine::LightmapBakeType _lightmapBakeTypes_k__BackingField;

  /// @brief Field <lightmapsModes>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__lightmapsModes_k__BackingField,
                      put = __cordl_internal_set__lightmapsModes_k__BackingField)) ::UnityEngine::LightmapsMode _lightmapsModes_k__BackingField;

  /// @brief Field <mixedLightingModes>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__mixedLightingModes_k__BackingField,
                      put = __cordl_internal_set__mixedLightingModes_k__BackingField)) ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes _mixedLightingModes_k__BackingField;

  /// @brief Field <motionVectors>k__BackingField, offset 0x27, size 0x1
  __declspec(property(get = __cordl_internal_get__motionVectors_k__BackingField, put = __cordl_internal_set__motionVectors_k__BackingField)) bool _motionVectors_k__BackingField;

  /// @brief Field <overridesEnableLODCrossFade>k__BackingField, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__overridesEnableLODCrossFade_k__BackingField,
                      put = __cordl_internal_set__overridesEnableLODCrossFade_k__BackingField)) bool _overridesEnableLODCrossFade_k__BackingField;

  /// @brief Field <overridesEnvironmentLighting>k__BackingField, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get__overridesEnvironmentLighting_k__BackingField,
                      put = __cordl_internal_set__overridesEnvironmentLighting_k__BackingField)) bool _overridesEnvironmentLighting_k__BackingField;

  /// @brief Field <overridesFog>k__BackingField, offset 0x2e, size 0x1
  __declspec(property(get = __cordl_internal_get__overridesFog_k__BackingField, put = __cordl_internal_set__overridesFog_k__BackingField)) bool _overridesFog_k__BackingField;

  /// @brief Field <overridesLODBias>k__BackingField, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get__overridesLODBias_k__BackingField, put = __cordl_internal_set__overridesLODBias_k__BackingField)) bool _overridesLODBias_k__BackingField;

  /// @brief Field <overridesLightProbeSystemWarningMessage>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__overridesLightProbeSystemWarningMessage_k__BackingField,
                      put = __cordl_internal_set__overridesLightProbeSystemWarningMessage_k__BackingField)) ::StringW _overridesLightProbeSystemWarningMessage_k__BackingField;

  /// @brief Field <overridesLightProbeSystem>k__BackingField, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get__overridesLightProbeSystem_k__BackingField,
                      put = __cordl_internal_set__overridesLightProbeSystem_k__BackingField)) bool _overridesLightProbeSystem_k__BackingField;

  /// @brief Field <overridesMaximumLODLevel>k__BackingField, offset 0x33, size 0x1
  __declspec(property(get = __cordl_internal_get__overridesMaximumLODLevel_k__BackingField,
                      put = __cordl_internal_set__overridesMaximumLODLevel_k__BackingField)) bool _overridesMaximumLODLevel_k__BackingField;

  /// @brief Field <overridesOtherLightingSettings>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__overridesOtherLightingSettings_k__BackingField,
                      put = __cordl_internal_set__overridesOtherLightingSettings_k__BackingField)) bool _overridesOtherLightingSettings_k__BackingField;

  /// @brief Field <overridesRealtimeReflectionProbes>k__BackingField, offset 0x2f, size 0x1
  __declspec(property(get = __cordl_internal_get__overridesRealtimeReflectionProbes_k__BackingField,
                      put = __cordl_internal_set__overridesRealtimeReflectionProbes_k__BackingField)) bool _overridesRealtimeReflectionProbes_k__BackingField;

  /// @brief Field <overridesShadowmask>k__BackingField, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__overridesShadowmask_k__BackingField, put = __cordl_internal_set__overridesShadowmask_k__BackingField)) bool _overridesShadowmask_k__BackingField;

  /// @brief Field <particleSystemInstancing>k__BackingField, offset 0x36, size 0x1
  __declspec(property(get = __cordl_internal_get__particleSystemInstancing_k__BackingField,
                      put = __cordl_internal_set__particleSystemInstancing_k__BackingField)) bool _particleSystemInstancing_k__BackingField;

  /// @brief Field <receiveShadows>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__receiveShadows_k__BackingField, put = __cordl_internal_set__receiveShadows_k__BackingField)) bool _receiveShadows_k__BackingField;

  /// @brief Field <reflectionProbeModes>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__reflectionProbeModes_k__BackingField,
                      put =
                          __cordl_internal_set__reflectionProbeModes_k__BackingField)) ::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes _reflectionProbeModes_k__BackingField;

  /// @brief Field <reflectionProbesBlendDistance>k__BackingField, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get__reflectionProbesBlendDistance_k__BackingField,
                      put = __cordl_internal_set__reflectionProbesBlendDistance_k__BackingField)) bool _reflectionProbesBlendDistance_k__BackingField;

  /// @brief Field <reflectionProbes>k__BackingField, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__reflectionProbes_k__BackingField, put = __cordl_internal_set__reflectionProbes_k__BackingField)) bool _reflectionProbes_k__BackingField;

  /// @brief Field <rendererPriority>k__BackingField, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get__rendererPriority_k__BackingField, put = __cordl_internal_set__rendererPriority_k__BackingField)) bool _rendererPriority_k__BackingField;

  /// @brief Field <rendererProbes>k__BackingField, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get__rendererProbes_k__BackingField, put = __cordl_internal_set__rendererProbes_k__BackingField)) bool _rendererProbes_k__BackingField;

  /// @brief Field <rendersUIOverlay>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__rendersUIOverlay_k__BackingField, put = __cordl_internal_set__rendersUIOverlay_k__BackingField)) bool _rendersUIOverlay_k__BackingField;

  /// @brief Field <supportsHDR>k__BackingField, offset 0x3b, size 0x1
  __declspec(property(get = __cordl_internal_get__supportsHDR_k__BackingField, put = __cordl_internal_set__supportsHDR_k__BackingField)) bool _supportsHDR_k__BackingField;

  __declspec(property(get = get_autoAmbientProbeBaking)) bool autoAmbientProbeBaking;

  __declspec(property(get = get_autoDefaultReflectionProbeBaking)) bool autoDefaultReflectionProbeBaking;

  __declspec(property(get = get_defaultMixedLightingModes)) ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes defaultMixedLightingModes;

  __declspec(property(get = get_enlighten)) bool enlighten;

  __declspec(property(get = get_enlightenLightmapper)) bool enlightenLightmapper;

  __declspec(property(get = get_lightmapBakeTypes)) ::UnityEngine::LightmapBakeType lightmapBakeTypes;

  __declspec(property(get = get_lightmapsModes)) ::UnityEngine::LightmapsMode lightmapsModes;

  __declspec(property(get = get_mixedLightingModes)) ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes mixedLightingModes;

  __declspec(property(get = get_overridesLightProbeSystem)) bool overridesLightProbeSystem;

  __declspec(property(get = get_rendersUIOverlay)) bool rendersUIOverlay;

  /// @brief Field s_Active, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Active, put = setStaticF_s_Active)) ::UnityEngine::Rendering::SupportedRenderingFeatures* s_Active;

  /// @brief Method FallbackLightmapperByRef, addr 0x48d6f4c, size 0x1c, virtual false, abstract: false, final false
  static inline void FallbackLightmapperByRef(::System::IntPtr lightmapperPtr);

  /// @brief Method FallbackMixedLightingModeByRef, addr 0x48d6858, size 0x134, virtual false, abstract: false, final false
  static inline void FallbackMixedLightingModeByRef(::System::IntPtr fallbackModePtr);

  /// @brief Method IsAutoAmbientProbeBakingSupported, addr 0x48d6de4, size 0x78, virtual false, abstract: false, final false
  static inline void IsAutoAmbientProbeBakingSupported(::System::IntPtr isSupportedPtr);

  /// @brief Method IsAutoDefaultReflectionProbeBakingSupported, addr 0x48d6e5c, size 0x78, virtual false, abstract: false, final false
  static inline void IsAutoDefaultReflectionProbeBakingSupported(::System::IntPtr isSupportedPtr);

  /// @brief Method IsLightmapBakeTypeSupported, addr 0x48d6b00, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsLightmapBakeTypeSupported(::UnityEngine::LightmapBakeType bakeType);

  /// @brief Method IsLightmapBakeTypeSupportedByRef, addr 0x48d6b6c, size 0xf0, virtual false, abstract: false, final false
  static inline void IsLightmapBakeTypeSupportedByRef(::UnityEngine::LightmapBakeType bakeType, ::System::IntPtr isSupportedPtr);

  /// @brief Method IsLightmapperSupportedByRef, addr 0x48d6ce8, size 0x84, virtual false, abstract: false, final false
  static inline void IsLightmapperSupportedByRef(int32_t lightmapper, ::System::IntPtr isSupportedPtr);

  /// @brief Method IsLightmapsModeSupportedByRef, addr 0x48d6c5c, size 0x8c, virtual false, abstract: false, final false
  static inline void IsLightmapsModeSupportedByRef(::UnityEngine::LightmapsMode mode, ::System::IntPtr isSupportedPtr);

  /// @brief Method IsMixedLightingModeSupported, addr 0x48d698c, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsMixedLightingModeSupported(::UnityEngine::MixedLightingMode mixedMode);

  /// @brief Method IsMixedLightingModeSupportedByRef, addr 0x48d69f8, size 0x108, virtual false, abstract: false, final false
  static inline void IsMixedLightingModeSupportedByRef(::UnityEngine::MixedLightingMode mixedMode, ::System::IntPtr isSupportedPtr);

  /// @brief Method IsUIOverlayRenderedBySRP, addr 0x48d6d6c, size 0x78, virtual false, abstract: false, final false
  static inline void IsUIOverlayRenderedBySRP(::System::IntPtr isSupportedPtr);

  static inline ::UnityEngine::Rendering::SupportedRenderingFeatures* New_ctor();

  /// @brief Method OverridesLightProbeSystem, addr 0x48d6ed4, size 0x78, virtual false, abstract: false, final false
  static inline void OverridesLightProbeSystem(::System::IntPtr overridesPtr);

  constexpr bool const& __cordl_internal_get__autoAmbientProbeBaking_k__BackingField() const;

  constexpr bool& __cordl_internal_get__autoAmbientProbeBaking_k__BackingField();

  constexpr bool const& __cordl_internal_get__autoDefaultReflectionProbeBaking_k__BackingField() const;

  constexpr bool& __cordl_internal_get__autoDefaultReflectionProbeBaking_k__BackingField();

  constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes const& __cordl_internal_get__defaultMixedLightingModes_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes& __cordl_internal_get__defaultMixedLightingModes_k__BackingField();

  constexpr bool const& __cordl_internal_get__editableMaterialRenderQueue_k__BackingField() const;

  constexpr bool& __cordl_internal_get__editableMaterialRenderQueue_k__BackingField();

  constexpr bool const& __cordl_internal_get__enlightenLightmapper_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enlightenLightmapper_k__BackingField();

  constexpr bool const& __cordl_internal_get__enlighten_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enlighten_k__BackingField();

  constexpr bool const& __cordl_internal_get__lightProbeProxyVolumes_k__BackingField() const;

  constexpr bool& __cordl_internal_get__lightProbeProxyVolumes_k__BackingField();

  constexpr ::UnityEngine::LightmapBakeType const& __cordl_internal_get__lightmapBakeTypes_k__BackingField() const;

  constexpr ::UnityEngine::LightmapBakeType& __cordl_internal_get__lightmapBakeTypes_k__BackingField();

  constexpr ::UnityEngine::LightmapsMode const& __cordl_internal_get__lightmapsModes_k__BackingField() const;

  constexpr ::UnityEngine::LightmapsMode& __cordl_internal_get__lightmapsModes_k__BackingField();

  constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes const& __cordl_internal_get__mixedLightingModes_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes& __cordl_internal_get__mixedLightingModes_k__BackingField();

  constexpr bool const& __cordl_internal_get__motionVectors_k__BackingField() const;

  constexpr bool& __cordl_internal_get__motionVectors_k__BackingField();

  constexpr bool const& __cordl_internal_get__overridesEnableLODCrossFade_k__BackingField() const;

  constexpr bool& __cordl_internal_get__overridesEnableLODCrossFade_k__BackingField();

  constexpr bool const& __cordl_internal_get__overridesEnvironmentLighting_k__BackingField() const;

  constexpr bool& __cordl_internal_get__overridesEnvironmentLighting_k__BackingField();

  constexpr bool const& __cordl_internal_get__overridesFog_k__BackingField() const;

  constexpr bool& __cordl_internal_get__overridesFog_k__BackingField();

  constexpr bool const& __cordl_internal_get__overridesLODBias_k__BackingField() const;

  constexpr bool& __cordl_internal_get__overridesLODBias_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__overridesLightProbeSystemWarningMessage_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__overridesLightProbeSystemWarningMessage_k__BackingField();

  constexpr bool const& __cordl_internal_get__overridesLightProbeSystem_k__BackingField() const;

  constexpr bool& __cordl_internal_get__overridesLightProbeSystem_k__BackingField();

  constexpr bool const& __cordl_internal_get__overridesMaximumLODLevel_k__BackingField() const;

  constexpr bool& __cordl_internal_get__overridesMaximumLODLevel_k__BackingField();

  constexpr bool const& __cordl_internal_get__overridesOtherLightingSettings_k__BackingField() const;

  constexpr bool& __cordl_internal_get__overridesOtherLightingSettings_k__BackingField();

  constexpr bool const& __cordl_internal_get__overridesRealtimeReflectionProbes_k__BackingField() const;

  constexpr bool& __cordl_internal_get__overridesRealtimeReflectionProbes_k__BackingField();

  constexpr bool const& __cordl_internal_get__overridesShadowmask_k__BackingField() const;

  constexpr bool& __cordl_internal_get__overridesShadowmask_k__BackingField();

  constexpr bool const& __cordl_internal_get__particleSystemInstancing_k__BackingField() const;

  constexpr bool& __cordl_internal_get__particleSystemInstancing_k__BackingField();

  constexpr bool const& __cordl_internal_get__receiveShadows_k__BackingField() const;

  constexpr bool& __cordl_internal_get__receiveShadows_k__BackingField();

  constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes const& __cordl_internal_get__reflectionProbeModes_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes& __cordl_internal_get__reflectionProbeModes_k__BackingField();

  constexpr bool const& __cordl_internal_get__reflectionProbesBlendDistance_k__BackingField() const;

  constexpr bool& __cordl_internal_get__reflectionProbesBlendDistance_k__BackingField();

  constexpr bool const& __cordl_internal_get__reflectionProbes_k__BackingField() const;

  constexpr bool& __cordl_internal_get__reflectionProbes_k__BackingField();

  constexpr bool const& __cordl_internal_get__rendererPriority_k__BackingField() const;

  constexpr bool& __cordl_internal_get__rendererPriority_k__BackingField();

  constexpr bool const& __cordl_internal_get__rendererProbes_k__BackingField() const;

  constexpr bool& __cordl_internal_get__rendererProbes_k__BackingField();

  constexpr bool const& __cordl_internal_get__rendersUIOverlay_k__BackingField() const;

  constexpr bool& __cordl_internal_get__rendersUIOverlay_k__BackingField();

  constexpr bool const& __cordl_internal_get__supportsHDR_k__BackingField() const;

  constexpr bool& __cordl_internal_get__supportsHDR_k__BackingField();

  constexpr void __cordl_internal_set__autoAmbientProbeBaking_k__BackingField(bool value);

  constexpr void __cordl_internal_set__autoDefaultReflectionProbeBaking_k__BackingField(bool value);

  constexpr void __cordl_internal_set__defaultMixedLightingModes_k__BackingField(::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes value);

  constexpr void __cordl_internal_set__editableMaterialRenderQueue_k__BackingField(bool value);

  constexpr void __cordl_internal_set__enlightenLightmapper_k__BackingField(bool value);

  constexpr void __cordl_internal_set__enlighten_k__BackingField(bool value);

  constexpr void __cordl_internal_set__lightProbeProxyVolumes_k__BackingField(bool value);

  constexpr void __cordl_internal_set__lightmapBakeTypes_k__BackingField(::UnityEngine::LightmapBakeType value);

  constexpr void __cordl_internal_set__lightmapsModes_k__BackingField(::UnityEngine::LightmapsMode value);

  constexpr void __cordl_internal_set__mixedLightingModes_k__BackingField(::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes value);

  constexpr void __cordl_internal_set__motionVectors_k__BackingField(bool value);

  constexpr void __cordl_internal_set__overridesEnableLODCrossFade_k__BackingField(bool value);

  constexpr void __cordl_internal_set__overridesEnvironmentLighting_k__BackingField(bool value);

  constexpr void __cordl_internal_set__overridesFog_k__BackingField(bool value);

  constexpr void __cordl_internal_set__overridesLODBias_k__BackingField(bool value);

  constexpr void __cordl_internal_set__overridesLightProbeSystemWarningMessage_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__overridesLightProbeSystem_k__BackingField(bool value);

  constexpr void __cordl_internal_set__overridesMaximumLODLevel_k__BackingField(bool value);

  constexpr void __cordl_internal_set__overridesOtherLightingSettings_k__BackingField(bool value);

  constexpr void __cordl_internal_set__overridesRealtimeReflectionProbes_k__BackingField(bool value);

  constexpr void __cordl_internal_set__overridesShadowmask_k__BackingField(bool value);

  constexpr void __cordl_internal_set__particleSystemInstancing_k__BackingField(bool value);

  constexpr void __cordl_internal_set__receiveShadows_k__BackingField(bool value);

  constexpr void __cordl_internal_set__reflectionProbeModes_k__BackingField(::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes value);

  constexpr void __cordl_internal_set__reflectionProbesBlendDistance_k__BackingField(bool value);

  constexpr void __cordl_internal_set__reflectionProbes_k__BackingField(bool value);

  constexpr void __cordl_internal_set__rendererPriority_k__BackingField(bool value);

  constexpr void __cordl_internal_set__rendererProbes_k__BackingField(bool value);

  constexpr void __cordl_internal_set__rendersUIOverlay_k__BackingField(bool value);

  constexpr void __cordl_internal_set__supportsHDR_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x48d5ae4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::SupportedRenderingFeatures* getStaticF_s_Active();

  /// @brief Method get_active, addr 0x48d6768, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SupportedRenderingFeatures* get_active();

  /// @brief Method get_autoAmbientProbeBaking, addr 0x48d6840, size 0x8, virtual false, abstract: false, final false
  inline bool get_autoAmbientProbeBaking();

  /// @brief Method get_autoDefaultReflectionProbeBaking, addr 0x48d6848, size 0x8, virtual false, abstract: false, final false
  inline bool get_autoDefaultReflectionProbeBaking();

  /// @brief Method get_defaultMixedLightingModes, addr 0x48d6808, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes get_defaultMixedLightingModes();

  /// @brief Method get_enlighten, addr 0x48d6830, size 0x8, virtual false, abstract: false, final false
  inline bool get_enlighten();

  /// @brief Method get_enlightenLightmapper, addr 0x48d6828, size 0x8, virtual false, abstract: false, final false
  inline bool get_enlightenLightmapper();

  /// @brief Method get_lightmapBakeTypes, addr 0x48d6818, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LightmapBakeType get_lightmapBakeTypes();

  /// @brief Method get_lightmapsModes, addr 0x48d6820, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LightmapsMode get_lightmapsModes();

  /// @brief Method get_mixedLightingModes, addr 0x48d6810, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes get_mixedLightingModes();

  /// @brief Method get_overridesLightProbeSystem, addr 0x48d6850, size 0x8, virtual false, abstract: false, final false
  inline bool get_overridesLightProbeSystem();

  /// @brief Method get_rendersUIOverlay, addr 0x48d6838, size 0x8, virtual false, abstract: false, final false
  inline bool get_rendersUIOverlay();

  static inline void setStaticF_s_Active(::UnityEngine::Rendering::SupportedRenderingFeatures* value);

  /// @brief Method set_active, addr 0x48d5b68, size 0x5c, virtual false, abstract: false, final false
  static inline void set_active(::UnityEngine::Rendering::SupportedRenderingFeatures* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SupportedRenderingFeatures();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SupportedRenderingFeatures", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SupportedRenderingFeatures(SupportedRenderingFeatures&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SupportedRenderingFeatures", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SupportedRenderingFeatures(SupportedRenderingFeatures const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11240 };

  /// @brief Field <reflectionProbeModes>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes ____reflectionProbeModes_k__BackingField;

  /// @brief Field <defaultMixedLightingModes>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes ____defaultMixedLightingModes_k__BackingField;

  /// @brief Field <mixedLightingModes>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes ____mixedLightingModes_k__BackingField;

  /// @brief Field <lightmapBakeTypes>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::LightmapBakeType ____lightmapBakeTypes_k__BackingField;

  /// @brief Field <lightmapsModes>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::LightmapsMode ____lightmapsModes_k__BackingField;

  /// @brief Field <enlightenLightmapper>k__BackingField, offset: 0x24, size: 0x1, def value: None
  bool ____enlightenLightmapper_k__BackingField;

  /// @brief Field <enlighten>k__BackingField, offset: 0x25, size: 0x1, def value: None
  bool ____enlighten_k__BackingField;

  /// @brief Field <lightProbeProxyVolumes>k__BackingField, offset: 0x26, size: 0x1, def value: None
  bool ____lightProbeProxyVolumes_k__BackingField;

  /// @brief Field <motionVectors>k__BackingField, offset: 0x27, size: 0x1, def value: None
  bool ____motionVectors_k__BackingField;

  /// @brief Field <receiveShadows>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____receiveShadows_k__BackingField;

  /// @brief Field <reflectionProbes>k__BackingField, offset: 0x29, size: 0x1, def value: None
  bool ____reflectionProbes_k__BackingField;

  /// @brief Field <reflectionProbesBlendDistance>k__BackingField, offset: 0x2a, size: 0x1, def value: None
  bool ____reflectionProbesBlendDistance_k__BackingField;

  /// @brief Field <rendererPriority>k__BackingField, offset: 0x2b, size: 0x1, def value: None
  bool ____rendererPriority_k__BackingField;

  /// @brief Field <rendersUIOverlay>k__BackingField, offset: 0x2c, size: 0x1, def value: None
  bool ____rendersUIOverlay_k__BackingField;

  /// @brief Field <overridesEnvironmentLighting>k__BackingField, offset: 0x2d, size: 0x1, def value: None
  bool ____overridesEnvironmentLighting_k__BackingField;

  /// @brief Field <overridesFog>k__BackingField, offset: 0x2e, size: 0x1, def value: None
  bool ____overridesFog_k__BackingField;

  /// @brief Field <overridesRealtimeReflectionProbes>k__BackingField, offset: 0x2f, size: 0x1, def value: None
  bool ____overridesRealtimeReflectionProbes_k__BackingField;

  /// @brief Field <overridesOtherLightingSettings>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____overridesOtherLightingSettings_k__BackingField;

  /// @brief Field <editableMaterialRenderQueue>k__BackingField, offset: 0x31, size: 0x1, def value: None
  bool ____editableMaterialRenderQueue_k__BackingField;

  /// @brief Field <overridesLODBias>k__BackingField, offset: 0x32, size: 0x1, def value: None
  bool ____overridesLODBias_k__BackingField;

  /// @brief Field <overridesMaximumLODLevel>k__BackingField, offset: 0x33, size: 0x1, def value: None
  bool ____overridesMaximumLODLevel_k__BackingField;

  /// @brief Field <overridesEnableLODCrossFade>k__BackingField, offset: 0x34, size: 0x1, def value: None
  bool ____overridesEnableLODCrossFade_k__BackingField;

  /// @brief Field <rendererProbes>k__BackingField, offset: 0x35, size: 0x1, def value: None
  bool ____rendererProbes_k__BackingField;

  /// @brief Field <particleSystemInstancing>k__BackingField, offset: 0x36, size: 0x1, def value: None
  bool ____particleSystemInstancing_k__BackingField;

  /// @brief Field <autoAmbientProbeBaking>k__BackingField, offset: 0x37, size: 0x1, def value: None
  bool ____autoAmbientProbeBaking_k__BackingField;

  /// @brief Field <autoDefaultReflectionProbeBaking>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____autoDefaultReflectionProbeBaking_k__BackingField;

  /// @brief Field <overridesShadowmask>k__BackingField, offset: 0x39, size: 0x1, def value: None
  bool ____overridesShadowmask_k__BackingField;

  /// @brief Field <overridesLightProbeSystem>k__BackingField, offset: 0x3a, size: 0x1, def value: None
  bool ____overridesLightProbeSystem_k__BackingField;

  /// @brief Field <supportsHDR>k__BackingField, offset: 0x3b, size: 0x1, def value: None
  bool ____supportsHDR_k__BackingField;

  /// @brief Field <overridesLightProbeSystemWarningMessage>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____overridesLightProbeSystemWarningMessage_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____reflectionProbeModes_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____defaultMixedLightingModes_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____mixedLightingModes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____lightmapBakeTypes_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____lightmapsModes_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____enlightenLightmapper_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____enlighten_k__BackingField) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____lightProbeProxyVolumes_k__BackingField) == 0x26, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____motionVectors_k__BackingField) == 0x27, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____receiveShadows_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____reflectionProbes_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____reflectionProbesBlendDistance_k__BackingField) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____rendererPriority_k__BackingField) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____rendersUIOverlay_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesEnvironmentLighting_k__BackingField) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesFog_k__BackingField) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesRealtimeReflectionProbes_k__BackingField) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesOtherLightingSettings_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____editableMaterialRenderQueue_k__BackingField) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesLODBias_k__BackingField) == 0x32, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesMaximumLODLevel_k__BackingField) == 0x33, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesEnableLODCrossFade_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____rendererProbes_k__BackingField) == 0x35, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____particleSystemInstancing_k__BackingField) == 0x36, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____autoAmbientProbeBaking_k__BackingField) == 0x37, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____autoDefaultReflectionProbeBaking_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesShadowmask_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesLightProbeSystem_k__BackingField) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____supportsHDR_k__BackingField) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesLightProbeSystemWarningMessage_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SupportedRenderingFeatures, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/LightmapMixedBakeModes");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/ReflectionProbeModes");
NEED_NO_BOX(::UnityEngine::Rendering::SupportedRenderingFeatures);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SupportedRenderingFeatures*, "UnityEngine.Rendering", "SupportedRenderingFeatures");
