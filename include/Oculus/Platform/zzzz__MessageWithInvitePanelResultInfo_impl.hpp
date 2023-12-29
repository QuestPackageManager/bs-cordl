#pragma once
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithInvitePanelResultInfo_def.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithInvitePanelResultInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithInvitePanelResultInfo::*)(void*)>(
    &::Oculus::Platform::MessageWithInvitePanelResultInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2593034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInvitePanelResultInfo*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithInvitePanelResultInfo.GetInvitePanelResultInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::InvitePanelResultInfo* (::Oculus::Platform::MessageWithInvitePanelResultInfo::*)()>(
    &::Oculus::Platform::MessageWithInvitePanelResultInfo::GetInvitePanelResultInfo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2595ea4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInvitePanelResultInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInvitePanelResultInfo*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithInvitePanelResultInfo.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::InvitePanelResultInfo* (::Oculus::Platform::MessageWithInvitePanelResultInfo::*)(void*)>(
    &::Oculus::Platform::MessageWithInvitePanelResultInfo::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2595ee0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInvitePanelResultInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInvitePanelResultInfo*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithInvitePanelResultInfo* Oculus::Platform::MessageWithInvitePanelResultInfo::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithInvitePanelResultInfo*>(c_message));
}
inline void Oculus::Platform::MessageWithInvitePanelResultInfo::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInvitePanelResultInfo*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::InvitePanelResultInfo* Oculus::Platform::MessageWithInvitePanelResultInfo::GetInvitePanelResultInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInvitePanelResultInfo*>::get(),
                                                                             "GetInvitePanelResultInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InvitePanelResultInfo*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::InvitePanelResultInfo* Oculus::Platform::MessageWithInvitePanelResultInfo::GetDataFromMessage(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInvitePanelResultInfo*>::get(), "GetDataFromMessage",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InvitePanelResultInfo*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithInvitePanelResultInfo::MessageWithInvitePanelResultInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
