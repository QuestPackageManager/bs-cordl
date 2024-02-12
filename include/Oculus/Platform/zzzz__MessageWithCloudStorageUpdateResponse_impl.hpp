#pragma once
#include "Oculus/Platform/Models/zzzz__CloudStorageUpdateResponse_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCloudStorageUpdateResponse_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageUpdateResponse_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageUpdateResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithCloudStorageUpdateResponse::*)(void*)>(
    &::Oculus::Platform::MessageWithCloudStorageUpdateResponse::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27186ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageUpdateResponse.GetCloudStorageUpdateResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageUpdateResponse* (
    ::Oculus::Platform::MessageWithCloudStorageUpdateResponse::*)()>(&::Oculus::Platform::MessageWithCloudStorageUpdateResponse::GetCloudStorageUpdateResponse)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271b16c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageUpdateResponse.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageUpdateResponse* (
    ::Oculus::Platform::MessageWithCloudStorageUpdateResponse::*)(void*)>(&::Oculus::Platform::MessageWithCloudStorageUpdateResponse::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271b1a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithCloudStorageUpdateResponse* Oculus::Platform::MessageWithCloudStorageUpdateResponse::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithCloudStorageUpdateResponse*>(c_message));
}
inline void Oculus::Platform::MessageWithCloudStorageUpdateResponse::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::CloudStorageUpdateResponse* Oculus::Platform::MessageWithCloudStorageUpdateResponse::GetCloudStorageUpdateResponse() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageUpdateResponse*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CloudStorageUpdateResponse* Oculus::Platform::MessageWithCloudStorageUpdateResponse::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageUpdateResponse*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithCloudStorageUpdateResponse::MessageWithCloudStorageUpdateResponse() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
