#pragma once
// IWYU pragma private; include "UnityEngine\Networking\PlayerConnection\MessageEventArgs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::MessageEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::PlayerConnection::MessageEventArgs::*)()>(
    &::UnityEngine::Networking::PlayerConnection::MessageEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b01be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Networking::PlayerConnection::MessageEventArgs::__cordl_internal_get_playerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr int32_t const& UnityEngine::Networking::PlayerConnection::MessageEventArgs::__cordl_internal_get_playerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr void UnityEngine::Networking::PlayerConnection::MessageEventArgs::__cordl_internal_set_playerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerId = value;
}
constexpr ::ArrayW<uint8_t>& UnityEngine::Networking::PlayerConnection::MessageEventArgs::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint8_t> const& UnityEngine::Networking::PlayerConnection::MessageEventArgs::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::Networking::PlayerConnection::MessageEventArgs::__cordl_internal_set_data(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void UnityEngine::Networking::PlayerConnection::MessageEventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Networking::PlayerConnection::MessageEventArgs* UnityEngine::Networking::PlayerConnection::MessageEventArgs::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::PlayerConnection::MessageEventArgs::MessageEventArgs() {}
