#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLinkedAccountList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLinkedAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccountList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLinkedAccountList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithLinkedAccountList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLinkedAccountList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f7a618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLinkedAccountList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLinkedAccountList.GetLinkedAccountList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LinkedAccountList* (::Oculus::Platform::MessageWithLinkedAccountList::*)()>(
    &::Oculus::Platform::MessageWithLinkedAccountList::GetLinkedAccountList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3f7a670;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLinkedAccountList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLinkedAccountList*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLinkedAccountList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LinkedAccountList* (
    ::Oculus::Platform::MessageWithLinkedAccountList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithLinkedAccountList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3f7a6ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLinkedAccountList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLinkedAccountList*>::get(), 72));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithLinkedAccountList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLinkedAccountList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::LinkedAccountList* Oculus::Platform::MessageWithLinkedAccountList::GetLinkedAccountList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLinkedAccountList*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LinkedAccountList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LinkedAccountList* Oculus::Platform::MessageWithLinkedAccountList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLinkedAccountList*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LinkedAccountList*, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithLinkedAccountList* Oculus::Platform::MessageWithLinkedAccountList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithLinkedAccountList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLinkedAccountList::MessageWithLinkedAccountList() {}
