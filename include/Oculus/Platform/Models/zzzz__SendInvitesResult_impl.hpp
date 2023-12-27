#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SendInvitesResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::SendInvitesResult::*)(void*)>(
    &::Oculus::Platform::Models::SendInvitesResult::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2708e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SendInvitesResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::ApplicationInviteList*& Oculus::Platform::Models::SendInvitesResult::__get_Invites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Invites;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::ApplicationInviteList*> const& Oculus::Platform::Models::SendInvitesResult::__get_Invites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Invites;
}
constexpr void Oculus::Platform::Models::SendInvitesResult::__set_Invites(::Oculus::Platform::Models::ApplicationInviteList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Invites)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::SendInvitesResult* Oculus::Platform::Models::SendInvitesResult::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::SendInvitesResult*>(o));
}
inline void Oculus::Platform::Models::SendInvitesResult::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SendInvitesResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::SendInvitesResult::SendInvitesResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
