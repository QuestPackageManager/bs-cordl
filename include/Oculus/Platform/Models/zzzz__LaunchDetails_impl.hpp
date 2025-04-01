#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LaunchDetails.hpp"
#include "Oculus/Platform/zzzz__LaunchType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LaunchDetails._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LaunchDetails::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::LaunchDetails::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3f8c98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchDetails*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_DeeplinkMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeeplinkMessage;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_DeeplinkMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeeplinkMessage;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_DeeplinkMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DeeplinkMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_DestinationApiName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationApiName;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_DestinationApiName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationApiName;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_DestinationApiName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DestinationApiName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_LaunchSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchSource;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_LaunchSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchSource;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_LaunchSource(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LaunchSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::LaunchType& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_LaunchType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchType;
}
constexpr ::Oculus::Platform::LaunchType const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_LaunchType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchType;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_LaunchType(::Oculus::Platform::LaunchType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LaunchType = value;
}
constexpr ::StringW& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_TrackingID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackingID;
}
constexpr ::StringW const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_TrackingID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackingID;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_TrackingID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TrackingID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_UsersOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsersOptional;
}
constexpr ::Oculus::Platform::Models::UserList* const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_UsersOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UsersOptional;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_UsersOptional(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UsersOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_Users() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Users;
}
constexpr ::Oculus::Platform::Models::UserList* const& Oculus::Platform::Models::LaunchDetails::__cordl_internal_get_Users() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Users;
}
constexpr void Oculus::Platform::Models::LaunchDetails::__cordl_internal_set_Users(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Users)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Models::LaunchDetails::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchDetails*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::LaunchDetails* Oculus::Platform::Models::LaunchDetails::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::LaunchDetails*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LaunchDetails::LaunchDetails() {}
