#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAuthFeatureFlag_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XPlatformAuthFeatureFlag.get_UseXPlatformAuth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::XPlatformAuthFeatureFlag::*)()>(
    &::GlobalNamespace::XPlatformAuthFeatureFlag::get_UseXPlatformAuth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5df24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get(),
                                                                               "get_UseXPlatformAuth", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAuthFeatureFlag.set_UseXPlatformAuth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XPlatformAuthFeatureFlag::*)(bool)>(
    &::GlobalNamespace::XPlatformAuthFeatureFlag::set_UseXPlatformAuth)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe5df2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get(), "set_UseXPlatformAuth",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAuthFeatureFlag._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XPlatformAuthFeatureFlag::*)()>(&::GlobalNamespace::XPlatformAuthFeatureFlag::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5df38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::XPlatformAuthFeatureFlag::__get__UseXPlatformAuth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____UseXPlatformAuth_k__BackingField;
}
constexpr bool const& GlobalNamespace::XPlatformAuthFeatureFlag::__get__UseXPlatformAuth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____UseXPlatformAuth_k__BackingField;
}
constexpr void GlobalNamespace::XPlatformAuthFeatureFlag::__set__UseXPlatformAuth_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____UseXPlatformAuth_k__BackingField = value;
}
inline bool GlobalNamespace::XPlatformAuthFeatureFlag::get_UseXPlatformAuth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get(),
                                                                             "get_UseXPlatformAuth", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::XPlatformAuthFeatureFlag::set_UseXPlatformAuth(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get(), "set_UseXPlatformAuth",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XPlatformAuthFeatureFlag* GlobalNamespace::XPlatformAuthFeatureFlag::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::XPlatformAuthFeatureFlag*>());
}
inline void GlobalNamespace::XPlatformAuthFeatureFlag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XPlatformAuthFeatureFlag::XPlatformAuthFeatureFlag() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
