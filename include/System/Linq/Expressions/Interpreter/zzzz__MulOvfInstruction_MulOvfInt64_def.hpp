#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/MulOvfInstruction_MulOvfInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__MulOvfInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MulOvfInstruction_MulOvfInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class MulOvfInstruction_MulOvfInt64;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MulOvfInstruction_MulOvfInt64);
// Dependencies System.Linq.Expressions.Interpreter.MulOvfInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfInt64
class CORDL_TYPE MulOvfInstruction_MulOvfInt64 : public ::System::Linq::Expressions::Interpreter::MulOvfInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::MulOvfInstruction_MulOvfInt64* New_ctor();

  /// @brief Method Run, addr 0x40edae8, size 0x1fc, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40ed668, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MulOvfInstruction_MulOvfInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MulOvfInstruction_MulOvfInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MulOvfInstruction_MulOvfInt64(MulOvfInstruction_MulOvfInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MulOvfInstruction_MulOvfInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MulOvfInstruction_MulOvfInt64(MulOvfInstruction_MulOvfInt64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14007 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MulOvfInstruction_MulOvfInt64, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MulOvfInstruction_MulOvfInt64);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MulOvfInstruction_MulOvfInt64*, "System.Linq.Expressions.Interpreter", "MulOvfInstruction/MulOvfInt64");
