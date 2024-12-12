#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ExclusiveOrInstruction_ExclusiveOrSByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExclusiveOrInstruction_ExclusiveOrSByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class ExclusiveOrInstruction_ExclusiveOrSByte;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte);
// Dependencies System.Linq.Expressions.Interpreter.ExclusiveOrInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.ExclusiveOrInstruction/ExclusiveOrSByte
class CORDL_TYPE ExclusiveOrInstruction_ExclusiveOrSByte : public ::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte* New_ctor();

  /// @brief Method Run, addr 0x40c8180, size 0xf4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40c8160, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExclusiveOrInstruction_ExclusiveOrSByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExclusiveOrInstruction_ExclusiveOrSByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExclusiveOrInstruction_ExclusiveOrSByte(ExclusiveOrInstruction_ExclusiveOrSByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExclusiveOrInstruction_ExclusiveOrSByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExclusiveOrInstruction_ExclusiveOrSByte(ExclusiveOrInstruction_ExclusiveOrSByte const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13841 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrSByte*, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction/ExclusiveOrSByte");
