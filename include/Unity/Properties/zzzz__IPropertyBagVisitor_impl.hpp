#pragma once
// IWYU pragma private; include "Unity/Properties/IPropertyBagVisitor.hpp"
#include "Unity/Properties/zzzz__IPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
template <typename TContainer> inline void Unity::Properties::IPropertyBagVisitor::Visit(::Unity::Properties::IPropertyBag_1<TContainer>* properties, ::by_ref<TContainer> container) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IPropertyBagVisitor*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties, container);
}
