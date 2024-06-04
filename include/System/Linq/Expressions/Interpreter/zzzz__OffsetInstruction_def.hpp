#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/OffsetInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OffsetInstruction)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class OffsetInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::OffsetInstruction);
// Type: System.Linq.Expressions.Interpreter::OffsetInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::OffsetInstruction*
class CORDL_TYPE OffsetInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_Cache))::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> Cache;

  /// @brief Field _offset, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__offset, put = __cordl_internal_set__offset)) int32_t _offset;

  /// @brief Method Fixup, addr 0x2c33738, size 0x94, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Interpreter::Instruction* Fixup(int32_t offset);

  static inline ::System::Linq::Expressions::Interpreter::OffsetInstruction* New_ctor();

  /// @brief Method ToDebugString, addr 0x2c337cc, size 0xc8, virtual true, abstract: false, final false
  inline ::StringW ToDebugString(int32_t instructionIndex, ::System::Object* cookie, ::System::Func_2<int32_t, int32_t>* labelIndexer,
                                 ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* objects);

  /// @brief Method ToString, addr 0x2c33894, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get__offset() const;

  constexpr int32_t& __cordl_internal_get__offset();

  constexpr void __cordl_internal_set__offset(int32_t value);

  /// @brief Method .ctor, addr 0x2c33960, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Cache, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> get_Cache();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OffsetInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OffsetInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OffsetInstruction(OffsetInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OffsetInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OffsetInstruction(OffsetInstruction const&) = delete;

  /// @brief Field _offset, offset: 0x10, size: 0x4, def value: None
  int32_t ____offset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::OffsetInstruction, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::OffsetInstruction, ____offset) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::OffsetInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::OffsetInstruction*, "System.Linq.Expressions.Interpreter", "OffsetInstruction");
