#pragma once
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithNetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)(void*)>(
    &::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26f2d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult.GetNetSyncSetSessionPropertyResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* (
    ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)()>(&::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetNetSyncSetSessionPropertyResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f2d60;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* (
    ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)(void*)>(&::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f2d9c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult* Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>(c_message));
}
inline void Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetNetSyncSetSessionPropertyResult() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::MessageWithNetSyncSetSessionPropertyResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
