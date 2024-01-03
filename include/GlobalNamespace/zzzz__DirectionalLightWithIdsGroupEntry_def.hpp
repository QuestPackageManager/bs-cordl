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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14525))
// CS Name: ::DirectionalLightWithIdsGroupEntry::GroupLightData*
class CORDL_TYPE __DirectionalLightWithIdsGroupEntry__GroupLightData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _lightGroup, offset 0x10, size 0x8
  __declspec(property(get = __get__lightGroup, put = __set__lightGroup))::GlobalNamespace::LightGroupSO* _lightGroup;

  /// @brief Field _groupIntensity, offset 0x18, size 0x4
  __declspec(property(get = __get__groupIntensity, put = __set__groupIntensity)) float_t _groupIntensity;

  __declspec(property(get = get_lightGroup))::GlobalNamespace::LightGroupSO* lightGroup;

  __declspec(property(get = get_groupIntensity)) float_t groupIntensity;

  constexpr ::GlobalNamespace::LightGroupSO*& __get__lightGroup();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> const& __get__lightGroup() const;

  constexpr void __set__lightGroup(::GlobalNamespace::LightGroupSO* value);

  constexpr float_t& __get__groupIntensity();

  constexpr float_t const& __get__groupIntensity() const;

  constexpr void __set__groupIntensity(float_t value);

  /// @brief Method get_lightGroup, addr 0x210f16c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LightGroupSO* get_lightGroup();

  /// @brief Method get_groupIntensity, addr 0x210f174, size 0x8, virtual false, abstract: false, final false
  inline float_t get_groupIntensity();

  static inline ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData* New_ctor(::GlobalNamespace::LightGroupSO* lightGroup);

  /// @brief Method .ctor, addr 0x210f17c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::LightGroupSO* lightGroup);

  // Ctor Parameters [CppParam { name: "", ty: "__DirectionalLightWithIdsGroupEntry__GroupLightData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DirectionalLightWithIdsGroupEntry__GroupLightData(__DirectionalLightWithIdsGroupEntry__GroupLightData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DirectionalLightWithIdsGroupEntry__GroupLightData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DirectionalLightWithIdsGroupEntry__GroupLightData(__DirectionalLightWithIdsGroupEntry__GroupLightData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DirectionalLightWithIdsGroupEntry__GroupLightData();

public:
  /// @brief Field _lightGroup, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LightGroupSO* ____lightGroup;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14526))
// CS Name: ::DirectionalLightWithIdsGroupEntry::LightIntensitiesWithId*
class CORDL_TYPE __DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _lightId, offset 0x10, size 0x4
  __declspec(property(get = __get__lightId, put = __set__lightId)) int32_t _lightId;

  /// @brief Field _intensity, offset 0x14, size 0x4
  __declspec(property(get = __get__intensity, put = __set__intensity)) float_t _intensity;

  __declspec(property(get = get_lightId)) int32_t lightId;

  __declspec(property(get = get_intensity)) float_t intensity;

  constexpr int32_t& __get__lightId();

  constexpr int32_t const& __get__lightId() const;

  constexpr void __set__lightId(int32_t value);

  constexpr float_t& __get__intensity();

  constexpr float_t const& __get__intensity() const;

  constexpr void __set__intensity(float_t value);

  /// @brief Method get_lightId, addr 0x210f1ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lightId();

  /// @brief Method get_intensity, addr 0x210f1b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  static inline ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId* New_ctor(int32_t lightId, float_t lightIntensity);

  /// @brief Method .ctor, addr 0x210f1bc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId, float_t lightIntensity);

  // Ctor Parameters [CppParam { name: "", ty: "__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId(__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId(__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14522)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14527))
// CS Name: ::DirectionalLightWithIdsGroupEntry*
class CORDL_TYPE DirectionalLightWithIdsGroupEntry : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using LightIntensitiesWithId = ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId;

  using GroupLightData = ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData;

  /// @brief Field _directionalLightWithIds, offset 0x18, size 0x8
  __declspec(property(get = __get__directionalLightWithIds, put = __set__directionalLightWithIds))::GlobalNamespace::DirectionalLightWithIds* _directionalLightWithIds;

  /// @brief Field _groupLightData, offset 0x20, size 0x8
  __declspec(property(get = __get__groupLightData,
                      put = __set__groupLightData))::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>* _groupLightData;

  /// @brief Field _individualLightData, offset 0x28, size 0x8
  __declspec(property(get = __get__individualLightData,
                      put = __set__individualLightData))::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>* _individualLightData;

  /// @brief Field _excludedLightIds, offset 0x30, size 0x8
  __declspec(property(get = __get__excludedLightIds, put = __set__excludedLightIds))::ArrayW<int32_t, ::Array<int32_t>*> _excludedLightIds;

  /// @brief Field _groupLightsWeighting, offset 0x38, size 0x4
  __declspec(property(get = __get__groupLightsWeighting, put = __set__groupLightsWeighting))::GlobalNamespace::ColorMixAndWeightingApproach _groupLightsWeighting;

  __declspec(property(get = get_groupLightData))::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>* groupLightData;

  __declspec(property(get = get_individualLightData))::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>* individualLightData;

  __declspec(property(get = get_groupLightsWeighting))::GlobalNamespace::ColorMixAndWeightingApproach groupLightsWeighting;

  constexpr ::GlobalNamespace::DirectionalLightWithIds*& __get__directionalLightWithIds();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DirectionalLightWithIds*> const& __get__directionalLightWithIds() const;

  constexpr void __set__directionalLightWithIds(::GlobalNamespace::DirectionalLightWithIds* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*& __get__groupLightData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*> const& __get__groupLightData() const;

  constexpr void __set__groupLightData(::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*& __get__individualLightData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*> const&
  __get__individualLightData() const;

  constexpr void __set__individualLightData(::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__excludedLightIds();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__excludedLightIds() const;

  constexpr void __set__excludedLightIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& __get__groupLightsWeighting();

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& __get__groupLightsWeighting() const;

  constexpr void __set__groupLightsWeighting(::GlobalNamespace::ColorMixAndWeightingApproach value);

  /// @brief Method get_groupLightData, addr 0x210f14c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>* get_groupLightData();

  /// @brief Method get_individualLightData, addr 0x210f154, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>* get_individualLightData();

  /// @brief Method get_groupLightsWeighting, addr 0x210f15c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorMixAndWeightingApproach get_groupLightsWeighting();

  static inline ::GlobalNamespace::DirectionalLightWithIdsGroupEntry* New_ctor();

  /// @brief Method .ctor, addr 0x210f164, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIdsGroupEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectionalLightWithIdsGroupEntry(DirectionalLightWithIdsGroupEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIdsGroupEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectionalLightWithIdsGroupEntry(DirectionalLightWithIdsGroupEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectionalLightWithIdsGroupEntry();

public:
  /// @brief Field _directionalLightWithIds, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::DirectionalLightWithIds* ____directionalLightWithIds;

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
