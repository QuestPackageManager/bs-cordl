#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::InvitePanelResultInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::InvitePanelResultInfo::*)(void*)>(
    &::Oculus::Platform::Models::InvitePanelResultInfo::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2706388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::InvitePanelResultInfo*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::InvitePanelResultInfo::__get_InvitesSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitesSent;
}
constexpr bool const& Oculus::Platform::Models::InvitePanelResultInfo::__get_InvitesSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitesSent;
}
constexpr void Oculus::Platform::Models::InvitePanelResultInfo::__set_InvitesSent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InvitesSent = value;
}
inline ::Oculus::Platform::Models::InvitePanelResultInfo* Oculus::Platform::Models::InvitePanelResultInfo::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::InvitePanelResultInfo*>(o));
}
inline void Oculus::Platform::Models::InvitePanelResultInfo::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::InvitePanelResultInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::InvitePanelResultInfo::InvitePanelResultInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
