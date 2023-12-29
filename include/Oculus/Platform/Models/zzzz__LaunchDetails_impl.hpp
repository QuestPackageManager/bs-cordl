#pragma once
#include "Oculus/Platform/zzzz__LaunchType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LaunchDetails._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LaunchDetails::*)(void*)>(&::Oculus::Platform::Models::LaunchDetails::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x25b3ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchDetails*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__get_DeeplinkMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeeplinkMessage;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__get_DeeplinkMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeeplinkMessage;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_DeeplinkMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DeeplinkMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__get_DestinationApiName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationApiName;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__get_DestinationApiName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationApiName;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_DestinationApiName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DestinationApiName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__get_LaunchSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchSource;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__get_LaunchSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchSource;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_LaunchSource(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LaunchSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::LaunchType& Oculus::Platform::Models::LaunchDetails::__get_LaunchType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchType;
}
constexpr ::Oculus::Platform::LaunchType const& Oculus::Platform::Models::LaunchDetails::__get_LaunchType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchType;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_LaunchType(::Oculus::Platform::LaunchType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LaunchType = value;
}
constexpr uint64_t& Oculus::Platform::Models::LaunchDetails::__get_RoomID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomID;
}
constexpr uint64_t const& Oculus::Platform::Models::LaunchDetails::__get_RoomID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomID;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_RoomID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RoomID = value;
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__get_TrackingID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackingID;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__get_TrackingID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackingID;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_TrackingID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TrackingID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::LaunchDetails::__get_UsersOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsersOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& Oculus::Platform::Models::LaunchDetails::__get_UsersOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsersOptional;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_UsersOptional(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UsersOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::LaunchDetails::__get_Users() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Users;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& Oculus::Platform::Models::LaunchDetails::__get_Users() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Users;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__set_Users(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Users)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::LaunchDetails* Oculus::Platform::Models::LaunchDetails::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::LaunchDetails*>(o));
}
inline void Oculus::Platform::Models::LaunchDetails::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchDetails*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LaunchDetails::LaunchDetails() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
