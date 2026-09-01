#pragma once
// IWYU pragma private; include "GlobalNamespace\FileHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileHelpers.PathIsUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::FileHelpers::PathIsUrl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x33245a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileHelpers*>(), { "PathIsUrl", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileHelpers.GetEscapedURLForFilePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::FileHelpers::GetEscapedURLForFilePath)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3324610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileHelpers*>(), { "GetEscapedURLForFilePath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileHelpers.GetUniqueDirectoryNameByAppendingNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::FileHelpers::GetUniqueDirectoryNameByAppendingNumber)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x33246d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileHelpers*>(), { "GetUniqueDirectoryNameByAppendingNumber", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileHelpers.GetFilePaths
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::System::Collections::Generic::HashSet_1<::StringW>*)>(&::GlobalNamespace::FileHelpers::GetFilePaths)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x33247a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileHelpers*>(),
                                                             { "GetFilePaths", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileHelpers.GetFileNamesFromFilePaths
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::GlobalNamespace::FileHelpers::GetFileNamesFromFilePaths)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x33249fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileHelpers*>(), { "GetFileNamesFromFilePaths", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::FileHelpers::PathIsUrl(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileHelpers*>(), { "PathIsUrl", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filePath);
}
inline ::StringW GlobalNamespace::FileHelpers::GetEscapedURLForFilePath(::StringW filePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileHelpers*>(), { "GetEscapedURLForFilePath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, filePath);
}
inline ::StringW GlobalNamespace::FileHelpers::GetUniqueDirectoryNameByAppendingNumber(::StringW dirName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileHelpers*>(), { "GetUniqueDirectoryNameByAppendingNumber", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dirName);
}
inline ::ArrayW<::StringW> GlobalNamespace::FileHelpers::GetFilePaths(::StringW directoryPath, ::System::Collections::Generic::HashSet_1<::StringW>* extensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileHelpers*>(),
                                                           { "GetFilePaths", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, directoryPath, extensions);
}
inline ::ArrayW<::StringW> GlobalNamespace::FileHelpers::GetFileNamesFromFilePaths(::System::Collections::Generic::IEnumerable_1<::StringW>* filePaths) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileHelpers*>(), { "GetFileNamesFromFilePaths", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, filePaths);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileHelpers::FileHelpers() {}
