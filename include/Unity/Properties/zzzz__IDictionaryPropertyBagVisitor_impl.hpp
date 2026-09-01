#pragma once
// IWYU pragma private; include "Unity\Properties\IDictionaryPropertyBagVisitor.hpp"
#include "Unity/Properties/zzzz__IDictionaryPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IDictionaryPropertyBag_3_def.hpp"
template <typename TDictionary, typename TKey, typename TValue>
inline void Unity::Properties::IDictionaryPropertyBagVisitor::Visit(::Unity::Properties::IDictionaryPropertyBag_3<TDictionary, TKey, TValue>* properties, ::by_ref<TDictionary> container) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IDictionaryPropertyBagVisitor*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDictionary>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties, container);
}
