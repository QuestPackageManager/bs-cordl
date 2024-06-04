#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InitializeLocalInstruction_ImmutableBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitializeLocalInstruction_ImmutableBox)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __InitializeLocalInstruction__ImmutableBox;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox);
// Type: ::ImmutableBox
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::InitializeLocalInstruction::ImmutableBox*
class CORDL_TYPE __InitializeLocalInstruction__ImmutableBox : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  /// @brief Field _defaultValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultValue, put = __cordl_internal_set__defaultValue))::System::Object* _defaultValue;

  static inline ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox* New_ctor(int32_t index, ::System::Object* defaultValue);

  /// @brief Method Run, addr 0x2c5c7dc, size 0xd0, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Object*& __cordl_internal_get__defaultValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__defaultValue() const;

  constexpr void __cordl_internal_set__defaultValue(::System::Object* value);

  /// @brief Method .ctor, addr 0x2c5c76c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, ::System::Object* defaultValue);

  /// @brief Method get_InstructionName, addr 0x2c5c8ac, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InitializeLocalInstruction__ImmutableBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InitializeLocalInstruction__ImmutableBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InitializeLocalInstruction__ImmutableBox(__InitializeLocalInstruction__ImmutableBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InitializeLocalInstruction__ImmutableBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InitializeLocalInstruction__ImmutableBox(__InitializeLocalInstruction__ImmutableBox const&) = delete;

  /// @brief Field _defaultValue, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____defaultValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox, ____defaultValue) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__ImmutableBox*, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction/ImmutableBox");
