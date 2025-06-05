#pragma once
// IWYU pragma private; include "Oculus/Platform/AssetFile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__AssetFile_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDeleteResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadCancelResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::AssetFile.Delete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* (*)(uint64_t)>(
    &::Oculus::Platform::AssetFile::Delete)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3f882f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "Delete", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AssetFile.DeleteById
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* (*)(uint64_t)>(
    &::Oculus::Platform::AssetFile::DeleteById)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3f88448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DeleteById", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AssetFile.DeleteByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* (*)(::StringW)>(
    &::Oculus::Platform::AssetFile::DeleteByName)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3f885a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DeleteByName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AssetFile.Download
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* (*)(uint64_t)>(
    &::Oculus::Platform::AssetFile::Download)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3f886f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "Download", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AssetFile.DownloadById
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* (*)(uint64_t)>(
    &::Oculus::Platform::AssetFile::DownloadById)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3f88850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DownloadById", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AssetFile.DownloadByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* (*)(::StringW)>(
    &::Oculus::Platform::AssetFile::DownloadByName)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3f889a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DownloadByName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AssetFile.DownloadCancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* (*)(uint64_t)>(
    &::Oculus::Platform::AssetFile::DownloadCancel)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3f88b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DownloadCancel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AssetFile.DownloadCancelById
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* (*)(uint64_t)>(
    &::Oculus::Platform::AssetFile::DownloadCancelById)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3f88c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DownloadCancelById", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AssetFile.DownloadCancelByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* (*)(::StringW)>(
    &::Oculus::Platform::AssetFile::DownloadCancelByName)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3f88db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DownloadCancelByName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AssetFile.GetList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetailsList*>* (*)()>(
    &::Oculus::Platform::AssetFile::GetList)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3f88f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "GetList",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AssetFile.Status
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* (*)(uint64_t)>(
    &::Oculus::Platform::AssetFile::Status)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3f89058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "Status", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AssetFile.StatusById
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* (*)(uint64_t)>(
    &::Oculus::Platform::AssetFile::StatusById)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3f891b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "StatusById", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AssetFile.StatusByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* (*)(::StringW)>(
    &::Oculus::Platform::AssetFile::StatusByName)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3f89308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "StatusByName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AssetFile.SetDownloadUpdateNotificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*)>(
    &::Oculus::Platform::AssetFile::SetDownloadUpdateNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3f89460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "SetDownloadUpdateNotificationCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* Oculus::Platform::AssetFile::Delete(uint64_t assetFileID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "Delete", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*, false>(nullptr, ___internal_method, assetFileID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* Oculus::Platform::AssetFile::DeleteById(uint64_t assetFileID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DeleteById", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*, false>(nullptr, ___internal_method, assetFileID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>* Oculus::Platform::AssetFile::DeleteByName(::StringW assetFileName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DeleteByName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDeleteResult*>*, false>(nullptr, ___internal_method, assetFileName);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* Oculus::Platform::AssetFile::Download(uint64_t assetFileID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "Download", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*, false>(nullptr, ___internal_method, assetFileID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* Oculus::Platform::AssetFile::DownloadById(uint64_t assetFileID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DownloadById", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*, false>(nullptr, ___internal_method, assetFileID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* Oculus::Platform::AssetFile::DownloadByName(::StringW assetFileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DownloadByName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>*, false>(nullptr, ___internal_method, assetFileName);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* Oculus::Platform::AssetFile::DownloadCancel(uint64_t assetFileID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DownloadCancel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>*, false>(nullptr, ___internal_method, assetFileID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* Oculus::Platform::AssetFile::DownloadCancelById(uint64_t assetFileID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DownloadCancelById", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>*, false>(nullptr, ___internal_method, assetFileID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>* Oculus::Platform::AssetFile::DownloadCancelByName(::StringW assetFileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "DownloadCancelByName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*>*, false>(nullptr, ___internal_method, assetFileName);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetailsList*>* Oculus::Platform::AssetFile::GetList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "GetList",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetailsList*>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* Oculus::Platform::AssetFile::Status(uint64_t assetFileID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "Status", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>*, false>(nullptr, ___internal_method, assetFileID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* Oculus::Platform::AssetFile::StatusById(uint64_t assetFileID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "StatusById", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>*, false>(nullptr, ___internal_method, assetFileID);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* Oculus::Platform::AssetFile::StatusByName(::StringW assetFileName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "StatusByName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>*, false>(nullptr, ___internal_method, assetFileName);
}
inline void Oculus::Platform::AssetFile::SetDownloadUpdateNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::AssetFileDownloadUpdate*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::AssetFile*>::get(), "SetDownloadUpdateNotificationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::AssetFileDownloadUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::AssetFile::AssetFile() {}
