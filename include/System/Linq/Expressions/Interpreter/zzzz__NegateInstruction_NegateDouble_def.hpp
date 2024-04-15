#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NegateInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NegateInstruction_NegateDouble)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __NegateInstruction__NegateDouble;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NegateInstruction__NegateDouble);
// Type: ::NegateDouble
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NegateInstruction::NegateDouble*
class CORDL_TYPE __NegateInstruction__NegateDouble : public ::System::Linq::Expressions::Interpreter::NegateInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__NegateInstruction__NegateDouble* New_ctor();

  /// @brief Method Run, addr 0x2b42ddc, size 0xb0, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2b42b2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NegateInstruction__NegateDouble();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NegateInstruction__NegateDouble", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NegateInstruction__NegateDouble(__NegateInstruction__NegateDouble&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NegateInstruction__NegateDouble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NegateInstruction__NegateDouble(__NegateInstruction__NegateDouble const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NegateInstruction__NegateDouble, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NegateInstruction__NegateDouble);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NegateInstruction__NegateDouble*, "System.Linq.Expressions.Interpreter", "NegateInstruction/NegateDouble");
