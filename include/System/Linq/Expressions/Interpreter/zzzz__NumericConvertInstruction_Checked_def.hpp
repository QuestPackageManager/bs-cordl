#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NumericConvertInstruction_Checked.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NumericConvertInstruction_Checked)
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __NumericConvertInstruction__Checked;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__Checked);
// Type: ::Checked
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NumericConvertInstruction::Checked*
class CORDL_TYPE __NumericConvertInstruction__Checked : public ::System::Linq::Expressions::Interpreter::NumericConvertInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  /// @brief Method Convert, addr 0x2c43fe4, size 0x368, virtual true, abstract: false, final false
  inline ::System::Object* Convert(::System::Object* obj);

  /// @brief Method ConvertDouble, addr 0x2c44b10, size 0x354, virtual false, abstract: false, final false
  inline ::System::Object* ConvertDouble(double_t obj);

  /// @brief Method ConvertInt32, addr 0x2c4434c, size 0x2a4, virtual false, abstract: false, final false
  inline ::System::Object* ConvertInt32(int32_t obj);

  /// @brief Method ConvertInt64, addr 0x2c445f0, size 0x290, virtual false, abstract: false, final false
  inline ::System::Object* ConvertInt64(int64_t obj);

  /// @brief Method ConvertUInt64, addr 0x2c44880, size 0x290, virtual false, abstract: false, final false
  inline ::System::Object* ConvertUInt64(uint64_t obj);

  static inline ::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__Checked* New_ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method .ctor, addr 0x2c43fa8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method get_InstructionName, addr 0x2c43f68, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NumericConvertInstruction__Checked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NumericConvertInstruction__Checked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NumericConvertInstruction__Checked(__NumericConvertInstruction__Checked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NumericConvertInstruction__Checked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NumericConvertInstruction__Checked(__NumericConvertInstruction__Checked const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__Checked, 0x20>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__Checked);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NumericConvertInstruction__Checked*, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction/Checked");
