#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/IBoxableInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IBoxableInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class IBoxableInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::IBoxableInstruction);
// Type: System.Linq.Expressions.Interpreter::IBoxableInstruction
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::IBoxableInstruction*
class CORDL_TYPE IBoxableInstruction {
public:
  // Declarations
  /// @brief Method BoxIfIndexMatches, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "IBoxableInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBoxableInstruction(IBoxableInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBoxableInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBoxableInstruction(IBoxableInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13915 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::IBoxableInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::IBoxableInstruction*, "System.Linq.Expressions.Interpreter", "IBoxableInstruction");
