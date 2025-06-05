#pragma once
// IWYU pragma private; include "GlobalNamespace/LightmapLightWithIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_def.hpp"
#include "GlobalNamespace/zzzz__LightConstants_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightmapLightWithIds)
namespace GlobalNamespace {
class BakedLightsNormalizer;
}
namespace GlobalNamespace {
struct ColorMixAndWeightingApproach;
}
namespace GlobalNamespace {
struct LightConstants_BakeId;
}
namespace GlobalNamespace {
class LightWithIds_LightWithId;
}
namespace GlobalNamespace {
class LightmapLightWithIds_LightIntensitiesWithId;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmapLightWithIds;
}
namespace GlobalNamespace {
class LightmapLightWithIds_LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmapLightWithIds);
MARK_REF_PTR_T(::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId);
// Dependencies LightWithIds::LightWithId
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightmapLightWithIds/LightIntensitiesWithId
class CORDL_TYPE LightmapLightWithIds_LightIntensitiesWithId : public ::GlobalNamespace::LightWithIds_LightWithId {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _probeHighlightsIntensityMultiplier, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__probeHighlightsIntensityMultiplier, put = __cordl_internal_set__probeHighlightsIntensityMultiplier)) float_t _probeHighlightsIntensityMultiplier;

  __declspec(property(get = get_intensity)) float_t intensity;

  __declspec(property(get = get_probeHighlightsIntensityMultiplier)) float_t probeHighlightsIntensityMultiplier;

  static inline ::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId* New_ctor(int32_t lightId, float_t lightIntensity, float_t probeMultiplier);

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr float_t const& __cordl_internal_get__probeHighlightsIntensityMultiplier() const;

  constexpr float_t& __cordl_internal_get__probeHighlightsIntensityMultiplier();

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__probeHighlightsIntensityMultiplier(float_t value);

  /// @brief Method .ctor, addr 0x39e2668, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId, float_t lightIntensity, float_t probeMultiplier);

  /// @brief Method get_intensity, addr 0x39e2658, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method get_probeHighlightsIntensityMultiplier, addr 0x39e2660, size 0x8, virtual false, abstract: false, final false
  inline float_t get_probeHighlightsIntensityMultiplier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapLightWithIds_LightIntensitiesWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIds_LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapLightWithIds_LightIntensitiesWithId(LightmapLightWithIds_LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIds_LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapLightWithIds_LightIntensitiesWithId(LightmapLightWithIds_LightIntensitiesWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16326 };

  /// @brief Field _intensity, offset: 0x30, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _probeHighlightsIntensityMultiplier, offset: 0x34, size: 0x4, def value: None
  float_t ____probeHighlightsIntensityMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId, ____intensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId, ____probeHighlightsIntensityMultiplier) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ColorMixAndWeightingApproach, LightConstants::BakeId, LightWithIds, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightmapLightWithIds
class CORDL_TYPE LightmapLightWithIds : public ::GlobalNamespace::LightWithIds {
public:
  // Declarations
  using LightIntensitiesWithId = ::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId;

  /// @brief Field _bakeId, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__bakeId, put = __cordl_internal_set__bakeId)) ::GlobalNamespace::LightConstants_BakeId _bakeId;

  /// @brief Field _bakedLightsNormalizer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__bakedLightsNormalizer, put = __cordl_internal_set__bakedLightsNormalizer)) ::UnityW<::GlobalNamespace::BakedLightsNormalizer> _bakedLightsNormalizer;

  /// @brief Field _calculatedColorPreNormalization, offset 0x64, size 0x10
  __declspec(property(get = __cordl_internal_get__calculatedColorPreNormalization, put = __cordl_internal_set__calculatedColorPreNormalization)) ::UnityEngine::Color _calculatedColorPreNormalization;

  /// @brief Field _initializedNormalizer, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get__initializedNormalizer, put = __cordl_internal_set__initializedNormalizer)) bool _initializedNormalizer;

  /// @brief Field _initializedPropertyIds, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__initializedPropertyIds, put = __cordl_internal_set__initializedPropertyIds)) bool _initializedPropertyIds;

  /// @brief Field _intensity, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _isNormalizerInScene, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get__isNormalizerInScene, put = __cordl_internal_set__isNormalizerInScene)) bool _isNormalizerInScene;

  /// @brief Field _lightIntensityData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__lightIntensityData,
                      put = __cordl_internal_set__lightIntensityData)) ::ArrayW<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*,
                                                                                ::Array<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>*>
      _lightIntensityData;

  /// @brief Field _lightProbeLightIdColorPropertyId, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__lightProbeLightIdColorPropertyId, put = __cordl_internal_set__lightProbeLightIdColorPropertyId)) int32_t _lightProbeLightIdColorPropertyId;

  /// @brief Field _lightmapLightIdColorPropertyId, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__lightmapLightIdColorPropertyId, put = __cordl_internal_set__lightmapLightIdColorPropertyId)) int32_t _lightmapLightIdColorPropertyId;

  /// @brief Field _mixType, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__mixType, put = __cordl_internal_set__mixType)) ::GlobalNamespace::ColorMixAndWeightingApproach _mixType;

  /// @brief Field _normalizerWeight, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__normalizerWeight, put = __cordl_internal_set__normalizerWeight)) float_t _normalizerWeight;

  /// @brief Field _probeIntensity, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__probeIntensity, put = __cordl_internal_set__probeIntensity)) float_t _probeIntensity;

  __declspec(property(get = get_bakeId)) ::GlobalNamespace::LightConstants_BakeId bakeId;

  __declspec(property(get = get_calculatedColorPreNormalization)) ::UnityEngine::Color calculatedColorPreNormalization;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  __declspec(property(get = get_mixType)) ::GlobalNamespace::ColorMixAndWeightingApproach mixType;

  __declspec(property(get = get_normalizerWeight, put = set_normalizerWeight)) float_t normalizerWeight;

  /// @brief Method Awake, addr 0x39e20bc, size 0x58, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method GetBakedLightsNormalizer, addr 0x39e214c, size 0x8c, virtual false, abstract: false, final false
  inline void GetBakedLightsNormalizer();

  /// @brief Method GetLightWithIds, addr 0x39e2638, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* GetLightWithIds();

  static inline ::GlobalNamespace::LightmapLightWithIds* New_ctor();

  /// @brief Method ProcessNewColorData, addr 0x39e22b0, size 0x388, virtual true, abstract: false, final false
  inline void ProcessNewColorData();

  /// @brief Method SetChannelColorDirect, addr 0x39e22a4, size 0xc, virtual false, abstract: false, final false
  inline void SetChannelColorDirect(::UnityEngine::Color channelColor);

  /// @brief Method SetDataToShaders, addr 0x39e2250, size 0x54, virtual false, abstract: false, final false
  inline void SetDataToShaders(::UnityEngine::Color lightmapColor, ::UnityEngine::Color probeColor);

  /// @brief Method SetShaderProperties, addr 0x39e21d8, size 0x78, virtual false, abstract: false, final false
  inline void SetShaderProperties();

  constexpr ::GlobalNamespace::LightConstants_BakeId const& __cordl_internal_get__bakeId() const;

  constexpr ::GlobalNamespace::LightConstants_BakeId& __cordl_internal_get__bakeId();

  constexpr ::UnityW<::GlobalNamespace::BakedLightsNormalizer> const& __cordl_internal_get__bakedLightsNormalizer() const;

  constexpr ::UnityW<::GlobalNamespace::BakedLightsNormalizer>& __cordl_internal_get__bakedLightsNormalizer();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__calculatedColorPreNormalization() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__calculatedColorPreNormalization();

  constexpr bool const& __cordl_internal_get__initializedNormalizer() const;

  constexpr bool& __cordl_internal_get__initializedNormalizer();

  constexpr bool const& __cordl_internal_get__initializedPropertyIds() const;

  constexpr bool& __cordl_internal_get__initializedPropertyIds();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr bool const& __cordl_internal_get__isNormalizerInScene() const;

  constexpr bool& __cordl_internal_get__isNormalizerInScene();

  constexpr ::ArrayW<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>*> const&
  __cordl_internal_get__lightIntensityData() const;

  constexpr ::ArrayW<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>*>&
  __cordl_internal_get__lightIntensityData();

  constexpr int32_t const& __cordl_internal_get__lightProbeLightIdColorPropertyId() const;

  constexpr int32_t& __cordl_internal_get__lightProbeLightIdColorPropertyId();

  constexpr int32_t const& __cordl_internal_get__lightmapLightIdColorPropertyId() const;

  constexpr int32_t& __cordl_internal_get__lightmapLightIdColorPropertyId();

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& __cordl_internal_get__mixType() const;

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& __cordl_internal_get__mixType();

  constexpr float_t const& __cordl_internal_get__normalizerWeight() const;

  constexpr float_t& __cordl_internal_get__normalizerWeight();

  constexpr float_t const& __cordl_internal_get__probeIntensity() const;

  constexpr float_t& __cordl_internal_get__probeIntensity();

  constexpr void __cordl_internal_set__bakeId(::GlobalNamespace::LightConstants_BakeId value);

  constexpr void __cordl_internal_set__bakedLightsNormalizer(::UnityW<::GlobalNamespace::BakedLightsNormalizer> value);

  constexpr void __cordl_internal_set__calculatedColorPreNormalization(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__initializedNormalizer(bool value);

  constexpr void __cordl_internal_set__initializedPropertyIds(bool value);

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__isNormalizerInScene(bool value);

  constexpr void
  __cordl_internal_set__lightIntensityData(::ArrayW<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>*> value);

  constexpr void __cordl_internal_set__lightProbeLightIdColorPropertyId(int32_t value);

  constexpr void __cordl_internal_set__lightmapLightIdColorPropertyId(int32_t value);

  constexpr void __cordl_internal_set__mixType(::GlobalNamespace::ColorMixAndWeightingApproach value);

  constexpr void __cordl_internal_set__normalizerWeight(float_t value);

  constexpr void __cordl_internal_set__probeIntensity(float_t value);

  /// @brief Method .ctor, addr 0x39e2640, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bakeId, addr 0x39e20b4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LightConstants_BakeId get_bakeId();

  /// @brief Method get_calculatedColorPreNormalization, addr 0x39e20a8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_calculatedColorPreNormalization();

  /// @brief Method get_intensity, addr 0x39e2088, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method get_mixType, addr 0x39e2080, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorMixAndWeightingApproach get_mixType();

  /// @brief Method get_normalizerWeight, addr 0x39e2098, size 0x8, virtual false, abstract: false, final false
  inline float_t get_normalizerWeight();

  /// @brief Method set_intensity, addr 0x39e2090, size 0x8, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

  /// @brief Method set_normalizerWeight, addr 0x39e20a0, size 0x8, virtual false, abstract: false, final false
  inline void set_normalizerWeight(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapLightWithIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapLightWithIds(LightmapLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapLightWithIds(LightmapLightWithIds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16327 };

  /// @brief Field _bakeId, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::LightConstants_BakeId ____bakeId;

  /// @brief Field _intensity, offset: 0x38, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _probeIntensity, offset: 0x3c, size: 0x4, def value: None
  float_t ____probeIntensity;

  /// @brief Field _lightIntensityData, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>*> ____lightIntensityData;

  /// @brief Field _mixType, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::ColorMixAndWeightingApproach ____mixType;

  /// @brief Field _normalizerWeight, offset: 0x4c, size: 0x4, def value: None
  float_t ____normalizerWeight;

  /// @brief Field _bakedLightsNormalizer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BakedLightsNormalizer> ____bakedLightsNormalizer;

  /// @brief Field _lightmapLightIdColorPropertyId, offset: 0x58, size: 0x4, def value: None
  int32_t ____lightmapLightIdColorPropertyId;

  /// @brief Field _lightProbeLightIdColorPropertyId, offset: 0x5c, size: 0x4, def value: None
  int32_t ____lightProbeLightIdColorPropertyId;

  /// @brief Field _initializedPropertyIds, offset: 0x60, size: 0x1, def value: None
  bool ____initializedPropertyIds;

  /// @brief Field _initializedNormalizer, offset: 0x61, size: 0x1, def value: None
  bool ____initializedNormalizer;

  /// @brief Field _isNormalizerInScene, offset: 0x62, size: 0x1, def value: None
  bool ____isNormalizerInScene;

  /// @brief Field _calculatedColorPreNormalization, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Color ____calculatedColorPreNormalization;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____bakeId) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____probeIntensity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____lightIntensityData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____mixType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____normalizerWeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____bakedLightsNormalizer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____lightmapLightIdColorPropertyId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____lightProbeLightIdColorPropertyId) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____initializedPropertyIds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____initializedNormalizer) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____isNormalizerInScene) == 0x62, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIds, ____calculatedColorPreNormalization) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapLightWithIds, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmapLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightWithIds*, "", "LightmapLightWithIds");
NEED_NO_BOX(::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*, "", "LightmapLightWithIds/LightIntensitiesWithId");
