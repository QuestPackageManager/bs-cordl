#pragma once
// IWYU pragma private; include "Zenject\ScriptableObjectInstaller_1.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TDerived> inline TDerived Zenject::ScriptableObjectInstaller_1<TDerived>::InstallFromResource(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_1<TDerived>*>(), { "InstallFromResource", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<TDerived>(nullptr, ___internal_method, container);
}
template <typename TDerived> inline TDerived Zenject::ScriptableObjectInstaller_1<TDerived>::InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_1<TDerived>*>(),
                                                                                         { "InstallFromResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<TDerived>(nullptr, ___internal_method, resourcePath, container);
}
template <typename TDerived> inline void Zenject::ScriptableObjectInstaller_1<TDerived>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_1<TDerived>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TDerived> inline ::System::Object* Zenject::ScriptableObjectInstaller_1<TDerived>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_1<TDerived>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TDerived> inline ::Zenject::InjectTypeInfo* Zenject::ScriptableObjectInstaller_1<TDerived>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_1<TDerived>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TDerived> inline ::Zenject::ScriptableObjectInstaller_1<TDerived>* Zenject::ScriptableObjectInstaller_1<TDerived>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ScriptableObjectInstaller_1<TDerived>*>());
}
// Ctor Parameters []
template <typename TDerived> constexpr ::Zenject::ScriptableObjectInstaller_1<TDerived>::ScriptableObjectInstaller_1() {}
