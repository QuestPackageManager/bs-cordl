#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ModuloInstruction_ModuloSingle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__ModuloInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModuloInstruction_ModuloSingle)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __ModuloInstruction__ModuloSingle;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__ModuloInstruction__ModuloSingle);
// Type: ::ModuloSingle
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::ModuloInstruction::ModuloSingle*
class CORDL_TYPE __ModuloInstruction__ModuloSingle : public ::System::Linq::Expressions::Interpreter::ModuloInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__ModuloInstruction__ModuloSingle* New_ctor();

  /// @brief Method Run, addr 0x407521c, size 0x14c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x4074910, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ModuloInstruction__ModuloSingle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ModuloInstruction__ModuloSingle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ModuloInstruction__ModuloSingle(__ModuloInstruction__ModuloSingle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ModuloInstruction__ModuloSingle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ModuloInstruction__ModuloSingle(__ModuloInstruction__ModuloSingle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13947 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__ModuloInstruction__ModuloSingle, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__ModuloInstruction__ModuloSingle);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__ModuloInstruction__ModuloSingle*, "System.Linq.Expressions.Interpreter", "ModuloInstruction/ModuloSingle");
