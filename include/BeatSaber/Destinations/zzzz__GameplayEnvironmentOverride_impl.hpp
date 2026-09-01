#pragma once
// IWYU pragma private; include "BeatSaber\Destinations\GameplayEnvironmentOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__GameplayEnvironmentOverride_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::GameplayEnvironmentOverride.get_overrideEnvironment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Destinations::GameplayEnvironmentOverride::*)()>(
    &::BeatSaber::Destinations::GameplayEnvironmentOverride::get_overrideEnvironment)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32811a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::GameplayEnvironmentOverride*>(), { "get_overrideEnvironment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::GameplayEnvironmentOverride.get_overrideColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Destinations::GameplayEnvironmentOverride::*)()>(
    &::BeatSaber::Destinations::GameplayEnvironmentOverride::get_overrideColorScheme)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32811c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::GameplayEnvironmentOverride*>(), { "get_overrideColorScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::GameplayEnvironmentOverride._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::GameplayEnvironmentOverride::*)()>(&::BeatSaber::Destinations::GameplayEnvironmentOverride::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32811e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::GameplayEnvironmentOverride*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::GameplayEnvironmentOverride._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::GameplayEnvironmentOverride::*)(::StringW, ::StringW, bool)>(
    &::BeatSaber::Destinations::GameplayEnvironmentOverride::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3281204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::GameplayEnvironmentOverride*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
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
  this->___environment = value;
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
  this->___colorScheme = value;
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::GameplayEnvironmentOverride*>(), { "get_overrideEnvironment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool BeatSaber::Destinations::GameplayEnvironmentOverride::get_overrideColorScheme() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::GameplayEnvironmentOverride*>(), { "get_overrideColorScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BeatSaber::Destinations::GameplayEnvironmentOverride::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::GameplayEnvironmentOverride*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::Destinations::GameplayEnvironmentOverride::_ctor(::StringW environment, ::StringW colorScheme, bool overrideLightshowColors) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::GameplayEnvironmentOverride*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, environment, colorScheme, overrideLightshowColors);
}
inline ::BeatSaber::Destinations::GameplayEnvironmentOverride* BeatSaber::Destinations::GameplayEnvironmentOverride::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::GameplayEnvironmentOverride*>());
}
inline ::BeatSaber::Destinations::GameplayEnvironmentOverride* BeatSaber::Destinations::GameplayEnvironmentOverride::New_ctor(::StringW environment, ::StringW colorScheme,
                                                                                                                              bool overrideLightshowColors) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::GameplayEnvironmentOverride*>(environment, colorScheme, overrideLightshowColors));
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::GameplayEnvironmentOverride::GameplayEnvironmentOverride() {}
