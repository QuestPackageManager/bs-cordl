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
namespace GlobalNamespace {
class NumericConvertInstruction_Checked;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NumericConvertInstruction_Checked);
// Dependencies System.Linq.Expressions.Interpreter.NumericConvertInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked
class CORDL_TYPE NumericConvertInstruction_Checked : public ::System::Linq::Expressions::Interpreter::NumericConvertInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  /// @brief Method Convert, addr 0x40f1a5c, size 0x368, virtual true, abstract: false, final false
  inline ::System::Object* Convert(::System::Object* obj);

  /// @brief Method ConvertDouble, addr 0x40f2588, size 0x354, virtual false, abstract: false, final false
  inline ::System::Object* ConvertDouble(double_t obj);

  /// @brief Method ConvertInt32, addr 0x40f1dc4, size 0x2a4, virtual false, abstract: false, final false
  inline ::System::Object* ConvertInt32(int32_t obj);

  /// @brief Method ConvertInt64, addr 0x40f2068, size 0x290, virtual false, abstract: false, final false
  inline ::System::Object* ConvertInt64(int64_t obj);

  /// @brief Method ConvertUInt64, addr 0x40f22f8, size 0x290, virtual false, abstract: false, final false
  inline ::System::Object* ConvertUInt64(uint64_t obj);

  static inline ::GlobalNamespace::NumericConvertInstruction_Checked* New_ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method .ctor, addr 0x40f1a20, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method get_InstructionName, addr 0x40f19e0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NumericConvertInstruction_Checked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NumericConvertInstruction_Checked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NumericConvertInstruction_Checked(NumericConvertInstruction_Checked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NumericConvertInstruction_Checked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NumericConvertInstruction_Checked(NumericConvertInstruction_Checked const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14056 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NumericConvertInstruction_Checked, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NumericConvertInstruction_Checked);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NumericConvertInstruction_Checked*, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction/Checked");
