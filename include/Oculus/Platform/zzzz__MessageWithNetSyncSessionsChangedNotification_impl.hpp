#pragma once
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithNetSyncSessionsChangedNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::*)(void*)>(
    &::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26ef4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification.GetNetSyncSessionsChangedNotification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSessionsChangedNotification* (
    ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::*)()>(&::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetNetSyncSessionsChangedNotification)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f2c30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSessionsChangedNotification* (
    ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::*)(void*)>(&::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f2c6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification* Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>(c_message));
}
inline void Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetNetSyncSessionsChangedNotification() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::MessageWithNetSyncSessionsChangedNotification() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
