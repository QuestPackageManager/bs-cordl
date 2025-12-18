#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/CastInstruction_CastInstructionNoT_Value.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_def.hpp"
CORDL_MODULE_EXPORT(CastInstruction_CastInstructionNoT_Value)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class CastInstructionNoT_CastInstruction_Value;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CastInstructionNoT_CastInstruction_Value);
// Dependencies System.Linq.Expressions.Interpreter.CastInstruction::CastInstructionNoT
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT/Value
class CORDL_TYPE CastInstructionNoT_CastInstruction_Value : public ::GlobalNamespace::CastInstruction_CastInstructionNoT {
public:
  // Declarations
  /// @brief Method ConvertNull, addr 0x5e0b234, size 0x38, virtual true, abstract: false, final false
  inline void ConvertNull(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  static inline ::GlobalNamespace::CastInstructionNoT_CastInstruction_Value* New_ctor(::System::Type* t);

  /// @brief Method .ctor, addr 0x5e0b0b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CastInstructionNoT_CastInstruction_Value();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CastInstructionNoT_CastInstruction_Value", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CastInstructionNoT_CastInstruction_Value(CastInstructionNoT_CastInstruction_Value&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CastInstructionNoT_CastInstruction_Value", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CastInstructionNoT_CastInstruction_Value(CastInstructionNoT_CastInstruction_Value const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16579 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CastInstructionNoT_CastInstruction_Value, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CastInstructionNoT_CastInstruction_Value);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CastInstructionNoT_CastInstruction_Value*, "System.Linq.Expressions.Interpreter", "CastInstruction/CastInstructionNoT/Value");
