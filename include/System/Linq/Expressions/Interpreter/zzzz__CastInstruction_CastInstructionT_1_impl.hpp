#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/CastInstruction_CastInstructionT_1.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionT_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
template <typename T> inline int32_t GlobalNamespace::CastInstruction_CastInstructionT_1<T>::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstruction_CastInstructionT_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
template <typename T> inline void GlobalNamespace::CastInstruction_CastInstructionT_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstruction_CastInstructionT_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::CastInstruction_CastInstructionT_1<T>* GlobalNamespace::CastInstruction_CastInstructionT_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CastInstruction_CastInstructionT_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::CastInstruction_CastInstructionT_1<T>::CastInstruction_CastInstructionT_1() {}
