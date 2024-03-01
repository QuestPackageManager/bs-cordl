#pragma once
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::LambdaExpression.get_Body
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::LambdaExpression::*)()>(
    &::System::Linq::Expressions::LambdaExpression::get_Body)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fc9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::LambdaExpression*>::get(),
                                                                               "get_Body", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::LambdaExpression::__cordl_internal_get__body() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____body;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& System::Linq::Expressions::LambdaExpression::__cordl_internal_get__body() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____body;
}
constexpr void System::Linq::Expressions::LambdaExpression::__cordl_internal_set__body(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____body)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::LambdaExpression::get_Body() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::LambdaExpression*>::get(), "get_Body",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::LambdaExpression::LambdaExpression() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
