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
namespace System::Linq::Expressions::Interpreter {
class __NumericConvertInstruction__ToUnderlying;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying);
// Type: ::ToUnderlying
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NumericConvertInstruction::ToUnderlying*
class CORDL_TYPE __NumericConvertInstruction__ToUnderlying : public ::System::Linq::Expressions::Interpreter::NumericConvertInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  /// @brief Method Convert, addr 0x2c79fd8, size 0x25c, virtual true, abstract: false, final false
  inline ::System::Object* Convert(::System::Object* obj);

  static inline ::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying* New_ctor(::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method .ctor, addr 0x2c79fa8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method get_InstructionName, addr 0x2c79f68, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NumericConvertInstruction__ToUnderlying();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NumericConvertInstruction__ToUnderlying", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NumericConvertInstruction__ToUnderlying(__NumericConvertInstruction__ToUnderlying&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NumericConvertInstruction__ToUnderlying", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NumericConvertInstruction__ToUnderlying(__NumericConvertInstruction__ToUnderlying const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__ToUnderlying*, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction/ToUnderlying");
