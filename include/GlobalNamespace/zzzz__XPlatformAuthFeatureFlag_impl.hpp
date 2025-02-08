#pragma once
// IWYU pragma private; include "GlobalNamespace/XPlatformAuthFeatureFlag.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAuthFeatureFlag_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XPlatformAuthFeatureFlag.get_UseXPlatformAuth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::XPlatformAuthFeatureFlag::*)()>(
    &::GlobalNamespace::XPlatformAuthFeatureFlag::get_UseXPlatformAuth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ed8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get(),
                                                                               "get_UseXPlatformAuth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAuthFeatureFlag.set_UseXPlatformAuth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XPlatformAuthFeatureFlag::*)(bool)>(
    &::GlobalNamespace::XPlatformAuthFeatureFlag::set_UseXPlatformAuth)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22ed8f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get(), "set_UseXPlatformAuth",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAuthFeatureFlag._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XPlatformAuthFeatureFlag::*)()>(&::GlobalNamespace::XPlatformAuthFeatureFlag::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ed904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::XPlatformAuthFeatureFlag::__cordl_internal_get__UseXPlatformAuth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseXPlatformAuth_k__BackingField;
}
constexpr bool const& GlobalNamespace::XPlatformAuthFeatureFlag::__cordl_internal_get__UseXPlatformAuth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseXPlatformAuth_k__BackingField;
}
constexpr void GlobalNamespace::XPlatformAuthFeatureFlag::__cordl_internal_set__UseXPlatformAuth_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UseXPlatformAuth_k__BackingField = value;
}
inline bool GlobalNamespace::XPlatformAuthFeatureFlag::get_UseXPlatformAuth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get(),
                                                                             "get_UseXPlatformAuth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::XPlatformAuthFeatureFlag::set_UseXPlatformAuth(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get(), "set_UseXPlatformAuth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::XPlatformAuthFeatureFlag::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAuthFeatureFlag*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::XPlatformAuthFeatureFlag* GlobalNamespace::XPlatformAuthFeatureFlag::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::XPlatformAuthFeatureFlag*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XPlatformAuthFeatureFlag::XPlatformAuthFeatureFlag() {}
