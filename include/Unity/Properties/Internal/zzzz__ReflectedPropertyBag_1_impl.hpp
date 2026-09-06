#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/ReflectedPropertyBag_1.hpp"
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_impl.hpp"
#include "Unity/Properties/Internal/zzzz__ReflectedPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
template <typename TContainer>
template <typename TValue>
inline void Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>::AddProperty(::Unity::Properties::Property_2<TContainer, TValue>* property) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>*>(),
                                                           { "AddProperty", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::Unity::Properties::Property_2<TContainer, TValue>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
template <typename TContainer> inline void Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContainer> inline ::Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>* Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>*>());
}
// Ctor Parameters []
template <typename TContainer> constexpr ::Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>::ReflectedPropertyBag_1() {}
