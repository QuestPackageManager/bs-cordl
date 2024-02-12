#pragma once
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadataList_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCloudStorageMetadataList_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadataList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageMetadataList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithCloudStorageMetadataList::*)(void*)>(
    &::Oculus::Platform::MessageWithCloudStorageMetadataList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2718654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataList*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageMetadataList.GetCloudStorageMetadataList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageMetadataList* (::Oculus::Platform::MessageWithCloudStorageMetadataList::*)()>(
    &::Oculus::Platform::MessageWithCloudStorageMetadataList::GetCloudStorageMetadataList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271b094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataList*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageMetadataList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageMetadataList* (
    ::Oculus::Platform::MessageWithCloudStorageMetadataList::*)(void*)>(&::Oculus::Platform::MessageWithCloudStorageMetadataList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271b0d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataList*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithCloudStorageMetadataList* Oculus::Platform::MessageWithCloudStorageMetadataList::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithCloudStorageMetadataList*>(c_message));
}
inline void Oculus::Platform::MessageWithCloudStorageMetadataList::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataList*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::CloudStorageMetadataList* Oculus::Platform::MessageWithCloudStorageMetadataList::GetCloudStorageMetadataList() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataList*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageMetadataList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CloudStorageMetadataList* Oculus::Platform::MessageWithCloudStorageMetadataList::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageMetadataList*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageMetadataList*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithCloudStorageMetadataList::MessageWithCloudStorageMetadataList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
