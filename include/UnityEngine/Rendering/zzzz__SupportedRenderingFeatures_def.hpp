#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedRenderingFeatures_def.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_def.hpp"
#include "UnityEngine/zzzz__LightmapsMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SupportedRenderingFeatures)
namespace UnityEngine::Rendering {
struct __SupportedRenderingFeatures__LightmapMixedBakeModes;
}
namespace UnityEngine::Rendering {
struct __SupportedRenderingFeatures__ReflectionProbeModes;
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
struct __SupportedRenderingFeatures__LightmapMixedBakeModes;
}
namespace UnityEngine::Rendering {
struct __SupportedRenderingFeatures__ReflectionProbeModes;
}
namespace UnityEngine::Rendering {
class SupportedRenderingFeatures;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes);
MARK_VAL_T(::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes);
MARK_REF_PTR_T(::UnityEngine::Rendering::SupportedRenderingFeatures);
// Type: ::ReflectionProbeModes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10361))
// CS Name: ::SupportedRenderingFeatures::ReflectionProbeModes
struct CORDL_TYPE __SupportedRenderingFeatures__ReflectionProbeModes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SupportedRenderingFeatures__ReflectionProbeModes_Unwrapped
  enum struct ____SupportedRenderingFeatures__ReflectionProbeModes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Rotation = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SupportedRenderingFeatures__ReflectionProbeModes_Unwrapped() const noexcept {
    return static_cast<____SupportedRenderingFeatures__ReflectionProbeModes_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SupportedRenderingFeatures__ReflectionProbeModes(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SupportedRenderingFeatures__ReflectionProbeModes();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes const None;

  /// @brief Field Rotation value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes const Rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::LightmapMixedBakeModes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10362))
// CS Name: ::SupportedRenderingFeatures::LightmapMixedBakeModes
struct CORDL_TYPE __SupportedRenderingFeatures__LightmapMixedBakeModes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SupportedRenderingFeatures__LightmapMixedBakeModes_Unwrapped
  enum struct ____SupportedRenderingFeatures__LightmapMixedBakeModes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IndirectOnly = static_cast<int32_t>(0x1),
    __E_Subtractive = static_cast<int32_t>(0x2),
    __E_Shadowmask = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SupportedRenderingFeatures__LightmapMixedBakeModes_Unwrapped() const noexcept {
    return static_cast<____SupportedRenderingFeatures__LightmapMixedBakeModes_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SupportedRenderingFeatures__LightmapMixedBakeModes(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SupportedRenderingFeatures__LightmapMixedBakeModes();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes const None;

  /// @brief Field IndirectOnly value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes const IndirectOnly;

  /// @brief Field Subtractive value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes const Subtractive;

  /// @brief Field Shadowmask value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes const Shadowmask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::SupportedRenderingFeatures
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10122)), TypeDefinitionIndex(TypeDefinitionIndex(10362)), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// TypeDefinitionIndex(TypeDefinitionIndex(10361)), TypeDefinitionIndex(TypeDefinitionIndex(10105))} Self: TypeDefinitionIndex(TypeDefinitionIndex(10363)) CS Name:
// ::UnityEngine.Rendering::SupportedRenderingFeatures*
class CORDL_TYPE SupportedRenderingFeatures : public ::System::Object {
public:
  // Declarations
  using LightmapMixedBakeModes = ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes;

  using ReflectionProbeModes = ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes;

  /// @brief Field <reflectionProbeModes>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__reflectionProbeModes_k__BackingField,
                      put = __set__reflectionProbeModes_k__BackingField))::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes _reflectionProbeModes_k__BackingField;

  /// @brief Field <defaultMixedLightingModes>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__defaultMixedLightingModes_k__BackingField,
                      put = __set__defaultMixedLightingModes_k__BackingField))::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes _defaultMixedLightingModes_k__BackingField;

  /// @brief Field <mixedLightingModes>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__mixedLightingModes_k__BackingField,
                      put = __set__mixedLightingModes_k__BackingField))::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes _mixedLightingModes_k__BackingField;

  /// @brief Field <lightmapBakeTypes>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__lightmapBakeTypes_k__BackingField, put = __set__lightmapBakeTypes_k__BackingField))::UnityEngine::LightmapBakeType _lightmapBakeTypes_k__BackingField;

  /// @brief Field <lightmapsModes>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__lightmapsModes_k__BackingField, put = __set__lightmapsModes_k__BackingField))::UnityEngine::LightmapsMode _lightmapsModes_k__BackingField;

  /// @brief Field <enlightenLightmapper>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __get__enlightenLightmapper_k__BackingField, put = __set__enlightenLightmapper_k__BackingField)) bool _enlightenLightmapper_k__BackingField;

  /// @brief Field <enlighten>k__BackingField, offset 0x25, size 0x1
  __declspec(property(get = __get__enlighten_k__BackingField, put = __set__enlighten_k__BackingField)) bool _enlighten_k__BackingField;

  /// @brief Field <lightProbeProxyVolumes>k__BackingField, offset 0x26, size 0x1
  __declspec(property(get = __get__lightProbeProxyVolumes_k__BackingField, put = __set__lightProbeProxyVolumes_k__BackingField)) bool _lightProbeProxyVolumes_k__BackingField;

  /// @brief Field <motionVectors>k__BackingField, offset 0x27, size 0x1
  __declspec(property(get = __get__motionVectors_k__BackingField, put = __set__motionVectors_k__BackingField)) bool _motionVectors_k__BackingField;

  /// @brief Field <receiveShadows>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __get__receiveShadows_k__BackingField, put = __set__receiveShadows_k__BackingField)) bool _receiveShadows_k__BackingField;

  /// @brief Field <reflectionProbes>k__BackingField, offset 0x29, size 0x1
  __declspec(property(get = __get__reflectionProbes_k__BackingField, put = __set__reflectionProbes_k__BackingField)) bool _reflectionProbes_k__BackingField;

  /// @brief Field <reflectionProbesBlendDistance>k__BackingField, offset 0x2a, size 0x1
  __declspec(property(get = __get__reflectionProbesBlendDistance_k__BackingField, put = __set__reflectionProbesBlendDistance_k__BackingField)) bool _reflectionProbesBlendDistance_k__BackingField;

  /// @brief Field <rendererPriority>k__BackingField, offset 0x2b, size 0x1
  __declspec(property(get = __get__rendererPriority_k__BackingField, put = __set__rendererPriority_k__BackingField)) bool _rendererPriority_k__BackingField;

  /// @brief Field <rendersUIOverlay>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __get__rendersUIOverlay_k__BackingField, put = __set__rendersUIOverlay_k__BackingField)) bool _rendersUIOverlay_k__BackingField;

  /// @brief Field <overridesEnvironmentLighting>k__BackingField, offset 0x2d, size 0x1
  __declspec(property(get = __get__overridesEnvironmentLighting_k__BackingField, put = __set__overridesEnvironmentLighting_k__BackingField)) bool _overridesEnvironmentLighting_k__BackingField;

  /// @brief Field <overridesFog>k__BackingField, offset 0x2e, size 0x1
  __declspec(property(get = __get__overridesFog_k__BackingField, put = __set__overridesFog_k__BackingField)) bool _overridesFog_k__BackingField;

  /// @brief Field <overridesRealtimeReflectionProbes>k__BackingField, offset 0x2f, size 0x1
  __declspec(property(get = __get__overridesRealtimeReflectionProbes_k__BackingField,
                      put = __set__overridesRealtimeReflectionProbes_k__BackingField)) bool _overridesRealtimeReflectionProbes_k__BackingField;

  /// @brief Field <overridesOtherLightingSettings>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __get__overridesOtherLightingSettings_k__BackingField, put = __set__overridesOtherLightingSettings_k__BackingField)) bool _overridesOtherLightingSettings_k__BackingField;

  /// @brief Field <editableMaterialRenderQueue>k__BackingField, offset 0x31, size 0x1
  __declspec(property(get = __get__editableMaterialRenderQueue_k__BackingField, put = __set__editableMaterialRenderQueue_k__BackingField)) bool _editableMaterialRenderQueue_k__BackingField;

  /// @brief Field <overridesLODBias>k__BackingField, offset 0x32, size 0x1
  __declspec(property(get = __get__overridesLODBias_k__BackingField, put = __set__overridesLODBias_k__BackingField)) bool _overridesLODBias_k__BackingField;

  /// @brief Field <overridesMaximumLODLevel>k__BackingField, offset 0x33, size 0x1
  __declspec(property(get = __get__overridesMaximumLODLevel_k__BackingField, put = __set__overridesMaximumLODLevel_k__BackingField)) bool _overridesMaximumLODLevel_k__BackingField;

  /// @brief Field <rendererProbes>k__BackingField, offset 0x34, size 0x1
  __declspec(property(get = __get__rendererProbes_k__BackingField, put = __set__rendererProbes_k__BackingField)) bool _rendererProbes_k__BackingField;

  /// @brief Field <particleSystemInstancing>k__BackingField, offset 0x35, size 0x1
  __declspec(property(get = __get__particleSystemInstancing_k__BackingField, put = __set__particleSystemInstancing_k__BackingField)) bool _particleSystemInstancing_k__BackingField;

  /// @brief Field <autoAmbientProbeBaking>k__BackingField, offset 0x36, size 0x1
  __declspec(property(get = __get__autoAmbientProbeBaking_k__BackingField, put = __set__autoAmbientProbeBaking_k__BackingField)) bool _autoAmbientProbeBaking_k__BackingField;

  /// @brief Field <autoDefaultReflectionProbeBaking>k__BackingField, offset 0x37, size 0x1
  __declspec(property(get = __get__autoDefaultReflectionProbeBaking_k__BackingField,
                      put = __set__autoDefaultReflectionProbeBaking_k__BackingField)) bool _autoDefaultReflectionProbeBaking_k__BackingField;

  /// @brief Field <overridesShadowmask>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __get__overridesShadowmask_k__BackingField, put = __set__overridesShadowmask_k__BackingField)) bool _overridesShadowmask_k__BackingField;

  /// @brief Field <overrideShadowmaskMessage>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__overrideShadowmaskMessage_k__BackingField, put = __set__overrideShadowmaskMessage_k__BackingField))::StringW _overrideShadowmaskMessage_k__BackingField;

  /// @brief Field s_Active, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Active, put = setStaticF_s_Active))::UnityEngine::Rendering::SupportedRenderingFeatures* s_Active;

  __declspec(property(get = get_defaultMixedLightingModes))::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes defaultMixedLightingModes;

  __declspec(property(get = get_mixedLightingModes))::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes mixedLightingModes;

  __declspec(property(get = get_lightmapBakeTypes))::UnityEngine::LightmapBakeType lightmapBakeTypes;

  __declspec(property(get = get_lightmapsModes))::UnityEngine::LightmapsMode lightmapsModes;

  __declspec(property(get = get_enlightenLightmapper)) bool enlightenLightmapper;

  __declspec(property(get = get_enlighten)) bool enlighten;

  __declspec(property(get = get_rendersUIOverlay)) bool rendersUIOverlay;

  __declspec(property(get = get_autoAmbientProbeBaking)) bool autoAmbientProbeBaking;

  __declspec(property(get = get_autoDefaultReflectionProbeBaking)) bool autoDefaultReflectionProbeBaking;

  constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes& __get__reflectionProbeModes_k__BackingField();

  constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes const& __get__reflectionProbeModes_k__BackingField() const;

  constexpr void __set__reflectionProbeModes_k__BackingField(::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes value);

  constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes& __get__defaultMixedLightingModes_k__BackingField();

  constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes const& __get__defaultMixedLightingModes_k__BackingField() const;

  constexpr void __set__defaultMixedLightingModes_k__BackingField(::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes value);

  constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes& __get__mixedLightingModes_k__BackingField();

  constexpr ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes const& __get__mixedLightingModes_k__BackingField() const;

  constexpr void __set__mixedLightingModes_k__BackingField(::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes value);

  constexpr ::UnityEngine::LightmapBakeType& __get__lightmapBakeTypes_k__BackingField();

  constexpr ::UnityEngine::LightmapBakeType const& __get__lightmapBakeTypes_k__BackingField() const;

  constexpr void __set__lightmapBakeTypes_k__BackingField(::UnityEngine::LightmapBakeType value);

  constexpr ::UnityEngine::LightmapsMode& __get__lightmapsModes_k__BackingField();

  constexpr ::UnityEngine::LightmapsMode const& __get__lightmapsModes_k__BackingField() const;

  constexpr void __set__lightmapsModes_k__BackingField(::UnityEngine::LightmapsMode value);

  constexpr bool& __get__enlightenLightmapper_k__BackingField();

  constexpr bool const& __get__enlightenLightmapper_k__BackingField() const;

  constexpr void __set__enlightenLightmapper_k__BackingField(bool value);

  constexpr bool& __get__enlighten_k__BackingField();

  constexpr bool const& __get__enlighten_k__BackingField() const;

  constexpr void __set__enlighten_k__BackingField(bool value);

  constexpr bool& __get__lightProbeProxyVolumes_k__BackingField();

  constexpr bool const& __get__lightProbeProxyVolumes_k__BackingField() const;

  constexpr void __set__lightProbeProxyVolumes_k__BackingField(bool value);

  constexpr bool& __get__motionVectors_k__BackingField();

  constexpr bool const& __get__motionVectors_k__BackingField() const;

  constexpr void __set__motionVectors_k__BackingField(bool value);

  constexpr bool& __get__receiveShadows_k__BackingField();

  constexpr bool const& __get__receiveShadows_k__BackingField() const;

  constexpr void __set__receiveShadows_k__BackingField(bool value);

  constexpr bool& __get__reflectionProbes_k__BackingField();

  constexpr bool const& __get__reflectionProbes_k__BackingField() const;

  constexpr void __set__reflectionProbes_k__BackingField(bool value);

  constexpr bool& __get__reflectionProbesBlendDistance_k__BackingField();

  constexpr bool const& __get__reflectionProbesBlendDistance_k__BackingField() const;

  constexpr void __set__reflectionProbesBlendDistance_k__BackingField(bool value);

  constexpr bool& __get__rendererPriority_k__BackingField();

  constexpr bool const& __get__rendererPriority_k__BackingField() const;

  constexpr void __set__rendererPriority_k__BackingField(bool value);

  constexpr bool& __get__rendersUIOverlay_k__BackingField();

  constexpr bool const& __get__rendersUIOverlay_k__BackingField() const;

  constexpr void __set__rendersUIOverlay_k__BackingField(bool value);

  constexpr bool& __get__overridesEnvironmentLighting_k__BackingField();

  constexpr bool const& __get__overridesEnvironmentLighting_k__BackingField() const;

  constexpr void __set__overridesEnvironmentLighting_k__BackingField(bool value);

  constexpr bool& __get__overridesFog_k__BackingField();

  constexpr bool const& __get__overridesFog_k__BackingField() const;

  constexpr void __set__overridesFog_k__BackingField(bool value);

  constexpr bool& __get__overridesRealtimeReflectionProbes_k__BackingField();

  constexpr bool const& __get__overridesRealtimeReflectionProbes_k__BackingField() const;

  constexpr void __set__overridesRealtimeReflectionProbes_k__BackingField(bool value);

  constexpr bool& __get__overridesOtherLightingSettings_k__BackingField();

  constexpr bool const& __get__overridesOtherLightingSettings_k__BackingField() const;

  constexpr void __set__overridesOtherLightingSettings_k__BackingField(bool value);

  constexpr bool& __get__editableMaterialRenderQueue_k__BackingField();

  constexpr bool const& __get__editableMaterialRenderQueue_k__BackingField() const;

  constexpr void __set__editableMaterialRenderQueue_k__BackingField(bool value);

  constexpr bool& __get__overridesLODBias_k__BackingField();

  constexpr bool const& __get__overridesLODBias_k__BackingField() const;

  constexpr void __set__overridesLODBias_k__BackingField(bool value);

  constexpr bool& __get__overridesMaximumLODLevel_k__BackingField();

  constexpr bool const& __get__overridesMaximumLODLevel_k__BackingField() const;

  constexpr void __set__overridesMaximumLODLevel_k__BackingField(bool value);

  constexpr bool& __get__rendererProbes_k__BackingField();

  constexpr bool const& __get__rendererProbes_k__BackingField() const;

  constexpr void __set__rendererProbes_k__BackingField(bool value);

  constexpr bool& __get__particleSystemInstancing_k__BackingField();

  constexpr bool const& __get__particleSystemInstancing_k__BackingField() const;

  constexpr void __set__particleSystemInstancing_k__BackingField(bool value);

  constexpr bool& __get__autoAmbientProbeBaking_k__BackingField();

  constexpr bool const& __get__autoAmbientProbeBaking_k__BackingField() const;

  constexpr void __set__autoAmbientProbeBaking_k__BackingField(bool value);

  constexpr bool& __get__autoDefaultReflectionProbeBaking_k__BackingField();

  constexpr bool const& __get__autoDefaultReflectionProbeBaking_k__BackingField() const;

  constexpr void __set__autoDefaultReflectionProbeBaking_k__BackingField(bool value);

  constexpr bool& __get__overridesShadowmask_k__BackingField();

  constexpr bool const& __get__overridesShadowmask_k__BackingField() const;

  constexpr void __set__overridesShadowmask_k__BackingField(bool value);

  constexpr ::StringW& __get__overrideShadowmaskMessage_k__BackingField();

  constexpr ::StringW const& __get__overrideShadowmaskMessage_k__BackingField() const;

  constexpr void __set__overrideShadowmaskMessage_k__BackingField(::StringW value);

  static inline void setStaticF_s_Active(::UnityEngine::Rendering::SupportedRenderingFeatures* value);

  static inline ::UnityEngine::Rendering::SupportedRenderingFeatures* getStaticF_s_Active();

  /// @brief Method get_active, addr 0x2cee4b4, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SupportedRenderingFeatures* get_active();

  /// @brief Method set_active, addr 0x2ced124, size 0x5c, virtual false, abstract: false, final false
  static inline void set_active(::UnityEngine::Rendering::SupportedRenderingFeatures* value);

  /// @brief Method get_defaultMixedLightingModes, addr 0x2cee55c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes get_defaultMixedLightingModes();

  /// @brief Method get_mixedLightingModes, addr 0x2cee564, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes get_mixedLightingModes();

  /// @brief Method get_lightmapBakeTypes, addr 0x2cee56c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LightmapBakeType get_lightmapBakeTypes();

  /// @brief Method get_lightmapsModes, addr 0x2cee574, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LightmapsMode get_lightmapsModes();

  /// @brief Method get_enlightenLightmapper, addr 0x2cee57c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enlightenLightmapper();

  /// @brief Method get_enlighten, addr 0x2cee584, size 0x8, virtual false, abstract: false, final false
  inline bool get_enlighten();

  /// @brief Method get_rendersUIOverlay, addr 0x2cee58c, size 0x8, virtual false, abstract: false, final false
  inline bool get_rendersUIOverlay();

  /// @brief Method get_autoAmbientProbeBaking, addr 0x2cee594, size 0x8, virtual false, abstract: false, final false
  inline bool get_autoAmbientProbeBaking();

  /// @brief Method get_autoDefaultReflectionProbeBaking, addr 0x2cee59c, size 0x8, virtual false, abstract: false, final false
  inline bool get_autoDefaultReflectionProbeBaking();

  /// @brief Method FallbackMixedLightingModeByRef, addr 0x2cee5a4, size 0x134, virtual false, abstract: false, final false
  static inline void FallbackMixedLightingModeByRef(void* fallbackModePtr);

  /// @brief Method IsMixedLightingModeSupported, addr 0x2cee6d8, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsMixedLightingModeSupported(::UnityEngine::MixedLightingMode mixedMode);

  /// @brief Method IsMixedLightingModeSupportedByRef, addr 0x2cee744, size 0x108, virtual false, abstract: false, final false
  static inline void IsMixedLightingModeSupportedByRef(::UnityEngine::MixedLightingMode mixedMode, void* isSupportedPtr);

  /// @brief Method IsLightmapBakeTypeSupported, addr 0x2cee84c, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsLightmapBakeTypeSupported(::UnityEngine::LightmapBakeType bakeType);

  /// @brief Method IsLightmapBakeTypeSupportedByRef, addr 0x2cee8b8, size 0xf0, virtual false, abstract: false, final false
  static inline void IsLightmapBakeTypeSupportedByRef(::UnityEngine::LightmapBakeType bakeType, void* isSupportedPtr);

  /// @brief Method IsLightmapsModeSupportedByRef, addr 0x2cee9a8, size 0x8c, virtual false, abstract: false, final false
  static inline void IsLightmapsModeSupportedByRef(::UnityEngine::LightmapsMode mode, void* isSupportedPtr);

  /// @brief Method IsLightmapperSupportedByRef, addr 0x2ceea34, size 0x84, virtual false, abstract: false, final false
  static inline void IsLightmapperSupportedByRef(int32_t lightmapper, void* isSupportedPtr);

  /// @brief Method IsUIOverlayRenderedBySRP, addr 0x2ceeab8, size 0x78, virtual false, abstract: false, final false
  static inline void IsUIOverlayRenderedBySRP(void* isSupportedPtr);

  /// @brief Method IsAutoAmbientProbeBakingSupported, addr 0x2ceeb30, size 0x78, virtual false, abstract: false, final false
  static inline void IsAutoAmbientProbeBakingSupported(void* isSupportedPtr);

  /// @brief Method IsAutoDefaultReflectionProbeBakingSupported, addr 0x2ceeba8, size 0x78, virtual false, abstract: false, final false
  static inline void IsAutoDefaultReflectionProbeBakingSupported(void* isSupportedPtr);

  /// @brief Method FallbackLightmapperByRef, addr 0x2ceec20, size 0x1c, virtual false, abstract: false, final false
  static inline void FallbackLightmapperByRef(void* lightmapperPtr);

  static inline ::UnityEngine::Rendering::SupportedRenderingFeatures* New_ctor();

  /// @brief Method .ctor, addr 0x2ced094, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SupportedRenderingFeatures", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SupportedRenderingFeatures(SupportedRenderingFeatures&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SupportedRenderingFeatures", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SupportedRenderingFeatures(SupportedRenderingFeatures const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SupportedRenderingFeatures();

public:
  /// @brief Field <reflectionProbeModes>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes ____reflectionProbeModes_k__BackingField;

  /// @brief Field <defaultMixedLightingModes>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes ____defaultMixedLightingModes_k__BackingField;

  /// @brief Field <mixedLightingModes>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes ____mixedLightingModes_k__BackingField;

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

  /// @brief Field <rendererProbes>k__BackingField, offset: 0x34, size: 0x1, def value: None
  bool ____rendererProbes_k__BackingField;

  /// @brief Field <particleSystemInstancing>k__BackingField, offset: 0x35, size: 0x1, def value: None
  bool ____particleSystemInstancing_k__BackingField;

  /// @brief Field <autoAmbientProbeBaking>k__BackingField, offset: 0x36, size: 0x1, def value: None
  bool ____autoAmbientProbeBaking_k__BackingField;

  /// @brief Field <autoDefaultReflectionProbeBaking>k__BackingField, offset: 0x37, size: 0x1, def value: None
  bool ____autoDefaultReflectionProbeBaking_k__BackingField;

  /// @brief Field <overridesShadowmask>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____overridesShadowmask_k__BackingField;

  /// @brief Field <overrideShadowmaskMessage>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____overrideShadowmaskMessage_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SupportedRenderingFeatures, 0x48>, "Size mismatch!");

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

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____rendererProbes_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____particleSystemInstancing_k__BackingField) == 0x35, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____autoAmbientProbeBaking_k__BackingField) == 0x36, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____autoDefaultReflectionProbeBaking_k__BackingField) == 0x37, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesShadowmask_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overrideShadowmaskMessage_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__SupportedRenderingFeatures__LightmapMixedBakeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/LightmapMixedBakeModes");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__SupportedRenderingFeatures__ReflectionProbeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/ReflectionProbeModes");
NEED_NO_BOX(::UnityEngine::Rendering::SupportedRenderingFeatures);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SupportedRenderingFeatures*, "UnityEngine.Rendering", "SupportedRenderingFeatures");
