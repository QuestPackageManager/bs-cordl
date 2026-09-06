#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/IBoxableInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IBoxableInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::IBoxableInstruction.BoxIfIndexMatches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (::System::Linq::Expressions::Interpreter::IBoxableInstruction::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::IBoxableInstruction::BoxIfIndexMatches)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::IBoxableInstruction::BoxIfIndexMatches(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(this, ___internal_method, index);
}
