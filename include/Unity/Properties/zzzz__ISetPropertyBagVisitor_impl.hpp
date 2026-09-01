#pragma once
// IWYU pragma private; include "Unity\Properties\ISetPropertyBagVisitor.hpp"
#include "Unity/Properties/zzzz__ISetPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__ISetPropertyBag_2_def.hpp"
template <typename TSet, typename TValue> inline void Unity::Properties::ISetPropertyBagVisitor::Visit(::Unity::Properties::ISetPropertyBag_2<TSet, TValue>* properties, ::by_ref<TSet> container) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::ISetPropertyBagVisitor*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSet>(), ::i2c::class_of<TValue>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties, container);
}
