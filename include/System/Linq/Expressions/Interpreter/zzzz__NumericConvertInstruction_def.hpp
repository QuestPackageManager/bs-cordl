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
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Linq::Expressions::Interpreter {
class __NumericConvertInstruction__Checked;
}
namespace System::Linq::Expressions::Interpreter {
class __NumericConvertInstruction__ToUnderlying;
}
namespace System::Linq::Expressions::Interpreter {
class __NumericConvertInstruction__Unchecked;
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
// Type: System.Linq.Expressions.Interpreter::NumericConvertInstruction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::NumericConvertInstruction*
class CORDL_TYPE NumericConvertInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  using Checked = ::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__Checked;

  using ToUnderlying = ::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying;

  using Unchecked = ::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__Unchecked;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _from, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__from, put = __cordl_internal_set__from))::System::TypeCode _from;

  /// @brief Field _isLiftedToNull, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isLiftedToNull, put = __cordl_internal_set__isLiftedToNull)) bool _isLiftedToNull;

  /// @brief Field _to, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__to, put = __cordl_internal_set__to))::System::TypeCode _to;

  /// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* Convert(::System::Object* obj);

  static inline ::System::Linq::Expressions::Interpreter::NumericConvertInstruction* New_ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method Run, addr 0x2c77fb0, size 0xd4, virtual true, abstract: false, final true
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method ToString, addr 0x2c780d4, size 0x228, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x2c77f74, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method get_ConsumedStack, addr 0x2c780c4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2c78084, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2c780cc, size 0x8, virtual true, abstract: false, final false
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

  /// @brief Field _from, offset: 0x10, size: 0x4, def value: None
  ::System::TypeCode ____from;

  /// @brief Field _to, offset: 0x14, size: 0x4, def value: None
  ::System::TypeCode ____to;

  /// @brief Field _isLiftedToNull, offset: 0x18, size: 0x1, def value: None
  bool ____isLiftedToNull;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::NumericConvertInstruction, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::NumericConvertInstruction, ____from) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::NumericConvertInstruction, ____to) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::NumericConvertInstruction, ____isLiftedToNull) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NumericConvertInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NumericConvertInstruction*, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction");
