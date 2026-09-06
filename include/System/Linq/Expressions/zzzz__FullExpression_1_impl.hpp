#pragma once
// IWYU pragma private; include "System/Linq/Expressions/FullExpression_1.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionN_1_impl.hpp"
#include "System/Linq/Expressions/zzzz__FullExpression_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
template <typename TDelegate> constexpr ::StringW& System::Linq::Expressions::FullExpression_1<TDelegate>::__cordl_internal_get__NameCore_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NameCore_k__BackingField;
}
template <typename TDelegate> constexpr ::StringW const& System::Linq::Expressions::FullExpression_1<TDelegate>::__cordl_internal_get__NameCore_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NameCore_k__BackingField;
}
template <typename TDelegate> constexpr void System::Linq::Expressions::FullExpression_1<TDelegate>::__cordl_internal_set__NameCore_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____NameCore_k__BackingField = value;
}
template <typename TDelegate> constexpr bool& System::Linq::Expressions::FullExpression_1<TDelegate>::__cordl_internal_get__TailCallCore_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TailCallCore_k__BackingField;
}
template <typename TDelegate> constexpr bool const& System::Linq::Expressions::FullExpression_1<TDelegate>::__cordl_internal_get__TailCallCore_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TailCallCore_k__BackingField;
}
template <typename TDelegate> constexpr void System::Linq::Expressions::FullExpression_1<TDelegate>::__cordl_internal_set__TailCallCore_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TailCallCore_k__BackingField = value;
}
template <typename TDelegate>
inline void System::Linq::Expressions::FullExpression_1<TDelegate>::_ctor(::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
                                                                          ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::FullExpression_1<TDelegate>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body, name, tailCall, parameters);
}
template <typename TDelegate> inline ::StringW System::Linq::Expressions::FullExpression_1<TDelegate>::get_NameCore() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::FullExpression_1<TDelegate>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TDelegate> inline bool System::Linq::Expressions::FullExpression_1<TDelegate>::get_TailCallCore() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::FullExpression_1<TDelegate>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TDelegate>
inline ::System::Linq::Expressions::FullExpression_1<TDelegate>*
System::Linq::Expressions::FullExpression_1<TDelegate>::New_ctor(::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
                                                                 ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::FullExpression_1<TDelegate>*>(body, name, tailCall, parameters));
}
// Ctor Parameters []
template <typename TDelegate> constexpr ::System::Linq::Expressions::FullExpression_1<TDelegate>::FullExpression_1() {}
