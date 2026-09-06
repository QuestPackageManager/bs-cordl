#pragma once
// IWYU pragma private; include "Zenject/Installer_2.hpp"
#include "Zenject/zzzz__InstallerBase_impl.hpp"
#include "Zenject/zzzz__Installer_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TDerived> inline void Zenject::Installer_2<TParam1, TDerived>::Install(::Zenject::DiContainer* container, TParam1 p1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::Installer_2<TParam1, TDerived>*>(), { "Install", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<TParam1>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, p1);
}
template <typename TParam1, typename TDerived> inline void Zenject::Installer_2<TParam1, TDerived>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Installer_2<TParam1, TDerived>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TDerived> inline ::Zenject::InjectTypeInfo* Zenject::Installer_2<TParam1, TDerived>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Installer_2<TParam1, TDerived>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TDerived> inline ::Zenject::Installer_2<TParam1, TDerived>* Zenject::Installer_2<TParam1, TDerived>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Installer_2<TParam1, TDerived>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TDerived> constexpr ::Zenject::Installer_2<TParam1, TDerived>::Installer_2() {}
