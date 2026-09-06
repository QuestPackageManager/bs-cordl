#pragma once
// IWYU pragma private; include "Unity/Properties/IPropertyBag_1.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__PropertyCollection_1_def.hpp"
template <typename TContainer> inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::IPropertyBag_1<TContainer>::GetProperties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IPropertyBag_1<TContainer>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>>(this, ___internal_method);
}
template <typename TContainer> inline ::Unity::Properties::PropertyCollection_1<TContainer> Unity::Properties::IPropertyBag_1<TContainer>::GetProperties(::by_ref<TContainer> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IPropertyBag_1<TContainer>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyCollection_1<TContainer>>(this, ___internal_method, container);
}
template <typename TContainer> inline void Unity::Properties::IPropertyBag_1<TContainer>::Accept(::Unity::Properties::IPropertyBagVisitor* visitor, ::by_ref<TContainer> container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IPropertyBag_1<TContainer>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visitor, container);
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBag"
template <typename TContainer> constexpr Unity::Properties::IPropertyBag_1<TContainer>::operator ::Unity::Properties::IPropertyBag*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBag"
template <typename TContainer> constexpr ::Unity::Properties::IPropertyBag* Unity::Properties::IPropertyBag_1<TContainer>::i___Unity__Properties__IPropertyBag() noexcept {
  return static_cast<::Unity::Properties::IPropertyBag*>(static_cast<void*>(this));
}
