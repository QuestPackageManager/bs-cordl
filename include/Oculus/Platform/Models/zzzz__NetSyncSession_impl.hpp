#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSession_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncSession._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::NetSyncSession::*)(void*)>(&::Oculus::Platform::Models::NetSyncSession::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x273b5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSession*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___VoipGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::NetSyncSession* Oculus::Platform::Models::NetSyncSession::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::NetSyncSession*>(o));
}
inline void Oculus::Platform::Models::NetSyncSession::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSession*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::NetSyncSession::NetSyncSession() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
