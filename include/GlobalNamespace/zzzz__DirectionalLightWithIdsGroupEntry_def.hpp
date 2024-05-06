#pragma once
// IWYU pragma private; include "GlobalNamespace/DirectionalLightWithIdsGroupEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectionalLightWithIdsGroupEntry)
namespace GlobalNamespace {
struct ColorMixAndWeightingApproach;
}
namespace GlobalNamespace {
class DirectionalLightWithIds;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace GlobalNamespace {
class __DirectionalLightWithIdsGroupEntry__GroupLightData;
}
namespace GlobalNamespace {
class __DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLightWithIdsGroupEntry;
}
namespace GlobalNamespace {
class __DirectionalLightWithIdsGroupEntry__GroupLightData;
}
namespace GlobalNamespace {
class __DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DirectionalLightWithIdsGroupEntry);
MARK_REF_PTR_T(::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData);
MARK_REF_PTR_T(::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId);
// Type: ::GroupLightData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DirectionalLightWithIdsGroupEntry::GroupLightData*
class CORDL_TYPE __DirectionalLightWithIdsGroupEntry__GroupLightData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _groupIntensity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__groupIntensity, put = __cordl_internal_set__groupIntensity)) float_t _groupIntensity;

  /// @brief Field _lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroup, put = __cordl_internal_set__lightGroup))::UnityW<::GlobalNamespace::LightGroupSO> _lightGroup;

  __declspec(property(get = get_groupIntensity)) float_t groupIntensity;

  __declspec(property(get = get_lightGroup))::UnityW<::GlobalNamespace::LightGroupSO> lightGroup;

  static inline ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData* New_ctor(::GlobalNamespace::LightGroupSO* lightGroup);

  constexpr float_t const& __cordl_internal_get__groupIntensity() const;

  constexpr float_t& __cordl_internal_get__groupIntensity();

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& __cordl_internal_get__lightGroup() const;

  constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& __cordl_internal_get__lightGroup();

  constexpr void __cordl_internal_set__groupIntensity(float_t value);

  constexpr void __cordl_internal_set__lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value);

  /// @brief Method .ctor, addr 0x24f1eb0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::LightGroupSO* lightGroup);

  /// @brief Method get_groupIntensity, addr 0x24f1ea8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_groupIntensity();

  /// @brief Method get_lightGroup, addr 0x24f1ea0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightGroupSO> get_lightGroup();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DirectionalLightWithIdsGroupEntry__GroupLightData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DirectionalLightWithIdsGroupEntry__GroupLightData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DirectionalLightWithIdsGroupEntry__GroupLightData(__DirectionalLightWithIdsGroupEntry__GroupLightData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DirectionalLightWithIdsGroupEntry__GroupLightData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DirectionalLightWithIdsGroupEntry__GroupLightData(__DirectionalLightWithIdsGroupEntry__GroupLightData const&) = delete;

  /// @brief Field _lightGroup, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroupSO> ____lightGroup;

  /// @brief Field _groupIntensity, offset: 0x18, size: 0x4, def value: None
  float_t ____groupIntensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData, ____lightGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData, ____groupIntensity) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightIntensitiesWithId
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId*
class CORDL_TYPE __DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _lightId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__lightId, put = __cordl_internal_set__lightId)) int32_t _lightId;

  __declspec(property(get = get_intensity)) float_t intensity;

  __declspec(property(get = get_lightId)) int32_t lightId;

  static inline ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId* New_ctor(int32_t lightId, float_t lightIntensity);

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr int32_t const& __cordl_internal_get__lightId() const;

  constexpr int32_t& __cordl_internal_get__lightId();

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__lightId(int32_t value);

  /// @brief Method .ctor, addr 0x24f1ef0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId, float_t lightIntensity);

  /// @brief Method get_intensity, addr 0x24f1ee8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method get_lightId, addr 0x24f1ee0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lightId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId(__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId(__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId const&) = delete;

  /// @brief Field _lightId, offset: 0x10, size: 0x4, def value: None
  int32_t ____lightId;

  /// @brief Field _intensity, offset: 0x14, size: 0x4, def value: None
  float_t ____intensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId, ____lightId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId, ____intensity) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DirectionalLightWithIdsGroupEntry
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DirectionalLightWithIdsGroupEntry*
class CORDL_TYPE DirectionalLightWithIdsGroupEntry : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GroupLightData = ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData;

  using LightIntensitiesWithId = ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId;

  /// @brief Field _directionalLightWithIds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__directionalLightWithIds,
                      put = __cordl_internal_set__directionalLightWithIds))::UnityW<::GlobalNamespace::DirectionalLightWithIds> _directionalLightWithIds;

  /// @brief Field _excludedLightIds, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__excludedLightIds, put = __cordl_internal_set__excludedLightIds))::ArrayW<int32_t, ::Array<int32_t>*> _excludedLightIds;

  /// @brief Field _groupLightData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__groupLightData,
                      put = __cordl_internal_set__groupLightData))::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>* _groupLightData;

  /// @brief Field _groupLightsWeighting, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__groupLightsWeighting, put = __cordl_internal_set__groupLightsWeighting))::GlobalNamespace::ColorMixAndWeightingApproach _groupLightsWeighting;

  /// @brief Field _individualLightData, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__individualLightData,
      put = __cordl_internal_set__individualLightData))::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>* _individualLightData;

  __declspec(property(get = get_groupLightData))::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>* groupLightData;

  __declspec(property(get = get_groupLightsWeighting))::GlobalNamespace::ColorMixAndWeightingApproach groupLightsWeighting;

  __declspec(property(get = get_individualLightData))::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>* individualLightData;

  static inline ::GlobalNamespace::DirectionalLightWithIdsGroupEntry* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::DirectionalLightWithIds> const& __cordl_internal_get__directionalLightWithIds() const;

  constexpr ::UnityW<::GlobalNamespace::DirectionalLightWithIds>& __cordl_internal_get__directionalLightWithIds();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__excludedLightIds() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__excludedLightIds();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*& __cordl_internal_get__groupLightData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*> const&
  __cordl_internal_get__groupLightData() const;

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& __cordl_internal_get__groupLightsWeighting() const;

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& __cordl_internal_get__groupLightsWeighting();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*& __cordl_internal_get__individualLightData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*> const&
  __cordl_internal_get__individualLightData() const;

  constexpr void __cordl_internal_set__directionalLightWithIds(::UnityW<::GlobalNamespace::DirectionalLightWithIds> value);

  constexpr void __cordl_internal_set__excludedLightIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__groupLightData(::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>* value);

  constexpr void __cordl_internal_set__groupLightsWeighting(::GlobalNamespace::ColorMixAndWeightingApproach value);

  constexpr void __cordl_internal_set__individualLightData(::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>* value);

  /// @brief Method .ctor, addr 0x24f1e98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_groupLightData, addr 0x24f1e80, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>* get_groupLightData();

  /// @brief Method get_groupLightsWeighting, addr 0x24f1e90, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorMixAndWeightingApproach get_groupLightsWeighting();

  /// @brief Method get_individualLightData, addr 0x24f1e88, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>* get_individualLightData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectionalLightWithIdsGroupEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIdsGroupEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectionalLightWithIdsGroupEntry(DirectionalLightWithIdsGroupEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIdsGroupEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectionalLightWithIdsGroupEntry(DirectionalLightWithIdsGroupEntry const&) = delete;

  /// @brief Field _directionalLightWithIds, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DirectionalLightWithIds> ____directionalLightWithIds;

  /// @brief Field _groupLightData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>* ____groupLightData;

  /// @brief Field _individualLightData, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>* ____individualLightData;

  /// @brief Field _excludedLightIds, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____excludedLightIds;

  /// @brief Field _groupLightsWeighting, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::ColorMixAndWeightingApproach ____groupLightsWeighting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DirectionalLightWithIdsGroupEntry, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithIdsGroupEntry, ____directionalLightWithIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithIdsGroupEntry, ____groupLightData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithIdsGroupEntry, ____individualLightData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithIdsGroupEntry, ____excludedLightIds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithIdsGroupEntry, ____groupLightsWeighting) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DirectionalLightWithIdsGroupEntry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLightWithIdsGroupEntry*, "", "DirectionalLightWithIdsGroupEntry");
NEED_NO_BOX(::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*, "", "DirectionalLightWithIdsGroupEntry/GroupLightData");
NEED_NO_BOX(::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*, "", "DirectionalLightWithIdsGroupEntry/LightIntensitiesWithId");
