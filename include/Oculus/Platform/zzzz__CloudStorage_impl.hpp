#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__CloudStorage_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageData_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageUpdateResponse_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageConflictMetadata_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadata_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadataList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::CloudStorage.Delete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* (*)(::StringW, ::StringW)>(
    &::Oculus::Platform::CloudStorage::Delete)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x25a6520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "Delete", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CloudStorage.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData*>* (*)(::StringW, ::StringW)>(
    &::Oculus::Platform::CloudStorage::Load)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x25a6690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "Load", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CloudStorage.LoadBucketMetadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList*>* (*)(::StringW)>(
    &::Oculus::Platform::CloudStorage::LoadBucketMetadata)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x25a6800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "LoadBucketMetadata", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CloudStorage.LoadConflictMetadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageConflictMetadata*>* (*)(::StringW, ::StringW)>(
    &::Oculus::Platform::CloudStorage::LoadConflictMetadata)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x25a6960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "LoadConflictMetadata", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CloudStorage.LoadHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData*>* (*)(::StringW)>(
    &::Oculus::Platform::CloudStorage::LoadHandle)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x25a6ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "LoadHandle", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CloudStorage.LoadMetadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadata*>* (*)(::StringW, ::StringW)>(
    &::Oculus::Platform::CloudStorage::LoadMetadata)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x25a6c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "LoadMetadata", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CloudStorage.ResolveKeepLocal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* (*)(::StringW, ::StringW, ::StringW)>(&::Oculus::Platform::CloudStorage::ResolveKeepLocal)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x25a6da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "ResolveKeepLocal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CloudStorage.ResolveKeepRemote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* (*)(::StringW, ::StringW, ::StringW)>(&::Oculus::Platform::CloudStorage::ResolveKeepRemote)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x25a6f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "ResolveKeepRemote", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CloudStorage.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* (*)(::StringW, ::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int64_t, ::StringW)>(
        &::Oculus::Platform::CloudStorage::Save)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x25a7090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "Save", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::CloudStorage.GetNextCloudStorageMetadataListPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList*>* (*)(::Oculus::Platform::Models::CloudStorageMetadataList*)>(
        &::Oculus::Platform::CloudStorage::GetNextCloudStorageMetadataListPage)> {
  constexpr static std::size_t size = 0x11dc;
  constexpr static std::size_t addrs = 0x25a7234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "GetNextCloudStorageMetadataListPage", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::CloudStorageMetadataList*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* Oculus::Platform::CloudStorage::Delete(::StringW bucket, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "Delete", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>*, false>(nullptr, ___internal_method, bucket, key);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData*>* Oculus::Platform::CloudStorage::Load(::StringW bucket, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "Load", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData*>*, false>(nullptr, ___internal_method, bucket, key);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList*>* Oculus::Platform::CloudStorage::LoadBucketMetadata(::StringW bucket) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "LoadBucketMetadata", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList*>*, false>(nullptr, ___internal_method, bucket);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageConflictMetadata*>* Oculus::Platform::CloudStorage::LoadConflictMetadata(::StringW bucket, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "LoadConflictMetadata", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageConflictMetadata*>*, false>(nullptr, ___internal_method, bucket, key);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData*>* Oculus::Platform::CloudStorage::LoadHandle(::StringW handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "LoadHandle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData*>*, false>(nullptr, ___internal_method, handle);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadata*>* Oculus::Platform::CloudStorage::LoadMetadata(::StringW bucket, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "LoadMetadata", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadata*>*, false>(nullptr, ___internal_method, bucket, key);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* Oculus::Platform::CloudStorage::ResolveKeepLocal(::StringW bucket, ::StringW key,
                                                                                                                                                ::StringW remoteHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "ResolveKeepLocal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>*, false>(nullptr, ___internal_method, bucket, key, remoteHandle);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* Oculus::Platform::CloudStorage::ResolveKeepRemote(::StringW bucket, ::StringW key,
                                                                                                                                                 ::StringW remoteHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "ResolveKeepRemote", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>*, false>(nullptr, ___internal_method, bucket, key, remoteHandle);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>*
Oculus::Platform::CloudStorage::Save(::StringW bucket, ::StringW key, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int64_t counter, ::StringW extraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "Save", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>*, false>(nullptr, ___internal_method, bucket, key, data, counter,
                                                                                                                                             extraData);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList*>*
Oculus::Platform::CloudStorage::GetNextCloudStorageMetadataListPage(::Oculus::Platform::Models::CloudStorageMetadataList* list) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::CloudStorage*>::get(), "GetNextCloudStorageMetadataListPage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::CloudStorageMetadataList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList*>*, false>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::CloudStorage::CloudStorage() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
