#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DivInstruction_DivUInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__DivInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DivInstruction_DivUInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class DivInstruction_DivUInt64;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DivInstruction_DivUInt64);
// Dependencies System.Linq.Expressions.Interpreter.DivInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.DivInstruction/DivUInt64
class CORDL_TYPE DivInstruction_DivUInt64 : public ::System::Linq::Expressions::Interpreter::DivInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::DivInstruction_DivUInt64* New_ctor();

  /// @brief Method Run, addr 0x40cb87c, size 0x148, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40cb20c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DivInstruction_DivUInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DivInstruction_DivUInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DivInstruction_DivUInt64(DivInstruction_DivUInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DivInstruction_DivUInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DivInstruction_DivUInt64(DivInstruction_DivUInt64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13815 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DivInstruction_DivUInt64, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DivInstruction_DivUInt64);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DivInstruction_DivUInt64*, "System.Linq.Expressions.Interpreter", "DivInstruction/DivUInt64");
