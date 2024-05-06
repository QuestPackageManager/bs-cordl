#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/StoreFieldInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__FieldInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StoreFieldInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class StoreFieldInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::StoreFieldInstruction);
// Type: System.Linq.Expressions.Interpreter::StoreFieldInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::StoreFieldInstruction*
class CORDL_TYPE StoreFieldInstruction : public ::System::Linq::Expressions::Interpreter::FieldInstruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  static inline ::System::Linq::Expressions::Interpreter::StoreFieldInstruction* New_ctor(::System::Reflection::FieldInfo* field);

  /// @brief Method Run, addr 0x2c1b15c, size 0x58, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2c1b0ec, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::FieldInfo* field);

  /// @brief Method get_ConsumedStack, addr 0x2c1b154, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2c1b114, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StoreFieldInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StoreFieldInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StoreFieldInstruction(StoreFieldInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StoreFieldInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StoreFieldInstruction(StoreFieldInstruction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::StoreFieldInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::StoreFieldInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::StoreFieldInstruction*, "System.Linq.Expressions.Interpreter", "StoreFieldInstruction");
