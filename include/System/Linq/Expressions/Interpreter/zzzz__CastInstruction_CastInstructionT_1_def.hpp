#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/CastInstruction_CastInstructionT_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CastInstruction_CastInstructionT_1)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class CastInstruction_CastInstructionT_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::CastInstruction_CastInstructionT_1);
// Dependencies System.Linq.Expressions.Interpreter.CastInstruction
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionT`1<T>
class CORDL_TYPE CastInstruction_CastInstructionT_1 : public ::System::Linq::Expressions::Interpreter::CastInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::CastInstruction_CastInstructionT_1<T>* New_ctor();

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CastInstruction_CastInstructionT_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CastInstruction_CastInstructionT_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CastInstruction_CastInstructionT_1(CastInstruction_CastInstructionT_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CastInstruction_CastInstructionT_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CastInstruction_CastInstructionT_1(CastInstruction_CastInstructionT_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16577 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::CastInstruction_CastInstructionT_1, "System.Linq.Expressions.Interpreter", "CastInstruction/CastInstructionT`1");
