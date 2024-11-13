#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/IntSwitchInstruction_1.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IntSwitchInstruction_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::Dictionary_2<T, int32_t>*& System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::__cordl_internal_get__cases() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cases;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<T, int32_t>*> const&
System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::__cordl_internal_get__cases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cases;
}
template <typename T> constexpr void System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::__cordl_internal_set__cases(::System::Collections::Generic::Dictionary_2<T, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____cases, value);
}
template <typename T>
inline ::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>*
System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::New_ctor(::System::Collections::Generic::Dictionary_2<T, int32_t>* cases) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>*>(cases));
}
template <typename T> inline void System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::_ctor(::System::Collections::Generic::Dictionary_2<T, int32_t>* cases) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<T, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cases);
}
template <typename T> inline ::StringW System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::IntSwitchInstruction_1() {}
