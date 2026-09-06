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
constexpr ::System::Collections::Generic::Dictionary_2<T, int32_t>* const& System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::__cordl_internal_get__cases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cases;
}
template <typename T> constexpr void System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::__cordl_internal_set__cases(::System::Collections::Generic::Dictionary_2<T, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cases = value;
}
template <typename T> inline void System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::_ctor(::System::Collections::Generic::Dictionary_2<T, int32_t>* cases) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<T, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cases);
}
template <typename T> inline ::StringW System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline int32_t System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::get_ConsumedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline int32_t System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
template <typename T>
inline ::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>*
System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::New_ctor(::System::Collections::Generic::Dictionary_2<T, int32_t>* cases) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>*>(cases));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Linq::Expressions::Interpreter::IntSwitchInstruction_1<T>::IntSwitchInstruction_1() {}
