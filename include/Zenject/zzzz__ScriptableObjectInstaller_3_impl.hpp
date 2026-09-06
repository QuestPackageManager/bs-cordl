#pragma once
// IWYU pragma private; include "Zenject/ScriptableObjectInstaller_3.hpp"
#include "Zenject/zzzz__ScriptableObjectInstallerBase_impl.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TDerived>
inline TDerived Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>::InstallFromResource(::Zenject::DiContainer* container, TParam1 p1, TParam2 p2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>*>(),
                                                           { "InstallFromResource", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>() } })));
  return ::cordl_internals::RunMethodRethrow<TDerived>(nullptr, ___internal_method, container, p1, p2);
}
template <typename TParam1, typename TParam2, typename TDerived>
inline TDerived Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>::InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container, TParam1 p1, TParam2 p2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>*>(),
                          { "InstallFromResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>() } })));
  return ::cordl_internals::RunMethodRethrow<TDerived>(nullptr, ___internal_method, resourcePath, container, p1, p2);
}
template <typename TParam1, typename TParam2, typename TDerived> inline void Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TDerived>
inline ::System::Object* Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TDerived> inline ::Zenject::InjectTypeInfo* Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TDerived>
inline ::Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>* Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TDerived> constexpr ::Zenject::ScriptableObjectInstaller_3<TParam1, TParam2, TDerived>::ScriptableObjectInstaller_3() {}
