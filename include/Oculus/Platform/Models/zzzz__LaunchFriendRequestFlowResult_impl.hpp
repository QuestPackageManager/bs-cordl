#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\LaunchFriendRequestFlowResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchFriendRequestFlowResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LaunchFriendRequestFlowResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::LaunchFriendRequestFlowResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::LaunchFriendRequestFlowResult::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5df0010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::LaunchFriendRequestFlowResult::__cordl_internal_get_DidCancel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidCancel;
}
constexpr bool const& Oculus::Platform::Models::LaunchFriendRequestFlowResult::__cordl_internal_get_DidCancel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidCancel;
}
constexpr void Oculus::Platform::Models::LaunchFriendRequestFlowResult::__cordl_internal_set_DidCancel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DidCancel = value;
}
constexpr bool& Oculus::Platform::Models::LaunchFriendRequestFlowResult::__cordl_internal_get_DidSendRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidSendRequest;
}
constexpr bool const& Oculus::Platform::Models::LaunchFriendRequestFlowResult::__cordl_internal_get_DidSendRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidSendRequest;
}
constexpr void Oculus::Platform::Models::LaunchFriendRequestFlowResult::__cordl_internal_set_DidSendRequest(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DidSendRequest = value;
}
inline void Oculus::Platform::Models::LaunchFriendRequestFlowResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* Oculus::Platform::Models::LaunchFriendRequestFlowResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LaunchFriendRequestFlowResult::LaunchFriendRequestFlowResult() {}
