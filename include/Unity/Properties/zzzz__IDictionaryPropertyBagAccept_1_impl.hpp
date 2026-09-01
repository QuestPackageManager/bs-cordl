#pragma once
// IWYU pragma private; include "Unity\Properties\IDictionaryPropertyBagAccept_1.hpp"
#include "Unity/Properties/zzzz__IDictionaryPropertyBagAccept_1_def.hpp"
#include "Unity/Properties/zzzz__IDictionaryPropertyBagVisitor_def.hpp"
template <typename TContainer>
inline void Unity::Properties::IDictionaryPropertyBagAccept_1<TContainer>::Accept(::Unity::Properties::IDictionaryPropertyBagVisitor* visitor, ::by_ref<TContainer> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IDictionaryPropertyBagAccept_1<TContainer>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visitor, container);
}
