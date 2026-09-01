#pragma once
// IWYU pragma private; include "Unity\Properties\IPropertyVisitor.hpp"
#include "Unity/Properties/zzzz__IPropertyVisitor_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
template <typename TContainer, typename TValue> inline void Unity::Properties::IPropertyVisitor::Visit(::Unity::Properties::Property_2<TContainer, TValue>* property, ::by_ref<TContainer> container) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IPropertyVisitor*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, container);
}
