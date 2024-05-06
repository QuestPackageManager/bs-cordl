#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchFriendRequestFlowResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LaunchFriendRequestFlowResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LaunchFriendRequestFlowResult::*)(void*)>(
    &::Oculus::Platform::Models::LaunchFriendRequestFlowResult::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2adc788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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
inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* Oculus::Platform::Models::LaunchFriendRequestFlowResult::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>(o));
}
inline void Oculus::Platform::Models::LaunchFriendRequestFlowResult::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LaunchFriendRequestFlowResult::LaunchFriendRequestFlowResult() {}
