#pragma once
// IWYU pragma private; include "System\Linq\Expressions\LogicalBinaryExpression.hpp"
#include "System/Linq/Expressions/zzzz__BinaryExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_impl.hpp"
#include "System/Linq/Expressions/zzzz__LogicalBinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::LogicalBinaryExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::LogicalBinaryExpression::*)(
    ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::LogicalBinaryExpression::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f62f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LogicalBinaryExpression*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LogicalBinaryExpression.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Linq::Expressions::LogicalBinaryExpression::*)()>(&::System::Linq::Expressions::LogicalBinaryExpression::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f62f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LogicalBinaryExpression*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LogicalBinaryExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::LogicalBinaryExpression::*)()>(
    &::System::Linq::Expressions::LogicalBinaryExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f62fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LogicalBinaryExpression*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::ExpressionType& System::Linq::Expressions::LogicalBinaryExpression::__cordl_internal_get__NodeType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NodeType_k__BackingField;
}
constexpr ::System::Linq::Expressions::ExpressionType const& System::Linq::Expressions::LogicalBinaryExpression::__cordl_internal_get__NodeType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NodeType_k__BackingField;
}
constexpr void System::Linq::Expressions::LogicalBinaryExpression::__cordl_internal_set__NodeType_k__BackingField(::System::Linq::Expressions::ExpressionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____NodeType_k__BackingField = value;
}
inline void System::Linq::Expressions::LogicalBinaryExpression::_ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left,
                                                                      ::System::Linq::Expressions::Expression* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LogicalBinaryExpression*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::ExpressionType>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeType, left, right);
}
inline ::System::Type* System::Linq::Expressions::LogicalBinaryExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LogicalBinaryExpression*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::LogicalBinaryExpression::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::LogicalBinaryExpression*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType>(this, ___internal_method);
}
inline ::System::Linq::Expressions::LogicalBinaryExpression* System::Linq::Expressions::LogicalBinaryExpression::New_ctor(::System::Linq::Expressions::ExpressionType nodeType,
                                                                                                                          ::System::Linq::Expressions::Expression* left,
                                                                                                                          ::System::Linq::Expressions::Expression* right) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::LogicalBinaryExpression*>(nodeType, left, right));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::LogicalBinaryExpression::LogicalBinaryExpression() {}
