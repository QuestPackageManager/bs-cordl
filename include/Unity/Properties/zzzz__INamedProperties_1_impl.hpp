#pragma once
// IWYU pragma private; include "Unity/Properties/INamedProperties_1.hpp"
#include "Unity/Properties/zzzz__INamedProperties_1_def.hpp"
#include "Unity/Properties/zzzz__IProperty_1_def.hpp"
template <typename TContainer>
inline bool Unity::Properties::INamedProperties_1<TContainer>::TryGetProperty(::by_ref<TContainer> container, ::StringW name, ::by_ref<::Unity::Properties::IProperty_1<TContainer>*> property) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::INamedProperties_1<TContainer>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, container, name, property);
}
