#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NegateCheckedInstruction_NegateCheckedInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NegateCheckedInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NegateCheckedInstruction_NegateCheckedInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class NegateCheckedInstruction_NegateCheckedInt64;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt64);
// Dependencies System.Linq.Expressions.Interpreter.NegateCheckedInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt64
class CORDL_TYPE NegateCheckedInstruction_NegateCheckedInt64 : public ::System::Linq::Expressions::Interpreter::NegateCheckedInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt64* New_ctor();

  /// @brief Method Run, addr 0x40eedb0, size 0x118, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40eeb4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NegateCheckedInstruction_NegateCheckedInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NegateCheckedInstruction_NegateCheckedInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NegateCheckedInstruction_NegateCheckedInt64(NegateCheckedInstruction_NegateCheckedInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NegateCheckedInstruction_NegateCheckedInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NegateCheckedInstruction_NegateCheckedInt64(NegateCheckedInstruction_NegateCheckedInt64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14020 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt64, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt64);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt64*, "System.Linq.Expressions.Interpreter", "NegateCheckedInstruction/NegateCheckedInt64");
