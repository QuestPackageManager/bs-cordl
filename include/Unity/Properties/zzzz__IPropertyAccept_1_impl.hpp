#pragma once
// IWYU pragma private; include "Unity/Properties/IPropertyAccept_1.hpp"
#include "Unity/Properties/zzzz__IPropertyAccept_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyVisitor_def.hpp"
template <typename TContainer> inline void Unity::Properties::IPropertyAccept_1<TContainer>::Accept(::Unity::Properties::IPropertyVisitor* visitor, ::by_ref<TContainer> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IPropertyAccept_1<TContainer>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visitor, container);
}
