#pragma once
// IWYU pragma private; include "GlobalNamespace\SelectMultiplayerLobbyDestination.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__SelectMultiplayerLobbyDestination_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectMultiplayerLobbyDestination._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectMultiplayerLobbyDestination::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3707fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectMultiplayerLobbyDestination*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectMultiplayerLobbyDestination._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectMultiplayerLobbyDestination::*)(::StringW)>(&::GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3707fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectMultiplayerLobbyDestination*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SelectMultiplayerLobbyDestination::__cordl_internal_get_lobbySecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbySecret;
}
constexpr ::StringW const& GlobalNamespace::SelectMultiplayerLobbyDestination::__cordl_internal_get_lobbySecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbySecret;
}
constexpr void GlobalNamespace::SelectMultiplayerLobbyDestination::__cordl_internal_set_lobbySecret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lobbySecret = value;
}
constexpr ::StringW& GlobalNamespace::SelectMultiplayerLobbyDestination::__cordl_internal_get_lobbyCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbyCode;
}
constexpr ::StringW const& GlobalNamespace::SelectMultiplayerLobbyDestination::__cordl_internal_get_lobbyCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbyCode;
}
constexpr void GlobalNamespace::SelectMultiplayerLobbyDestination::__cordl_internal_set_lobbyCode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lobbyCode = value;
}
inline void GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor(::StringW lobbySecret, ::StringW lobbyCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectMultiplayerLobbyDestination*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbySecret, lobbyCode);
}
inline void GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor(::StringW lobbyCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectMultiplayerLobbyDestination*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyCode);
}
inline ::GlobalNamespace::SelectMultiplayerLobbyDestination* GlobalNamespace::SelectMultiplayerLobbyDestination::New_ctor(::StringW lobbySecret, ::StringW lobbyCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectMultiplayerLobbyDestination*>(lobbySecret, lobbyCode));
}
inline ::GlobalNamespace::SelectMultiplayerLobbyDestination* GlobalNamespace::SelectMultiplayerLobbyDestination::New_ctor(::StringW lobbyCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectMultiplayerLobbyDestination*>(lobbyCode));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectMultiplayerLobbyDestination::SelectMultiplayerLobbyDestination() {}
