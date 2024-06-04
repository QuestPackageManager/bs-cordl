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
// Type: System.Linq.Expressions.Interpreter::DefaultValueInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::DefaultValueInstruction*
class CORDL_TYPE DefaultValueInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::System::Type* _type;

  static inline ::System::Linq::Expressions::Interpreter::DefaultValueInstruction* New_ctor(::System::Type* type);

  /// @brief Method Run, addr 0x2c367b8, size 0x38, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method ToString, addr 0x2c367f0, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Type*& __cordl_internal_get__type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__type() const;

  constexpr void __cordl_internal_set__type(::System::Type* value);

  /// @brief Method .ctor, addr 0x2c36748, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_InstructionName, addr 0x2c36778, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2c36770, size 0x8, virtual true, abstract: false, final false
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

  /// @brief Field _type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::DefaultValueInstruction, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::DefaultValueInstruction, ____type) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::DefaultValueInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::DefaultValueInstruction*, "System.Linq.Expressions.Interpreter", "DefaultValueInstruction");
