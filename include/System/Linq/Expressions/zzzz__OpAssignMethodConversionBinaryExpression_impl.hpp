#pragma once
// IWYU pragma private; include "System/Linq/Expressions/OpAssignMethodConversionBinaryExpression.hpp"
#include "System/Linq/Expressions/zzzz__MethodBinaryExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__OpAssignMethodConversionBinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::*)(
    ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*,
    ::System::Linq::Expressions::LambdaExpression*)>(&::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4096da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LambdaExpression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression.GetConversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::LambdaExpression* (
    ::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::*)()>(&::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::GetConversion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4096e2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*>::get(), 11));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____conversion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::_ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left,
                                                                                       ::System::Linq::Expressions::Expression* right, ::System::Type* type, ::System::Reflection::MethodInfo* method,
                                                                                       ::System::Linq::Expressions::LambdaExpression* conversion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LambdaExpression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeType, left, right, type, method, conversion);
}
inline ::System::Linq::Expressions::LambdaExpression* System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::GetConversion() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LambdaExpression*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*
System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::New_ctor(::System::Linq::Expressions::ExpressionType nodeType, ::System::Linq::Expressions::Expression* left,
                                                                              ::System::Linq::Expressions::Expression* right, ::System::Type* type, ::System::Reflection::MethodInfo* method,
                                                                              ::System::Linq::Expressions::LambdaExpression* conversion) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression*>(nodeType, left, right, type, method, conversion));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression::OpAssignMethodConversionBinaryExpression() {}
