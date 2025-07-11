#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/GreaterThanOrEqualInstruction_GreaterThanOrEqualByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GreaterThanOrEqualInstruction_GreaterThanOrEqualByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GreaterThanOrEqualInstruction_GreaterThanOrEqualByte;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualByte);
// Dependencies System.Linq.Expressions.Interpreter.GreaterThanOrEqualInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.GreaterThanOrEqualInstruction/GreaterThanOrEqualByte
class CORDL_TYPE GreaterThanOrEqualInstruction_GreaterThanOrEqualByte : public ::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualByte* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x40ccc14, size 0xdc, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40cc6d8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GreaterThanOrEqualInstruction_GreaterThanOrEqualByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanOrEqualInstruction_GreaterThanOrEqualByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GreaterThanOrEqualInstruction_GreaterThanOrEqualByte(GreaterThanOrEqualInstruction_GreaterThanOrEqualByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanOrEqualInstruction_GreaterThanOrEqualByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GreaterThanOrEqualInstruction_GreaterThanOrEqualByte(GreaterThanOrEqualInstruction_GreaterThanOrEqualByte const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13878 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualByte, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualByte);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualByte*, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction/GreaterThanOrEqualByte");
