#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__AddInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AddInstruction_AddSingle)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __AddInstruction__AddSingle;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__AddInstruction__AddSingle);
// Type: ::AddSingle
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::AddInstruction::AddSingle*
class CORDL_TYPE __AddInstruction__AddSingle : public ::System::Linq::Expressions::Interpreter::AddInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__AddInstruction__AddSingle* New_ctor();

  /// @brief Method Run, addr 0x2b10730, size 0x148, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2b0ff80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AddInstruction__AddSingle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AddInstruction__AddSingle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AddInstruction__AddSingle(__AddInstruction__AddSingle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AddInstruction__AddSingle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AddInstruction__AddSingle(__AddInstruction__AddSingle const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__AddInstruction__AddSingle, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__AddInstruction__AddSingle);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__AddInstruction__AddSingle*, "System.Linq.Expressions.Interpreter", "AddInstruction/AddSingle");
