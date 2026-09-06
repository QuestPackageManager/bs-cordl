#pragma once
// IWYU pragma private; include "Zenject/KeyedFactory_2.hpp"
#include "Zenject/zzzz__KeyedFactoryBase_2_impl.hpp"
#include "Zenject/zzzz__KeyedFactory_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TBase, typename TKey> inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::KeyedFactory_2<TBase, TKey>::get_ProvidedTypes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::KeyedFactory_2<TBase, TKey>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline TBase Zenject::KeyedFactory_2<TBase, TKey>::Create(TKey key) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::KeyedFactory_2<TBase, TKey>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<TBase>(this, ___internal_method, key);
}
template <typename TBase, typename TKey> inline void Zenject::KeyedFactory_2<TBase, TKey>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactory_2<TBase, TKey>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TBase, typename TKey> inline ::System::Object* Zenject::KeyedFactory_2<TBase, TKey>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactory_2<TBase, TKey>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TBase, typename TKey> inline ::Zenject::InjectTypeInfo* Zenject::KeyedFactory_2<TBase, TKey>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::KeyedFactory_2<TBase, TKey>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TBase, typename TKey> inline ::Zenject::KeyedFactory_2<TBase, TKey>* Zenject::KeyedFactory_2<TBase, TKey>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::KeyedFactory_2<TBase, TKey>*>());
}
// Ctor Parameters []
template <typename TBase, typename TKey> constexpr ::Zenject::KeyedFactory_2<TBase, TKey>::KeyedFactory_2() {}
