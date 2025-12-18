#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/GameplayEnvironmentOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__GameplayEnvironmentOverride_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::GameplayEnvironmentOverride.get_overrideEnvironment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Destinations::GameplayEnvironmentOverride::*)()>(
    &::BeatSaber::Destinations::GameplayEnvironmentOverride::get_overrideEnvironment)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x31b1630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayEnvironmentOverride*>::get(),
                                                                               "get_overrideEnvironment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::GameplayEnvironmentOverride.get_overrideColorScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::Destinations::GameplayEnvironmentOverride::*)()>(
    &::BeatSaber::Destinations::GameplayEnvironmentOverride::get_overrideColorScheme)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x31b1650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayEnvironmentOverride*>::get(),
                                                                               "get_overrideColorScheme", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::GameplayEnvironmentOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Destinations::GameplayEnvironmentOverride::*)()>(
    &::BeatSaber::Destinations::GameplayEnvironmentOverride::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x31b1670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayEnvironmentOverride*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::GameplayEnvironmentOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Destinations::GameplayEnvironmentOverride::*)(::StringW, ::StringW, bool)>(
    &::BeatSaber::Destinations::GameplayEnvironmentOverride::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x31b168c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayEnvironmentOverride*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Destinations::GameplayEnvironmentOverride::__cordl_internal_get_environment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environment;
}
constexpr ::StringW const& BeatSaber::Destinations::GameplayEnvironmentOverride::__cordl_internal_get_environment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environment;
}
constexpr void BeatSaber::Destinations::GameplayEnvironmentOverride::__cordl_internal_set_environment(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::Destinations::GameplayEnvironmentOverride::__cordl_internal_get_colorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScheme;
}
constexpr ::StringW const& BeatSaber::Destinations::GameplayEnvironmentOverride::__cordl_internal_get_colorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScheme;
}
constexpr void BeatSaber::Destinations::GameplayEnvironmentOverride::__cordl_internal_set_colorScheme(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorScheme)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& BeatSaber::Destinations::GameplayEnvironmentOverride::__cordl_internal_get_overrideLightshowColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideLightshowColors;
}
constexpr bool const& BeatSaber::Destinations::GameplayEnvironmentOverride::__cordl_internal_get_overrideLightshowColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideLightshowColors;
}
constexpr void BeatSaber::Destinations::GameplayEnvironmentOverride::__cordl_internal_set_overrideLightshowColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideLightshowColors = value;
}
inline bool BeatSaber::Destinations::GameplayEnvironmentOverride::get_overrideEnvironment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayEnvironmentOverride*>::get(),
                                                                             "get_overrideEnvironment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool BeatSaber::Destinations::GameplayEnvironmentOverride::get_overrideColorScheme() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayEnvironmentOverride*>::get(),
                                                                             "get_overrideColorScheme", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void BeatSaber::Destinations::GameplayEnvironmentOverride::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayEnvironmentOverride*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Destinations::GameplayEnvironmentOverride::_ctor(::StringW environment, ::StringW colorScheme, bool overrideLightshowColors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameplayEnvironmentOverride*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, environment, colorScheme, overrideLightshowColors);
}
inline ::BeatSaber::Destinations::GameplayEnvironmentOverride* BeatSaber::Destinations::GameplayEnvironmentOverride::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Destinations::GameplayEnvironmentOverride*>());
}
inline ::BeatSaber::Destinations::GameplayEnvironmentOverride* BeatSaber::Destinations::GameplayEnvironmentOverride::New_ctor(::StringW environment, ::StringW colorScheme,
                                                                                                                              bool overrideLightshowColors) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Destinations::GameplayEnvironmentOverride*>(environment, colorScheme, overrideLightshowColors));
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::GameplayEnvironmentOverride::GameplayEnvironmentOverride() {}
