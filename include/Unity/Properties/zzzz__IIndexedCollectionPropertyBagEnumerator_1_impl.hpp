#pragma once
// IWYU pragma private; include "Unity\Properties\IIndexedCollectionPropertyBagEnumerator_1.hpp"
#include "Unity/Properties/zzzz__IIndexedCollectionPropertyBagEnumerator_1_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
#include "Unity/Properties/zzzz__IndexedCollectionSharedPropertyState_def.hpp"
template <typename TContainer> inline int32_t Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>::GetCount(::by_ref<TContainer> container) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, container);
}
template <typename TContainer> inline ::Unity::Properties::IProperty_1<TContainer>* Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>::GetSharedProperty() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IProperty_1<TContainer>*>(this, ___internal_method);
}
template <typename TContainer> inline ::Unity::Properties::IndexedCollectionSharedPropertyState Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>::GetSharedPropertyState() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::IndexedCollectionSharedPropertyState>(this, ___internal_method);
}
template <typename TContainer>
inline void Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>::SetSharedPropertyState(::Unity::Properties::IndexedCollectionSharedPropertyState state) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
