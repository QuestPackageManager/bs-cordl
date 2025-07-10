#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/BranchLabel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BranchLabel)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Linq::Expressions::Interpreter {
class InstructionList;
}
namespace System::Linq::Expressions::Interpreter {
struct RuntimeLabel;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class BranchLabel;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::BranchLabel);
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.BranchLabel
class CORDL_TYPE BranchLabel : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HasRuntimeLabel)) bool HasRuntimeLabel;

  __declspec(property(get = get_LabelIndex, put = set_LabelIndex)) int32_t LabelIndex;

  __declspec(property(get = get_TargetIndex)) int32_t TargetIndex;

  /// @brief Field <LabelIndex>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__LabelIndex_k__BackingField, put = __cordl_internal_set__LabelIndex_k__BackingField)) int32_t _LabelIndex_k__BackingField;

  /// @brief Field _continuationStackDepth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__continuationStackDepth, put = __cordl_internal_set__continuationStackDepth)) int32_t _continuationStackDepth;

  /// @brief Field _forwardBranchFixups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__forwardBranchFixups, put = __cordl_internal_set__forwardBranchFixups)) ::System::Collections::Generic::List_1<int32_t>* _forwardBranchFixups;

  /// @brief Field _stackDepth, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__stackDepth, put = __cordl_internal_set__stackDepth)) int32_t _stackDepth;

  /// @brief Field _targetIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__targetIndex, put = __cordl_internal_set__targetIndex)) int32_t _targetIndex;

  /// @brief Method AddBranch, addr 0x40c2008, size 0x128, virtual false, abstract: false, final false
  inline void AddBranch(::System::Linq::Expressions::Interpreter::InstructionList* instructions, int32_t branchIndex);

  /// @brief Method FixupBranch, addr 0x40c1fdc, size 0x2c, virtual false, abstract: false, final false
  inline void FixupBranch(::System::Linq::Expressions::Interpreter::InstructionList* instructions, int32_t branchIndex);

  /// @brief Method Mark, addr 0x40c1e60, size 0x17c, virtual false, abstract: false, final false
  inline void Mark(::System::Linq::Expressions::Interpreter::InstructionList* instructions);

  static inline ::System::Linq::Expressions::Interpreter::BranchLabel* New_ctor();

  /// @brief Method ToRuntimeLabel, addr 0x40c1e54, size 0xc, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::RuntimeLabel ToRuntimeLabel();

  constexpr int32_t const& __cordl_internal_get__LabelIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LabelIndex_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__continuationStackDepth() const;

  constexpr int32_t& __cordl_internal_get__continuationStackDepth();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__forwardBranchFixups() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__forwardBranchFixups();

  constexpr int32_t const& __cordl_internal_get__stackDepth() const;

  constexpr int32_t& __cordl_internal_get__stackDepth();

  constexpr int32_t const& __cordl_internal_get__targetIndex() const;

  constexpr int32_t& __cordl_internal_get__targetIndex();

  constexpr void __cordl_internal_set__LabelIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__continuationStackDepth(int32_t value);

  constexpr void __cordl_internal_set__forwardBranchFixups(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set__stackDepth(int32_t value);

  constexpr void __cordl_internal_set__targetIndex(int32_t value);

  /// @brief Method .ctor, addr 0x40c2130, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_HasRuntimeLabel, addr 0x40c1e38, size 0x14, virtual false, abstract: false, final false
  inline bool get_HasRuntimeLabel();

  /// @brief Method get_LabelIndex, addr 0x40c1e28, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LabelIndex();

  /// @brief Method get_TargetIndex, addr 0x40c1e4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TargetIndex();

  /// @brief Method set_LabelIndex, addr 0x40c1e30, size 0x8, virtual false, abstract: false, final false
  inline void set_LabelIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BranchLabel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BranchLabel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BranchLabel(BranchLabel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BranchLabel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BranchLabel(BranchLabel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13777 };

  /// @brief Field _targetIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____targetIndex;

  /// @brief Field _stackDepth, offset: 0x14, size: 0x4, def value: None
  int32_t ____stackDepth;

  /// @brief Field _continuationStackDepth, offset: 0x18, size: 0x4, def value: None
  int32_t ____continuationStackDepth;

  /// @brief Field _forwardBranchFixups, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____forwardBranchFixups;

  /// @brief Field <LabelIndex>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____LabelIndex_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::BranchLabel, ____targetIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::BranchLabel, ____stackDepth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::BranchLabel, ____continuationStackDepth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::BranchLabel, ____forwardBranchFixups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::BranchLabel, ____LabelIndex_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::BranchLabel, 0x30>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::BranchLabel);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::BranchLabel*, "System.Linq.Expressions.Interpreter", "BranchLabel");
