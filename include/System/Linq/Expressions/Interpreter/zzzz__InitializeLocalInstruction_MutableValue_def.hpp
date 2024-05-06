#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitializeLocalInstruction_MutableValue)
namespace System::Linq::Expressions::Interpreter {
class IBoxableInstruction;
}
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __InitializeLocalInstruction__MutableValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__MutableValue);
// Type: ::MutableValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::InitializeLocalInstruction::MutableValue*
class CORDL_TYPE __InitializeLocalInstruction__MutableValue : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  /// @brief Field _type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::System::Type* _type;

  /// @brief Convert operator to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
  constexpr operator ::System::Linq::Expressions::Interpreter::IBoxableInstruction*() noexcept;

  /// @brief Method BoxIfIndexMatches, addr 0x2c3b69c, size 0x84, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(int32_t index);

  static inline ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__MutableValue* New_ctor(int32_t index, ::System::Type* type);

  /// @brief Method Run, addr 0x2c3b580, size 0x11c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Type*& __cordl_internal_get__type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__type() const;

  constexpr void __cordl_internal_set__type(::System::Type* value);

  /// @brief Method .ctor, addr 0x2c3b550, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, ::System::Type* type);

  /// @brief Method get_InstructionName, addr 0x2c3b750, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Convert to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
  constexpr ::System::Linq::Expressions::Interpreter::IBoxableInstruction* i___System__Linq__Expressions__Interpreter__IBoxableInstruction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InitializeLocalInstruction__MutableValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InitializeLocalInstruction__MutableValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InitializeLocalInstruction__MutableValue(__InitializeLocalInstruction__MutableValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InitializeLocalInstruction__MutableValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InitializeLocalInstruction__MutableValue(__InitializeLocalInstruction__MutableValue const&) = delete;

  /// @brief Field _type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__MutableValue, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__MutableValue, ____type) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__MutableValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__MutableValue*, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction/MutableValue");
