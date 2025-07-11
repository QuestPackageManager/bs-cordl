#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithUserDataStoreUpdateResponse.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithUserDataStoreUpdateResponse_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserDataStoreUpdateResponse_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserDataStoreUpdateResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithUserDataStoreUpdateResponse::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithUserDataStoreUpdateResponse::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f7ca44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserDataStoreUpdateResponse*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserDataStoreUpdateResponse.GetUserDataStoreUpdateResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserDataStoreUpdateResponse* (
    ::Oculus::Platform::MessageWithUserDataStoreUpdateResponse::*)()>(&::Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetUserDataStoreUpdateResponse)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3f80ce4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserDataStoreUpdateResponse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserDataStoreUpdateResponse*>::get(), 68));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserDataStoreUpdateResponse.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserDataStoreUpdateResponse* (
    ::Oculus::Platform::MessageWithUserDataStoreUpdateResponse::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3f80d20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserDataStoreUpdateResponse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserDataStoreUpdateResponse*>::get(), 72));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithUserDataStoreUpdateResponse::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserDataStoreUpdateResponse*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetUserDataStoreUpdateResponse() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserDataStoreUpdateResponse*>::get(), 68)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserDataStoreUpdateResponse*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserDataStoreUpdateResponse*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserDataStoreUpdateResponse*, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithUserDataStoreUpdateResponse* Oculus::Platform::MessageWithUserDataStoreUpdateResponse::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithUserDataStoreUpdateResponse*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithUserDataStoreUpdateResponse::MessageWithUserDataStoreUpdateResponse() {}
