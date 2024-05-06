#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NewArrayInitInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class NewArrayInitInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::NewArrayInitInstruction);
// Type: System.Linq.Expressions.Interpreter::NewArrayInitInstruction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::NewArrayInitInstruction*
class CORDL_TYPE NewArrayInitInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _elementCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__elementCount, put = __cordl_internal_set__elementCount)) int32_t _elementCount;

  /// @brief Field _elementType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__elementType, put = __cordl_internal_set__elementType))::System::Type* _elementType;

  static inline ::System::Linq::Expressions::Interpreter::NewArrayInitInstruction* New_ctor(::System::Type* elementType, int32_t elementCount);

  /// @brief Method Run, addr 0x2c1102c, size 0x88, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr int32_t const& __cordl_internal_get__elementCount() const;

  constexpr int32_t& __cordl_internal_get__elementCount();

  constexpr ::System::Type*& __cordl_internal_get__elementType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__elementType() const;

  constexpr void __cordl_internal_set__elementCount(int32_t value);

  constexpr void __cordl_internal_set__elementType(::System::Type* value);

  /// @brief Method .ctor, addr 0x2c10fac, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* elementType, int32_t elementCount);

  /// @brief Method get_ConsumedStack, addr 0x2c10fdc, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2c10fec, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2c10fe4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NewArrayInitInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NewArrayInitInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NewArrayInitInstruction(NewArrayInitInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NewArrayInitInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NewArrayInitInstruction(NewArrayInitInstruction const&) = delete;

  /// @brief Field _elementType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____elementType;

  /// @brief Field _elementCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____elementCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::NewArrayInitInstruction, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::NewArrayInitInstruction, ____elementType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::NewArrayInitInstruction, ____elementCount) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NewArrayInitInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NewArrayInitInstruction*, "System.Linq.Expressions.Interpreter", "NewArrayInitInstruction");
