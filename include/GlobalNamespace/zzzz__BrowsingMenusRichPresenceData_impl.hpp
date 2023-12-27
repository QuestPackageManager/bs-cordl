#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BrowsingMenusRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BrowsingMenusRichPresenceData.get_apiName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BrowsingMenusRichPresenceData::*)()>(
    &::GlobalNamespace::BrowsingMenusRichPresenceData::get_apiName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2373c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(),
                                                                               "get_apiName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BrowsingMenusRichPresenceData.get_localizedDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BrowsingMenusRichPresenceData::*)()>(
    &::GlobalNamespace::BrowsingMenusRichPresenceData::get_localizedDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2373cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(),
                                                                               "get_localizedDescription", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BrowsingMenusRichPresenceData.set_localizedDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BrowsingMenusRichPresenceData::*)(::StringW)>(
    &::GlobalNamespace::BrowsingMenusRichPresenceData::set_localizedDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2373cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(), "set_localizedDescription",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BrowsingMenusRichPresenceData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BrowsingMenusRichPresenceData::*)()>(
    &::GlobalNamespace::BrowsingMenusRichPresenceData::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2373cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
constexpr GlobalNamespace::BrowsingMenusRichPresenceData::operator ::GlobalNamespace::IRichPresenceData*() noexcept {
  return static_cast<::GlobalNamespace::IRichPresenceData*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::BrowsingMenusRichPresenceData::__get__localizedDescription_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____localizedDescription_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::BrowsingMenusRichPresenceData::__get__localizedDescription_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____localizedDescription_k__BackingField;
}
constexpr void GlobalNamespace::BrowsingMenusRichPresenceData::__set__localizedDescription_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localizedDescription_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::BrowsingMenusRichPresenceData::get_apiName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(),
                                                                             "get_apiName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BrowsingMenusRichPresenceData::get_localizedDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(),
                                                                             "get_localizedDescription", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::BrowsingMenusRichPresenceData::set_localizedDescription(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(), "set_localizedDescription",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BrowsingMenusRichPresenceData* GlobalNamespace::BrowsingMenusRichPresenceData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BrowsingMenusRichPresenceData*>());
}
inline void GlobalNamespace::BrowsingMenusRichPresenceData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BrowsingMenusRichPresenceData::BrowsingMenusRichPresenceData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
