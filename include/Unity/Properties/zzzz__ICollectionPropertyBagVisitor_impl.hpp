#pragma once
// IWYU pragma private; include "Unity\Properties\ICollectionPropertyBagVisitor.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__ICollectionPropertyBag_2_def.hpp"
template <typename TCollection, typename TElement>
inline void Unity::Properties::ICollectionPropertyBagVisitor::Visit(::Unity::Properties::ICollectionPropertyBag_2<TCollection, TElement>* properties, ::by_ref<TCollection> container) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ICollectionPropertyBagVisitor*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TCollection>(), ::i2c::class_of<TElement>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties, container);
}
