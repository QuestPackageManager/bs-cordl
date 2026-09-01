#pragma once
// IWYU pragma private; include "Zenject\Installer_4.hpp"
#include "Zenject/zzzz__InstallerBase_impl.hpp"
#include "Zenject/zzzz__Installer_4_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived>
inline void Zenject::Installer_4<TParam1, TParam2, TParam3, TDerived>::Install(::Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Installer_4<TParam1, TParam2, TParam3, TDerived>*>(),
                                              { "Install", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, p1, p2, p3);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived> inline void Zenject::Installer_4<TParam1, TParam2, TParam3, TDerived>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Installer_4<TParam1, TParam2, TParam3, TDerived>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived>
inline ::Zenject::InjectTypeInfo* Zenject::Installer_4<TParam1, TParam2, TParam3, TDerived>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Installer_4<TParam1, TParam2, TParam3, TDerived>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived>
inline ::Zenject::Installer_4<TParam1, TParam2, TParam3, TDerived>* Zenject::Installer_4<TParam1, TParam2, TParam3, TDerived>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Installer_4<TParam1, TParam2, TParam3, TDerived>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived> constexpr ::Zenject::Installer_4<TParam1, TParam2, TParam3, TDerived>::Installer_4() {}
