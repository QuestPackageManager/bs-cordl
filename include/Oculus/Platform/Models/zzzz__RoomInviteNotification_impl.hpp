#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__RoomInviteNotification_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::RoomInviteNotification._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::RoomInviteNotification::*)(void*)>(
    &::Oculus::Platform::Models::RoomInviteNotification::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x273ce64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::RoomInviteNotification*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::RoomInviteNotification::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::RoomInviteNotification::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::RoomInviteNotification::__cordl_internal_set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr uint64_t& Oculus::Platform::Models::RoomInviteNotification::__cordl_internal_get_RoomID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomID;
}
constexpr uint64_t const& Oculus::Platform::Models::RoomInviteNotification::__cordl_internal_get_RoomID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomID;
}
constexpr void Oculus::Platform::Models::RoomInviteNotification::__cordl_internal_set_RoomID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RoomID = value;
}
constexpr uint64_t& Oculus::Platform::Models::RoomInviteNotification::__cordl_internal_get_SenderID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SenderID;
}
constexpr uint64_t const& Oculus::Platform::Models::RoomInviteNotification::__cordl_internal_get_SenderID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SenderID;
}
constexpr void Oculus::Platform::Models::RoomInviteNotification::__cordl_internal_set_SenderID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SenderID = value;
}
constexpr ::System::DateTime& Oculus::Platform::Models::RoomInviteNotification::__cordl_internal_get_SentTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SentTime;
}
constexpr ::System::DateTime const& Oculus::Platform::Models::RoomInviteNotification::__cordl_internal_get_SentTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SentTime;
}
constexpr void Oculus::Platform::Models::RoomInviteNotification::__cordl_internal_set_SentTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SentTime = value;
}
inline ::Oculus::Platform::Models::RoomInviteNotification* Oculus::Platform::Models::RoomInviteNotification::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::RoomInviteNotification*>(o));
}
inline void Oculus::Platform::Models::RoomInviteNotification::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::RoomInviteNotification*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::RoomInviteNotification::RoomInviteNotification() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
