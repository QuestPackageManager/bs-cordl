#pragma once
// IWYU pragma private; include "Zenject\Factory_7.hpp"
#include "Zenject/zzzz__PlaceholderFactory_7_impl.hpp"
#include "Zenject/zzzz__Factory_7_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline void Zenject::Factory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Factory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline ::System::Object* Zenject::Factory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Factory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline ::Zenject::InjectTypeInfo* Zenject::Factory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Factory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline ::Zenject::Factory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* Zenject::Factory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Factory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::Zenject::Factory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::Factory_7() {}
