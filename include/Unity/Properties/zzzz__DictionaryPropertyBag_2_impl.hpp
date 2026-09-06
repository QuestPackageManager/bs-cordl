#pragma once
// IWYU pragma private; include "Unity/Properties/DictionaryPropertyBag_2.hpp"
#include "Unity/Properties/zzzz__KeyValueCollectionPropertyBag_3_impl.hpp"
#include "Unity/Properties/zzzz__DictionaryPropertyBag_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Unity/Properties/zzzz__InstantiationKind_def.hpp"
template <typename TKey, typename TValue> inline ::Unity::Properties::InstantiationKind Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>::get_InstantiationKind() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::InstantiationKind>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>::Instantiate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>* Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>::DictionaryPropertyBag_2() {}
