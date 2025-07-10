#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LessThanInstruction_LessThanSingle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LessThanInstruction_LessThanSingle)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class LessThanInstruction_LessThanSingle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LessThanInstruction_LessThanSingle);
// Dependencies System.Linq.Expressions.Interpreter.LessThanInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LessThanInstruction/LessThanSingle
class CORDL_TYPE LessThanInstruction_LessThanSingle : public ::System::Linq::Expressions::Interpreter::LessThanInstruction {
public:
  // Declarations
  static inline ::GlobalNamespace::LessThanInstruction_LessThanSingle* New_ctor(::System::Object* nullValue);

  /// @brief Method Run, addr 0x40d6ad8, size 0xe4, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x40d62cc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* nullValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LessThanInstruction_LessThanSingle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LessThanInstruction_LessThanSingle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LessThanInstruction_LessThanSingle(LessThanInstruction_LessThanSingle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LessThanInstruction_LessThanSingle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LessThanInstruction_LessThanSingle(LessThanInstruction_LessThanSingle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13925 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LessThanInstruction_LessThanSingle, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LessThanInstruction_LessThanSingle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LessThanInstruction_LessThanSingle*, "System.Linq.Expressions.Interpreter", "LessThanInstruction/LessThanSingle");
