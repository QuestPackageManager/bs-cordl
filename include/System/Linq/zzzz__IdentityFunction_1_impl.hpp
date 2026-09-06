#pragma once
// IWYU pragma private; include "System/Linq/IdentityFunction_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__IdentityFunction_1_def.hpp"
#include "System/Linq/zzzz__IdentityFunction_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename TElement> inline void System::Linq::IdentityFunction_1___c<TElement>::setStaticF___9(::System::Linq::IdentityFunction_1___c<TElement>* value) {
  ::cordl_internals::setStaticField<::System::Linq::IdentityFunction_1___c<TElement>*, "<>9", ::System::Linq::IdentityFunction_1___c<TElement>*>(
      std::forward<::System::Linq::IdentityFunction_1___c<TElement>*>(value));
}
template <typename TElement> inline ::System::Linq::IdentityFunction_1___c<TElement>* System::Linq::IdentityFunction_1___c<TElement>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Linq::IdentityFunction_1___c<TElement>*, "<>9", ::System::Linq::IdentityFunction_1___c<TElement>*>();
}
template <typename TElement> inline void System::Linq::IdentityFunction_1___c<TElement>::setStaticF___9__1_0(::System::Func_2<TElement, TElement>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<TElement, TElement>*, "<>9__1_0", ::System::Linq::IdentityFunction_1___c<TElement>*>(std::forward<::System::Func_2<TElement, TElement>*>(value));
}
template <typename TElement> inline ::System::Func_2<TElement, TElement>* System::Linq::IdentityFunction_1___c<TElement>::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<TElement, TElement>*, "<>9__1_0", ::System::Linq::IdentityFunction_1___c<TElement>*>();
}
template <typename TElement> inline void System::Linq::IdentityFunction_1___c<TElement>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::IdentityFunction_1___c<TElement>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TElement> inline TElement System::Linq::IdentityFunction_1___c<TElement>::_get_Instance_b__1_0(TElement x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::IdentityFunction_1___c<TElement>*>(), { "<get_Instance>b__1_0", {}, { ::i2c::type_of<TElement>() } })));
  return ::cordl_internals::RunMethodRethrow<TElement>(this, ___internal_method, x);
}
template <typename TElement> inline ::System::Linq::IdentityFunction_1___c<TElement>* System::Linq::IdentityFunction_1___c<TElement>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::IdentityFunction_1___c<TElement>*>());
}
// Ctor Parameters []
template <typename TElement> constexpr ::System::Linq::IdentityFunction_1___c<TElement>::IdentityFunction_1___c() {}
template <typename TElement> inline ::System::Func_2<TElement, TElement>* System::Linq::IdentityFunction_1<TElement>::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::IdentityFunction_1<TElement>*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<TElement, TElement>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TElement> constexpr ::System::Linq::IdentityFunction_1<TElement>::IdentityFunction_1() {}
