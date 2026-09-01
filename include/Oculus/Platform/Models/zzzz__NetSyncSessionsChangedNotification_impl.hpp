#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\NetSyncSessionsChangedNotification.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncSessionsChangedNotification._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::NetSyncSessionsChangedNotification::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::NetSyncSessionsChangedNotification::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5df1198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr int64_t& Oculus::Platform::Models::NetSyncSessionsChangedNotification::__cordl_internal_get_ConnectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionId;
}
constexpr int64_t const& Oculus::Platform::Models::NetSyncSessionsChangedNotification::__cordl_internal_get_ConnectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionId;
}
constexpr void Oculus::Platform::Models::NetSyncSessionsChangedNotification::__cordl_internal_set_ConnectionId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConnectionId = value;
}
constexpr ::Oculus::Platform::Models::NetSyncSessionList*& Oculus::Platform::Models::NetSyncSessionsChangedNotification::__cordl_internal_get_Sessions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sessions;
}
constexpr ::Oculus::Platform::Models::NetSyncSessionList* const& Oculus::Platform::Models::NetSyncSessionsChangedNotification::__cordl_internal_get_Sessions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sessions;
}
constexpr void Oculus::Platform::Models::NetSyncSessionsChangedNotification::__cordl_internal_set_Sessions(::Oculus::Platform::Models::NetSyncSessionList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Sessions = value;
}
inline void Oculus::Platform::Models::NetSyncSessionsChangedNotification::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* Oculus::Platform::Models::NetSyncSessionsChangedNotification::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::NetSyncSessionsChangedNotification::NetSyncSessionsChangedNotification() {}
