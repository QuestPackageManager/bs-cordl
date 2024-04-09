#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadCachedObjectInstruction)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LoadCachedObjectInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction);
// Type: System.Linq.Expressions.Interpreter::LoadCachedObjectInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::LoadCachedObjectInstruction*
class CORDL_TYPE LoadCachedObjectInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) uint32_t _index;

  static inline ::System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction* New_ctor(uint32_t index);

  /// @brief Method Run, addr 0x2b48390, size 0x98, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method ToDebugString, addr 0x2b48428, size 0x144, virtual true, abstract: false, final false
  inline ::StringW ToDebugString(int32_t instructionIndex, ::System::Object* cookie, ::System::Func_2<int32_t, int32_t>* labelIndexer,
                                 ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects);

  /// @brief Method ToString, addr 0x2b4856c, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr uint32_t const& __cordl_internal_get__index() const;

  constexpr uint32_t& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__index(uint32_t value);

  /// @brief Method .ctor, addr 0x2b48320, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(uint32_t index);

  /// @brief Method get_InstructionName, addr 0x2b48350, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2b48348, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadCachedObjectInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoadCachedObjectInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadCachedObjectInstruction(LoadCachedObjectInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadCachedObjectInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadCachedObjectInstruction(LoadCachedObjectInstruction const&) = delete;

  /// @brief Field _index, offset: 0x10, size: 0x4, def value: None
  uint32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction, ____index) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction*, "System.Linq.Expressions.Interpreter", "LoadCachedObjectInstruction");
