#pragma once
// IWYU pragma private; include "System/Linq/Expressions/FullExpression_1.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionN_1_impl.hpp"
#include "System/Linq/Expressions/zzzz__FullExpression_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
template <typename TDelegate> constexpr ::StringW& System::Linq::Expressions::FullExpression_1<TDelegate>::__cordl_internal_get__NameCore_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NameCore_k__BackingField;
}
template <typename TDelegate> constexpr ::StringW const& System::Linq::Expressions::FullExpression_1<TDelegate>::__cordl_internal_get__NameCore_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NameCore_k__BackingField;
}
template <typename TDelegate> constexpr void System::Linq::Expressions::FullExpression_1<TDelegate>::__cordl_internal_set__NameCore_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____NameCore_k__BackingField, value);
}
template <typename TDelegate> constexpr bool& System::Linq::Expressions::FullExpression_1<TDelegate>::__cordl_internal_get__TailCallCore_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TailCallCore_k__BackingField;
}
template <typename TDelegate> constexpr bool const& System::Linq::Expressions::FullExpression_1<TDelegate>::__cordl_internal_get__TailCallCore_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TailCallCore_k__BackingField;
}
template <typename TDelegate> constexpr void System::Linq::Expressions::FullExpression_1<TDelegate>::__cordl_internal_set__TailCallCore_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TailCallCore_k__BackingField = value;
}
template <typename TDelegate>
inline void System::Linq::Expressions::FullExpression_1<TDelegate>::_ctor(::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
                                                                          ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FullExpression_1<TDelegate>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, body, name, tailCall, parameters);
}
template <typename TDelegate> inline ::StringW System::Linq::Expressions::FullExpression_1<TDelegate>::get_NameCore() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FullExpression_1<TDelegate>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TDelegate> inline bool System::Linq::Expressions::FullExpression_1<TDelegate>::get_TailCallCore() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::FullExpression_1<TDelegate>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TDelegate>
inline ::System::Linq::Expressions::FullExpression_1<TDelegate>*
System::Linq::Expressions::FullExpression_1<TDelegate>::New_ctor(::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall,
                                                                 ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* parameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::FullExpression_1<TDelegate>*>(body, name, tailCall, parameters));
}
// Ctor Parameters []
template <typename TDelegate> constexpr ::System::Linq::Expressions::FullExpression_1<TDelegate>::FullExpression_1() {}
