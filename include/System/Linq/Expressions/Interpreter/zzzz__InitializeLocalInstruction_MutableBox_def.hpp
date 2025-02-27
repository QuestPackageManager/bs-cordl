#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InitializeLocalInstruction_MutableBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitializeLocalInstruction_MutableBox)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class InitializeLocalInstruction_MutableBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InitializeLocalInstruction_MutableBox);
// Dependencies System.Linq.Expressions.Interpreter.InitializeLocalInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.InitializeLocalInstruction/MutableBox
class CORDL_TYPE InitializeLocalInstruction_MutableBox : public ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  /// @brief Field _type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::System::Type* _type;

  static inline ::GlobalNamespace::InitializeLocalInstruction_MutableBox* New_ctor(int32_t index, ::System::Type* type);

  /// @brief Method Run, addr 0x40f81f4, size 0x178, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  constexpr ::System::Type* const& __cordl_internal_get__type() const;

  constexpr ::System::Type*& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__type(::System::Type* value);

  /// @brief Method .ctor, addr 0x40f8184, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, ::System::Type* type);

  /// @brief Method get_InstructionName, addr 0x40f836c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializeLocalInstruction_MutableBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializeLocalInstruction_MutableBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializeLocalInstruction_MutableBox(InitializeLocalInstruction_MutableBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializeLocalInstruction_MutableBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializeLocalInstruction_MutableBox(InitializeLocalInstruction_MutableBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13980 };

  /// @brief Field _type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitializeLocalInstruction_MutableBox, ____type) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitializeLocalInstruction_MutableBox, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InitializeLocalInstruction_MutableBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitializeLocalInstruction_MutableBox*, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction/MutableBox");
