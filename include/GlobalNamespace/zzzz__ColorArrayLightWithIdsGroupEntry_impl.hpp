#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ColorArrayLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorArrayLightWithIds_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry.get_lightGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> (
    ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::get_lightGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210f088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>::get(),
                                                                               "get_lightGroups", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::*)()>(
    &::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210f090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorArrayLightWithIds*& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__colorArrayLightWithIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorArrayLightWithIds;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorArrayLightWithIds*> const& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__colorArrayLightWithIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorArrayLightWithIds;
}
constexpr void GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__set__colorArrayLightWithIds(::GlobalNamespace::ColorArrayLightWithIds* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorArrayLightWithIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*>& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> const& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr void GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__set__lightGroups(::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__excludedLightIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLightIds;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__excludedLightIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLightIds;
}
constexpr void GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__set__excludedLightIds(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____excludedLightIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> GlobalNamespace::ColorArrayLightWithIdsGroupEntry::get_lightGroups() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>::get(),
                                                                             "get_lightGroups", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry* GlobalNamespace::ColorArrayLightWithIdsGroupEntry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>());
}
inline void GlobalNamespace::ColorArrayLightWithIdsGroupEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::ColorArrayLightWithIdsGroupEntry() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
