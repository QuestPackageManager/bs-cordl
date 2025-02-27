#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NumericConvertInstruction_ToUnderlying.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NumericConvertInstruction_ToUnderlying)
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
// Forward declare root types
namespace GlobalNamespace {
class NumericConvertInstruction_ToUnderlying;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NumericConvertInstruction_ToUnderlying);
// Dependencies System.Linq.Expressions.Interpreter.NumericConvertInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NumericConvertInstruction/ToUnderlying
class CORDL_TYPE NumericConvertInstruction_ToUnderlying : public ::System::Linq::Expressions::Interpreter::NumericConvertInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  /// @brief Method Convert, addr 0x4101838, size 0x25c, virtual true, abstract: false, final false
  inline ::System::Object* Convert(::System::Object* obj);

  static inline ::GlobalNamespace::NumericConvertInstruction_ToUnderlying* New_ctor(::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method .ctor, addr 0x4101808, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method get_InstructionName, addr 0x41017c8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NumericConvertInstruction_ToUnderlying();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NumericConvertInstruction_ToUnderlying", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NumericConvertInstruction_ToUnderlying(NumericConvertInstruction_ToUnderlying&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NumericConvertInstruction_ToUnderlying", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NumericConvertInstruction_ToUnderlying(NumericConvertInstruction_ToUnderlying const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14062 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NumericConvertInstruction_ToUnderlying, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NumericConvertInstruction_ToUnderlying);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NumericConvertInstruction_ToUnderlying*, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction/ToUnderlying");
