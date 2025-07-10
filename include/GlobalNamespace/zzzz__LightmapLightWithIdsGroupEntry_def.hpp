#pragma once
// IWYU pragma private; include "GlobalNamespace/LightmapLightWithIdsGroupEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightmapLightWithIdsGroupEntry)
namespace GlobalNamespace {
struct ColorMixAndWeightingApproach;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace GlobalNamespace {
class LightmapLightWithIdsGroupEntry_GroupLightData;
}
namespace GlobalNamespace {
class LightmapLightWithIdsGroupEntry_LightIntensitiesWithId;
}
namespace GlobalNamespace {
class LightmapLightWithIds;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmapLightWithIdsGroupEntry;
}
namespace GlobalNamespace {
class LightmapLightWithIdsGroupEntry_GroupLightData;
}
namespace GlobalNamespace {
class LightmapLightWithIdsGroupEntry_LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmapLightWithIdsGroupEntry);
MARK_REF_PTR_T(::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData);
MARK_REF_PTR_T(::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightmapLightWithIdsGroupEntry/GroupLightData
class CORDL_TYPE LightmapLightWithIdsGroupEntry_GroupLightData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _groupIntensity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__groupIntensity, put = __cordl_internal_set__groupIntensity)) float_t _groupIntensity;

  /// @brief Field _groupProbeHighlightsIntensityMultiplier, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__groupProbeHighlightsIntensityMultiplier,
                      put = __cordl_internal_set__groupProbeHighlightsIntensityMultiplier)) float_t _groupProbeHighlightsIntensityMultiplier;

  /// @brief Field _lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroup, put = __cordl_internal_set__lightGroup)) ::UnityW<::GlobalNamespace::LightGroupSO> _lightGroup;

  __declspec(property(get = get_groupIntensity)) float_t groupIntensity;

  __declspec(property(get = get_groupProbeHighlightsIntensityMultiplier)) float_t groupProbeHighlightsIntensityMultiplier;

  __declspec(property(get = get_lightGroup)) ::UnityW<::GlobalNamespace::LightGroupSO> lightGroup;

  static inline ::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData* New_ctor(::GlobalNamespace::LightGroupSO* lightGroup, float_t groupIntensity,
                                                                                           float_t groupProbeHighlightsIntensityMultiplier);

  constexpr float_t const& __cordl_internal_get__groupIntensity() const;

  constexpr float_t& __cordl_internal_get__groupIntensity();

  constexpr float_t const& __cordl_internal_get__groupProbeHighlightsIntensityMultiplier() const;

  constexpr float_t& __cordl_internal_get__groupProbeHighlightsIntensityMultiplier();

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& __cordl_internal_get__lightGroup() const;

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& __cordl_internal_get__lightGroup();

  constexpr void __cordl_internal_set__groupIntensity(float_t value);

  constexpr void __cordl_internal_set__groupProbeHighlightsIntensityMultiplier(float_t value);

  constexpr void __cordl_internal_set__lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value);

  /// @brief Method .ctor, addr 0x39e2378, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::LightGroupSO* lightGroup, float_t groupIntensity, float_t groupProbeHighlightsIntensityMultiplier);

  /// @brief Method get_groupIntensity, addr 0x39e2368, size 0x8, virtual false, abstract: false, final false
  inline float_t get_groupIntensity();

  /// @brief Method get_groupProbeHighlightsIntensityMultiplier, addr 0x39e2370, size 0x8, virtual false, abstract: false, final false
  inline float_t get_groupProbeHighlightsIntensityMultiplier();

  /// @brief Method get_lightGroup, addr 0x39e2360, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightGroupSO> get_lightGroup();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapLightWithIdsGroupEntry_GroupLightData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIdsGroupEntry_GroupLightData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapLightWithIdsGroupEntry_GroupLightData(LightmapLightWithIdsGroupEntry_GroupLightData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIdsGroupEntry_GroupLightData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapLightWithIdsGroupEntry_GroupLightData(LightmapLightWithIdsGroupEntry_GroupLightData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16328 };

  /// @brief Field _lightGroup, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroupSO> ____lightGroup;

  /// @brief Field _groupIntensity, offset: 0x18, size: 0x4, def value: None
  float_t ____groupIntensity;

  /// @brief Field _groupProbeHighlightsIntensityMultiplier, offset: 0x1c, size: 0x4, def value: None
  float_t ____groupProbeHighlightsIntensityMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData, ____lightGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData, ____groupIntensity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData, ____groupProbeHighlightsIntensityMultiplier) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightmapLightWithIdsGroupEntry/LightIntensitiesWithId
class CORDL_TYPE LightmapLightWithIdsGroupEntry_LightIntensitiesWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _lightId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__lightId, put = __cordl_internal_set__lightId)) int32_t _lightId;

  /// @brief Field _probeHighlightsIntensityMultiplier, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__probeHighlightsIntensityMultiplier, put = __cordl_internal_set__probeHighlightsIntensityMultiplier)) float_t _probeHighlightsIntensityMultiplier;

  __declspec(property(get = get_intensity)) float_t intensity;

  __declspec(property(get = get_lightId)) int32_t lightId;

  __declspec(property(get = get_probeHighlightsIntensityMultiplier)) float_t probeHighlightsIntensityMultiplier;

  static inline ::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId* New_ctor(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier);

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr int32_t const& __cordl_internal_get__lightId() const;

  constexpr int32_t& __cordl_internal_get__lightId();

  constexpr float_t const& __cordl_internal_get__probeHighlightsIntensityMultiplier() const;

  constexpr float_t& __cordl_internal_get__probeHighlightsIntensityMultiplier();

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__lightId(int32_t value);

  constexpr void __cordl_internal_set__probeHighlightsIntensityMultiplier(float_t value);

  /// @brief Method .ctor, addr 0x39e23cc, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier);

  /// @brief Method get_intensity, addr 0x39e23bc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method get_lightId, addr 0x39e23b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lightId();

  /// @brief Method get_probeHighlightsIntensityMultiplier, addr 0x39e23c4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_probeHighlightsIntensityMultiplier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapLightWithIdsGroupEntry_LightIntensitiesWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIdsGroupEntry_LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapLightWithIdsGroupEntry_LightIntensitiesWithId(LightmapLightWithIdsGroupEntry_LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIdsGroupEntry_LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapLightWithIdsGroupEntry_LightIntensitiesWithId(LightmapLightWithIdsGroupEntry_LightIntensitiesWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16329 };

  /// @brief Field _lightId, offset: 0x10, size: 0x4, def value: None
  int32_t ____lightId;

  /// @brief Field _intensity, offset: 0x14, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _probeHighlightsIntensityMultiplier, offset: 0x18, size: 0x4, def value: None
  float_t ____probeHighlightsIntensityMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId, ____lightId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId, ____intensity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId, ____probeHighlightsIntensityMultiplier) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ColorMixAndWeightingApproach, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightmapLightWithIdsGroupEntry
class CORDL_TYPE LightmapLightWithIdsGroupEntry : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GroupLightData = ::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData;

  using LightIntensitiesWithId = ::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId;

  /// @brief Field _excludedLightIds, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__excludedLightIds, put = __cordl_internal_set__excludedLightIds)) ::ArrayW<int32_t, ::Array<int32_t>*> _excludedLightIds;

  /// @brief Field _groupLightData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__groupLightData,
                      put = __cordl_internal_set__groupLightData)) ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>* _groupLightData;

  /// @brief Field _groupLightsWeighting, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__groupLightsWeighting, put = __cordl_internal_set__groupLightsWeighting)) ::GlobalNamespace::ColorMixAndWeightingApproach _groupLightsWeighting;

  /// @brief Field _individualLightData, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__individualLightData,
      put = __cordl_internal_set__individualLightData)) ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>* _individualLightData;

  /// @brief Field _lightmapLightWithIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightmapLightWithIds, put = __cordl_internal_set__lightmapLightWithIds)) ::UnityW<::GlobalNamespace::LightmapLightWithIds> _lightmapLightWithIds;

  __declspec(property(get = get_groupLightData)) ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>* groupLightData;

  __declspec(property(get = get_groupLightsWeighting)) ::GlobalNamespace::ColorMixAndWeightingApproach groupLightsWeighting;

  __declspec(property(get = get_individualLightData)) ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>* individualLightData;

  __declspec(property(get = get_lightmapLightWithIds)) ::UnityW<::GlobalNamespace::LightmapLightWithIds> lightmapLightWithIds;

  static inline ::GlobalNamespace::LightmapLightWithIdsGroupEntry* New_ctor();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__excludedLightIds() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__excludedLightIds();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>* const& __cordl_internal_get__groupLightData() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>*& __cordl_internal_get__groupLightData();

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& __cordl_internal_get__groupLightsWeighting() const;

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& __cordl_internal_get__groupLightsWeighting();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>* const& __cordl_internal_get__individualLightData() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>*& __cordl_internal_get__individualLightData();

  constexpr ::UnityW<::GlobalNamespace::LightmapLightWithIds> const& __cordl_internal_get__lightmapLightWithIds() const;

  constexpr ::UnityW<::GlobalNamespace::LightmapLightWithIds>& __cordl_internal_get__lightmapLightWithIds();

  constexpr void __cordl_internal_set__excludedLightIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__groupLightData(::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>* value);

  constexpr void __cordl_internal_set__groupLightsWeighting(::GlobalNamespace::ColorMixAndWeightingApproach value);

  constexpr void __cordl_internal_set__individualLightData(::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>* value);

  constexpr void __cordl_internal_set__lightmapLightWithIds(::UnityW<::GlobalNamespace::LightmapLightWithIds> value);

  /// @brief Method .ctor, addr 0x39e2358, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_groupLightData, addr 0x39e2340, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>* get_groupLightData();

  /// @brief Method get_groupLightsWeighting, addr 0x39e2350, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorMixAndWeightingApproach get_groupLightsWeighting();

  /// @brief Method get_individualLightData, addr 0x39e2348, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>* get_individualLightData();

  /// @brief Method get_lightmapLightWithIds, addr 0x39e2338, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightmapLightWithIds> get_lightmapLightWithIds();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapLightWithIdsGroupEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIdsGroupEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapLightWithIdsGroupEntry(LightmapLightWithIdsGroupEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIdsGroupEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapLightWithIdsGroupEntry(LightmapLightWithIdsGroupEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16330 };

  /// @brief Field _lightmapLightWithIds, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightmapLightWithIds> ____lightmapLightWithIds;

  /// @brief Field _groupLightData, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>* ____groupLightData;

  /// @brief Field _individualLightData, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>* ____individualLightData;

  /// @brief Field _excludedLightIds, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____excludedLightIds;

  /// @brief Field _groupLightsWeighting, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::ColorMixAndWeightingApproach ____groupLightsWeighting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____lightmapLightWithIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____groupLightData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____individualLightData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____excludedLightIds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____groupLightsWeighting) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapLightWithIdsGroupEntry, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmapLightWithIdsGroupEntry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightWithIdsGroupEntry*, "", "LightmapLightWithIdsGroupEntry");
NEED_NO_BOX(::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*, "", "LightmapLightWithIdsGroupEntry/GroupLightData");
NEED_NO_BOX(::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*, "", "LightmapLightWithIdsGroupEntry/LightIntensitiesWithId");
