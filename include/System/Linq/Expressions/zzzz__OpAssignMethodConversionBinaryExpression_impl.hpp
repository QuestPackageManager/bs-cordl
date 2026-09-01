#pragma once
// IWYU pragma private; include "System\Linq\Expressions\OpAssignMethodConversionBinaryExpression.hpp"
#include "System/Linq/Expressions/zzzz__MethodBinaryExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__OpAssignMethodConversionBinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::*)(
    ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*,
    ::System::Linq::Expressions::LambdaExpression*)>(&::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f6303c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Linq::Expressions::LambdaExpression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression.GetConversion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::LambdaExpression* (::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::*)()>(
    &::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::GetConversion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f630c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::LambdaExpression*& System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::__cordl_internal_get__conversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conversion;
}
constexpr ::System::Linq::Expressions::LambdaExpression* const& System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::__cordl_internal_get__conversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conversion;
}
constexpr void System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::__cordl_internal_set__conversion(::System::Linq::Expressions::LambdaExpression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____conversion = value;
}
inline void System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::_ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left,
                                                                                       ::System::Linq::Expressions::Expression* right, ::System::Type* type, ::System::Reflection::MethodInfo* method,
                                                                                       ::System::Linq::Expressions::LambdaExpression* conversion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Linq::Expressions::LambdaExpression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType, left, right, type, method, conversion);
}
inline ::System::Linq::Expressions::LambdaExpression* System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::GetConversion() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LambdaExpression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*
System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::New_ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left,
                                                                              ::System::Linq::Expressions::Expression* right, ::System::Type* type, ::System::Reflection::MethodInfo* method,
                                                                              ::System::Linq::Expressions::LambdaExpression* conversion) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*>(nodeType, left, right, type, method, conversion));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::OpAssignMethodConversionBinaryExpression() {}
