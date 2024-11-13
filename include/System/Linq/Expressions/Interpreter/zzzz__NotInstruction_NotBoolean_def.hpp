#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotInstruction_NotBoolean.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NotInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotInstruction_NotBoolean)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __NotInstruction__NotBoolean;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NotInstruction__NotBoolean);
// Type: ::NotBoolean
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NotInstruction::NotBoolean*
class CORDL_TYPE __NotInstruction__NotBoolean : public ::System::Linq::Expressions::Interpreter::NotInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__NotInstruction__NotBoolean* New_ctor();

  /// @brief Method Run, addr 0x408ef94, size 0xa8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x408ef4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NotInstruction__NotBoolean();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NotInstruction__NotBoolean", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NotInstruction__NotBoolean(__NotInstruction__NotBoolean&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NotInstruction__NotBoolean", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NotInstruction__NotBoolean(__NotInstruction__NotBoolean const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14010 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NotInstruction__NotBoolean, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NotInstruction__NotBoolean);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NotInstruction__NotBoolean*, "System.Linq.Expressions.Interpreter", "NotInstruction/NotBoolean");
