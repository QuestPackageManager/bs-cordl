#pragma once
// IWYU pragma private; include "Zenject\FactoryArgumentsToChoiceBinder_1.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_1_impl.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_1_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TContract>
inline void Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TContract> template <typename T> inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(T param) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(), { "WithFactoryArguments", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*>(this, ___internal_method, param);
}
template <typename TContract>
template <typename TParam1, typename TParam2>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(TParam1 param1, TParam2 param2) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(),
                                              { "WithFactoryArguments", { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>() }, { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*>(this, ___internal_method, param1, param2);
}
template <typename TContract>
template <typename TParam1, typename TParam2, typename TParam3>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(),
                                                                                              { "WithFactoryArguments",
                                                                                                { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>() },
                                                                                                { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*>(this, ___internal_method, param1, param2, param3);
}
template <typename TContract>
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(),
                                                           { "WithFactoryArguments",
                                                             { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>() },
                                                             { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*>(this, ___internal_method, param1, param2, param3, param4);
}
template <typename TContract>
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4,
                                                                                                                                 TParam5 param5) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(),
                                              { "WithFactoryArguments",
                                                { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>() },
                                                { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>(), ::i2c::type_of<TParam5>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(),
                                                                                                                     ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*>(this, ___internal_method, param1, param2, param3, param4, param5);
}
template <typename TContract>
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4,
                                                                                                                                 TParam5 param5, TParam6 param6) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(),
                          { "WithFactoryArguments",
                            { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(), ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>() },
                            { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>(), ::i2c::type_of<TParam4>(), ::i2c::type_of<TParam5>(), ::i2c::type_of<TParam6>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TParam1>(), ::i2c::class_of<TParam2>(), ::i2c::class_of<TParam3>(), ::i2c::class_of<TParam4>(),
                                                                                       ::i2c::class_of<TParam5>(), ::i2c::class_of<TParam6>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*>(this, ___internal_method, param1, param2, param3, param4, param5, param6);
}
template <typename TContract> inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(), { "WithFactoryArguments", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*>(this, ___internal_method, args);
}
template <typename TContract>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>*
Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArgumentsExplicit(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(),
                                                           { "WithFactoryArgumentsExplicit", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*>(this, ___internal_method, extraArgs);
}
template <typename TContract>
inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                              ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::FactoryArgumentsToChoiceBinder_1() {}
