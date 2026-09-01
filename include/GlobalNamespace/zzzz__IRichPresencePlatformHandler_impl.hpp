#pragma once
// IWYU pragma private; include "GlobalNamespace\IRichPresencePlatformHandler.hpp"
#include "GlobalNamespace/zzzz__IRichPresencePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IRichPresencePlatformHandler.SetPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IRichPresencePlatformHandler::*)(::GlobalNamespace::IRichPresenceData*)>(
    &::GlobalNamespace::IRichPresencePlatformHandler::SetPresence)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IRichPresencePlatformHandler*>(), { ::i2c::class_of<::GlobalNamespace::IRichPresencePlatformHandler*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IRichPresencePlatformHandler.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IRichPresencePlatformHandler::*)()>(&::GlobalNamespace::IRichPresencePlatformHandler::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IRichPresencePlatformHandler*>(), { ::i2c::class_of<::GlobalNamespace::IRichPresencePlatformHandler*>(), 1 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IRichPresencePlatformHandler::SetPresence(::GlobalNamespace::IRichPresenceData* richPresenceData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IRichPresencePlatformHandler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, richPresenceData);
}
inline void GlobalNamespace::IRichPresencePlatformHandler::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IRichPresencePlatformHandler*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
