#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EqualInstruction_EqualUInt32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EqualInstruction_EqualUInt32)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class EqualInstruction_EqualUInt32;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EqualInstruction_EqualUInt32);
// Dependencies System.Linq.Expressions.Interpreter.EqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.EqualInstruction/EqualUInt32
class CORDL_TYPE EqualInstruction_EqualUInt32 : public ::System::Linq::Expressions::Interpreter::EqualInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::EqualInstruction_EqualUInt32* New_ctor();

  /// @brief Method Run, addr 0x40c84bc, size 0xe0, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40c7d94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EqualInstruction_EqualUInt32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EqualInstruction_EqualUInt32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EqualInstruction_EqualUInt32(EqualInstruction_EqualUInt32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EqualInstruction_EqualUInt32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EqualInstruction_EqualUInt32(EqualInstruction_EqualUInt32 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13828 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EqualInstruction_EqualUInt32, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EqualInstruction_EqualUInt32);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EqualInstruction_EqualUInt32*, "System.Linq.Expressions.Interpreter", "EqualInstruction/EqualUInt32");
