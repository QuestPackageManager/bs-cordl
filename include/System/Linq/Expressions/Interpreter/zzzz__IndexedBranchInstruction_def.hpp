#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/IndexedBranchInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IndexedBranchInstruction)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Linq::Expressions::Interpreter {
struct RuntimeLabel;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class IndexedBranchInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::IndexedBranchInstruction);
// Dependencies System.Linq.Expressions.Interpreter.Instruction
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.IndexedBranchInstruction
class CORDL_TYPE IndexedBranchInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  /// @brief Field _labelIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__labelIndex, put = __cordl_internal_set__labelIndex)) int32_t _labelIndex;

  /// @brief Method GetLabel, addr 0x40d1730, size 0x48, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::RuntimeLabel GetLabel(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  static inline ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction* New_ctor(int32_t labelIndex);

  /// @brief Method ToDebugString, addr 0x40d1778, size 0xdc, virtual true, abstract: false, final false
  inline ::StringW ToDebugString(int32_t instructionIndex, ::System::Object* cookie, ::System::Func_2<int32_t, int32_t>* labelIndexer,
                                 ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects);

  /// @brief Method ToString, addr 0x40d1854, size 0x94, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get__labelIndex() const;

  constexpr int32_t& __cordl_internal_get__labelIndex();

  constexpr void __cordl_internal_set__labelIndex(int32_t value);

  /// @brief Method .ctor, addr 0x40d1708, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t labelIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexedBranchInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IndexedBranchInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IndexedBranchInstruction(IndexedBranchInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IndexedBranchInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IndexedBranchInstruction(IndexedBranchInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13786 };

  /// @brief Field _labelIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____labelIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::IndexedBranchInstruction, ____labelIndex) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::IndexedBranchInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::IndexedBranchInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*, "System.Linq.Expressions.Interpreter", "IndexedBranchInstruction");
