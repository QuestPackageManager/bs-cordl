#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/StringSwitchInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringSwitchInstruction)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Runtime::CompilerServices {
template <typename T> class StrongBox_1;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class StringSwitchInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::StringSwitchInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.StringSwitchInstruction
class CORDL_TYPE StringSwitchInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  /// @brief Field _cases, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cases, put = __cordl_internal_set__cases)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _cases;

  /// @brief Field _nullCase, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__nullCase, put = __cordl_internal_set__nullCase)) ::System::Runtime::CompilerServices::StrongBox_1<int32_t>* _nullCase;

  static inline ::System::Linq::Expressions::Interpreter::StringSwitchInstruction* New_ctor(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* cases,
                                                                                            ::System::Runtime::CompilerServices::StrongBox_1<int32_t>* nullCase);

  /// @brief Method Run, addr 0x40c5a64, size 0xcc, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& __cordl_internal_get__cases() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get__cases();

  constexpr ::System::Runtime::CompilerServices::StrongBox_1<int32_t>* const& __cordl_internal_get__nullCase() const;

  constexpr ::System::Runtime::CompilerServices::StrongBox_1<int32_t>*& __cordl_internal_get__nullCase();

  constexpr void __cordl_internal_set__cases(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set__nullCase(::System::Runtime::CompilerServices::StrongBox_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x40c59f0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* cases, ::System::Runtime::CompilerServices::StrongBox_1<int32_t>* nullCase);

  /// @brief Method get_ConsumedStack, addr 0x40c5a5c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40c5a1c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringSwitchInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringSwitchInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringSwitchInstruction(StringSwitchInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringSwitchInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringSwitchInstruction(StringSwitchInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13800 };

  /// @brief Field _cases, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ____cases;

  /// @brief Field _nullCase, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::StrongBox_1<int32_t>* ____nullCase;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::StringSwitchInstruction, ____cases) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::StringSwitchInstruction, ____nullCase) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::StringSwitchInstruction, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::StringSwitchInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::StringSwitchInstruction*, "System.Linq.Expressions.Interpreter", "StringSwitchInstruction");
