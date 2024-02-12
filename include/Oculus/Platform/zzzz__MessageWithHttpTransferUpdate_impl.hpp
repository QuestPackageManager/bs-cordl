#pragma once
#include "Oculus/Platform/Models/zzzz__HttpTransferUpdate_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithHttpTransferUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__HttpTransferUpdate_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithHttpTransferUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithHttpTransferUpdate::*)(void*)>(
    &::Oculus::Platform::MessageWithHttpTransferUpdate::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2719834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithHttpTransferUpdate*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithHttpTransferUpdate.GetHttpTransferUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::HttpTransferUpdate* (::Oculus::Platform::MessageWithHttpTransferUpdate::*)()>(
    &::Oculus::Platform::MessageWithHttpTransferUpdate::GetHttpTransferUpdate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271ea8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithHttpTransferUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithHttpTransferUpdate*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithHttpTransferUpdate.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::HttpTransferUpdate* (::Oculus::Platform::MessageWithHttpTransferUpdate::*)(void*)>(
    &::Oculus::Platform::MessageWithHttpTransferUpdate::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271eac8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithHttpTransferUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithHttpTransferUpdate*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithHttpTransferUpdate* Oculus::Platform::MessageWithHttpTransferUpdate::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithHttpTransferUpdate*>(c_message));
}
inline void Oculus::Platform::MessageWithHttpTransferUpdate::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithHttpTransferUpdate*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::HttpTransferUpdate* Oculus::Platform::MessageWithHttpTransferUpdate::GetHttpTransferUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithHttpTransferUpdate*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::HttpTransferUpdate*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::HttpTransferUpdate* Oculus::Platform::MessageWithHttpTransferUpdate::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithHttpTransferUpdate*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::HttpTransferUpdate*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithHttpTransferUpdate::MessageWithHttpTransferUpdate() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
