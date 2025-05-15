#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DivInstruction_DivInt32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__DivInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DivInstruction_DivInt32)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class DivInstruction_DivInt32;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DivInstruction_DivInt32);
// Dependencies System.Linq.Expressions.Interpreter.DivInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.DivInstruction/DivInt32
class CORDL_TYPE DivInstruction_DivInt32 : public ::System::Linq::Expressions::Interpreter::DivInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::DivInstruction_DivInt32* New_ctor();

  /// @brief Method Run, addr 0x40c6ed0, size 0x138, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40c6d50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DivInstruction_DivInt32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DivInstruction_DivInt32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DivInstruction_DivInt32(DivInstruction_DivInt32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DivInstruction_DivInt32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DivInstruction_DivInt32(DivInstruction_DivInt32 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13812 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DivInstruction_DivInt32, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DivInstruction_DivInt32);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DivInstruction_DivInt32*, "System.Linq.Expressions.Interpreter", "DivInstruction/DivInt32");
