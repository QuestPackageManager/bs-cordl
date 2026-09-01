#pragma once
// IWYU pragma private; include "Unity\Properties\IListPropertyBagVisitor.hpp"
#include "Unity/Properties/zzzz__IListPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IListPropertyBag_2_def.hpp"
template <typename TList, typename TElement>
inline void Unity::Properties::IListPropertyBagVisitor::Visit(::Unity::Properties::IListPropertyBag_2<TList, TElement>* properties, ::by_ref<TList> container) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IListPropertyBagVisitor*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TList>(), ::i2c::class_of<TElement>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties, container);
}
