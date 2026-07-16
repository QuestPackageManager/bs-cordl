#pragma once
// IWYU pragma private; include "GlobalNamespace/FileSystemHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileSystemHelper_def.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemSecurity_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileSystemHelper.FindFirstExistedParentPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::FileSystemHelper::FindFirstExistedParentPath)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x330a440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemHelper*>(), { "FindFirstExistedParentPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemHelper.HasWritePermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::AccessControl::FileSystemSecurity*)>(&::GlobalNamespace::FileSystemHelper::HasWritePermission)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x330a4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemHelper*>(), { "HasWritePermission", {}, { ::i2c::type_of<::System::Security::AccessControl::FileSystemSecurity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemHelper.HasWritePermissionOnDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::FileSystemHelper::HasWritePermissionOnDirectory)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x330a80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemHelper*>(), { "HasWritePermissionOnDirectory", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemHelper.HasWritePermissionOnFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::FileSystemHelper::HasWritePermissionOnFile)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x330a820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemHelper*>(), { "HasWritePermissionOnFile", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemHelper.IsFileWritable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::FileSystemHelper::IsFileWritable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x330a834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemHelper*>(), { "IsFileWritable", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::FileSystemHelper::FindFirstExistedParentPath(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemHelper*>(), { "FindFirstExistedParentPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline bool GlobalNamespace::FileSystemHelper::HasWritePermission(::System::Security::AccessControl::FileSystemSecurity* accessControlList) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemHelper*>(),
                                                                                         { "HasWritePermission", {}, { ::i2c::type_of<::System::Security::AccessControl::FileSystemSecurity*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, accessControlList);
}
inline bool GlobalNamespace::FileSystemHelper::HasWritePermissionOnDirectory(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemHelper*>(), { "HasWritePermissionOnDirectory", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool GlobalNamespace::FileSystemHelper::HasWritePermissionOnFile(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemHelper*>(), { "HasWritePermissionOnFile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool GlobalNamespace::FileSystemHelper::IsFileWritable(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileSystemHelper*>(), { "IsFileWritable", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileSystemHelper::FileSystemHelper() {}
