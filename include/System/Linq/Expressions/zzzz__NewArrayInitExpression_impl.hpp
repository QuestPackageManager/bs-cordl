#pragma once
// IWYU pragma private; include "System\Linq\Expressions\NewArrayInitExpression.hpp"
#include "System/Linq/Expressions/zzzz__NewArrayExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__NewArrayInitExpression_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::NewArrayInitExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::NewArrayInitExpression::*)(
    ::System::Type*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*)>(&::System::Linq::Expressions::NewArrayInitExpression::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f88d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Linq::Expressions::NewArrayInitExpression*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::NewArrayInitExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::NewArrayInitExpression::*)()>(
    &::System::Linq::Expressions::NewArrayInitExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f88dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewArrayInitExpression*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::NewArrayInitExpression::_ctor(::System::Type* type,
                                                                     ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Linq::Expressions::NewArrayInitExpression*>(),
                       { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, expressions);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::NewArrayInitExpression::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewArrayInitExpression*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType>(this, ___internal_method);
}
inline ::System::Linq::Expressions::NewArrayInitExpression*
System::Linq::Expressions::NewArrayInitExpression::New_ctor(::System::Type* type, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::NewArrayInitExpression*>(type, expressions));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::NewArrayInitExpression::NewArrayInitExpression() {}
