#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/MethodInfoCallInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__CallInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodInfoCallInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class MethodInfoCallInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction);
// Dependencies System.Linq.Expressions.Interpreter.CallInstruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.MethodInfoCallInstruction
class CORDL_TYPE MethodInfoCallInstruction : public ::System::Linq::Expressions::Interpreter::CallInstruction {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _argumentCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__argumentCount, put = __cordl_internal_set__argumentCount)) int32_t _argumentCount;

  /// @brief Field _target, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__target, put = __cordl_internal_set__target)) ::System::Reflection::MethodInfo* _target;

  /// @brief Method GetArgs, addr 0x40c2db8, size 0x184, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetArgs(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, int32_t first, int32_t skip);

  static inline ::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction* New_ctor(::System::Reflection::MethodInfo* target, int32_t argumentCount);

  /// @brief Method Run, addr 0x40c2ab8, size 0x300, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method ToString, addr 0x40c2f3c, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get__argumentCount() const;

  constexpr int32_t& __cordl_internal_get__argumentCount();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__target() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__target();

  constexpr void __cordl_internal_set__argumentCount(int32_t value);

  constexpr void __cordl_internal_set__target(::System::Reflection::MethodInfo* value);

  /// @brief Method .ctor, addr 0x40c27fc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* target, int32_t argumentCount);

  /// @brief Method get_ArgumentCount, addr 0x40c2a00, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

  /// @brief Method get_ProducedStack, addr 0x40c2a08, size 0xb0, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodInfoCallInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodInfoCallInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodInfoCallInstruction(MethodInfoCallInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodInfoCallInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodInfoCallInstruction(MethodInfoCallInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13779 };

  /// @brief Field _target, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____target;

  /// @brief Field _argumentCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____argumentCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction, ____target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction, ____argumentCount) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction*, "System.Linq.Expressions.Interpreter", "MethodInfoCallInstruction");
