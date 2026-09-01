#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\NetSyncSession.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSession_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncSession._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::NetSyncSession::*)(::System::IntPtr)>(&::Oculus::Platform::Models::NetSyncSession::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5df0f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::NetSyncSession*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr int64_t& Oculus::Platform::Models::NetSyncSession::__cordl_internal_get_ConnectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionId;
}
constexpr int64_t const& Oculus::Platform::Models::NetSyncSession::__cordl_internal_get_ConnectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionId;
}
constexpr void Oculus::Platform::Models::NetSyncSession::__cordl_internal_set_ConnectionId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectionId = value;
}
constexpr bool& Oculus::Platform::Models::NetSyncSession::__cordl_internal_get_Muted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Muted;
}
constexpr bool const& Oculus::Platform::Models::NetSyncSession::__cordl_internal_get_Muted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Muted;
}
constexpr void Oculus::Platform::Models::NetSyncSession::__cordl_internal_set_Muted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Muted = value;
}
constexpr uint64_t& Oculus::Platform::Models::NetSyncSession::__cordl_internal_get_SessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SessionId;
}
constexpr uint64_t const& Oculus::Platform::Models::NetSyncSession::__cordl_internal_get_SessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SessionId;
}
constexpr void Oculus::Platform::Models::NetSyncSession::__cordl_internal_set_SessionId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SessionId = value;
}
constexpr uint64_t& Oculus::Platform::Models::NetSyncSession::__cordl_internal_get_UserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserId;
}
constexpr uint64_t const& Oculus::Platform::Models::NetSyncSession::__cordl_internal_get_UserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserId;
}
constexpr void Oculus::Platform::Models::NetSyncSession::__cordl_internal_set_UserId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UserId = value;
}
constexpr ::StringW& Oculus::Platform::Models::NetSyncSession::__cordl_internal_get_VoipGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VoipGroup;
}
constexpr ::StringW const& Oculus::Platform::Models::NetSyncSession::__cordl_internal_get_VoipGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VoipGroup;
}
constexpr void Oculus::Platform::Models::NetSyncSession::__cordl_internal_set_VoipGroup(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___VoipGroup = value;
}
inline void Oculus::Platform::Models::NetSyncSession::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::NetSyncSession*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::NetSyncSession* Oculus::Platform::Models::NetSyncSession::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::NetSyncSession*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::NetSyncSession::NetSyncSession() {}
