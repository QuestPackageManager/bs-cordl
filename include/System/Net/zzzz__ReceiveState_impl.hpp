#pragma once
// IWYU pragma private; include "System\Net\ReceiveState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ReceiveState_def.hpp"
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/Net/zzzz__ResponseDescription_def.hpp"
//  Writing Method size for method: ::System::Net::ReceiveState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ReceiveState::*)(::System::Net::CommandStream*)>(&::System::Net::ReceiveState::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x63fdd64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ReceiveState*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::CommandStream*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::ResponseDescription*& System::Net::ReceiveState::__cordl_internal_get_Resp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Resp;
}
constexpr ::System::Net::ResponseDescription* const& System::Net::ReceiveState::__cordl_internal_get_Resp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Resp;
}
constexpr void System::Net::ReceiveState::__cordl_internal_set_Resp(::System::Net::ResponseDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Resp = value;
}
constexpr int32_t& System::Net::ReceiveState::__cordl_internal_get_ValidThrough() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValidThrough;
}
constexpr int32_t const& System::Net::ReceiveState::__cordl_internal_get_ValidThrough() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValidThrough;
}
constexpr void System::Net::ReceiveState::__cordl_internal_set_ValidThrough(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ValidThrough = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::ReceiveState::__cordl_internal_get_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Net::ReceiveState::__cordl_internal_get_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr void System::Net::ReceiveState::__cordl_internal_set_Buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Buffer = value;
}
constexpr ::System::Net::CommandStream*& System::Net::ReceiveState::__cordl_internal_get_Connection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Connection;
}
constexpr ::System::Net::CommandStream* const& System::Net::ReceiveState::__cordl_internal_get_Connection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Connection;
}
constexpr void System::Net::ReceiveState::__cordl_internal_set_Connection(::System::Net::CommandStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Connection = value;
}
inline void System::Net::ReceiveState::_ctor(::System::Net::CommandStream* connection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ReceiveState*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::CommandStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection);
}
inline ::System::Net::ReceiveState* System::Net::ReceiveState::New_ctor(::System::Net::CommandStream* connection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ReceiveState*>(connection));
}
// Ctor Parameters []
constexpr ::System::Net::ReceiveState::ReceiveState() {}
