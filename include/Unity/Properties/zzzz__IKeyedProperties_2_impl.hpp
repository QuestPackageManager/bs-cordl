#pragma once
// IWYU pragma private; include "Unity\Properties\IKeyedProperties_2.hpp"
#include "Unity/Properties/zzzz__IKeyedProperties_2_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
template <typename TContainer, typename TKey>
inline bool Unity::Properties::IKeyedProperties_2<TContainer, TKey>::TryGetProperty(::by_ref<TContainer> container, TKey key, ::by_ref<::Unity::Properties::IProperty_1<TContainer>*> property) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IKeyedProperties_2<TContainer, TKey>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, container, key, property);
}
