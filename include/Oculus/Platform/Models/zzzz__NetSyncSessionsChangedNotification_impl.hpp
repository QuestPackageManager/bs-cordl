#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncSessionsChangedNotification._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::NetSyncSessionsChangedNotification::*)(void*)>(
    &::Oculus::Platform::Models::NetSyncSessionsChangedNotification::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x273b89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::NetSyncSessionList*> const&
Oculus::Platform::Models::NetSyncSessionsChangedNotification::__cordl_internal_get_Sessions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sessions;
}
constexpr void Oculus::Platform::Models::NetSyncSessionsChangedNotification::__cordl_internal_set_Sessions(::Oculus::Platform::Models::NetSyncSessionList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Sessions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* Oculus::Platform::Models::NetSyncSessionsChangedNotification::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>(o));
}
inline void Oculus::Platform::Models::NetSyncSessionsChangedNotification::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::NetSyncSessionsChangedNotification::NetSyncSessionsChangedNotification() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
