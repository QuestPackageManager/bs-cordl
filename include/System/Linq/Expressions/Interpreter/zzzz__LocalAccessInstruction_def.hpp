#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LocalAccessInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalAccessInstruction)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LocalAccessInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LocalAccessInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LocalAccessInstruction
class CORDL_TYPE LocalAccessInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  /// @brief Field _index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  static inline ::System::Linq::Expressions::Interpreter::LocalAccessInstruction* New_ctor(int32_t index);

  /// @brief Method ToDebugString, addr 0x40f68bc, size 0x180, virtual true, abstract: false, final false
  inline ::StringW ToDebugString(int32_t instructionIndex, ::System::Object* cookie, ::System::Func_2<int32_t, int32_t>* labelIndexer,
                                 ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects);

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__index(int32_t value);

  /// @brief Method .ctor, addr 0x40f6894, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalAccessInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalAccessInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalAccessInstruction(LocalAccessInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalAccessInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalAccessInstruction(LocalAccessInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13962 };

  /// @brief Field _index, offset: 0x10, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::LocalAccessInstruction, ____index) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LocalAccessInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LocalAccessInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LocalAccessInstruction*, "System.Linq.Expressions.Interpreter", "LocalAccessInstruction");
