#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/IBoxableInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IBoxableInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::IBoxableInstruction::BoxIfIndexMatches(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(this, ___internal_method, index);
}
