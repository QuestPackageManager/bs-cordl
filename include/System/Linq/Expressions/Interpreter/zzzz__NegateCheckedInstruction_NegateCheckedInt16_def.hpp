#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NegateCheckedInstruction_NegateCheckedInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NegateCheckedInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NegateCheckedInstruction_NegateCheckedInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NegateCheckedInstruction_NegateCheckedInt16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt16);
// Dependencies System.Linq.Expressions.Interpreter.NegateCheckedInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt16
class CORDL_TYPE NegateCheckedInstruction_NegateCheckedInt16 : public ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt16* New_ctor();

  /// @brief Method Run, addr 0x40ea0e0, size 0x13c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40e9fa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NegateCheckedInstruction_NegateCheckedInt16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NegateCheckedInstruction_NegateCheckedInt16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NegateCheckedInstruction_NegateCheckedInt16(NegateCheckedInstruction_NegateCheckedInt16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NegateCheckedInstruction_NegateCheckedInt16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NegateCheckedInstruction_NegateCheckedInt16(NegateCheckedInstruction_NegateCheckedInt16 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14017 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt16, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt16*, "System.Linq.Expressions.Interpreter", "NegateCheckedInstruction/NegateCheckedInt16");
