#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/AndInstruction_AndUInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__AndInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndInstruction_AndUInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __AndInstruction__AndUInt64;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__AndInstruction__AndUInt64);
// Type: ::AndUInt64
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::AndInstruction::AndUInt64*
class CORDL_TYPE __AndInstruction__AndUInt64 : public ::System::Linq::Expressions::Interpreter::AndInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__AndInstruction__AndUInt64* New_ctor();

  /// @brief Method Run, addr 0x405e8fc, size 0x100, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x405e228, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AndInstruction__AndUInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AndInstruction__AndUInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AndInstruction__AndUInt64(__AndInstruction__AndUInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AndInstruction__AndUInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AndInstruction__AndUInt64(__AndInstruction__AndUInt64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13727 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__AndInstruction__AndUInt64, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__AndInstruction__AndUInt64);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__AndInstruction__AndUInt64*, "System.Linq.Expressions.Interpreter", "AndInstruction/AndUInt64");
