#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__FieldInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadStaticFieldInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LoadStaticFieldInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::LoadStaticFieldInstruction);
// Type: System.Linq.Expressions.Interpreter::LoadStaticFieldInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::LoadStaticFieldInstruction*
class CORDL_TYPE LoadStaticFieldInstruction : public ::System::Linq::Expressions::Interpreter::FieldInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  static inline ::System::Linq::Expressions::Interpreter::LoadStaticFieldInstruction* New_ctor(::System::Reflection::FieldInfo* field);

  /// @brief Method Run, addr 0x2c1afc4, size 0x44, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2c1af54, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::FieldInfo* field);

  /// @brief Method get_InstructionName, addr 0x2c1af7c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2c1afbc, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadStaticFieldInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoadStaticFieldInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadStaticFieldInstruction(LoadStaticFieldInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadStaticFieldInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadStaticFieldInstruction(LoadStaticFieldInstruction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::LoadStaticFieldInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LoadStaticFieldInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LoadStaticFieldInstruction*, "System.Linq.Expressions.Interpreter", "LoadStaticFieldInstruction");
