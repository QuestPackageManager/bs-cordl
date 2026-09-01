#pragma once
// IWYU pragma private; include "System\Linq\Expressions\FullConditionalExpressionWithType.hpp"
#include "System/Linq/Expressions/zzzz__FullConditionalExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__FullConditionalExpressionWithType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::FullConditionalExpressionWithType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::FullConditionalExpressionWithType::*)(
    ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*)>(
    &::System::Linq::Expressions::FullConditionalExpressionWithType::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f7a9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::FullConditionalExpressionWithType*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::FullConditionalExpressionWithType.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Linq::Expressions::FullConditionalExpressionWithType::*)()>(
    &::System::Linq::Expressions::FullConditionalExpressionWithType::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f7aba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::FullConditionalExpressionWithType*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Linq::Expressions::FullConditionalExpressionWithType::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& System::Linq::Expressions::FullConditionalExpressionWithType::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void System::Linq::Expressions::FullConditionalExpressionWithType::__cordl_internal_set__Type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Type_k__BackingField = value;
}
inline void System::Linq::Expressions::FullConditionalExpressionWithType::_ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue,
                                                                                ::System::Linq::Expressions::Expression* ifFalse, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::FullConditionalExpressionWithType*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, test, ifTrue, ifFalse, type);
}
inline ::System::Type* System::Linq::Expressions::FullConditionalExpressionWithType::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::FullConditionalExpressionWithType*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::FullConditionalExpressionWithType* System::Linq::Expressions::FullConditionalExpressionWithType::New_ctor(::System::Linq::Expressions::Expression* test,
                                                                                                                                              ::System::Linq::Expressions::Expression* ifTrue,
                                                                                                                                              ::System::Linq::Expressions::Expression* ifFalse,
                                                                                                                                              ::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::FullConditionalExpressionWithType*>(test, ifTrue, ifFalse, type));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::FullConditionalExpressionWithType::FullConditionalExpressionWithType() {}
