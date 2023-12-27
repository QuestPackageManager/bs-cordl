#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithDataStoreUnderPrivateUserDataStore_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore::*)(void*)>(
    &::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26eef28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore.GetDataStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (
    ::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore::*)()>(&::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore::GetDataStore)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f17b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (
    ::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore::*)(void*)>(&::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x26f17f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore* Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore*>(c_message));
}
inline void Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore::GetDataStore() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore*>::get(), "GetDataStore",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore::GetDataFromMessage(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore*>::get(), "GetDataFromMessage",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithDataStoreUnderPrivateUserDataStore::MessageWithDataStoreUnderPrivateUserDataStore() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
