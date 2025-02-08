#pragma once
// IWYU pragma private; include "System/Data/FunctionId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FunctionId)
// Forward declare root types
namespace System::Data {
struct FunctionId;
}
// Write type traits
MARK_VAL_T(::System::Data::FunctionId);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.FunctionId
struct CORDL_TYPE FunctionId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FunctionId_Unwrapped
  enum struct __FunctionId_Unwrapped : int32_t {
    __E_none = static_cast<int32_t>(0xffffffff),
    __E_Ascii = static_cast<int32_t>(0x0),
    __E_Char = static_cast<int32_t>(0x1),
    __E_Charindex = static_cast<int32_t>(0x2),
    __E_Difference = static_cast<int32_t>(0x3),
    __E_Len = static_cast<int32_t>(0x4),
    __E_Lower = static_cast<int32_t>(0x5),
    __E_LTrim = static_cast<int32_t>(0x6),
    __E_Patindex = static_cast<int32_t>(0x7),
    __E_Replicate = static_cast<int32_t>(0x8),
    __E_Reverse = static_cast<int32_t>(0x9),
    __E_Right = static_cast<int32_t>(0xa),
    __E_RTrim = static_cast<int32_t>(0xb),
    __E_Soundex = static_cast<int32_t>(0xc),
    __E_Space = static_cast<int32_t>(0xd),
    __E_Str = static_cast<int32_t>(0xe),
    __E_Stuff = static_cast<int32_t>(0xf),
    __E_Substring = static_cast<int32_t>(0x10),
    __E_Upper = static_cast<int32_t>(0x11),
    __E_IsNull = static_cast<int32_t>(0x12),
    __E_Iif = static_cast<int32_t>(0x13),
    __E_Convert = static_cast<int32_t>(0x14),
    __E_cInt = static_cast<int32_t>(0x15),
    __E_cBool = static_cast<int32_t>(0x16),
    __E_cDate = static_cast<int32_t>(0x17),
    __E_cDbl = static_cast<int32_t>(0x18),
    __E_cStr = static_cast<int32_t>(0x19),
    __E_Abs = static_cast<int32_t>(0x1a),
    __E_Acos = static_cast<int32_t>(0x1b),
    __E_In = static_cast<int32_t>(0x1c),
    __E_Trim = static_cast<int32_t>(0x1d),
    __E_Sum = static_cast<int32_t>(0x1e),
    __E_Avg = static_cast<int32_t>(0x1f),
    __E_Min = static_cast<int32_t>(0x20),
    __E_Max = static_cast<int32_t>(0x21),
    __E_Count = static_cast<int32_t>(0x22),
    __E_StDev = static_cast<int32_t>(0x23),
    __E_Var = static_cast<int32_t>(0x25),
    __E_DateTimeOffset = static_cast<int32_t>(0x26),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FunctionId_Unwrapped() const noexcept {
    return static_cast<__FunctionId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FunctionId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FunctionId(int32_t value__) noexcept;

  /// @brief Field Abs value: I32(26)
  static ::System::Data::FunctionId const Abs;

  /// @brief Field Acos value: I32(27)
  static ::System::Data::FunctionId const Acos;

  /// @brief Field Ascii value: I32(0)
  static ::System::Data::FunctionId const Ascii;

  /// @brief Field Avg value: I32(31)
  static ::System::Data::FunctionId const Avg;

  /// @brief Field Char value: I32(1)
  static ::System::Data::FunctionId const Char;

  /// @brief Field Charindex value: I32(2)
  static ::System::Data::FunctionId const Charindex;

  /// @brief Field Convert value: I32(20)
  static ::System::Data::FunctionId const Convert;

  /// @brief Field Count value: I32(34)
  static ::System::Data::FunctionId const Count;

  /// @brief Field DateTimeOffset value: I32(38)
  static ::System::Data::FunctionId const DateTimeOffset;

  /// @brief Field Difference value: I32(3)
  static ::System::Data::FunctionId const Difference;

  /// @brief Field Iif value: I32(19)
  static ::System::Data::FunctionId const Iif;

  /// @brief Field In value: I32(28)
  static ::System::Data::FunctionId const In;

  /// @brief Field IsNull value: I32(18)
  static ::System::Data::FunctionId const IsNull;

  /// @brief Field LTrim value: I32(6)
  static ::System::Data::FunctionId const LTrim;

  /// @brief Field Len value: I32(4)
  static ::System::Data::FunctionId const Len;

  /// @brief Field Lower value: I32(5)
  static ::System::Data::FunctionId const Lower;

  /// @brief Field Max value: I32(33)
  static ::System::Data::FunctionId const Max;

  /// @brief Field Min value: I32(32)
  static ::System::Data::FunctionId const Min;

  /// @brief Field Patindex value: I32(7)
  static ::System::Data::FunctionId const Patindex;

  /// @brief Field RTrim value: I32(11)
  static ::System::Data::FunctionId const RTrim;

  /// @brief Field Replicate value: I32(8)
  static ::System::Data::FunctionId const Replicate;

  /// @brief Field Reverse value: I32(9)
  static ::System::Data::FunctionId const Reverse;

  /// @brief Field Right value: I32(10)
  static ::System::Data::FunctionId const Right;

  /// @brief Field Soundex value: I32(12)
  static ::System::Data::FunctionId const Soundex;

  /// @brief Field Space value: I32(13)
  static ::System::Data::FunctionId const Space;

  /// @brief Field StDev value: I32(35)
  static ::System::Data::FunctionId const StDev;

  /// @brief Field Str value: I32(14)
  static ::System::Data::FunctionId const Str;

  /// @brief Field Stuff value: I32(15)
  static ::System::Data::FunctionId const Stuff;

  /// @brief Field Substring value: I32(16)
  static ::System::Data::FunctionId const Substring;

  /// @brief Field Sum value: I32(30)
  static ::System::Data::FunctionId const Sum;

  /// @brief Field Trim value: I32(29)
  static ::System::Data::FunctionId const Trim;

  /// @brief Field Upper value: I32(17)
  static ::System::Data::FunctionId const Upper;

  /// @brief Field Var value: I32(37)
  static ::System::Data::FunctionId const Var;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11357 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field cBool value: I32(22)
  static ::System::Data::FunctionId const cBool;

  /// @brief Field cDate value: I32(23)
  static ::System::Data::FunctionId const cDate;

  /// @brief Field cDbl value: I32(24)
  static ::System::Data::FunctionId const cDbl;

  /// @brief Field cInt value: I32(21)
  static ::System::Data::FunctionId const cInt;

  /// @brief Field cStr value: I32(25)
  static ::System::Data::FunctionId const cStr;

  /// @brief Field none value: I32(-1)
  static ::System::Data::FunctionId const none;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::FunctionId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::FunctionId, 0x4>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::FunctionId, "System.Data", "FunctionId");
