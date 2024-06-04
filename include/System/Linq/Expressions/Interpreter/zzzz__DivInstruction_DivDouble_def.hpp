#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DivInstruction_DivDouble.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__DivInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DivInstruction_DivDouble)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __DivInstruction__DivDouble;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__DivInstruction__DivDouble);
// Type: ::DivDouble
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::DivInstruction::DivDouble*
class CORDL_TYPE __DivInstruction__DivDouble : public ::System::Linq::Expressions::Interpreter::DivInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__DivInstruction__DivDouble* New_ctor();

  /// @brief Method Run, addr 0x2c37530, size 0x148, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2c36c40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DivInstruction__DivDouble();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DivInstruction__DivDouble", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DivInstruction__DivDouble(__DivInstruction__DivDouble&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DivInstruction__DivDouble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DivInstruction__DivDouble(__DivInstruction__DivDouble const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__DivInstruction__DivDouble, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__DivInstruction__DivDouble);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__DivInstruction__DivDouble*, "System.Linq.Expressions.Interpreter", "DivInstruction/DivDouble");
