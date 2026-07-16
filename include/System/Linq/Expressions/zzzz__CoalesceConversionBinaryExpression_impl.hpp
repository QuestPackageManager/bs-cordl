#pragma once
// IWYU pragma private; include "System/Linq/Expressions/CoalesceConversionBinaryExpression.hpp"
#include "System/Linq/Expressions/zzzz__BinaryExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__CoalesceConversionBinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::CoalesceConversionBinaryExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::CoalesceConversionBinaryExpression::*)(
    ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*)>(
    &::System::Linq::Expressions::CoalesceConversionBinaryExpression::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f5d7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::LambdaExpression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::CoalesceConversionBinaryExpression.GetConversion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::LambdaExpression* (::System::Linq::Expressions::CoalesceConversionBinaryExpression::*)()>(
    &::System::Linq::Expressions::CoalesceConversionBinaryExpression::GetConversion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5d7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::CoalesceConversionBinaryExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::CoalesceConversionBinaryExpression::*)()>(
    &::System::Linq::Expressions::CoalesceConversionBinaryExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5d800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::CoalesceConversionBinaryExpression.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Linq::Expressions::CoalesceConversionBinaryExpression::*)()>(
    &::System::Linq::Expressions::CoalesceConversionBinaryExpression::get_Type)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f5d808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::LambdaExpression*& System::Linq::Expressions::CoalesceConversionBinaryExpression::__cordl_internal_get__conversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conversion;
}
constexpr ::System::Linq::Expressions::LambdaExpression* const& System::Linq::Expressions::CoalesceConversionBinaryExpression::__cordl_internal_get__conversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conversion;
}
constexpr void System::Linq::Expressions::CoalesceConversionBinaryExpression::__cordl_internal_set__conversion(::System::Linq::Expressions::LambdaExpression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____conversion = value;
}
inline void System::Linq::Expressions::CoalesceConversionBinaryExpression::_ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                 ::System::Linq::Expressions::LambdaExpression* conversion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::LambdaExpression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, left, right, conversion);
}
inline ::System::Linq::Expressions::LambdaExpression* System::Linq::Expressions::CoalesceConversionBinaryExpression::GetConversion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LambdaExpression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::CoalesceConversionBinaryExpression::get_NodeType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType>(this, ___internal_method);
}
inline ::System::Type* System::Linq::Expressions::CoalesceConversionBinaryExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::CoalesceConversionBinaryExpression*
System::Linq::Expressions::CoalesceConversionBinaryExpression::New_ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                        ::System::Linq::Expressions::LambdaExpression* conversion) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>(left, right, conversion));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::CoalesceConversionBinaryExpression::CoalesceConversionBinaryExpression() {}
