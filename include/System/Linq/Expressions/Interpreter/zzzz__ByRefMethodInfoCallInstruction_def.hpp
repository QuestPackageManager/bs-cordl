#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ByRefMethodInfoCallInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__MethodInfoCallInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByRefMethodInfoCallInstruction)
namespace System::Linq::Expressions::Interpreter {
class ByRefUpdater;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class ByRefMethodInfoCallInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction);
// Dependencies System.Linq.Expressions.Interpreter.MethodInfoCallInstruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.ByRefMethodInfoCallInstruction
class CORDL_TYPE ByRefMethodInfoCallInstruction : public ::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction {
public:
  // Declarations
  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _byrefArgs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__byrefArgs,
                      put = __cordl_internal_set__byrefArgs)) ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>
      _byrefArgs;

  static inline ::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*
  New_ctor(::System::Reflection::MethodInfo* target, int32_t argumentCount,
           ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*> byrefArgs);

  /// @brief Method Run, addr 0x40c792c, size 0x4a8, virtual true, abstract: false, final true
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*> const& __cordl_internal_get__byrefArgs() const;

  constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>& __cordl_internal_get__byrefArgs();

  constexpr void __cordl_internal_set__byrefArgs(::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*> value);

  /// @brief Method .ctor, addr 0x40c783c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* target, int32_t argumentCount,
                    ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*> byrefArgs);

  /// @brief Method get_ProducedStack, addr 0x40c787c, size 0xb0, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByRefMethodInfoCallInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ByRefMethodInfoCallInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByRefMethodInfoCallInstruction(ByRefMethodInfoCallInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByRefMethodInfoCallInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByRefMethodInfoCallInstruction(ByRefMethodInfoCallInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13779 };

  /// @brief Field _byrefArgs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*, ::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*> ____byrefArgs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction, ____byrefArgs) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction, 0x28>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*, "System.Linq.Expressions.Interpreter", "ByRefMethodInfoCallInstruction");
