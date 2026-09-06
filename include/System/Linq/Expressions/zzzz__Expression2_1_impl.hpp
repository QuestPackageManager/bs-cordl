#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Expression2_1.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_impl.hpp"
#include "System/Linq/Expressions/zzzz__Expression2_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TDelegate> constexpr ::System::Object*& System::Linq::Expressions::Expression2_1<TDelegate>::__cordl_internal_get__par0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____par0;
}
template <typename TDelegate> constexpr ::System::Object* const& System::Linq::Expressions::Expression2_1<TDelegate>::__cordl_internal_get__par0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____par0;
}
template <typename TDelegate> constexpr void System::Linq::Expressions::Expression2_1<TDelegate>::__cordl_internal_set__par0(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____par0 = value;
}
template <typename TDelegate> constexpr ::System::Linq::Expressions::ParameterExpression*& System::Linq::Expressions::Expression2_1<TDelegate>::__cordl_internal_get__par1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____par1;
}
template <typename TDelegate> constexpr ::System::Linq::Expressions::ParameterExpression* const& System::Linq::Expressions::Expression2_1<TDelegate>::__cordl_internal_get__par1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____par1;
}
template <typename TDelegate> constexpr void System::Linq::Expressions::Expression2_1<TDelegate>::__cordl_internal_set__par1(::System::Linq::Expressions::ParameterExpression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____par1 = value;
}
template <typename TDelegate>
inline void System::Linq::Expressions::Expression2_1<TDelegate>::_ctor(::System::Linq::Expressions::Expression* body, ::System::Linq::Expressions::ParameterExpression* par0,
                                                                       ::System::Linq::Expressions::ParameterExpression* par1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Expression2_1<TDelegate>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::ParameterExpression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body, par0, par1);
}
template <typename TDelegate> inline int32_t System::Linq::Expressions::Expression2_1<TDelegate>::get_ParameterCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Expression2_1<TDelegate>*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TDelegate> inline ::System::Linq::Expressions::ParameterExpression* System::Linq::Expressions::Expression2_1<TDelegate>::GetParameter(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Expression2_1<TDelegate>*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ParameterExpression*>(this, ___internal_method, index);
}
template <typename TDelegate>
inline ::System::Linq::Expressions::Expression_1<TDelegate>* System::Linq::Expressions::Expression2_1<TDelegate>::Rewrite(::System::Linq::Expressions::Expression* body,
                                                                                                                          ::ArrayW<::System::Linq::Expressions::ParameterExpression*> parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Expression2_1<TDelegate>*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression_1<TDelegate>*>(this, ___internal_method, body, parameters);
}
template <typename TDelegate>
inline ::System::Linq::Expressions::Expression2_1<TDelegate>* System::Linq::Expressions::Expression2_1<TDelegate>::New_ctor(::System::Linq::Expressions::Expression* body,
                                                                                                                            ::System::Linq::Expressions::ParameterExpression* par0,
                                                                                                                            ::System::Linq::Expressions::ParameterExpression* par1) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Expression2_1<TDelegate>*>(body, par0, par1));
}
// Ctor Parameters []
template <typename TDelegate> constexpr ::System::Linq::Expressions::Expression2_1<TDelegate>::Expression2_1() {}
