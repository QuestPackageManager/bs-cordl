#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\GreaterThanInstruction_GreaterThanSByte.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GreaterThanInstruction_GreaterThanSByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GreaterThanInstruction_GreaterThanSByte;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GreaterThanInstruction_GreaterThanSByte*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GreaterThanInstruction_GreaterThanSByte*, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction/GreaterThanSByte");
// Dependencies System.Linq.Expressions.Interpreter.GreaterThanInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.GreaterThanInstruction/GreaterThanSByte
class CORDL_TYPE GreaterThanInstruction_GreaterThanSByte : public ::System::Linq::Expressions::Interpreter::GreaterThanInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::GreaterThanInstruction_GreaterThanSByte* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x5f95cb4, size 0xa4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x5f95c5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GreaterThanInstruction_GreaterThanSByte();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanInstruction_GreaterThanSByte", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GreaterThanInstruction_GreaterThanSByte(GreaterThanInstruction_GreaterThanSByte&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanInstruction_GreaterThanSByte", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GreaterThanInstruction_GreaterThanSByte(GreaterThanInstruction_GreaterThanSByte const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16354 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GreaterThanInstruction_GreaterThanSByte) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
