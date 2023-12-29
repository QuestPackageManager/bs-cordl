#pragma once
#include "GlobalNamespace/zzzz__DirectionalLightWithIdsGroupEntry_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting::__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting::__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting() {}
constexpr ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting::Maximum{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting::LinearFraction{ static_cast<int32_t>(
    0x1) };
//  Writing Method size for method: ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData.get_lightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightGroupSO* (::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::*)()>(
    &::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb9b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>::get(),
                                                 "get_lightGroup", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData.get_groupIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::*)()>(
    &::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::get_groupIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb9b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>::get(),
                                                 "get_groupIntensity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::*)()>(
    &::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb9b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LightGroupSO*& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::__get__lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> const& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::__get__lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr void GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::__set__lightGroup(::GlobalNamespace::LightGroupSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::__get__groupIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIntensity;
}
constexpr float_t const& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::__get__groupIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIntensity;
}
constexpr void GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::__set__groupIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupIntensity = value;
}
inline ::GlobalNamespace::LightGroupSO* GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::get_lightGroup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>::get(), "get_lightGroup",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightGroupSO*, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::get_groupIntensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>::get(),
                                               "get_groupIntensity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData* GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>());
}
inline void GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::__DirectionalLightWithIdsGroupEntry__GroupLightData() {}
//  Writing Method size for method: ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId.get_lightId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::get_lightId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb9b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                                                 "get_lightId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId.get_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb9b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                                                 "get_intensity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::*)(int32_t, float_t)>(
    &::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1fb9b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__get__lightId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr int32_t const& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__get__lightId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr void GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__set__lightId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightId = value;
}
constexpr float_t& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
inline int32_t GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::get_lightId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                                               "get_lightId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::get_intensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                                               "get_intensity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId* GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::New_ctor(int32_t lightId,
                                                                                                                                                                              float_t lightIntensity) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>(lightId, lightIntensity));
}
inline void GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::_ctor(int32_t lightId, float_t lightIntensity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightId, lightIntensity);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId() {}
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLightWithIdsGroupEntry::*)()>(
    &::GlobalNamespace::DirectionalLightWithIdsGroupEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb9b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DirectionalLightWithIds*& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__directionalLightWithIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightWithIds;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DirectionalLightWithIds*> const& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__directionalLightWithIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightWithIds;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__directionalLightWithIds(::GlobalNamespace::DirectionalLightWithIds* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directionalLightWithIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*, ::Array<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*>&
GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__groupLightData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightData;
}
constexpr ::ArrayW<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*, ::Array<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*> const&
GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__groupLightData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightData;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__groupLightData(
    ::ArrayW<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*, ::Array<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupLightData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*>&
GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__individualLightData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____individualLightData;
}
constexpr ::ArrayW<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*> const&
GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__individualLightData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____individualLightData;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__individualLightData(
    ::ArrayW<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____individualLightData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__excludedLightIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLightIds;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__excludedLightIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLightIds;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__excludedLightIds(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____excludedLightIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__groupLightsWeighting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightsWeighting;
}
constexpr ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting const& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__groupLightsWeighting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightsWeighting;
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__groupLightsWeighting(::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupLightsWeighting = value;
}
inline ::GlobalNamespace::DirectionalLightWithIdsGroupEntry* GlobalNamespace::DirectionalLightWithIdsGroupEntry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>());
}
inline void GlobalNamespace::DirectionalLightWithIdsGroupEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::DirectionalLightWithIdsGroupEntry() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
