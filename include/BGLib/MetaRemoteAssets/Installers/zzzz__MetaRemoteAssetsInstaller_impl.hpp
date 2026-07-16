#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/Installers/MetaRemoteAssetsInstaller.hpp"
#include "Zenject/zzzz__Installer_1_impl.hpp"
#include "BGLib/MetaRemoteAssets/Installers/zzzz__MetaRemoteAssetsInstaller_def.hpp"
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::*)(bool)>(
    &::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3319028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::*)()>(
    &::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x331907c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>(),
                                                                                          { ::i2c::class_of<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller.GetPlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::GetPlatform)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x331922c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>(), { "GetPlatform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller.InstallRemoteCatalogLoader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::*)()>(
    &::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::InstallRemoteCatalogLoader)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3319270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>(), { "InstallRemoteCatalogLoader", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::__cordl_internal_get__useMock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useMock;
}
constexpr bool const& BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::__cordl_internal_get__useMock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useMock;
}
constexpr void BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::__cordl_internal_set__useMock(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useMock = value;
}
inline void BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::_ctor(bool useMock) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useMock);
}
inline void BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::GetPlatform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>(), { "GetPlatform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::InstallRemoteCatalogLoader() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>(), { "InstallRemoteCatalogLoader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller* BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::New_ctor(bool useMock) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*>(useMock));
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller::MetaRemoteAssetsInstaller() {}
