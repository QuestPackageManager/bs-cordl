#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\InitializeLocalInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalAccessInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_ImmutableBox_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_ImmutableRefBox_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_ImmutableValue_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_MutableBox_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_MutableValue_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_ParameterBox_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_Parameter_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_Reference_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb2e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InitializeLocalInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::InitializeLocalInstruction::_ctor(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::InitializeLocalInstruction*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction* System::Linq::Expressions::Interpreter::InitializeLocalInstruction::New_ctor(int32_t index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::InitializeLocalInstruction*>(index));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::InitializeLocalInstruction() {}
