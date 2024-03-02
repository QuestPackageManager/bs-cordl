#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class LightmapLightWithIds;
}
namespace GlobalNamespace {
class __LightmapLightWithIdsGroupEntry__GroupLightData;
}
namespace GlobalNamespace {
class __LightmapLightWithIdsGroupEntry__LightIntensitiesWithId;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmapLightWithIdsGroupEntry;
}
namespace GlobalNamespace {
class __LightmapLightWithIdsGroupEntry__GroupLightData;
}
namespace GlobalNamespace {
class __LightmapLightWithIdsGroupEntry__LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmapLightWithIdsGroupEntry);
MARK_REF_PTR_T(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData);
MARK_REF_PTR_T(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId);
// Type: ::GroupLightData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightmapLightWithIdsGroupEntry::GroupLightData*
class CORDL_TYPE __LightmapLightWithIdsGroupEntry__GroupLightData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _groupIntensity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__groupIntensity, put = __cordl_internal_set__groupIntensity)) float_t _groupIntensity;

  /// @brief Field _groupProbeHighlightsIntensityMultiplier, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__groupProbeHighlightsIntensityMultiplier,
                      put = __cordl_internal_set__groupProbeHighlightsIntensityMultiplier)) float_t _groupProbeHighlightsIntensityMultiplier;

  /// @brief Field _lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroup, put = __cordl_internal_set__lightGroup))::UnityW<::GlobalNamespace::LightGroupSO> _lightGroup;

  __declspec(property(get = get_groupIntensity)) float_t groupIntensity;

  __declspec(property(get = get_groupProbeHighlightsIntensityMultiplier)) float_t groupProbeHighlightsIntensityMultiplier;

  __declspec(property(get = get_lightGroup))::UnityW<::GlobalNamespace::LightGroupSO> lightGroup;

  static inline ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData* New_ctor(::GlobalNamespace::LightGroupSO* lightGroup, float_t groupIntensity,
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

  /// @brief Method .ctor, addr 0x2272f8c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::LightGroupSO* lightGroup, float_t groupIntensity, float_t groupProbeHighlightsIntensityMultiplier);

  /// @brief Method get_groupIntensity, addr 0x2272f7c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_groupIntensity();

  /// @brief Method get_groupProbeHighlightsIntensityMultiplier, addr 0x2272f84, size 0x8, virtual false, abstract: false, final false
  inline float_t get_groupProbeHighlightsIntensityMultiplier();

  /// @brief Method get_lightGroup, addr 0x2272f74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightGroupSO> get_lightGroup();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightmapLightWithIdsGroupEntry__GroupLightData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightmapLightWithIdsGroupEntry__GroupLightData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightmapLightWithIdsGroupEntry__GroupLightData(__LightmapLightWithIdsGroupEntry__GroupLightData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightmapLightWithIdsGroupEntry__GroupLightData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightmapLightWithIdsGroupEntry__GroupLightData(__LightmapLightWithIdsGroupEntry__GroupLightData const&) = delete;

  /// @brief Field _lightGroup, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroupSO> ____lightGroup;

  /// @brief Field _groupIntensity, offset: 0x18, size: 0x4, def value: None
  float_t ____groupIntensity;

  /// @brief Field _groupProbeHighlightsIntensityMultiplier, offset: 0x1c, size: 0x4, def value: None
  float_t ____groupProbeHighlightsIntensityMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData, ____lightGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData, ____groupIntensity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData, ____groupProbeHighlightsIntensityMultiplier) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightIntensitiesWithId
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId*
class CORDL_TYPE __LightmapLightWithIdsGroupEntry__LightIntensitiesWithId : public ::System::Object {
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

  static inline ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId* New_ctor(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier);

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr int32_t const& __cordl_internal_get__lightId() const;

  constexpr int32_t& __cordl_internal_get__lightId();

  constexpr float_t const& __cordl_internal_get__probeHighlightsIntensityMultiplier() const;

  constexpr float_t& __cordl_internal_get__probeHighlightsIntensityMultiplier();

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__lightId(int32_t value);

  constexpr void __cordl_internal_set__probeHighlightsIntensityMultiplier(float_t value);

  /// @brief Method .ctor, addr 0x2272fe0, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier);

  /// @brief Method get_intensity, addr 0x2272fd0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method get_lightId, addr 0x2272fc8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lightId();

  /// @brief Method get_probeHighlightsIntensityMultiplier, addr 0x2272fd8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_probeHighlightsIntensityMultiplier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightmapLightWithIdsGroupEntry__LightIntensitiesWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightmapLightWithIdsGroupEntry__LightIntensitiesWithId(__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightmapLightWithIdsGroupEntry__LightIntensitiesWithId(__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId const&) = delete;

  /// @brief Field _lightId, offset: 0x10, size: 0x4, def value: None
  int32_t ____lightId;

  /// @brief Field _intensity, offset: 0x14, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _probeHighlightsIntensityMultiplier, offset: 0x18, size: 0x4, def value: None
  float_t ____probeHighlightsIntensityMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId, ____lightId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId, ____intensity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId, ____probeHighlightsIntensityMultiplier) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightmapLightWithIdsGroupEntry
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightmapLightWithIdsGroupEntry*
class CORDL_TYPE LightmapLightWithIdsGroupEntry : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GroupLightData = ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData;

  using LightIntensitiesWithId = ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId;

  /// @brief Field _excludedLightIds, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__excludedLightIds, put = __cordl_internal_set__excludedLightIds))::ArrayW<int32_t, ::Array<int32_t>*> _excludedLightIds;

  /// @brief Field _groupLightData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__groupLightData,
                      put = __cordl_internal_set__groupLightData))::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>* _groupLightData;

  /// @brief Field _groupLightsWeighting, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__groupLightsWeighting, put = __cordl_internal_set__groupLightsWeighting))::GlobalNamespace::ColorMixAndWeightingApproach _groupLightsWeighting;

  /// @brief Field _individualLightData, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__individualLightData,
      put = __cordl_internal_set__individualLightData))::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>* _individualLightData;

  /// @brief Field _lightmapLightWithIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightmapLightWithIds, put = __cordl_internal_set__lightmapLightWithIds))::UnityW<::GlobalNamespace::LightmapLightWithIds> _lightmapLightWithIds;

  __declspec(property(get = get_groupLightData))::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>* groupLightData;

  __declspec(property(get = get_groupLightsWeighting))::GlobalNamespace::ColorMixAndWeightingApproach groupLightsWeighting;

  __declspec(property(get = get_individualLightData))::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>* individualLightData;

  __declspec(property(get = get_lightmapLightWithIds))::UnityW<::GlobalNamespace::LightmapLightWithIds> lightmapLightWithIds;

  static inline ::GlobalNamespace::LightmapLightWithIdsGroupEntry* New_ctor();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__excludedLightIds() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__excludedLightIds();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>*& __cordl_internal_get__groupLightData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>*> const&
  __cordl_internal_get__groupLightData() const;

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& __cordl_internal_get__groupLightsWeighting() const;

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& __cordl_internal_get__groupLightsWeighting();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>*& __cordl_internal_get__individualLightData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>*> const&
  __cordl_internal_get__individualLightData() const;

  constexpr ::UnityW<::GlobalNamespace::LightmapLightWithIds> const& __cordl_internal_get__lightmapLightWithIds() const;

  constexpr ::UnityW<::GlobalNamespace::LightmapLightWithIds>& __cordl_internal_get__lightmapLightWithIds();

  constexpr void __cordl_internal_set__excludedLightIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__groupLightData(::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>* value);

  constexpr void __cordl_internal_set__groupLightsWeighting(::GlobalNamespace::ColorMixAndWeightingApproach value);

  constexpr void __cordl_internal_set__individualLightData(::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>* value);

  constexpr void __cordl_internal_set__lightmapLightWithIds(::UnityW<::GlobalNamespace::LightmapLightWithIds> value);

  /// @brief Method .ctor, addr 0x2272f6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_groupLightData, addr 0x2272f54, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>* get_groupLightData();

  /// @brief Method get_groupLightsWeighting, addr 0x2272f64, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorMixAndWeightingApproach get_groupLightsWeighting();

  /// @brief Method get_individualLightData, addr 0x2272f5c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>* get_individualLightData();

  /// @brief Method get_lightmapLightWithIds, addr 0x2272f4c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _lightmapLightWithIds, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightmapLightWithIds> ____lightmapLightWithIds;

  /// @brief Field _groupLightData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>* ____groupLightData;

  /// @brief Field _individualLightData, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>* ____individualLightData;

  /// @brief Field _excludedLightIds, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____excludedLightIds;

  /// @brief Field _groupLightsWeighting, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::ColorMixAndWeightingApproach ____groupLightsWeighting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapLightWithIdsGroupEntry, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____lightmapLightWithIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____groupLightData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____individualLightData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____excludedLightIds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapLightWithIdsGroupEntry, ____groupLightsWeighting) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmapLightWithIdsGroupEntry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightWithIdsGroupEntry*, "", "LightmapLightWithIdsGroupEntry");
NEED_NO_BOX(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*, "", "LightmapLightWithIdsGroupEntry/GroupLightData");
NEED_NO_BOX(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*, "", "LightmapLightWithIdsGroupEntry/LightIntensitiesWithId");
