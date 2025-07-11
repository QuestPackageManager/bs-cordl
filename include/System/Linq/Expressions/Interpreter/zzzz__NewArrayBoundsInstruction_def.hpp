#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NewArrayBoundsInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NewArrayBoundsInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class NewArrayBoundsInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NewArrayBoundsInstruction
class CORDL_TYPE NewArrayBoundsInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _elementType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__elementType, put = __cordl_internal_set__elementType)) ::System::Type* _elementType;

  /// @brief Field _rank, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__rank, put = __cordl_internal_set__rank)) int32_t _rank;

  static inline ::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction* New_ctor(::System::Type* elementType, int32_t rank);

  /// @brief Method Run, addr 0x40c17e8, size 0x104, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Type* const& __cordl_internal_get__elementType() const;

  constexpr ::System::Type*& __cordl_internal_get__elementType();

  constexpr int32_t const& __cordl_internal_get__rank() const;

  constexpr int32_t& __cordl_internal_get__rank();

  constexpr void __cordl_internal_set__elementType(::System::Type* value);

  constexpr void __cordl_internal_set__rank(int32_t value);

  /// @brief Method .ctor, addr 0x40c1768, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* elementType, int32_t rank);

  /// @brief Method get_ConsumedStack, addr 0x40c1798, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40c17a8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40c17a0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NewArrayBoundsInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NewArrayBoundsInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NewArrayBoundsInstruction(NewArrayBoundsInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NewArrayBoundsInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NewArrayBoundsInstruction(NewArrayBoundsInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13771 };

  /// @brief Field _elementType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____elementType;

  /// @brief Field _rank, offset: 0x18, size: 0x4, def value: None
  int32_t ____rank;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction, ____elementType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction, ____rank) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction*, "System.Linq.Expressions.Interpreter", "NewArrayBoundsInstruction");
