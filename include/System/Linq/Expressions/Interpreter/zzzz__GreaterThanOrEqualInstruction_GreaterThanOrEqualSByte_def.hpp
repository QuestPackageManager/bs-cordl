#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte);
// Dependencies System.Linq.Expressions.Interpreter.GreaterThanOrEqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.GreaterThanOrEqualInstruction/GreaterThanOrEqualSByte
class CORDL_TYPE GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte : public ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x5de21dc, size 0xa4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5de2184, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte(GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte(GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16334 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte*, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction/GreaterThanOrEqualSByte");
