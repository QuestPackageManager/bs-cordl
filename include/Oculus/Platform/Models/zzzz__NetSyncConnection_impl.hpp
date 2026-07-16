#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/NetSyncConnection.hpp"
#include "Oculus/Platform/zzzz__NetSyncConnectionStatus_impl.hpp"
#include "Oculus/Platform/zzzz__NetSyncDisconnectReason_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncConnection_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncConnection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::NetSyncConnection::*)(::System::IntPtr)>(&::Oculus::Platform::Models::NetSyncConnection::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5deec30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::NetSyncConnection*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr int64_t& Oculus::Platform::Models::NetSyncConnection::__cordl_internal_get_ConnectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionId;
}
constexpr int64_t const& Oculus::Platform::Models::NetSyncConnection::__cordl_internal_get_ConnectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionId;
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__cordl_internal_set_ConnectionId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectionId = value;
}
constexpr ::Oculus::Platform::NetSyncDisconnectReason& Oculus::Platform::Models::NetSyncConnection::__cordl_internal_get_DisconnectReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisconnectReason;
}
constexpr ::Oculus::Platform::NetSyncDisconnectReason const& Oculus::Platform::Models::NetSyncConnection::__cordl_internal_get_DisconnectReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisconnectReason;
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__cordl_internal_set_DisconnectReason(::Oculus::Platform::NetSyncDisconnectReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DisconnectReason = value;
}
constexpr uint64_t& Oculus::Platform::Models::NetSyncConnection::__cordl_internal_get_SessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SessionId;
}
constexpr uint64_t const& Oculus::Platform::Models::NetSyncConnection::__cordl_internal_get_SessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SessionId;
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__cordl_internal_set_SessionId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SessionId = value;
}
constexpr ::Oculus::Platform::NetSyncConnectionStatus& Oculus::Platform::Models::NetSyncConnection::__cordl_internal_get_Status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr ::Oculus::Platform::NetSyncConnectionStatus const& Oculus::Platform::Models::NetSyncConnection::__cordl_internal_get_Status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__cordl_internal_set_Status(::Oculus::Platform::NetSyncConnectionStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Status = value;
}
constexpr ::StringW& Oculus::Platform::Models::NetSyncConnection::__cordl_internal_get_ZoneId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ZoneId;
}
constexpr ::StringW const& Oculus::Platform::Models::NetSyncConnection::__cordl_internal_get_ZoneId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ZoneId;
}
constexpr void Oculus::Platform::Models::NetSyncConnection::__cordl_internal_set_ZoneId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ZoneId = value;
}
inline void Oculus::Platform::Models::NetSyncConnection::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::NetSyncConnection*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::NetSyncConnection* Oculus::Platform::Models::NetSyncConnection::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::NetSyncConnection*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::NetSyncConnection::NetSyncConnection() {}
