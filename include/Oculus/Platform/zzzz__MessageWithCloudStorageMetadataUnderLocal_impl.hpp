#pragma once
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadata_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCloudStorageMetadataUnderLocal_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadata_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::*)(void*)>(
    &::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2592d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal.GetCloudStorageMetadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageMetadata* (
    ::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::*)()>(&::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::GetCloudStorageMetadata)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2595734;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageMetadata* (
    ::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::*)(void*)>(&::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2595770;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal* Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal*>(c_message));
}
inline void Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::CloudStorageMetadata* Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::GetCloudStorageMetadata() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal*>::get(), "GetCloudStorageMetadata",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageMetadata*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CloudStorageMetadata* Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::GetDataFromMessage(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal*>::get(), "GetDataFromMessage",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageMetadata*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal::MessageWithCloudStorageMetadataUnderLocal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
