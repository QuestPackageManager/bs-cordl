#pragma once
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__UnaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.get_Operand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::UnaryExpression::*)()>(
    &::System::Linq::Expressions::UnaryExpression::get_Operand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2813e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::UnaryExpression*>::get(),
                                                                               "get_Operand", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::UnaryExpression::__get__Operand_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Operand_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& System::Linq::Expressions::UnaryExpression::__get__Operand_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Operand_k__BackingField;
}
constexpr void System::Linq::Expressions::UnaryExpression::__set__Operand_k__BackingField(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Operand_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::UnaryExpression::get_Operand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::UnaryExpression*>::get(),
                                                                             "get_Operand", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::UnaryExpression::UnaryExpression() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
