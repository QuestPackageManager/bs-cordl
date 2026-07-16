#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerAppVersionFileManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ServerAppVersionFileManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ServerAppVersionFileManager.WriteAppVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::ServerAppVersionFileManager::WriteAppVersion)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32ba9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerAppVersionFileManager*>(), { "WriteAppVersion", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerAppVersionFileManager.ReadAppVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::ServerAppVersionFileManager::ReadAppVersion)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32baa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerAppVersionFileManager*>(), { "ReadAppVersion", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerAppVersionFileManager.BuildFilePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::ServerAppVersionFileManager::BuildFilePath)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x32ba9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerAppVersionFileManager*>(), { "BuildFilePath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerAppVersionFileManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerAppVersionFileManager::*)()>(&::GlobalNamespace::ServerAppVersionFileManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32baa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerAppVersionFileManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ServerAppVersionFileManager::WriteAppVersion(::StringW directoryPath, ::StringW appVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerAppVersionFileManager*>(), { "WriteAppVersion", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, directoryPath, appVersion);
}
inline ::StringW GlobalNamespace::ServerAppVersionFileManager::ReadAppVersion(::StringW directoryPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerAppVersionFileManager*>(), { "ReadAppVersion", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, directoryPath);
}
inline ::StringW GlobalNamespace::ServerAppVersionFileManager::BuildFilePath(::StringW directoryPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerAppVersionFileManager*>(), { "BuildFilePath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, directoryPath);
}
inline void GlobalNamespace::ServerAppVersionFileManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerAppVersionFileManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ServerAppVersionFileManager* GlobalNamespace::ServerAppVersionFileManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ServerAppVersionFileManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServerAppVersionFileManager::ServerAppVersionFileManager() {}
