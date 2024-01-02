#pragma once
#include "Oculus/Platform/Models/zzzz__NetSyncSessionList_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithNetSyncSessionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSessionList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithNetSyncSessionList::*)(void*)>(
    &::Oculus::Platform::MessageWithNetSyncSessionList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26f2b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionList*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSessionList.GetNetSyncSessionList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSessionList* (::Oculus::Platform::MessageWithNetSyncSessionList::*)()>(
    &::Oculus::Platform::MessageWithNetSyncSessionList::GetNetSyncSessionList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f2b58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionList*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSessionList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSessionList* (::Oculus::Platform::MessageWithNetSyncSessionList::*)(void*)>(
    &::Oculus::Platform::MessageWithNetSyncSessionList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f2b94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionList*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithNetSyncSessionList* Oculus::Platform::MessageWithNetSyncSessionList::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithNetSyncSessionList*>(c_message));
}
inline void Oculus::Platform::MessageWithNetSyncSessionList::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::NetSyncSessionList* Oculus::Platform::MessageWithNetSyncSessionList::GetNetSyncSessionList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionList*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSessionList* Oculus::Platform::MessageWithNetSyncSessionList::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionList*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionList*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithNetSyncSessionList::MessageWithNetSyncSessionList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
