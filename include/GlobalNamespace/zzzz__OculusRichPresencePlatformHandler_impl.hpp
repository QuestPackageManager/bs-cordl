#pragma once
// IWYU pragma private; include "GlobalNamespace\OculusRichPresencePlatformHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusRichPresencePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresencePlatformHandler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusRichPresencePlatformHandler.SetPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusRichPresencePlatformHandler::*)(::GlobalNamespace::IRichPresenceData*)>(
    &::GlobalNamespace::OculusRichPresencePlatformHandler::SetPresence)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x58ff718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusRichPresencePlatformHandler*>(),
                                                                                           { "SetPresence", {}, { ::i2c::type_of<::GlobalNamespace::IRichPresenceData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusRichPresencePlatformHandler.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusRichPresencePlatformHandler::*)()>(&::GlobalNamespace::OculusRichPresencePlatformHandler::Clear)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58ffa4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusRichPresencePlatformHandler*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusRichPresencePlatformHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusRichPresencePlatformHandler::*)()>(&::GlobalNamespace::OculusRichPresencePlatformHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ffaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusRichPresencePlatformHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusRichPresencePlatformHandler::SetPresence(::GlobalNamespace::IRichPresenceData* richPresenceData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusRichPresencePlatformHandler*>(), { "SetPresence", {}, { ::i2c::type_of<::GlobalNamespace::IRichPresenceData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, richPresenceData);
}
inline void GlobalNamespace::OculusRichPresencePlatformHandler::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusRichPresencePlatformHandler*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OculusRichPresencePlatformHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusRichPresencePlatformHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusRichPresencePlatformHandler* GlobalNamespace::OculusRichPresencePlatformHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusRichPresencePlatformHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRichPresencePlatformHandler"
constexpr GlobalNamespace::OculusRichPresencePlatformHandler::operator ::GlobalNamespace::IRichPresencePlatformHandler*() noexcept {
  return static_cast<::GlobalNamespace::IRichPresencePlatformHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRichPresencePlatformHandler"
constexpr ::GlobalNamespace::IRichPresencePlatformHandler* GlobalNamespace::OculusRichPresencePlatformHandler::i___GlobalNamespace__IRichPresencePlatformHandler() noexcept {
  return static_cast<::GlobalNamespace::IRichPresencePlatformHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusRichPresencePlatformHandler::OculusRichPresencePlatformHandler() {}
