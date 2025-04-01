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
namespace GlobalNamespace {
class InitializeLocalInstruction_ImmutableBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InitializeLocalInstruction_ImmutableBox);
// Dependencies System.Linq.Expressions.Interpreter.InitializeLocalInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.InitializeLocalInstruction/ImmutableBox
class CORDL_TYPE InitializeLocalInstruction_ImmutableBox : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  /// @brief Field _defaultValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultValue, put = __cordl_internal_set__defaultValue)) ::System::Object* _defaultValue;

  static inline ::GlobalNamespace::InitializeLocalInstruction_ImmutableBox* New_ctor(int32_t index, ::System::Object* defaultValue);

  /// @brief Method Run, addr 0x40e5718, size 0xd0, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Object* const& __cordl_internal_get__defaultValue() const;

  constexpr ::System::Object*& __cordl_internal_get__defaultValue();

  constexpr void __cordl_internal_set__defaultValue(::System::Object* value);

  /// @brief Method .ctor, addr 0x40e56a8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, ::System::Object* defaultValue);

  /// @brief Method get_InstructionName, addr 0x40e57e8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializeLocalInstruction_ImmutableBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializeLocalInstruction_ImmutableBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializeLocalInstruction_ImmutableBox(InitializeLocalInstruction_ImmutableBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializeLocalInstruction_ImmutableBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializeLocalInstruction_ImmutableBox(InitializeLocalInstruction_ImmutableBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13973 };

  /// @brief Field _defaultValue, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____defaultValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitializeLocalInstruction_ImmutableBox, ____defaultValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitializeLocalInstruction_ImmutableBox, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InitializeLocalInstruction_ImmutableBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitializeLocalInstruction_ImmutableBox*, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction/ImmutableBox");
