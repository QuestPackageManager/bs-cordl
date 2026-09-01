#pragma once
// IWYU pragma private; include "Zenject\FactoryArgumentsToChoiceBinder_7.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_7_impl.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_7_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_7_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline void Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                              ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::BindInfo*>(), ::i2c::type_of<::Zenject::FactoryBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
template <typename T>
inline ::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::WithFactoryArguments(T param) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                           { "WithFactoryArguments", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(this, ___internal_method, param);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
template <typename TFactoryParam1, typename TFactoryParam2>
inline ::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                       { "WithFactoryArguments", { ::i2c::class_of<TFactoryParam1>(), ::i2c::class_of<TFactoryParam2>() }, { ::i2c::type_of<TFactoryParam1>(), ::i2c::type_of<TFactoryParam2>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TFactoryParam1>(), ::i2c::class_of<TFactoryParam2>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(this, ___internal_method, param1, param2);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
template <typename TFactoryParam1, typename TFactoryParam2, typename TFactoryParam3>
inline ::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                           { "WithFactoryArguments",
                                                             { ::i2c::class_of<TFactoryParam1>(), ::i2c::class_of<TFactoryParam2>(), ::i2c::class_of<TFactoryParam3>() },
                                                             { ::i2c::type_of<TFactoryParam1>(), ::i2c::type_of<TFactoryParam2>(), ::i2c::type_of<TFactoryParam3>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TFactoryParam1>(), ::i2c::class_of<TFactoryParam2>(), ::i2c::class_of<TFactoryParam3>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(this, ___internal_method, param1, param2, param3);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
template <typename TFactoryParam1, typename TFactoryParam2, typename TFactoryParam3, typename TFactoryParam4>
inline ::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3,
                                                                                                                                 TFactoryParam4 param4) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                              { "WithFactoryArguments",
                                                { ::i2c::class_of<TFactoryParam1>(), ::i2c::class_of<TFactoryParam2>(), ::i2c::class_of<TFactoryParam3>(), ::i2c::class_of<TFactoryParam4>() },
                                                { ::i2c::type_of<TFactoryParam1>(), ::i2c::type_of<TFactoryParam2>(), ::i2c::type_of<TFactoryParam3>(), ::i2c::type_of<TFactoryParam4>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TFactoryParam1>(), ::i2c::class_of<TFactoryParam2>(),
                                                                                                                     ::i2c::class_of<TFactoryParam3>(), ::i2c::class_of<TFactoryParam4>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(this, ___internal_method, param1, param2, param3,
                                                                                                                                                   param4);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
template <typename TFactoryParam1, typename TFactoryParam2, typename TFactoryParam3, typename TFactoryParam4, typename TFactoryParam5>
inline ::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3,
                                                                                                                                 TFactoryParam4 param4, TFactoryParam5 param5) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
          { "WithFactoryArguments",
            { ::i2c::class_of<TFactoryParam1>(), ::i2c::class_of<TFactoryParam2>(), ::i2c::class_of<TFactoryParam3>(), ::i2c::class_of<TFactoryParam4>(), ::i2c::class_of<TFactoryParam5>() },
            { ::i2c::type_of<TFactoryParam1>(), ::i2c::type_of<TFactoryParam2>(), ::i2c::type_of<TFactoryParam3>(), ::i2c::type_of<TFactoryParam4>(), ::i2c::type_of<TFactoryParam5>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TFactoryParam1>(), ::i2c::class_of<TFactoryParam2>(), ::i2c::class_of<TFactoryParam3>(),
                                                                                       ::i2c::class_of<TFactoryParam4>(), ::i2c::class_of<TFactoryParam5>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(this, ___internal_method, param1, param2, param3,
                                                                                                                                                   param4, param5);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
template <typename TFactoryParam1, typename TFactoryParam2, typename TFactoryParam3, typename TFactoryParam4, typename TFactoryParam5, typename TFactoryParam6>
inline ::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3,
                                                                                                                                 TFactoryParam4 param4, TFactoryParam5 param5, TFactoryParam6 param6) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                           { "WithFactoryArguments",
                                                             { ::i2c::class_of<TFactoryParam1>(), ::i2c::class_of<TFactoryParam2>(), ::i2c::class_of<TFactoryParam3>(),
                                                               ::i2c::class_of<TFactoryParam4>(), ::i2c::class_of<TFactoryParam5>(), ::i2c::class_of<TFactoryParam6>() },
                                                             { ::i2c::type_of<TFactoryParam1>(), ::i2c::type_of<TFactoryParam2>(), ::i2c::type_of<TFactoryParam3>(), ::i2c::type_of<TFactoryParam4>(),
                                                               ::i2c::type_of<TFactoryParam5>(), ::i2c::type_of<TFactoryParam6>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TFactoryParam1>(), ::i2c::class_of<TFactoryParam2>(), ::i2c::class_of<TFactoryParam3>(),
                                                                                       ::i2c::class_of<TFactoryParam4>(), ::i2c::class_of<TFactoryParam5>(), ::i2c::class_of<TFactoryParam6>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(this, ___internal_method, param1, param2, param3,
                                                                                                                                                   param4, param5, param6);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::WithFactoryArguments(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                           { "WithFactoryArguments", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(this, ___internal_method, args);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::WithFactoryArgumentsExplicit(
    ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(),
                                                           { "WithFactoryArgumentsExplicit", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(this, ___internal_method, extraArgs);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
inline ::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*
Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                     ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
constexpr ::Zenject::FactoryArgumentsToChoiceBinder_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>::FactoryArgumentsToChoiceBinder_7() {}
