#pragma once
// IWYU pragma private; include "System/IO/FileSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__FileSystem_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::FileSystem.CopyDanglingSymlink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::IO::FileSystem::CopyDanglingSymlink)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5bf1ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "CopyDanglingSymlink", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.CopyFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, bool)>(&::System::IO::FileSystem::CopyFile)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5bf2064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "CopyFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.LinkOrCopyFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::FileSystem::LinkOrCopyFile)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5bf2440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "LinkOrCopyFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.ReplaceFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::StringW, bool)>(&::System::IO::FileSystem::ReplaceFile)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5bf275c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(),
                                                { "ReplaceFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.MoveFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::System::IO::FileSystem::MoveFile)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5bf28cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "MoveFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.DeleteFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::IO::FileSystem::DeleteFile)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5bf29e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "DeleteFile", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.CreateDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::IO::FileSystem::CreateDirectory)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x5bf2de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "CreateDirectory", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.RemoveDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::System::IO::FileSystem::RemoveDirectory)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bf3618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "RemoveDirectory", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.RemoveDirectoryInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::DirectoryInfo*, bool, bool)>(&::System::IO::FileSystem::RemoveDirectoryInternal)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x5bf3764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(),
                                                             { "RemoveDirectoryInternal", {}, { ::i2c::type_of<::System::IO::DirectoryInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.DirectoryExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::FileSystem::DirectoryExists)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bf2424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "DirectoryExists", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.DirectoryExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::GlobalNamespace::Interop_ErrorInfo>)>(&::System::IO::FileSystem::DirectoryExists)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bf360c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(),
                                         { "DirectoryExists", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Interop_ErrorInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.FileExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::FileSystem::FileExists)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bf3590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "FileExists", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.FileExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, ::by_ref<::GlobalNamespace::Interop_ErrorInfo>)>(&::System::IO::FileSystem::FileExists)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5bf2cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::IO::FileSystem*>(),
                         { "FileExists", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Interop_ErrorInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.ShouldIgnoreDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::FileSystem::ShouldIgnoreDirectory)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bf3eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "ShouldIgnoreDirectory", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileAttributes (*)(::StringW)>(&::System::IO::FileSystem::GetAttributes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5bf402c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "GetAttributes", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystem.GetLogicalDrives
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::System::IO::FileSystem::GetLogicalDrives)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf41dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "GetLogicalDrives", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::IO::FileSystem::CopyDanglingSymlink(::StringW sourceFullPath, ::StringW destFullPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "CopyDanglingSymlink", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourceFullPath, destFullPath);
}
inline void System::IO::FileSystem::CopyFile(::StringW sourceFullPath, ::StringW destFullPath, bool overwrite) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "CopyFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFullPath, destFullPath, overwrite);
}
inline void System::IO::FileSystem::LinkOrCopyFile(::StringW sourceFullPath, ::StringW destFullPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "LinkOrCopyFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFullPath, destFullPath);
}
inline void System::IO::FileSystem::ReplaceFile(::StringW sourceFullPath, ::StringW destFullPath, ::StringW destBackupFullPath, bool ignoreMetadataErrors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(),
                                                           { "ReplaceFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFullPath, destFullPath, destBackupFullPath, ignoreMetadataErrors);
}
inline void System::IO::FileSystem::MoveFile(::StringW sourceFullPath, ::StringW destFullPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "MoveFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFullPath, destFullPath);
}
inline void System::IO::FileSystem::DeleteFile(::StringW fullPath) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "DeleteFile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath);
}
inline void System::IO::FileSystem::CreateDirectory(::StringW fullPath) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "CreateDirectory", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath);
}
inline void System::IO::FileSystem::RemoveDirectory(::StringW fullPath, bool recursive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "RemoveDirectory", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullPath, recursive);
}
inline void System::IO::FileSystem::RemoveDirectoryInternal(::System::IO::DirectoryInfo* directory, bool recursive, bool throwOnTopLevelDirectoryNotFound) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(),
                                                           { "RemoveDirectoryInternal", {}, { ::i2c::type_of<::System::IO::DirectoryInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, directory, recursive, throwOnTopLevelDirectoryNotFound);
}
inline bool System::IO::FileSystem::DirectoryExists(::System::ReadOnlySpan_1<char16_t> fullPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "DirectoryExists", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullPath);
}
inline bool System::IO::FileSystem::DirectoryExists(::System::ReadOnlySpan_1<char16_t> fullPath, ::by_ref<::GlobalNamespace::Interop_ErrorInfo> errorInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(),
                                              { "DirectoryExists", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Interop_ErrorInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullPath, errorInfo);
}
inline bool System::IO::FileSystem::FileExists(::System::ReadOnlySpan_1<char16_t> fullPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "FileExists", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullPath);
}
inline bool System::IO::FileSystem::FileExists(::System::ReadOnlySpan_1<char16_t> fullPath, int32_t fileType, ::by_ref<::GlobalNamespace::Interop_ErrorInfo> errorInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::IO::FileSystem*>(),
                       { "FileExists", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Interop_ErrorInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fullPath, fileType, errorInfo);
}
inline bool System::IO::FileSystem::ShouldIgnoreDirectory(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "ShouldIgnoreDirectory", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline ::System::IO::FileAttributes System::IO::FileSystem::GetAttributes(::StringW fullPath) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "GetAttributes", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes>(nullptr, ___internal_method, fullPath);
}
inline ::ArrayW<::StringW> System::IO::FileSystem::GetLogicalDrives() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileSystem*>(), { "GetLogicalDrives", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::FileSystem::FileSystem() {}
