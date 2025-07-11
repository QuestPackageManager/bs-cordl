#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithSdkAccountList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithSdkAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccountList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithSdkAccountList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithSdkAccountList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithSdkAccountList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f7c72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithSdkAccountList.GetSdkAccountList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SdkAccountList* (::Oculus::Platform::MessageWithSdkAccountList::*)()>(
    &::Oculus::Platform::MessageWithSdkAccountList::GetSdkAccountList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3f805d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithSdkAccountList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SdkAccountList* (::Oculus::Platform::MessageWithSdkAccountList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithSdkAccountList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3f80610;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(), 72));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithSdkAccountList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::SdkAccountList* Oculus::Platform::MessageWithSdkAccountList::GetSdkAccountList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SdkAccountList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SdkAccountList* Oculus::Platform::MessageWithSdkAccountList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SdkAccountList*, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithSdkAccountList* Oculus::Platform::MessageWithSdkAccountList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithSdkAccountList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithSdkAccountList::MessageWithSdkAccountList() {}
