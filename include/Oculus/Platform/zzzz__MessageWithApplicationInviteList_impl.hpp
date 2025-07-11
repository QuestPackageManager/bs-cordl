#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithApplicationInviteList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithApplicationInviteList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationInviteList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithApplicationInviteList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithApplicationInviteList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f7ba1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationInviteList*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationInviteList.GetApplicationInviteList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationInviteList* (::Oculus::Platform::MessageWithApplicationInviteList::*)()>(
    &::Oculus::Platform::MessageWithApplicationInviteList::GetApplicationInviteList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3f7db7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationInviteList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationInviteList*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationInviteList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationInviteList* (
    ::Oculus::Platform::MessageWithApplicationInviteList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithApplicationInviteList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3f7dbb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationInviteList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationInviteList*>::get(), 72));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithApplicationInviteList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationInviteList*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::ApplicationInviteList* Oculus::Platform::MessageWithApplicationInviteList::GetApplicationInviteList() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationInviteList*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationInviteList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ApplicationInviteList* Oculus::Platform::MessageWithApplicationInviteList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationInviteList*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationInviteList*, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithApplicationInviteList* Oculus::Platform::MessageWithApplicationInviteList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithApplicationInviteList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithApplicationInviteList::MessageWithApplicationInviteList() {}
