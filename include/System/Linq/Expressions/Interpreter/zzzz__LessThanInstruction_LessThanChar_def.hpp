#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LessThanInstruction_LessThanChar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LessThanInstruction_LessThanChar)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class LessThanInstruction_LessThanChar;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LessThanInstruction_LessThanChar);
// Dependencies System.Linq.Expressions.Interpreter.LessThanInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LessThanInstruction/LessThanChar
class CORDL_TYPE LessThanInstruction_LessThanChar : public ::System::Linq::Expressions::Interpreter::LessThanInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::LessThanInstruction_LessThanChar* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x40e3d80, size 0xdc, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40e3a60, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LessThanInstruction_LessThanChar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LessThanInstruction_LessThanChar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LessThanInstruction_LessThanChar(LessThanInstruction_LessThanChar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LessThanInstruction_LessThanChar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LessThanInstruction_LessThanChar(LessThanInstruction_LessThanChar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13918 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LessThanInstruction_LessThanChar, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LessThanInstruction_LessThanChar);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LessThanInstruction_LessThanChar*, "System.Linq.Expressions.Interpreter", "LessThanInstruction/LessThanChar");
