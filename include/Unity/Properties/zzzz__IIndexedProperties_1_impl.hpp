#pragma once
// IWYU pragma private; include "Unity/Properties/IIndexedProperties_1.hpp"
#include "Unity/Properties/zzzz__IIndexedProperties_1_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
template <typename TContainer>
inline bool Unity::Properties::IIndexedProperties_1<TContainer>::TryGetProperty(::by_ref<TContainer> container, int32_t index, ::by_ref<::Unity::Properties::IProperty_1<TContainer>*> property) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IIndexedProperties_1<TContainer>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, container, index, property);
}
