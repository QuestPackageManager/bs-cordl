#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/InvitePanelResultInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::InvitePanelResultInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::InvitePanelResultInfo::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::InvitePanelResultInfo::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3f91414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::InvitePanelResultInfo*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::InvitePanelResultInfo::__cordl_internal_get_InvitesSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitesSent;
}
constexpr bool const& Oculus::Platform::Models::InvitePanelResultInfo::__cordl_internal_get_InvitesSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitesSent;
}
constexpr void Oculus::Platform::Models::InvitePanelResultInfo::__cordl_internal_set_InvitesSent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InvitesSent = value;
}
inline void Oculus::Platform::Models::InvitePanelResultInfo::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::InvitePanelResultInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::InvitePanelResultInfo* Oculus::Platform::Models::InvitePanelResultInfo::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::InvitePanelResultInfo*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::InvitePanelResultInfo::InvitePanelResultInfo() {}
