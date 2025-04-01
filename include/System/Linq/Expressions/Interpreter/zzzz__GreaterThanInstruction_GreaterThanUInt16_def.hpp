#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/GreaterThanInstruction_GreaterThanUInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GreaterThanInstruction_GreaterThanUInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GreaterThanInstruction_GreaterThanUInt16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GreaterThanInstruction_GreaterThanUInt16);
// Dependencies System.Linq.Expressions.Interpreter.GreaterThanInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.GreaterThanInstruction/GreaterThanUInt16
class CORDL_TYPE GreaterThanInstruction_GreaterThanUInt16 : public ::System::Linq::Expressions::Interpreter::GreaterThanInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::GreaterThanInstruction_GreaterThanUInt16* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x40c6c48, size 0xdc, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40c6658, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GreaterThanInstruction_GreaterThanUInt16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanInstruction_GreaterThanUInt16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GreaterThanInstruction_GreaterThanUInt16(GreaterThanInstruction_GreaterThanUInt16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanInstruction_GreaterThanUInt16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GreaterThanInstruction_GreaterThanUInt16(GreaterThanInstruction_GreaterThanUInt16 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GreaterThanInstruction_GreaterThanUInt16, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GreaterThanInstruction_GreaterThanUInt16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GreaterThanInstruction_GreaterThanUInt16*, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction/GreaterThanUInt16");
