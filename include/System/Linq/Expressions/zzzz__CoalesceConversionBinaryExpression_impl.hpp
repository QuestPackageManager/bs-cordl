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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::CoalesceConversionBinaryExpression::*)(
    ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*)>(
    &::System::Linq::Expressions::CoalesceConversionBinaryExpression::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c06a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LambdaExpression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::CoalesceConversionBinaryExpression.GetConversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::LambdaExpression* (
    ::System::Linq::Expressions::CoalesceConversionBinaryExpression::*)()>(&::System::Linq::Expressions::CoalesceConversionBinaryExpression::GetConversion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c06a80;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::CoalesceConversionBinaryExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::CoalesceConversionBinaryExpression::*)()>(
    &::System::Linq::Expressions::CoalesceConversionBinaryExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c06a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>::get(), "get_NodeType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::CoalesceConversionBinaryExpression.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Linq::Expressions::CoalesceConversionBinaryExpression::*)()>(
    &::System::Linq::Expressions::CoalesceConversionBinaryExpression::get_Type)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c06a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>::get(), "get_Type",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::LambdaExpression*& System::Linq::Expressions::CoalesceConversionBinaryExpression::__cordl_internal_get__conversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conversion;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::LambdaExpression*> const&
System::Linq::Expressions::CoalesceConversionBinaryExpression::__cordl_internal_get__conversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conversion;
}
constexpr void System::Linq::Expressions::CoalesceConversionBinaryExpression::__cordl_internal_set__conversion(::System::Linq::Expressions::LambdaExpression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____conversion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::CoalesceConversionBinaryExpression*
System::Linq::Expressions::CoalesceConversionBinaryExpression::New_ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                        ::System::Linq::Expressions::LambdaExpression* conversion) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>(left, right, conversion));
}
inline void System::Linq::Expressions::CoalesceConversionBinaryExpression::_ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right,
                                                                                 ::System::Linq::Expressions::LambdaExpression* conversion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LambdaExpression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, left, right, conversion);
}
inline ::System::Linq::Expressions::LambdaExpression* System::Linq::Expressions::CoalesceConversionBinaryExpression::GetConversion() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LambdaExpression*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::CoalesceConversionBinaryExpression::get_NodeType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>::get(), "get_NodeType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType, false>(this, ___internal_method);
}
inline ::System::Type* System::Linq::Expressions::CoalesceConversionBinaryExpression::get_Type() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::CoalesceConversionBinaryExpression*>::get(), "get_Type",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::CoalesceConversionBinaryExpression::CoalesceConversionBinaryExpression() {}
