#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchInvitePanelFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LaunchInvitePanelFlowResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LaunchInvitePanelFlowResult::*)(void*)>(
    &::Oculus::Platform::Models::LaunchInvitePanelFlowResult::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2739550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::LaunchInvitePanelFlowResult::__cordl_internal_get_InvitedUsers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsers;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& Oculus::Platform::Models::LaunchInvitePanelFlowResult::__cordl_internal_get_InvitedUsers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitedUsers;
}
constexpr void Oculus::Platform::Models::LaunchInvitePanelFlowResult::__cordl_internal_set_InvitedUsers(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InvitedUsers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::LaunchInvitePanelFlowResult* Oculus::Platform::Models::LaunchInvitePanelFlowResult::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>(o));
}
inline void Oculus::Platform::Models::LaunchInvitePanelFlowResult::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LaunchInvitePanelFlowResult::LaunchInvitePanelFlowResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
