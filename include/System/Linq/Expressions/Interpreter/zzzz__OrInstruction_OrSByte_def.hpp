#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/OrInstruction_OrSByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__OrInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OrInstruction_OrSByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class OrInstruction_OrSByte;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OrInstruction_OrSByte);
// Dependencies System.Linq.Expressions.Interpreter.OrInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.OrInstruction/OrSByte
class CORDL_TYPE OrInstruction_OrSByte : public ::System::Linq::Expressions::Interpreter::OrInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::OrInstruction_OrSByte* New_ctor();

  /// @brief Method Run, addr 0x40f4640, size 0xf4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40f45f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OrInstruction_OrSByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OrInstruction_OrSByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OrInstruction_OrSByte(OrInstruction_OrSByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OrInstruction_OrSByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OrInstruction_OrSByte(OrInstruction_OrSByte const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14064 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OrInstruction_OrSByte, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OrInstruction_OrSByte);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OrInstruction_OrSByte*, "System.Linq.Expressions.Interpreter", "OrInstruction/OrSByte");
