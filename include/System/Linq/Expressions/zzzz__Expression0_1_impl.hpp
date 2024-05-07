#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Expression0_1.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_impl.hpp"
#include "System/Linq/Expressions/zzzz__Expression0_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
template <typename TDelegate>
inline ::System::Linq::Expressions::Expression0_1<TDelegate>* System::Linq::Expressions::Expression0_1<TDelegate>::New_ctor(::System::Linq::Expressions::Expression* body) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Expression0_1<TDelegate>*>(body));
}
template <typename TDelegate> inline void System::Linq::Expressions::Expression0_1<TDelegate>::_ctor(::System::Linq::Expressions::Expression* body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Expression0_1<TDelegate>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, body);
}
template <typename TDelegate> inline int32_t System::Linq::Expressions::Expression0_1<TDelegate>::get_ParameterCount() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Expression0_1<TDelegate>*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TDelegate> inline ::System::Linq::Expressions::ParameterExpression* System::Linq::Expressions::Expression0_1<TDelegate>::GetParameter(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Expression0_1<TDelegate>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ParameterExpression*, false>(this, ___internal_method, index);
}
template <typename TDelegate>
inline ::System::Linq::Expressions::Expression_1<TDelegate>*
System::Linq::Expressions::Expression0_1<TDelegate>::Rewrite(::System::Linq::Expressions::Expression* body,
                                                             ::ArrayW<::System::Linq::Expressions::ParameterExpression*, ::Array<::System::Linq::Expressions::ParameterExpression*>*> parameters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Expression0_1<TDelegate>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression_1<TDelegate>*, false>(this, ___internal_method, body, parameters);
}
// Ctor Parameters []
template <typename TDelegate> constexpr ::System::Linq::Expressions::Expression0_1<TDelegate>::Expression0_1() {}
