#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithNetSyncSetSessionPropertyResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithNetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c2dbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult.GetNetSyncSetSessionPropertyResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* (
    ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)()>(&::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetNetSyncSetSessionPropertyResult)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c2dc1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* (
    ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c2dc60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(), 74));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetNetSyncSetSessionPropertyResult() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>::get(), 74)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult* Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::MessageWithNetSyncSetSessionPropertyResult() {}
