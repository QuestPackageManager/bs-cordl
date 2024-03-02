#pragma once
#include "Oculus/Platform/Models/zzzz__InstalledApplicationList_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithInstalledApplicationList_def.hpp"
#include "Oculus/Platform/Models/zzzz__InstalledApplicationList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithInstalledApplicationList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithInstalledApplicationList::*)(void*)>(
    &::Oculus::Platform::MessageWithInstalledApplicationList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27e3478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInstalledApplicationList*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithInstalledApplicationList.GetInstalledApplicationList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::InstalledApplicationList* (::Oculus::Platform::MessageWithInstalledApplicationList::*)()>(
    &::Oculus::Platform::MessageWithInstalledApplicationList::GetInstalledApplicationList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27e34d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInstalledApplicationList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInstalledApplicationList*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithInstalledApplicationList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::InstalledApplicationList* (
    ::Oculus::Platform::MessageWithInstalledApplicationList::*)(void*)>(&::Oculus::Platform::MessageWithInstalledApplicationList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27e350c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInstalledApplicationList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInstalledApplicationList*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithInstalledApplicationList* Oculus::Platform::MessageWithInstalledApplicationList::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithInstalledApplicationList*>(c_message));
}
inline void Oculus::Platform::MessageWithInstalledApplicationList::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInstalledApplicationList*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::InstalledApplicationList* Oculus::Platform::MessageWithInstalledApplicationList::GetInstalledApplicationList() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInstalledApplicationList*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InstalledApplicationList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::InstalledApplicationList* Oculus::Platform::MessageWithInstalledApplicationList::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithInstalledApplicationList*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InstalledApplicationList*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithInstalledApplicationList::MessageWithInstalledApplicationList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
