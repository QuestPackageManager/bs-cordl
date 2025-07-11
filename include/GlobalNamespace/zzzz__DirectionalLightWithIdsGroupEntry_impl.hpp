#pragma once
// IWYU pragma private; include "GlobalNamespace/DirectionalLightWithIdsGroupEntry.hpp"
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData.get_lightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::LightGroupSO> (::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::*)()>(
    &::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e120c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData*>::get(), "get_lightGroup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData.get_groupIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::*)()>(
    &::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::get_groupIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e1214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData*>::get(),
                                                 "get_groupIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::*)(::GlobalNamespace::LightGroupSO*)>(
    &::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x39e121c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::__cordl_internal_get__lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::__cordl_internal_get__lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::__cordl_internal_set__lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::__cordl_internal_get__groupIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIntensity;
}
constexpr float_t const& GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::__cordl_internal_get__groupIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIntensity;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::__cordl_internal_set__groupIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupIntensity = value;
}
inline ::UnityW<::GlobalNamespace::LightGroupSO> GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::get_lightGroup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData*>::get(), "get_lightGroup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LightGroupSO>, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::get_groupIntensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData*>::get(),
                                               "get_groupIntensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::_ctor(::GlobalNamespace::LightGroupSO* lightGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroup);
}
inline ::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData* GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::New_ctor(::GlobalNamespace::LightGroupSO* lightGroup) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData*>(lightGroup));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData::DirectionalLightWithIdsGroupEntry_GroupLightData() {}
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId.get_lightId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::get_lightId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e124c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId*>::get(),
                                                 "get_lightId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId.get_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e1254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId*>::get(),
                                                 "get_intensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::*)(int32_t, float_t)>(
    &::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x39e125c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_get__lightId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr int32_t const& GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_get__lightId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_set__lightId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightId = value;
}
constexpr float_t& GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
inline int32_t GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::get_lightId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId*>::get(),
                                               "get_lightId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::get_intensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId*>::get(),
                                               "get_intensity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::_ctor(int32_t lightId, float_t lightIntensity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightId, lightIntensity);
}
inline ::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId* GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::New_ctor(int32_t lightId,
                                                                                                                                                                        float_t lightIntensity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId*>(lightId, lightIntensity));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId() {}
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry.get_groupLightData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData*>* (
    ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::DirectionalLightWithIdsGroupEntry::get_groupLightData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e11ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                                                                               "get_groupLightData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry.get_individualLightData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId*>* (::GlobalNamespace::DirectionalLightWithIdsGroupEntry::*)()>(
        &::GlobalNamespace::DirectionalLightWithIdsGroupEntry::get_individualLightData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e11f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                                                                               "get_individualLightData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry.get_groupLightsWeighting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorMixAndWeightingApproach (::GlobalNamespace::DirectionalLightWithIdsGroupEntry::*)()>(
    &::GlobalNamespace::DirectionalLightWithIdsGroupEntry::get_groupLightsWeighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e11fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                                                                               "get_groupLightsWeighting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLightWithIdsGroupEntry::*)()>(
    &::GlobalNamespace::DirectionalLightWithIdsGroupEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e1204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::DirectionalLightWithIds>& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_get__directionalLightWithIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightWithIds;
}
constexpr ::UnityW<::GlobalNamespace::DirectionalLightWithIds> const& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_get__directionalLightWithIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightWithIds;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_set__directionalLightWithIds(::UnityW<::GlobalNamespace::DirectionalLightWithIds> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionalLightWithIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData*>*&
GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_get__groupLightData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData*>* const&
GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_get__groupLightData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightData;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_set__groupLightData(
    ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupLightData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId*>*&
GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_get__individualLightData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____individualLightData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId*>* const&
GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_get__individualLightData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____individualLightData;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_set__individualLightData(
    ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____individualLightData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_get__excludedLightIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLightIds;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_get__excludedLightIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLightIds;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_set__excludedLightIds(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____excludedLightIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_get__groupLightsWeighting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightsWeighting;
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_get__groupLightsWeighting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightsWeighting;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__cordl_internal_set__groupLightsWeighting(::GlobalNamespace::ColorMixAndWeightingApproach value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupLightsWeighting = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData*>* GlobalNamespace::DirectionalLightWithIdsGroupEntry::get_groupLightData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                                                                             "get_groupLightData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_GroupLightData*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId*>*
GlobalNamespace::DirectionalLightWithIdsGroupEntry::get_individualLightData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                                                                             "get_individualLightData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLightWithIdsGroupEntry_LightIntensitiesWithId*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorMixAndWeightingApproach GlobalNamespace::DirectionalLightWithIdsGroupEntry::get_groupLightsWeighting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                                                                             "get_groupLightsWeighting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorMixAndWeightingApproach, false>(this, ___internal_method);
}
inline void GlobalNamespace::DirectionalLightWithIdsGroupEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DirectionalLightWithIdsGroupEntry* GlobalNamespace::DirectionalLightWithIdsGroupEntry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::DirectionalLightWithIdsGroupEntry() {}
