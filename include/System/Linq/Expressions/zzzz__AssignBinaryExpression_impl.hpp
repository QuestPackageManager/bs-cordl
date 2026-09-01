#pragma once
// IWYU pragma private; include "System\Linq\Expressions\AssignBinaryExpression.hpp"
#include "System/Linq/Expressions/zzzz__BinaryExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__AssignBinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::AssignBinaryExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::AssignBinaryExpression::*)(
    ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::AssignBinaryExpression::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f62fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::AssignBinaryExpression*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::AssignBinaryExpression.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Linq::Expressions::AssignBinaryExpression::*)()>(&::System::Linq::Expressions::AssignBinaryExpression::get_Type)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f62fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::AssignBinaryExpression*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::AssignBinaryExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::AssignBinaryExpression::*)()>(
    &::System::Linq::Expressions::AssignBinaryExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f62fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::AssignBinaryExpression*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::AssignBinaryExpression::_ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::AssignBinaryExpression*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, left, right);
}
inline ::System::Type* System::Linq::Expressions::AssignBinaryExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::AssignBinaryExpression*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::AssignBinaryExpression::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::AssignBinaryExpression*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType>(this, ___internal_method);
}
inline ::System::Linq::Expressions::AssignBinaryExpression* System::Linq::Expressions::AssignBinaryExpression::New_ctor(::System::Linq::Expressions::Expression* left,
                                                                                                                        ::System::Linq::Expressions::Expression* right) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::AssignBinaryExpression*>(left, right));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::AssignBinaryExpression::AssignBinaryExpression() {}
