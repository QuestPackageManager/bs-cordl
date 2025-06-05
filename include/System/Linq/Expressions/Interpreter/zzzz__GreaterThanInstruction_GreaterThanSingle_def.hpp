#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/GreaterThanInstruction_GreaterThanSingle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GreaterThanInstruction_GreaterThanSingle)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GreaterThanInstruction_GreaterThanSingle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GreaterThanInstruction_GreaterThanSingle);
// Dependencies System.Linq.Expressions.Interpreter.GreaterThanInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.GreaterThanInstruction/GreaterThanSingle
class CORDL_TYPE GreaterThanInstruction_GreaterThanSingle : public ::System::Linq::Expressions::Interpreter::GreaterThanInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::GreaterThanInstruction_GreaterThanSingle* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x40cbdd8, size 0xe4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40cb5cc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GreaterThanInstruction_GreaterThanSingle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanInstruction_GreaterThanSingle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GreaterThanInstruction_GreaterThanSingle(GreaterThanInstruction_GreaterThanSingle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GreaterThanInstruction_GreaterThanSingle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GreaterThanInstruction_GreaterThanSingle(GreaterThanInstruction_GreaterThanSingle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13870 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GreaterThanInstruction_GreaterThanSingle, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GreaterThanInstruction_GreaterThanSingle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GreaterThanInstruction_GreaterThanSingle*, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction/GreaterThanSingle");
