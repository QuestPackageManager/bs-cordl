#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/SubOvfInstruction_SubOvfInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__SubOvfInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubOvfInstruction_SubOvfInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace GlobalNamespace {
class SubOvfInstruction_SubOvfInt16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SubOvfInstruction_SubOvfInt16);
// Dependencies System.Linq.Expressions.Interpreter.SubOvfInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt16
class CORDL_TYPE SubOvfInstruction_SubOvfInt16 : public ::System::Linq::Expressions::Interpreter::SubOvfInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::SubOvfInstruction_SubOvfInt16* New_ctor();

  /// @brief Method Run, addr 0x40f72c8, size 0x24c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40f7298, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubOvfInstruction_SubOvfInt16();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubOvfInstruction_SubOvfInt16", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubOvfInstruction_SubOvfInt16(SubOvfInstruction_SubOvfInt16&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubOvfInstruction_SubOvfInt16", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubOvfInstruction_SubOvfInt16(SubOvfInstruction_SubOvfInt16 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14097 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SubOvfInstruction_SubOvfInt16, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SubOvfInstruction_SubOvfInt16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SubOvfInstruction_SubOvfInt16*, "System.Linq.Expressions.Interpreter", "SubOvfInstruction/SubOvfInt16");
