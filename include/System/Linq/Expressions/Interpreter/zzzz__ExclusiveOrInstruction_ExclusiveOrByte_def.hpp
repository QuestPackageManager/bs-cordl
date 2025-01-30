#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ExclusiveOrInstruction_ExclusiveOrByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExclusiveOrInstruction_ExclusiveOrByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class ExclusiveOrInstruction_ExclusiveOrByte;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte);
// Dependencies System.Linq.Expressions.Interpreter.ExclusiveOrInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.ExclusiveOrInstruction/ExclusiveOrByte
class CORDL_TYPE ExclusiveOrInstruction_ExclusiveOrByte : public ::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte* New_ctor();

  /// @brief Method Run, addr 0x40cb7c0, size 0xe4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40cba08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExclusiveOrInstruction_ExclusiveOrByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExclusiveOrInstruction_ExclusiveOrByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExclusiveOrInstruction_ExclusiveOrByte(ExclusiveOrInstruction_ExclusiveOrByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExclusiveOrInstruction_ExclusiveOrByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExclusiveOrInstruction_ExclusiveOrByte(ExclusiveOrInstruction_ExclusiveOrByte const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrByte*, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction/ExclusiveOrByte");
