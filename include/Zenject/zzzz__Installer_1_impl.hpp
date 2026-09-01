#pragma once
// IWYU pragma private; include "Zenject\Installer_1.hpp"
#include "Zenject/zzzz__InstallerBase_impl.hpp"
#include "Zenject/zzzz__Installer_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TDerived> inline void Zenject::Installer_1<TDerived>::Install(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Installer_1<TDerived>*>(), { "Install", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container);
}
template <typename TDerived> inline void Zenject::Installer_1<TDerived>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Installer_1<TDerived>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TDerived> inline ::Zenject::InjectTypeInfo* Zenject::Installer_1<TDerived>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Installer_1<TDerived>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TDerived> inline ::Zenject::Installer_1<TDerived>* Zenject::Installer_1<TDerived>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Installer_1<TDerived>*>());
}
// Ctor Parameters []
template <typename TDerived> constexpr ::Zenject::Installer_1<TDerived>::Installer_1() {}
