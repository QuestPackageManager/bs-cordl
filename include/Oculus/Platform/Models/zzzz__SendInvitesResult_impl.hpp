#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/SendInvitesResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SendInvitesResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::SendInvitesResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::SendInvitesResult::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3f93b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SendInvitesResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::ApplicationInviteList*& Oculus::Platform::Models::SendInvitesResult::__cordl_internal_get_Invites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Invites;
}
constexpr ::Oculus::Platform::Models::ApplicationInviteList* const& Oculus::Platform::Models::SendInvitesResult::__cordl_internal_get_Invites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Invites;
}
constexpr void Oculus::Platform::Models::SendInvitesResult::__cordl_internal_set_Invites(::Oculus::Platform::Models::ApplicationInviteList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Invites)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Models::SendInvitesResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SendInvitesResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::SendInvitesResult* Oculus::Platform::Models::SendInvitesResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::SendInvitesResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::SendInvitesResult::SendInvitesResult() {}
