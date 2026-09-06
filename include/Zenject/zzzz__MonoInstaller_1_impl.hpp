#pragma once
// IWYU pragma private; include "Zenject/MonoInstaller_1.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TDerived> inline TDerived Zenject::MonoInstaller_1<TDerived>::InstallFromResource(::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstaller_1<TDerived>*>(), { "InstallFromResource", {}, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<TDerived>(nullptr, ___internal_method, container);
}
template <typename TDerived> inline TDerived Zenject::MonoInstaller_1<TDerived>::InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstaller_1<TDerived>*>(),
                                                                                         { "InstallFromResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<TDerived>(nullptr, ___internal_method, resourcePath, container);
}
template <typename TDerived> inline TDerived Zenject::MonoInstaller_1<TDerived>::InstallFromResource(::Zenject::DiContainer* container, ::ArrayW<::System::Object*> extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstaller_1<TDerived>*>(),
                                                           { "InstallFromResource", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<TDerived>(nullptr, ___internal_method, container, extraArgs);
}
template <typename TDerived> inline TDerived Zenject::MonoInstaller_1<TDerived>::InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer* container, ::ArrayW<::System::Object*> extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstaller_1<TDerived>*>(),
                                       { "InstallFromResource", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<TDerived>(nullptr, ___internal_method, resourcePath, container, extraArgs);
}
template <typename TDerived> inline void Zenject::MonoInstaller_1<TDerived>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstaller_1<TDerived>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TDerived> inline ::Zenject::InjectTypeInfo* Zenject::MonoInstaller_1<TDerived>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoInstaller_1<TDerived>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TDerived> inline ::Zenject::MonoInstaller_1<TDerived>* Zenject::MonoInstaller_1<TDerived>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MonoInstaller_1<TDerived>*>());
}
// Ctor Parameters []
template <typename TDerived> constexpr ::Zenject::MonoInstaller_1<TDerived>::MonoInstaller_1() {}
