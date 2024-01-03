#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_def.hpp"
#include "GlobalNamespace/zzzz__LightConstants_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightmapLightWithIds)
namespace GlobalNamespace {
class __LightWithIds__LightWithId;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
class BakedLightsNormalizer;
}
namespace GlobalNamespace {
struct __LightConstants__BakeId;
}
namespace GlobalNamespace {
struct ColorMixAndWeightingApproach;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class __LightmapLightWithIds__LightIntensitiesWithId;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmapLightWithIds;
}
namespace GlobalNamespace {
class __LightmapLightWithIds__LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmapLightWithIds);
MARK_REF_PTR_T(::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId);
// Type: ::LightIntensitiesWithId
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14543))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14536))
// CS Name: ::LightmapLightWithIds::LightIntensitiesWithId*
class CORDL_TYPE __LightmapLightWithIds__LightIntensitiesWithId : public ::GlobalNamespace::__LightWithIds__LightWithId {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x30, size 0x4
  __declspec(property(get = __get__intensity, put = __set__intensity)) float_t _intensity;

  /// @brief Field _probeHighlightsIntensityMultiplier, offset 0x34, size 0x4
  __declspec(property(get = __get__probeHighlightsIntensityMultiplier, put = __set__probeHighlightsIntensityMultiplier)) float_t _probeHighlightsIntensityMultiplier;

  __declspec(property(get = get_intensity)) float_t intensity;

  __declspec(property(get = get_probeHighlightsIntensityMultiplier)) float_t probeHighlightsIntensityMultiplier;

  constexpr float_t& __get__intensity();

  constexpr float_t const& __get__intensity() const;

  constexpr void __set__intensity(float_t value);

  constexpr float_t& __get__probeHighlightsIntensityMultiplier();

  constexpr float_t const& __get__probeHighlightsIntensityMultiplier() const;

  constexpr void __set__probeHighlightsIntensityMultiplier(float_t value);

  /// @brief Method get_intensity, addr 0x21100e8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method get_probeHighlightsIntensityMultiplier, addr 0x21100f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_probeHighlightsIntensityMultiplier();

  static inline ::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId* New_ctor(int32_t lightId, float_t lightIntensity, float_t probeMultiplier);

  /// @brief Method .ctor, addr 0x21100f8, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId, float_t lightIntensity, float_t probeMultiplier);

  // Ctor Parameters [CppParam { name: "", ty: "__LightmapLightWithIds__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightmapLightWithIds__LightIntensitiesWithId(__LightmapLightWithIds__LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightmapLightWithIds__LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightmapLightWithIds__LightIntensitiesWithId(__LightmapLightWithIds__LightIntensitiesWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightmapLightWithIds__LightIntensitiesWithId();

public:
  /// @brief Field _intensity, offset: 0x30, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _probeHighlightsIntensityMultiplier, offset: 0x34, size: 0x4, def value: None
  float_t ____probeHighlightsIntensityMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId, ____intensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId, ____probeHighlightsIntensityMultiplier) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightmapLightWithIds
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14522)), TypeDefinitionIndex(TypeDefinitionIndex(14544)), TypeDefinitionIndex(TypeDefinitionIndex(14532)),
// TypeDefinitionIndex(TypeDefinitionIndex(10251))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14537)) CS Name: ::LightmapLightWithIds*
class CORDL_TYPE LightmapLightWithIds : public ::GlobalNamespace::LightWithIds {
public:
  // Declarations
  using LightIntensitiesWithId = ::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId;

  /// @brief Field _bakeId, offset 0x2c, size 0x4
  __declspec(property(get = __get__bakeId, put = __set__bakeId))::GlobalNamespace::__LightConstants__BakeId _bakeId;

  /// @brief Field _intensity, offset 0x30, size 0x4
  __declspec(property(get = __get__intensity, put = __set__intensity)) float_t _intensity;

  /// @brief Field _probeIntensity, offset 0x34, size 0x4
  __declspec(property(get = __get__probeIntensity, put = __set__probeIntensity)) float_t _probeIntensity;

  /// @brief Field _lightIntensityData, offset 0x38, size 0x8
  __declspec(property(get = __get__lightIntensityData, put = __set__lightIntensityData))::ArrayW<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*,
                                                                                                 ::Array<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>*> _lightIntensityData;

  /// @brief Field _mixType, offset 0x40, size 0x4
  __declspec(property(get = __get__mixType, put = __set__mixType))::GlobalNamespace::ColorMixAndWeightingApproach _mixType;

  /// @brief Field _normalizerWeight, offset 0x44, size 0x4
  __declspec(property(get = __get__normalizerWeight, put = __set__normalizerWeight)) float_t _normalizerWeight;

  /// @brief Field _bakedLightsNormalizer, offset 0x48, size 0x8
  __declspec(property(get = __get__bakedLightsNormalizer, put = __set__bakedLightsNormalizer))::GlobalNamespace::BakedLightsNormalizer* _bakedLightsNormalizer;

  /// @brief Field _lightmapLightIdColorPropertyId, offset 0x50, size 0x4
  __declspec(property(get = __get__lightmapLightIdColorPropertyId, put = __set__lightmapLightIdColorPropertyId)) int32_t _lightmapLightIdColorPropertyId;

  /// @brief Field _lightProbeLightIdColorPropertyId, offset 0x54, size 0x4
  __declspec(property(get = __get__lightProbeLightIdColorPropertyId, put = __set__lightProbeLightIdColorPropertyId)) int32_t _lightProbeLightIdColorPropertyId;

  /// @brief Field _initializedPropertyIds, offset 0x58, size 0x1
  __declspec(property(get = __get__initializedPropertyIds, put = __set__initializedPropertyIds)) bool _initializedPropertyIds;

  /// @brief Field _initializedNormalizer, offset 0x59, size 0x1
  __declspec(property(get = __get__initializedNormalizer, put = __set__initializedNormalizer)) bool _initializedNormalizer;

  /// @brief Field _isNormalizerInScene, offset 0x5a, size 0x1
  __declspec(property(get = __get__isNormalizerInScene, put = __set__isNormalizerInScene)) bool _isNormalizerInScene;

  /// @brief Field _calculatedColorPreNormalization, offset 0x5c, size 0x10
  __declspec(property(get = __get__calculatedColorPreNormalization, put = __set__calculatedColorPreNormalization))::UnityEngine::Color _calculatedColorPreNormalization;

  __declspec(property(get = get_mixType))::GlobalNamespace::ColorMixAndWeightingApproach mixType;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  __declspec(property(get = get_normalizerWeight, put = set_normalizerWeight)) float_t normalizerWeight;

  __declspec(property(get = get_calculatedColorPreNormalization))::UnityEngine::Color calculatedColorPreNormalization;

  __declspec(property(get = get_bakeId))::GlobalNamespace::__LightConstants__BakeId bakeId;

  constexpr ::GlobalNamespace::__LightConstants__BakeId& __get__bakeId();

  constexpr ::GlobalNamespace::__LightConstants__BakeId const& __get__bakeId() const;

  constexpr void __set__bakeId(::GlobalNamespace::__LightConstants__BakeId value);

  constexpr float_t& __get__intensity();

  constexpr float_t const& __get__intensity() const;

  constexpr void __set__intensity(float_t value);

  constexpr float_t& __get__probeIntensity();

  constexpr float_t const& __get__probeIntensity() const;

  constexpr void __set__probeIntensity(float_t value);

  constexpr ::ArrayW<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>*>& __get__lightIntensityData();

  constexpr ::ArrayW<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>*> const&
  __get__lightIntensityData() const;

  constexpr void
  __set__lightIntensityData(::ArrayW<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>*> value);

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& __get__mixType();

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& __get__mixType() const;

  constexpr void __set__mixType(::GlobalNamespace::ColorMixAndWeightingApproach value);

  constexpr float_t& __get__normalizerWeight();

  constexpr float_t const& __get__normalizerWeight() const;

  constexpr void __set__normalizerWeight(float_t value);

  constexpr ::GlobalNamespace::BakedLightsNormalizer*& __get__bakedLightsNormalizer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BakedLightsNormalizer*> const& __get__bakedLightsNormalizer() const;

  constexpr void __set__bakedLightsNormalizer(::GlobalNamespace::BakedLightsNormalizer* value);

  constexpr int32_t& __get__lightmapLightIdColorPropertyId();

  constexpr int32_t const& __get__lightmapLightIdColorPropertyId() const;

  constexpr void __set__lightmapLightIdColorPropertyId(int32_t value);

  constexpr int32_t& __get__lightProbeLightIdColorPropertyId();

  constexpr int32_t const& __get__lightProbeLightIdColorPropertyId() const;

  constexpr void __set__lightProbeLightIdColorPropertyId(int32_t value);

  constexpr bool& __get__initializedPropertyIds();

  constexpr bool const& __get__initializedPropertyIds() const;

  constexpr void __set__initializedPropertyIds(bool value);

  constexpr bool& __get__initializedNormalizer();

  constexpr bool const& __get__initializedNormalizer() const;

  constexpr void __set__initializedNormalizer(bool value);

  constexpr bool& __get__isNormalizerInScene();

  constexpr bool const& __get__isNormalizerInScene() const;

  constexpr void __set__isNormalizerInScene(bool value);

  constexpr ::UnityEngine::Color& __get__calculatedColorPreNormalization();

  constexpr ::UnityEngine::Color const& __get__calculatedColorPreNormalization() const;

  constexpr void __set__calculatedColorPreNormalization(::UnityEngine::Color value);

  /// @brief Method get_mixType, addr 0x210fa98, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorMixAndWeightingApproach get_mixType();

  /// @brief Method get_intensity, addr 0x210faa0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method set_intensity, addr 0x210faa8, size 0x8, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

  /// @brief Method get_normalizerWeight, addr 0x210fab0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_normalizerWeight();

  /// @brief Method set_normalizerWeight, addr 0x210fab8, size 0x8, virtual false, abstract: false, final false
  inline void set_normalizerWeight(float_t value);

  /// @brief Method get_calculatedColorPreNormalization, addr 0x210fac0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_calculatedColorPreNormalization();

  /// @brief Method get_bakeId, addr 0x210facc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__LightConstants__BakeId get_bakeId();

  /// @brief Method Awake, addr 0x210fad4, size 0x58, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ProcessNewColorData, addr 0x210fd2c, size 0x39c, virtual true, abstract: false, final false
  inline void ProcessNewColorData();

  /// @brief Method GetLightWithIds, addr 0x21100c8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GetLightWithIds();

  /// @brief Method SetDataToShaders, addr 0x210fcd8, size 0x54, virtual false, abstract: false, final false
  inline void SetDataToShaders(::UnityEngine::Color lightmapColor, ::UnityEngine::Color probeColor);

  /// @brief Method SetShaderProperties, addr 0x210fbf0, size 0xe8, virtual false, abstract: false, final false
  inline void SetShaderProperties();

  /// @brief Method GetBakedLightsNormalizer, addr 0x210fb64, size 0x8c, virtual false, abstract: false, final false
  inline void GetBakedLightsNormalizer();

  static inline ::GlobalNamespace::LightmapLightWithIds* New_ctor();

  /// @brief Method .ctor, addr 0x21100d0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapLightWithIds(LightmapLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapLightWithIds(LightmapLightWithIds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapLightWithIds();

public:
  /// @brief Field _bakeId, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__LightConstants__BakeId ____bakeId;

  /// @brief Field _intensity, offset: 0x30, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _probeIntensity, offset: 0x34, size: 0x4, def value: None
  float_t ____probeIntensity;

  /// @brief Field _lightIntensityData, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>*> ____lightIntensityData;

  /// @brief Field _mixType, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::ColorMixAndWeightingApproach ____mixType;

  /// @brief Field _normalizerWeight, offset: 0x44, size: 0x4, def value: None
  float_t ____normalizerWeight;

  /// @brief Field _bakedLightsNormalizer, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BakedLightsNormalizer* ____bakedLightsNormalizer;

  /// @brief Field _lightmapLightIdColorPropertyId, offset: 0x50, size: 0x4, def value: None
  int32_t ____lightmapLightIdColorPropertyId;

  /// @brief Field _lightProbeLightIdColorPropertyId, offset: 0x54, size: 0x4, def value: None
  int32_t ____lightProbeLightIdColorPropertyId;

  /// @brief Field _initializedPropertyIds, offset: 0x58, size: 0x1, def value: None
  bool ____initializedPropertyIds;

  /// @brief Field _initializedNormalizer, offset: 0x59, size: 0x1, def value: None
  bool ____initializedNormalizer;

  /// @brief Field _isNormalizerInScene, offset: 0x5a, size: 0x1, def value: None
  bool ____isNormalizerInScene;

  /// @brief Field _calculatedColorPreNormalization, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Color ____calculatedColorPreNormalization;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapLightWithIds, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____bakeId) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____intensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____probeIntensity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____lightIntensityData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____mixType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____normalizerWeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____bakedLightsNormalizer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____lightmapLightIdColorPropertyId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____lightProbeLightIdColorPropertyId) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____initializedPropertyIds) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____initializedNormalizer) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____isNormalizerInScene) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____calculatedColorPreNormalization) == 0x5c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmapLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightWithIds*, "", "LightmapLightWithIds");
NEED_NO_BOX(::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*, "", "LightmapLightWithIds/LightIntensitiesWithId");
