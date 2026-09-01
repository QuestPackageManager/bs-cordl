#pragma once
// IWYU pragma private; include "GlobalNamespace\Deeplink.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Deeplink_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Deeplink.FromJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Deeplink* (*)(::StringW)>(&::GlobalNamespace::Deeplink::FromJson)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3707f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Deeplink*>(), { "FromJson", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Deeplink._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Deeplink::*)()>(&::GlobalNamespace::Deeplink::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3707fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Deeplink*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_Destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Destination;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_Destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Destination;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_Destination(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Destination = value;
}
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_LevelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LevelID;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_LevelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LevelID;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_LevelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LevelID = value;
}
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_PackID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackID;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_PackID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackID;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_PackID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PackID = value;
}
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_Difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Difficulty;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_Difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Difficulty;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_Difficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Difficulty = value;
}
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_Characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Characteristic;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_Characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Characteristic;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_Characteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Characteristic = value;
}
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_MultiplayerLobbyCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MultiplayerLobbyCode;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_MultiplayerLobbyCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MultiplayerLobbyCode;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_MultiplayerLobbyCode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MultiplayerLobbyCode = value;
}
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_MultiplayerSecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MultiplayerSecret;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_MultiplayerSecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MultiplayerSecret;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_MultiplayerSecret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MultiplayerSecret = value;
}
inline ::GlobalNamespace::Deeplink* GlobalNamespace::Deeplink::FromJson(::StringW jsonDeeplink) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Deeplink*>(), { "FromJson", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Deeplink*>(nullptr, ___internal_method, jsonDeeplink);
}
inline void GlobalNamespace::Deeplink::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Deeplink*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Deeplink* GlobalNamespace::Deeplink::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Deeplink*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Deeplink::Deeplink() {}
