#pragma once
// IWYU pragma private; include "Oculus/Platform/UserDataStore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__UserDataStore_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserDataStoreUpdateResponse_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::UserDataStore.PrivateDeleteEntryByKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* (*)(uint64_t, ::StringW)>(
    &::Oculus::Platform::UserDataStore::PrivateDeleteEntryByKey)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2ad5a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PrivateDeleteEntryByKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserDataStore.PrivateGetEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* (*)(uint64_t)>(
    &::Oculus::Platform::UserDataStore::PrivateGetEntries)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2ad5b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PrivateGetEntries", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserDataStore.PrivateGetEntryByKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* (*)(uint64_t, ::StringW)>(&::Oculus::Platform::UserDataStore::PrivateGetEntryByKey)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2ad5cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PrivateGetEntryByKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserDataStore.PrivateWriteEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* (*)(uint64_t, ::StringW, ::StringW)>(&::Oculus::Platform::UserDataStore::PrivateWriteEntry)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2ad5e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PrivateWriteEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserDataStore.PublicDeleteEntryByKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* (*)(uint64_t, ::StringW)>(
    &::Oculus::Platform::UserDataStore::PublicDeleteEntryByKey)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2ad5fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PublicDeleteEntryByKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserDataStore.PublicGetEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* (*)(uint64_t)>(
    &::Oculus::Platform::UserDataStore::PublicGetEntries)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2ad6130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PublicGetEntries", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserDataStore.PublicGetEntryByKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* (*)(uint64_t, ::StringW)>(&::Oculus::Platform::UserDataStore::PublicGetEntryByKey)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2ad6290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PublicGetEntryByKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::UserDataStore.PublicWriteEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* (*)(uint64_t, ::StringW, ::StringW)>(&::Oculus::Platform::UserDataStore::PublicWriteEntry)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2ad6400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PublicWriteEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* Oculus::Platform::UserDataStore::PrivateDeleteEntryByKey(uint64_t userID, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PrivateDeleteEntryByKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>*, false>(nullptr, ___internal_method, userID, key);
}
inline ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* Oculus::Platform::UserDataStore::PrivateGetEntries(uint64_t userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PrivateGetEntries", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>*, false>(nullptr, ___internal_method, userID);
}
inline ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* Oculus::Platform::UserDataStore::PrivateGetEntryByKey(uint64_t userID, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PrivateGetEntryByKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>*, false>(nullptr, ___internal_method, userID, key);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* Oculus::Platform::UserDataStore::PrivateWriteEntry(uint64_t userID, ::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PrivateWriteEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>*, false>(nullptr, ___internal_method, userID, key, value);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* Oculus::Platform::UserDataStore::PublicDeleteEntryByKey(uint64_t userID, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PublicDeleteEntryByKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>*, false>(nullptr, ___internal_method, userID, key);
}
inline ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* Oculus::Platform::UserDataStore::PublicGetEntries(uint64_t userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PublicGetEntries", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>*, false>(nullptr, ___internal_method, userID);
}
inline ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* Oculus::Platform::UserDataStore::PublicGetEntryByKey(uint64_t userID, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PublicGetEntryByKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>*, false>(nullptr, ___internal_method, userID, key);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* Oculus::Platform::UserDataStore::PublicWriteEntry(uint64_t userID, ::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::UserDataStore*>::get(), "PublicWriteEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>*, false>(nullptr, ___internal_method, userID, key, value);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::UserDataStore::UserDataStore() {}
