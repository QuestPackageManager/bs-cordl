#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InitializeLocalInstruction_ImmutableValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__IBoxableInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitializeLocalInstruction_ImmutableValue)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class InitializeLocalInstruction_ImmutableValue;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InitializeLocalInstruction_ImmutableValue);
// Dependencies System.Linq.Expressions.Interpreter.IBoxableInstruction, System.Linq.Expressions.Interpreter.InitializeLocalInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.InitializeLocalInstruction/ImmutableValue
class CORDL_TYPE InitializeLocalInstruction_ImmutableValue : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  /// @brief Field _defaultValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultValue, put = __cordl_internal_set__defaultValue)) ::System::Object* _defaultValue;

  /// @brief Convert operator to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
  constexpr operator ::System::Linq::Expressions::Interpreter::IBoxableInstruction*() noexcept;

  /// @brief Method BoxIfIndexMatches, addr 0x40ebde4, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(int32_t index);

  static inline ::GlobalNamespace::InitializeLocalInstruction_ImmutableValue* New_ctor(int32_t index, ::System::Object* defaultValue);

  /// @brief Method Run, addr 0x40ebd78, size 0x6c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Object* const& __cordl_internal_get__defaultValue() const;

  constexpr ::System::Object*& __cordl_internal_get__defaultValue();

  constexpr void __cordl_internal_set__defaultValue(::System::Object* value);

  /// @brief Method .ctor, addr 0x40ebd48, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, ::System::Object* defaultValue);

  /// @brief Method get_InstructionName, addr 0x40ebe90, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Convert to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
  constexpr ::System::Linq::Expressions::Interpreter::IBoxableInstruction* i___System__Linq__Expressions__Interpreter__IBoxableInstruction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializeLocalInstruction_ImmutableValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializeLocalInstruction_ImmutableValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializeLocalInstruction_ImmutableValue(InitializeLocalInstruction_ImmutableValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializeLocalInstruction_ImmutableValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializeLocalInstruction_ImmutableValue(InitializeLocalInstruction_ImmutableValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13972 };

  /// @brief Field _defaultValue, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____defaultValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitializeLocalInstruction_ImmutableValue, ____defaultValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitializeLocalInstruction_ImmutableValue, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InitializeLocalInstruction_ImmutableValue);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitializeLocalInstruction_ImmutableValue*, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction/ImmutableValue");
