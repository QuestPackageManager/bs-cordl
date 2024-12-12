#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NumericConvertInstruction_Unchecked.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NumericConvertInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NumericConvertInstruction_Unchecked)
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
// Forward declare root types
namespace GlobalNamespace {
class NumericConvertInstruction_Unchecked;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NumericConvertInstruction_Unchecked);
// Dependencies System.Linq.Expressions.Interpreter.NumericConvertInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked
class CORDL_TYPE NumericConvertInstruction_Unchecked : public ::System::Linq::Expressions::Interpreter::NumericConvertInstruction {
public:
  // Declarations
  __declspec(property(get = get_InstructionName)) ::StringW InstructionName;

  /// @brief Method Convert, addr 0x40f0cec, size 0x368, virtual true, abstract: false, final false
  inline ::System::Object* Convert(::System::Object* obj);

  /// @brief Method ConvertDouble, addr 0x40f1714, size 0x2cc, virtual false, abstract: false, final false
  inline ::System::Object* ConvertDouble(double_t obj);

  /// @brief Method ConvertInt32, addr 0x40f1054, size 0x25c, virtual false, abstract: false, final false
  inline ::System::Object* ConvertInt32(int32_t obj);

  /// @brief Method ConvertInt64, addr 0x40f12b0, size 0x230, virtual false, abstract: false, final false
  inline ::System::Object* ConvertInt64(int64_t obj);

  /// @brief Method ConvertUInt64, addr 0x40f14e0, size 0x234, virtual false, abstract: false, final false
  inline ::System::Object* ConvertUInt64(uint64_t obj);

  static inline ::GlobalNamespace::NumericConvertInstruction_Unchecked* New_ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method .ctor, addr 0x40f0cb0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::TypeCode from, ::System::TypeCode to, bool isLiftedToNull);

  /// @brief Method get_InstructionName, addr 0x40f0c70, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NumericConvertInstruction_Unchecked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NumericConvertInstruction_Unchecked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NumericConvertInstruction_Unchecked(NumericConvertInstruction_Unchecked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NumericConvertInstruction_Unchecked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NumericConvertInstruction_Unchecked(NumericConvertInstruction_Unchecked const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14055 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NumericConvertInstruction_Unchecked, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NumericConvertInstruction_Unchecked);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NumericConvertInstruction_Unchecked*, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction/Unchecked");
