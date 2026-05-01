#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/VarEnum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VarEnum)
// Forward declare root types
namespace System::Runtime::InteropServices {
struct VarEnum;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::VarEnum);
// Dependencies
namespace System::Runtime::InteropServices {
// Is value type: true
// CS Name: System.Runtime.InteropServices.VarEnum
struct CORDL_TYPE VarEnum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VarEnum_Unwrapped
  enum struct __VarEnum_Unwrapped : int32_t {
    __E_VT_EMPTY = static_cast<int32_t>(0x0),
    __E_VT_NULL = static_cast<int32_t>(0x1),
    __E_VT_I2 = static_cast<int32_t>(0x2),
    __E_VT_I4 = static_cast<int32_t>(0x3),
    __E_VT_R4 = static_cast<int32_t>(0x4),
    __E_VT_R8 = static_cast<int32_t>(0x5),
    __E_VT_CY = static_cast<int32_t>(0x6),
    __E_VT_DATE = static_cast<int32_t>(0x7),
    __E_VT_BSTR = static_cast<int32_t>(0x8),
    __E_VT_DISPATCH = static_cast<int32_t>(0x9),
    __E_VT_ERROR = static_cast<int32_t>(0xa),
    __E_VT_BOOL = static_cast<int32_t>(0xb),
    __E_VT_VARIANT = static_cast<int32_t>(0xc),
    __E_VT_UNKNOWN = static_cast<int32_t>(0xd),
    __E_VT_DECIMAL = static_cast<int32_t>(0xe),
    __E_VT_I1 = static_cast<int32_t>(0x10),
    __E_VT_UI1 = static_cast<int32_t>(0x11),
    __E_VT_UI2 = static_cast<int32_t>(0x12),
    __E_VT_UI4 = static_cast<int32_t>(0x13),
    __E_VT_I8 = static_cast<int32_t>(0x14),
    __E_VT_UI8 = static_cast<int32_t>(0x15),
    __E_VT_INT = static_cast<int32_t>(0x16),
    __E_VT_UINT = static_cast<int32_t>(0x17),
    __E_VT_VOID = static_cast<int32_t>(0x18),
    __E_VT_HRESULT = static_cast<int32_t>(0x19),
    __E_VT_PTR = static_cast<int32_t>(0x1a),
    __E_VT_SAFEARRAY = static_cast<int32_t>(0x1b),
    __E_VT_CARRAY = static_cast<int32_t>(0x1c),
    __E_VT_USERDEFINED = static_cast<int32_t>(0x1d),
    __E_VT_LPSTR = static_cast<int32_t>(0x1e),
    __E_VT_LPWSTR = static_cast<int32_t>(0x1f),
    __E_VT_RECORD = static_cast<int32_t>(0x24),
    __E_VT_FILETIME = static_cast<int32_t>(0x40),
    __E_VT_BLOB = static_cast<int32_t>(0x41),
    __E_VT_STREAM = static_cast<int32_t>(0x42),
    __E_VT_STORAGE = static_cast<int32_t>(0x43),
    __E_VT_STREAMED_OBJECT = static_cast<int32_t>(0x44),
    __E_VT_STORED_OBJECT = static_cast<int32_t>(0x45),
    __E_VT_BLOB_OBJECT = static_cast<int32_t>(0x46),
    __E_VT_CF = static_cast<int32_t>(0x47),
    __E_VT_CLSID = static_cast<int32_t>(0x48),
    __E_VT_VECTOR = static_cast<int32_t>(0x1000),
    __E_VT_ARRAY = static_cast<int32_t>(0x2000),
    __E_VT_BYREF = static_cast<int32_t>(0x4000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VarEnum_Unwrapped() const noexcept {
    return static_cast<__VarEnum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VarEnum();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VarEnum(int32_t value__) noexcept;

  /// @brief Field VT_ARRAY value: I32(8192)
  static ::System::Runtime::InteropServices::VarEnum const VT_ARRAY;

  /// @brief Field VT_BLOB value: I32(65)
  static ::System::Runtime::InteropServices::VarEnum const VT_BLOB;

  /// @brief Field VT_BLOB_OBJECT value: I32(70)
  static ::System::Runtime::InteropServices::VarEnum const VT_BLOB_OBJECT;

  /// @brief Field VT_BOOL value: I32(11)
  static ::System::Runtime::InteropServices::VarEnum const VT_BOOL;

  /// @brief Field VT_BSTR value: I32(8)
  static ::System::Runtime::InteropServices::VarEnum const VT_BSTR;

  /// @brief Field VT_BYREF value: I32(16384)
  static ::System::Runtime::InteropServices::VarEnum const VT_BYREF;

  /// @brief Field VT_CARRAY value: I32(28)
  static ::System::Runtime::InteropServices::VarEnum const VT_CARRAY;

  /// @brief Field VT_CF value: I32(71)
  static ::System::Runtime::InteropServices::VarEnum const VT_CF;

  /// @brief Field VT_CLSID value: I32(72)
  static ::System::Runtime::InteropServices::VarEnum const VT_CLSID;

  /// @brief Field VT_CY value: I32(6)
  static ::System::Runtime::InteropServices::VarEnum const VT_CY;

  /// @brief Field VT_DATE value: I32(7)
  static ::System::Runtime::InteropServices::VarEnum const VT_DATE;

  /// @brief Field VT_DECIMAL value: I32(14)
  static ::System::Runtime::InteropServices::VarEnum const VT_DECIMAL;

  /// @brief Field VT_DISPATCH value: I32(9)
  static ::System::Runtime::InteropServices::VarEnum const VT_DISPATCH;

  /// @brief Field VT_EMPTY value: I32(0)
  static ::System::Runtime::InteropServices::VarEnum const VT_EMPTY;

  /// @brief Field VT_ERROR value: I32(10)
  static ::System::Runtime::InteropServices::VarEnum const VT_ERROR;

  /// @brief Field VT_FILETIME value: I32(64)
  static ::System::Runtime::InteropServices::VarEnum const VT_FILETIME;

  /// @brief Field VT_HRESULT value: I32(25)
  static ::System::Runtime::InteropServices::VarEnum const VT_HRESULT;

  /// @brief Field VT_I1 value: I32(16)
  static ::System::Runtime::InteropServices::VarEnum const VT_I1;

  /// @brief Field VT_I2 value: I32(2)
  static ::System::Runtime::InteropServices::VarEnum const VT_I2;

  /// @brief Field VT_I4 value: I32(3)
  static ::System::Runtime::InteropServices::VarEnum const VT_I4;

  /// @brief Field VT_I8 value: I32(20)
  static ::System::Runtime::InteropServices::VarEnum const VT_I8;

  /// @brief Field VT_INT value: I32(22)
  static ::System::Runtime::InteropServices::VarEnum const VT_INT;

  /// @brief Field VT_LPSTR value: I32(30)
  static ::System::Runtime::InteropServices::VarEnum const VT_LPSTR;

  /// @brief Field VT_LPWSTR value: I32(31)
  static ::System::Runtime::InteropServices::VarEnum const VT_LPWSTR;

  /// @brief Field VT_NULL value: I32(1)
  static ::System::Runtime::InteropServices::VarEnum const VT_NULL;

  /// @brief Field VT_PTR value: I32(26)
  static ::System::Runtime::InteropServices::VarEnum const VT_PTR;

  /// @brief Field VT_R4 value: I32(4)
  static ::System::Runtime::InteropServices::VarEnum const VT_R4;

  /// @brief Field VT_R8 value: I32(5)
  static ::System::Runtime::InteropServices::VarEnum const VT_R8;

  /// @brief Field VT_RECORD value: I32(36)
  static ::System::Runtime::InteropServices::VarEnum const VT_RECORD;

  /// @brief Field VT_SAFEARRAY value: I32(27)
  static ::System::Runtime::InteropServices::VarEnum const VT_SAFEARRAY;

  /// @brief Field VT_STORAGE value: I32(67)
  static ::System::Runtime::InteropServices::VarEnum const VT_STORAGE;

  /// @brief Field VT_STORED_OBJECT value: I32(69)
  static ::System::Runtime::InteropServices::VarEnum const VT_STORED_OBJECT;

  /// @brief Field VT_STREAM value: I32(66)
  static ::System::Runtime::InteropServices::VarEnum const VT_STREAM;

  /// @brief Field VT_STREAMED_OBJECT value: I32(68)
  static ::System::Runtime::InteropServices::VarEnum const VT_STREAMED_OBJECT;

  /// @brief Field VT_UI1 value: I32(17)
  static ::System::Runtime::InteropServices::VarEnum const VT_UI1;

  /// @brief Field VT_UI2 value: I32(18)
  static ::System::Runtime::InteropServices::VarEnum const VT_UI2;

  /// @brief Field VT_UI4 value: I32(19)
  static ::System::Runtime::InteropServices::VarEnum const VT_UI4;

  /// @brief Field VT_UI8 value: I32(21)
  static ::System::Runtime::InteropServices::VarEnum const VT_UI8;

  /// @brief Field VT_UINT value: I32(23)
  static ::System::Runtime::InteropServices::VarEnum const VT_UINT;

  /// @brief Field VT_UNKNOWN value: I32(13)
  static ::System::Runtime::InteropServices::VarEnum const VT_UNKNOWN;

  /// @brief Field VT_USERDEFINED value: I32(29)
  static ::System::Runtime::InteropServices::VarEnum const VT_USERDEFINED;

  /// @brief Field VT_VARIANT value: I32(12)
  static ::System::Runtime::InteropServices::VarEnum const VT_VARIANT;

  /// @brief Field VT_VECTOR value: I32(4096)
  static ::System::Runtime::InteropServices::VarEnum const VT_VECTOR;

  /// @brief Field VT_VOID value: I32(24)
  static ::System::Runtime::InteropServices::VarEnum const VT_VOID;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3333 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::VarEnum, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::VarEnum, 0x4>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::VarEnum, "System.Runtime.InteropServices", "VarEnum");
