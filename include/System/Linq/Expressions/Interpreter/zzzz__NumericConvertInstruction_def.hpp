#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NumericConvertInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NumericConvertInstruction)
namespace GlobalNamespace {
class NumericConvertInstruction_Checked;
}
namespace GlobalNamespace {
class NumericConvertInstruction_ToUnderlying;
}
namespace GlobalNamespace {
class NumericConvertInstruction_Unchecked;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class NumericConvertInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::NumericConvertInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction, System.TypeCode
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NumericConvertInstruction
class CORDL_TYPE NumericConvertInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using Checked = ::GlobalNamespace::NumericConvertInstruction_Checked;

  using ToUnderlying = ::GlobalNamespace::NumericConvertInstruction_ToUnderlying;

  using Unchecked = ::GlobalNamespace::NumericConvertInstruction_Unchecked;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _from, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__from, put = __cordl_internal_set__from)) ::System::TypeCode _from;

  /// @brief Field _isLiftedToNull, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isLiftedToNull, put = __cordl_internal_set__isLiftedToNull)) bool _isLiftedToNull;

  /// @brief Field _to, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__to, put = __cordl_internal_set__to)) ::System::TypeCode _to;

  /// @brief Method Convert, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* Convert(::System::Object* obj);

  static inline ::System::Linq::Expressions::Interpreter::NumericConvertInstruction* New_ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method Run, addr 0x40ff8cc, size 0xd4, virtual true, abstract: false, final true
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method ToString, addr 0x40ff9f0, size 0x16c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::TypeCode const& __cordl_internal_get__from() const;

  constexpr ::System::TypeCode& __cordl_internal_get__from();

  constexpr bool const& __cordl_internal_get__isLiftedToNull() const;

  constexpr bool& __cordl_internal_get__isLiftedToNull();

  constexpr ::System::TypeCode const& __cordl_internal_get__to() const;

  constexpr ::System::TypeCode& __cordl_internal_get__to();

  constexpr void __cordl_internal_set__from(::System::TypeCode value);

  constexpr void __cordl_internal_set__isLiftedToNull(bool value);

  constexpr void __cordl_internal_set__to(::System::TypeCode value);

  /// @brief Method .ctor, addr 0x40ff890, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method get_ConsumedStack, addr 0x40ff9e0, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x40ff9a0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x40ff9e8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NumericConvertInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NumericConvertInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NumericConvertInstruction(NumericConvertInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NumericConvertInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NumericConvertInstruction(NumericConvertInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14063 };

  /// @brief Field _from, offset: 0x10, size: 0x4, def value: None
  ::System::TypeCode ____from;

  /// @brief Field _to, offset: 0x14, size: 0x4, def value: None
  ::System::TypeCode ____to;

  /// @brief Field _isLiftedToNull, offset: 0x18, size: 0x1, def value: None
  bool ____isLiftedToNull;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::NumericConvertInstruction, ____from) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::NumericConvertInstruction, ____to) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::NumericConvertInstruction, ____isLiftedToNull) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::NumericConvertInstruction, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NumericConvertInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NumericConvertInstruction*, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction");
