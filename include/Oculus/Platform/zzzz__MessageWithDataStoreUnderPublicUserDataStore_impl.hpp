#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithDataStoreUnderPublicUserDataStore_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::*)(void*)>(
    &::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2592ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore.GetDataStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (
    ::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::*)()>(&::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataStore)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2595a54;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (
    ::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::*)(void*)>(&::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2595a90;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore* Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*>(c_message));
}
inline void Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataStore() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*>::get(), "GetDataStore",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::GetDataFromMessage(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*>::get(), "GetDataFromMessage",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore::MessageWithDataStoreUnderPublicUserDataStore() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
