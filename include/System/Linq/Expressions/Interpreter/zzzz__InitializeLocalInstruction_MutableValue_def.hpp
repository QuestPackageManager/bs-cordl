#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InitializeLocalInstruction_MutableValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__IBoxableInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitializeLocalInstruction_MutableValue)
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
namespace GlobalNamespace {
class InitializeLocalInstruction_MutableValue;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InitializeLocalInstruction_MutableValue);
// Dependencies System.Linq.Expressions.Interpreter.IBoxableInstruction, System.Linq.Expressions.Interpreter.InitializeLocalInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.InitializeLocalInstruction/MutableValue
class CORDL_TYPE InitializeLocalInstruction_MutableValue : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  /// @brief Field _type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::System::Type* _type;

  /// @brief Convert operator to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
  constexpr operator ::System::Linq::Expressions::Interpreter::IBoxableInstruction*() noexcept;

  /// @brief Method BoxIfIndexMatches, addr 0x40eabc4, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Linq::Expressions::Interpreter::Instruction* BoxIfIndexMatches(int32_t index);

  static inline ::GlobalNamespace::InitializeLocalInstruction_MutableValue* New_ctor(int32_t index, ::System::Type* type);

  /// @brief Method Run, addr 0x40eaaa8, size 0x11c, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Type* const& __cordl_internal_get__type() const;

  constexpr ::System::Type*& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__type(::System::Type* value);

  /// @brief Method .ctor, addr 0x40eaa78, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, ::System::Type* type);

  /// @brief Method get_InstructionName, addr 0x40eac70, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Convert to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
  constexpr ::System::Linq::Expressions::Interpreter::IBoxableInstruction* i___System__Linq__Expressions__Interpreter__IBoxableInstruction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializeLocalInstruction_MutableValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializeLocalInstruction_MutableValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializeLocalInstruction_MutableValue(InitializeLocalInstruction_MutableValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializeLocalInstruction_MutableValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializeLocalInstruction_MutableValue(InitializeLocalInstruction_MutableValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13979 };

  /// @brief Field _type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitializeLocalInstruction_MutableValue, ____type) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitializeLocalInstruction_MutableValue, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InitializeLocalInstruction_MutableValue);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitializeLocalInstruction_MutableValue*, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction/MutableValue");
