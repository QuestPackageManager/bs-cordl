#pragma once
// IWYU pragma private; include "System\Linq\Expressions\NewArrayBoundsExpression.hpp"
#include "System/Linq/Expressions/zzzz__NewArrayExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__NewArrayBoundsExpression_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::NewArrayBoundsExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::NewArrayBoundsExpression::*)(
    ::System::Type*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*)>(&::System::Linq::Expressions::NewArrayBoundsExpression::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f88d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Linq::Expressions::NewArrayBoundsExpression*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::NewArrayBoundsExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::NewArrayBoundsExpression::*)()>(
    &::System::Linq::Expressions::NewArrayBoundsExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f88dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewArrayBoundsExpression*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::NewArrayBoundsExpression::_ctor(::System::Type* type,
                                                                       ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Linq::Expressions::NewArrayBoundsExpression*>(),
                       { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, expressions);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::NewArrayBoundsExpression::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::NewArrayBoundsExpression*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType>(this, ___internal_method);
}
inline ::System::Linq::Expressions::NewArrayBoundsExpression*
System::Linq::Expressions::NewArrayBoundsExpression::New_ctor(::System::Type* type, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* expressions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::NewArrayBoundsExpression*>(type, expressions));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::NewArrayBoundsExpression::NewArrayBoundsExpression() {}
