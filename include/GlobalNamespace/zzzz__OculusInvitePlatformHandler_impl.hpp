#pragma once
// IWYU pragma private; include "GlobalNamespace\OculusInvitePlatformHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusInvitePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__IInvitePlatformHandler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusInvitePlatformHandler.get_isSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OculusInvitePlatformHandler::*)()>(&::GlobalNamespace::OculusInvitePlatformHandler::get_isSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3736ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusInvitePlatformHandler*>(), { "get_isSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusInvitePlatformHandler.OpenInvitePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusInvitePlatformHandler::*)()>(&::GlobalNamespace::OculusInvitePlatformHandler::OpenInvitePanel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3736bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusInvitePlatformHandler*>(), { "OpenInvitePanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusInvitePlatformHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusInvitePlatformHandler::*)()>(&::GlobalNamespace::OculusInvitePlatformHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3736c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusInvitePlatformHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OculusInvitePlatformHandler::get_isSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusInvitePlatformHandler*>(), { "get_isSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OculusInvitePlatformHandler::OpenInvitePanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusInvitePlatformHandler*>(), { "OpenInvitePanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OculusInvitePlatformHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusInvitePlatformHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusInvitePlatformHandler* GlobalNamespace::OculusInvitePlatformHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusInvitePlatformHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::IInvitePlatformHandler"
constexpr GlobalNamespace::OculusInvitePlatformHandler::operator ::GlobalNamespace::IInvitePlatformHandler*() noexcept {
  return static_cast<::GlobalNamespace::IInvitePlatformHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IInvitePlatformHandler"
constexpr ::GlobalNamespace::IInvitePlatformHandler* GlobalNamespace::OculusInvitePlatformHandler::i___GlobalNamespace__IInvitePlatformHandler() noexcept {
  return static_cast<::GlobalNamespace::IInvitePlatformHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusInvitePlatformHandler::OculusInvitePlatformHandler() {}
