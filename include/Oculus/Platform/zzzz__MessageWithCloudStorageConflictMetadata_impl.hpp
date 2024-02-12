#pragma once
#include "Oculus/Platform/Models/zzzz__CloudStorageConflictMetadata_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCloudStorageConflictMetadata_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageConflictMetadata_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageConflictMetadata._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithCloudStorageConflictMetadata::*)(void*)>(
    &::Oculus::Platform::MessageWithCloudStorageConflictMetadata::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x271854c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageConflictMetadata*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageConflictMetadata.GetCloudStorageConflictMetadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageConflictMetadata* (
    ::Oculus::Platform::MessageWithCloudStorageConflictMetadata::*)()>(&::Oculus::Platform::MessageWithCloudStorageConflictMetadata::GetCloudStorageConflictMetadata)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271ae0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageConflictMetadata*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageConflictMetadata*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageConflictMetadata.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageConflictMetadata* (
    ::Oculus::Platform::MessageWithCloudStorageConflictMetadata::*)(void*)>(&::Oculus::Platform::MessageWithCloudStorageConflictMetadata::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271ae48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageConflictMetadata*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageConflictMetadata*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithCloudStorageConflictMetadata* Oculus::Platform::MessageWithCloudStorageConflictMetadata::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithCloudStorageConflictMetadata*>(c_message));
}
inline void Oculus::Platform::MessageWithCloudStorageConflictMetadata::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageConflictMetadata*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::CloudStorageConflictMetadata* Oculus::Platform::MessageWithCloudStorageConflictMetadata::GetCloudStorageConflictMetadata() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageConflictMetadata*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageConflictMetadata*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CloudStorageConflictMetadata* Oculus::Platform::MessageWithCloudStorageConflictMetadata::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageConflictMetadata*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageConflictMetadata*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithCloudStorageConflictMetadata::MessageWithCloudStorageConflictMetadata() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
