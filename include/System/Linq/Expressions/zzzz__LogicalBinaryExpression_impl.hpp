#pragma once
// IWYU pragma private; include "System/Linq/Expressions/LogicalBinaryExpression.hpp"
#include "System/Linq/Expressions/zzzz__BinaryExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_impl.hpp"
#include "System/Linq/Expressions/zzzz__LogicalBinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::LogicalBinaryExpression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::LogicalBinaryExpression::*)(
    ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::LogicalBinaryExpression::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4096fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::LogicalBinaryExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LogicalBinaryExpression.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Linq::Expressions::LogicalBinaryExpression::*)()>(
    &::System::Linq::Expressions::LogicalBinaryExpression::get_Type)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4097018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::LogicalBinaryExpression*>::get(),
                                                                               "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::LogicalBinaryExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::LogicalBinaryExpression::*)()>(
    &::System::Linq::Expressions::LogicalBinaryExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4097084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::LogicalBinaryExpression*>::get(),
                                                                               "get_NodeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::LogicalBinaryExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeType, left, right);
}
inline ::System::Type* System::Linq::Expressions::LogicalBinaryExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::LogicalBinaryExpression*>::get(),
                                                                             "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::LogicalBinaryExpression::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::LogicalBinaryExpression*>::get(),
                                                                             "get_NodeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::LogicalBinaryExpression* System::Linq::Expressions::LogicalBinaryExpression::New_ctor(::System::Linq::Expressions::ExpressionType nodeType,
                                                                                                                          ::System::Linq::Expressions::Expression* left,
                                                                                                                          ::System::Linq::Expressions::Expression* right) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::LogicalBinaryExpression*>(nodeType, left, right));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::LogicalBinaryExpression::LogicalBinaryExpression() {}
