#pragma once
// IWYU pragma private; include "Zenject\KeyedFactory_4.hpp"
#include "Zenject/zzzz__KeyedFactoryBase_2_impl.hpp"
#include "Zenject/zzzz__KeyedFactory_4_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TBase, typename TKey, typename TParam1, typename TParam2>
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>::get_ProvidedTypes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method);
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2> inline TBase Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>::Create(TKey key, TParam1 param1, TParam2 param2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<TBase>(this, ___internal_method, key, param1, param2);
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2> inline void Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2>
inline ::System::Object* Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2> inline ::Zenject::InjectTypeInfo* Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TBase, typename TKey, typename TParam1, typename TParam2>
inline ::Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>* Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>*>());
}
// Ctor Parameters []
template <typename TBase, typename TKey, typename TParam1, typename TParam2> constexpr ::Zenject::KeyedFactory_4<TBase, TKey, TParam1, TParam2>::KeyedFactory_4() {}
