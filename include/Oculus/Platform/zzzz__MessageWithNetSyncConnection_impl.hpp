#pragma once
#include "Oculus/Platform/Models/zzzz__NetSyncConnection_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithNetSyncConnection_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncConnection_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncConnection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithNetSyncConnection::*)(void*)>(
    &::Oculus::Platform::MessageWithNetSyncConnection::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26ef450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncConnection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncConnection.GetNetSyncConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncConnection* (::Oculus::Platform::MessageWithNetSyncConnection::*)()>(
    &::Oculus::Platform::MessageWithNetSyncConnection::GetNetSyncConnection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f2a28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncConnection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncConnection*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncConnection.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncConnection* (::Oculus::Platform::MessageWithNetSyncConnection::*)(void*)>(
    &::Oculus::Platform::MessageWithNetSyncConnection::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f2a64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncConnection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncConnection*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithNetSyncConnection* Oculus::Platform::MessageWithNetSyncConnection::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithNetSyncConnection*>(c_message));
}
inline void Oculus::Platform::MessageWithNetSyncConnection::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncConnection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::NetSyncConnection* Oculus::Platform::MessageWithNetSyncConnection::GetNetSyncConnection() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncConnection*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncConnection*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncConnection* Oculus::Platform::MessageWithNetSyncConnection::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncConnection*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncConnection*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithNetSyncConnection::MessageWithNetSyncConnection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
