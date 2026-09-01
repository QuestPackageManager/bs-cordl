#pragma once
// IWYU pragma private; include "Zenject\ScriptableObjectInstaller_4.hpp"
#include "Zenject/zzzz__ScriptableObjectInstallerBase_impl.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived>
inline TDerived Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>::InstallFromResource(::Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>*>(),
                                       { "InstallFromResource", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>() } })));
  return ::cordl_internals::RunMethodRethrow<TDerived>(nullptr, ___internal_method, container, p1, p2, p3);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived>
inline TDerived Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>::InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container, TParam1 p1, TParam2 p2,
                                                                                                               TParam3 p3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>*>(),
          { "InstallFromResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>() } })));
  return ::cordl_internals::RunMethodRethrow<TDerived>(nullptr, ___internal_method, resourcePath, container, p1, p2, p3);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived> inline void Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived>
inline ::System::Object* Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived>
inline ::Zenject::InjectTypeInfo* Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived>
inline ::Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>* Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TDerived>
constexpr ::Zenject::ScriptableObjectInstaller_4<TParam1, TParam2, TParam3, TDerived>::ScriptableObjectInstaller_4() {}
