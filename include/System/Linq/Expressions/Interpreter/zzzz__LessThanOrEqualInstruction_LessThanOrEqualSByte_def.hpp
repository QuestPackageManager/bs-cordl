#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LessThanOrEqualInstruction_LessThanOrEqualSByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanOrEqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LessThanOrEqualInstruction_LessThanOrEqualSByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class LessThanOrEqualInstruction_LessThanOrEqualSByte;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte);
// Dependencies System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualSByte
class CORDL_TYPE LessThanOrEqualInstruction_LessThanOrEqualSByte : public ::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x40d72b0, size 0xdc, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40d70f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LessThanOrEqualInstruction_LessThanOrEqualSByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LessThanOrEqualInstruction_LessThanOrEqualSByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LessThanOrEqualInstruction_LessThanOrEqualSByte(LessThanOrEqualInstruction_LessThanOrEqualSByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LessThanOrEqualInstruction_LessThanOrEqualSByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LessThanOrEqualInstruction_LessThanOrEqualSByte(LessThanOrEqualInstruction_LessThanOrEqualSByte const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13928 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte*, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction/LessThanOrEqualSByte");
