#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EnterExceptionHandlerInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnterExceptionHandlerInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class EnterExceptionHandlerInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.EnterExceptionHandlerInstruction
class CORDL_TYPE EnterExceptionHandlerInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  /// @brief Field NonVoid, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NonVoid, put = setStaticF_NonVoid)) ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* NonVoid;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field Void, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Void, put = setStaticF_Void)) ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* Void;

  /// @brief Field _hasValue, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__hasValue, put = __cordl_internal_set__hasValue)) bool _hasValue;

  static inline ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* New_ctor(bool hasValue);

  /// @brief Method Run, addr 0x40c091c, size 0x8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr bool const& __cordl_internal_get__hasValue() const;

  constexpr bool& __cordl_internal_get__hasValue();

  constexpr void __cordl_internal_set__hasValue(bool value);

  /// @brief Method .ctor, addr 0x40c08a4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool hasValue);

  static inline ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* getStaticF_NonVoid();

  static inline ::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* getStaticF_Void();

  /// @brief Method get_ConsumedStack, addr 0x40c090c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40c08cc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40c0914, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_NonVoid(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* value);

  static inline void setStaticF_Void(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnterExceptionHandlerInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnterExceptionHandlerInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnterExceptionHandlerInstruction(EnterExceptionHandlerInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnterExceptionHandlerInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnterExceptionHandlerInstruction(EnterExceptionHandlerInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13794 };

  /// @brief Field _hasValue, offset: 0x10, size: 0x1, def value: None
  bool ____hasValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction, ____hasValue) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::EnterExceptionHandlerInstruction*, "System.Linq.Expressions.Interpreter", "EnterExceptionHandlerInstruction");
