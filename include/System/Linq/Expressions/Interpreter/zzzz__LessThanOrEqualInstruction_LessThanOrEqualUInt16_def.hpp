#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LessThanOrEqualInstruction_LessThanOrEqualUInt16.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanOrEqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LessThanOrEqualInstruction_LessThanOrEqualUInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class LessThanOrEqualInstruction_LessThanOrEqualUInt16;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualUInt16*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualUInt16*, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction/LessThanOrEqualUInt16");
// Dependencies System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualUInt16
class CORDL_TYPE LessThanOrEqualInstruction_LessThanOrEqualUInt16 : public ::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualUInt16* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x5fa0a2c, size 0xa4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5fa062c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LessThanOrEqualInstruction_LessThanOrEqualUInt16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LessThanOrEqualInstruction_LessThanOrEqualUInt16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LessThanOrEqualInstruction_LessThanOrEqualUInt16(LessThanOrEqualInstruction_LessThanOrEqualUInt16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LessThanOrEqualInstruction_LessThanOrEqualUInt16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LessThanOrEqualInstruction_LessThanOrEqualUInt16(LessThanOrEqualInstruction_LessThanOrEqualUInt16 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16427 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualUInt16) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
