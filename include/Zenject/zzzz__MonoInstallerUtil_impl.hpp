#pragma once
// IWYU pragma private; include "Zenject\MonoInstallerUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MonoInstallerUtil_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template <typename TInstaller> inline ::StringW Zenject::MonoInstallerUtil::GetDefaultResourcePath() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerUtil*>(), { "GetDefaultResourcePath", { ::i2c::class_of<TInstaller>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TInstaller>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
template <typename TInstaller> inline TInstaller Zenject::MonoInstallerUtil::CreateInstaller(::StringW resourcePath, ::Zenject::DiContainer* container) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstallerUtil*>(),
                                                           { "CreateInstaller", { ::i2c::class_of<TInstaller>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TInstaller>() })));
  return ::cordl_internals::RunMethodRethrow<TInstaller>(nullptr, ___internal_method, resourcePath, container);
}
// Ctor Parameters []
constexpr ::Zenject::MonoInstallerUtil::MonoInstallerUtil() {}
