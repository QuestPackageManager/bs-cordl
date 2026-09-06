#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/CastInstruction_CastInstructionT_1.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionT_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
template <typename T> inline int32_t GlobalNamespace::CastInstruction_CastInstructionT_1<T>::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CastInstruction_CastInstructionT_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
template <typename T> inline void GlobalNamespace::CastInstruction_CastInstructionT_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CastInstruction_CastInstructionT_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::CastInstruction_CastInstructionT_1<T>* GlobalNamespace::CastInstruction_CastInstructionT_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CastInstruction_CastInstructionT_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::CastInstruction_CastInstructionT_1<T>::CastInstruction_CastInstructionT_1() {}
