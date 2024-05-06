#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__DecrementInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecrementInstruction_DecrementSingle)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __DecrementInstruction__DecrementSingle;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementSingle);
// Type: ::DecrementSingle
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::DecrementInstruction::DecrementSingle*
class CORDL_TYPE __DecrementInstruction__DecrementSingle : public ::System::Linq::Expressions::Interpreter::DecrementInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementSingle* New_ctor();

  /// @brief Method Run, addr 0x2c15ef0, size 0xb4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2c15ae4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DecrementInstruction__DecrementSingle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DecrementInstruction__DecrementSingle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DecrementInstruction__DecrementSingle(__DecrementInstruction__DecrementSingle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DecrementInstruction__DecrementSingle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DecrementInstruction__DecrementSingle(__DecrementInstruction__DecrementSingle const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementSingle, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementSingle);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementSingle*, "System.Linq.Expressions.Interpreter", "DecrementInstruction/DecrementSingle");
