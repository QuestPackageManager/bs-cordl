#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NewInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class NewInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::NewInstruction);
// Type: System.Linq.Expressions.Interpreter::NewInstruction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::NewInstruction*
class CORDL_TYPE NewInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
  // Declarations
  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field _argumentCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__argumentCount, put = __cordl_internal_set__argumentCount)) int32_t _argumentCount;

  /// @brief Field _constructor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__constructor, put = __cordl_internal_set__constructor))::System::Reflection::ConstructorInfo* _constructor;

  /// @brief Method GetArgs, addr 0x2c3fef4, size 0x16c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetArgs(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, int32_t first);

  static inline ::System::Linq::Expressions::Interpreter::NewInstruction* New_ctor(::System::Reflection::ConstructorInfo* constructor, int32_t argumentCount);

  /// @brief Method Run, addr 0x2c3fda4, size 0x150, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method ToString, addr 0x2c40060, size 0x1cc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get__argumentCount() const;

  constexpr int32_t& __cordl_internal_get__argumentCount();

  constexpr ::System::Reflection::ConstructorInfo*& __cordl_internal_get__constructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& __cordl_internal_get__constructor() const;

  constexpr void __cordl_internal_set__argumentCount(int32_t value);

  constexpr void __cordl_internal_set__constructor(::System::Reflection::ConstructorInfo* value);

  /// @brief Method .ctor, addr 0x2c3fd24, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::ConstructorInfo* constructor, int32_t argumentCount);

  /// @brief Method get_ConsumedStack, addr 0x2c3fd54, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2c3fd64, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2c3fd5c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NewInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NewInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NewInstruction(NewInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NewInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NewInstruction(NewInstruction const&) = delete;

  /// @brief Field _constructor, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ____constructor;

  /// @brief Field _argumentCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____argumentCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::NewInstruction, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::NewInstruction, ____constructor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::NewInstruction, ____argumentCount) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NewInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NewInstruction*, "System.Linq.Expressions.Interpreter", "NewInstruction");
