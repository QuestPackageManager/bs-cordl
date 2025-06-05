#pragma once
// IWYU pragma private; include "GlobalNamespace/LightmapLightsWithIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightConstants_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightmapLightsWithIds)
namespace GlobalNamespace {
struct LightConstants_BakeId;
}
namespace GlobalNamespace {
class LightWithIds_LightWithId;
}
namespace GlobalNamespace {
class LightmapLightsWithIds_LightIntensitiesWithId;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmapLightsWithIds;
}
namespace GlobalNamespace {
class LightmapLightsWithIds_LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmapLightsWithIds);
MARK_REF_PTR_T(::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId);
// Dependencies LightConstants::BakeId, LightWithIds::LightWithId
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightmapLightsWithIds/LightIntensitiesWithId
class CORDL_TYPE LightmapLightsWithIds_LightIntensitiesWithId : public ::GlobalNamespace::LightWithIds_LightWithId {
public:
  // Declarations
  /// @brief Field _bakeId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__bakeId, put = __cordl_internal_set__bakeId)) ::GlobalNamespace::LightConstants_BakeId _bakeId;

  /// @brief Field _initializedPropertyIds, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__initializedPropertyIds, put = __cordl_internal_set__initializedPropertyIds)) bool _initializedPropertyIds;

  /// @brief Field _intensity, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _lightProbeLightIdColorPropertyId, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lightProbeLightIdColorPropertyId, put = __cordl_internal_set__lightProbeLightIdColorPropertyId)) int32_t _lightProbeLightIdColorPropertyId;

  /// @brief Field _lightmapLightIdColorPropertyId, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__lightmapLightIdColorPropertyId, put = __cordl_internal_set__lightmapLightIdColorPropertyId)) int32_t _lightmapLightIdColorPropertyId;

  /// @brief Field _weight, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__weight, put = __cordl_internal_set__weight)) float_t _weight;

  __declspec(property(get = get_bakeId)) ::GlobalNamespace::LightConstants_BakeId bakeId;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  __declspec(property(get = get_weight, put = set_weight)) float_t weight;

  static inline ::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId* New_ctor();

  /// @brief Method SetDataToShaders, addr 0x39e1f3c, size 0xf4, virtual false, abstract: false, final false
  inline void SetDataToShaders(::UnityEngine::Color lightmapColor, ::UnityEngine::Color probeColor);

  constexpr ::GlobalNamespace::LightConstants_BakeId const& __cordl_internal_get__bakeId() const;

  constexpr ::GlobalNamespace::LightConstants_BakeId& __cordl_internal_get__bakeId();

  constexpr bool const& __cordl_internal_get__initializedPropertyIds() const;

  constexpr bool& __cordl_internal_get__initializedPropertyIds();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr int32_t const& __cordl_internal_get__lightProbeLightIdColorPropertyId() const;

  constexpr int32_t& __cordl_internal_get__lightProbeLightIdColorPropertyId();

  constexpr int32_t const& __cordl_internal_get__lightmapLightIdColorPropertyId() const;

  constexpr int32_t& __cordl_internal_get__lightmapLightIdColorPropertyId();

  constexpr float_t const& __cordl_internal_get__weight() const;

  constexpr float_t& __cordl_internal_get__weight();

  constexpr void __cordl_internal_set__bakeId(::GlobalNamespace::LightConstants_BakeId value);

  constexpr void __cordl_internal_set__initializedPropertyIds(bool value);

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__lightProbeLightIdColorPropertyId(int32_t value);

  constexpr void __cordl_internal_set__lightmapLightIdColorPropertyId(int32_t value);

  constexpr void __cordl_internal_set__weight(float_t value);

  /// @brief Method .ctor, addr 0x39e2070, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bakeId, addr 0x39e2048, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LightConstants_BakeId get_bakeId();

  /// @brief Method get_intensity, addr 0x39e2050, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method get_weight, addr 0x39e2060, size 0x8, virtual false, abstract: false, final false
  inline float_t get_weight();

  /// @brief Method set_intensity, addr 0x39e2058, size 0x8, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

  /// @brief Method set_weight, addr 0x39e2068, size 0x8, virtual false, abstract: false, final false
  inline void set_weight(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapLightsWithIds_LightIntensitiesWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightsWithIds_LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapLightsWithIds_LightIntensitiesWithId(LightmapLightsWithIds_LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightsWithIds_LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapLightsWithIds_LightIntensitiesWithId(LightmapLightsWithIds_LightIntensitiesWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16324 };

  /// @brief Field _bakeId, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::LightConstants_BakeId ____bakeId;

  /// @brief Field _intensity, offset: 0x34, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _weight, offset: 0x38, size: 0x4, def value: None
  float_t ____weight;

  /// @brief Field _lightmapLightIdColorPropertyId, offset: 0x3c, size: 0x4, def value: None
  int32_t ____lightmapLightIdColorPropertyId;

  /// @brief Field _lightProbeLightIdColorPropertyId, offset: 0x40, size: 0x4, def value: None
  int32_t ____lightProbeLightIdColorPropertyId;

  /// @brief Field _initializedPropertyIds, offset: 0x44, size: 0x1, def value: None
  bool ____initializedPropertyIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId, ____bakeId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId, ____intensity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId, ____weight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId, ____lightmapLightIdColorPropertyId) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId, ____lightProbeLightIdColorPropertyId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId, ____initializedPropertyIds) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LightWithIds
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightmapLightsWithIds
class CORDL_TYPE LightmapLightsWithIds : public ::GlobalNamespace::LightWithIds {
public:
  // Declarations
  using LightIntensitiesWithId = ::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId;

  /// @brief Field _lightIntensityData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lightIntensityData,
                      put = __cordl_internal_set__lightIntensityData)) ::ArrayW<::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId*,
                                                                                ::Array<::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId*>*>
      _lightIntensityData;

  /// @brief Field _maxTotalIntensity, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__maxTotalIntensity, put = __cordl_internal_set__maxTotalIntensity)) float_t _maxTotalIntensity;

  __declspec(property(get = get_maxTotalIntensity, put = set_maxTotalIntensity)) float_t maxTotalIntensity;

  /// @brief Method GetLightWithIds, addr 0x39e2030, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* GetLightWithIds();

  static inline ::GlobalNamespace::LightmapLightsWithIds* New_ctor();

  /// @brief Method ProcessNewColorData, addr 0x39e1d3c, size 0x200, virtual true, abstract: false, final false
  inline void ProcessNewColorData();

  constexpr ::ArrayW<::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId*>*> const&
  __cordl_internal_get__lightIntensityData() const;

  constexpr ::ArrayW<::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId*>*>&
  __cordl_internal_get__lightIntensityData();

  constexpr float_t const& __cordl_internal_get__maxTotalIntensity() const;

  constexpr float_t& __cordl_internal_get__maxTotalIntensity();

  constexpr void __cordl_internal_set__lightIntensityData(
      ::ArrayW<::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId*>*> value);

  constexpr void __cordl_internal_set__maxTotalIntensity(float_t value);

  /// @brief Method .ctor, addr 0x39e2038, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_maxTotalIntensity, addr 0x39e1d2c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxTotalIntensity();

  /// @brief Method set_maxTotalIntensity, addr 0x39e1d34, size 0x8, virtual false, abstract: false, final false
  inline void set_maxTotalIntensity(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapLightsWithIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightsWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapLightsWithIds(LightmapLightsWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightsWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapLightsWithIds(LightmapLightsWithIds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16325 };

  /// @brief Field _maxTotalIntensity, offset: 0x34, size: 0x4, def value: None
  float_t ____maxTotalIntensity;

  /// @brief Field _lightIntensityData, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId*>*> ____lightIntensityData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightmapLightsWithIds, ____maxTotalIntensity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightsWithIds, ____lightIntensityData) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapLightsWithIds, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmapLightsWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightsWithIds*, "", "LightmapLightsWithIds");
NEED_NO_BOX(::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightsWithIds_LightIntensitiesWithId*, "", "LightmapLightsWithIds/LightIntensitiesWithId");
