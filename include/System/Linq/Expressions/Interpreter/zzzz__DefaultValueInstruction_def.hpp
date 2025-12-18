#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DefaultValueInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultValueInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class DefaultValueInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::DefaultValueInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.DefaultValueInstruction
class CORDL_TYPE DefaultValueInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::System::Type* _type;

  static inline ::System::Linq::Expressions::Interpreter::DefaultValueInstruction* New_ctor(::System::Type* type);

  /// @brief Method Run, addr 0x5ddd2b0, size 0x3c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method ToString, addr 0x5ddd2ec, size 0x70, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Type* const& __cordl_internal_get__type() const;

  constexpr ::System::Type*& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__type(::System::Type* value);

  /// @brief Method .ctor, addr 0x5ddd25c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_InstructionName, addr 0x5ddd26c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x5ddd264, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultValueInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultValueInstruction(DefaultValueInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultValueInstruction(DefaultValueInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16271 };

  /// @brief Field _type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::DefaultValueInstruction, ____type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::DefaultValueInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::DefaultValueInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::DefaultValueInstruction*, "System.Linq.Expressions.Interpreter", "DefaultValueInstruction");
