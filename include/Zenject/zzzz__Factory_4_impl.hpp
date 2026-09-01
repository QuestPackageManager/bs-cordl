#pragma once
// IWYU pragma private; include "Zenject\Factory_4.hpp"
#include "Zenject/zzzz__PlaceholderFactory_4_impl.hpp"
#include "Zenject/zzzz__Factory_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> inline void Zenject::Factory_4<TParam1, TParam2, TParam3, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Factory_4<TParam1, TParam2, TParam3, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Object* Zenject::Factory_4<TParam1, TParam2, TParam3, TValue>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Factory_4<TParam1, TParam2, TParam3, TValue>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::Factory_4<TParam1, TParam2, TParam3, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Factory_4<TParam1, TParam2, TParam3, TValue>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::Factory_4<TParam1, TParam2, TParam3, TValue>* Zenject::Factory_4<TParam1, TParam2, TParam3, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Factory_4<TParam1, TParam2, TParam3, TValue>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> constexpr ::Zenject::Factory_4<TParam1, TParam2, TParam3, TValue>::Factory_4() {}
