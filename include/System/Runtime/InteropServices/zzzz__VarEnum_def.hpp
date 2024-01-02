#pragma once
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
// Type: System.Runtime.InteropServices::VarEnum
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3320))
// CS Name: ::System.Runtime.InteropServices::VarEnum
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VarEnum(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VarEnum();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field VT_EMPTY value: static_cast<int32_t>(0x0)
  static ::System::Runtime::InteropServices::VarEnum const VT_EMPTY;

  /// @brief Field VT_NULL value: static_cast<int32_t>(0x1)
  static ::System::Runtime::InteropServices::VarEnum const VT_NULL;

  /// @brief Field VT_I2 value: static_cast<int32_t>(0x2)
  static ::System::Runtime::InteropServices::VarEnum const VT_I2;

  /// @brief Field VT_I4 value: static_cast<int32_t>(0x3)
  static ::System::Runtime::InteropServices::VarEnum const VT_I4;

  /// @brief Field VT_R4 value: static_cast<int32_t>(0x4)
  static ::System::Runtime::InteropServices::VarEnum const VT_R4;

  /// @brief Field VT_R8 value: static_cast<int32_t>(0x5)
  static ::System::Runtime::InteropServices::VarEnum const VT_R8;

  /// @brief Field VT_CY value: static_cast<int32_t>(0x6)
  static ::System::Runtime::InteropServices::VarEnum const VT_CY;

  /// @brief Field VT_DATE value: static_cast<int32_t>(0x7)
  static ::System::Runtime::InteropServices::VarEnum const VT_DATE;

  /// @brief Field VT_BSTR value: static_cast<int32_t>(0x8)
  static ::System::Runtime::InteropServices::VarEnum const VT_BSTR;

  /// @brief Field VT_DISPATCH value: static_cast<int32_t>(0x9)
  static ::System::Runtime::InteropServices::VarEnum const VT_DISPATCH;

  /// @brief Field VT_ERROR value: static_cast<int32_t>(0xa)
  static ::System::Runtime::InteropServices::VarEnum const VT_ERROR;

  /// @brief Field VT_BOOL value: static_cast<int32_t>(0xb)
  static ::System::Runtime::InteropServices::VarEnum const VT_BOOL;

  /// @brief Field VT_VARIANT value: static_cast<int32_t>(0xc)
  static ::System::Runtime::InteropServices::VarEnum const VT_VARIANT;

  /// @brief Field VT_UNKNOWN value: static_cast<int32_t>(0xd)
  static ::System::Runtime::InteropServices::VarEnum const VT_UNKNOWN;

  /// @brief Field VT_DECIMAL value: static_cast<int32_t>(0xe)
  static ::System::Runtime::InteropServices::VarEnum const VT_DECIMAL;

  /// @brief Field VT_I1 value: static_cast<int32_t>(0x10)
  static ::System::Runtime::InteropServices::VarEnum const VT_I1;

  /// @brief Field VT_UI1 value: static_cast<int32_t>(0x11)
  static ::System::Runtime::InteropServices::VarEnum const VT_UI1;

  /// @brief Field VT_UI2 value: static_cast<int32_t>(0x12)
  static ::System::Runtime::InteropServices::VarEnum const VT_UI2;

  /// @brief Field VT_UI4 value: static_cast<int32_t>(0x13)
  static ::System::Runtime::InteropServices::VarEnum const VT_UI4;

  /// @brief Field VT_I8 value: static_cast<int32_t>(0x14)
  static ::System::Runtime::InteropServices::VarEnum const VT_I8;

  /// @brief Field VT_UI8 value: static_cast<int32_t>(0x15)
  static ::System::Runtime::InteropServices::VarEnum const VT_UI8;

  /// @brief Field VT_INT value: static_cast<int32_t>(0x16)
  static ::System::Runtime::InteropServices::VarEnum const VT_INT;

  /// @brief Field VT_UINT value: static_cast<int32_t>(0x17)
  static ::System::Runtime::InteropServices::VarEnum const VT_UINT;

  /// @brief Field VT_VOID value: static_cast<int32_t>(0x18)
  static ::System::Runtime::InteropServices::VarEnum const VT_VOID;

  /// @brief Field VT_HRESULT value: static_cast<int32_t>(0x19)
  static ::System::Runtime::InteropServices::VarEnum const VT_HRESULT;

  /// @brief Field VT_PTR value: static_cast<int32_t>(0x1a)
  static ::System::Runtime::InteropServices::VarEnum const VT_PTR;

  /// @brief Field VT_SAFEARRAY value: static_cast<int32_t>(0x1b)
  static ::System::Runtime::InteropServices::VarEnum const VT_SAFEARRAY;

  /// @brief Field VT_CARRAY value: static_cast<int32_t>(0x1c)
  static ::System::Runtime::InteropServices::VarEnum const VT_CARRAY;

  /// @brief Field VT_USERDEFINED value: static_cast<int32_t>(0x1d)
  static ::System::Runtime::InteropServices::VarEnum const VT_USERDEFINED;

  /// @brief Field VT_LPSTR value: static_cast<int32_t>(0x1e)
  static ::System::Runtime::InteropServices::VarEnum const VT_LPSTR;

  /// @brief Field VT_LPWSTR value: static_cast<int32_t>(0x1f)
  static ::System::Runtime::InteropServices::VarEnum const VT_LPWSTR;

  /// @brief Field VT_RECORD value: static_cast<int32_t>(0x24)
  static ::System::Runtime::InteropServices::VarEnum const VT_RECORD;

  /// @brief Field VT_FILETIME value: static_cast<int32_t>(0x40)
  static ::System::Runtime::InteropServices::VarEnum const VT_FILETIME;

  /// @brief Field VT_BLOB value: static_cast<int32_t>(0x41)
  static ::System::Runtime::InteropServices::VarEnum const VT_BLOB;

  /// @brief Field VT_STREAM value: static_cast<int32_t>(0x42)
  static ::System::Runtime::InteropServices::VarEnum const VT_STREAM;

  /// @brief Field VT_STORAGE value: static_cast<int32_t>(0x43)
  static ::System::Runtime::InteropServices::VarEnum const VT_STORAGE;

  /// @brief Field VT_STREAMED_OBJECT value: static_cast<int32_t>(0x44)
  static ::System::Runtime::InteropServices::VarEnum const VT_STREAMED_OBJECT;

  /// @brief Field VT_STORED_OBJECT value: static_cast<int32_t>(0x45)
  static ::System::Runtime::InteropServices::VarEnum const VT_STORED_OBJECT;

  /// @brief Field VT_BLOB_OBJECT value: static_cast<int32_t>(0x46)
  static ::System::Runtime::InteropServices::VarEnum const VT_BLOB_OBJECT;

  /// @brief Field VT_CF value: static_cast<int32_t>(0x47)
  static ::System::Runtime::InteropServices::VarEnum const VT_CF;

  /// @brief Field VT_CLSID value: static_cast<int32_t>(0x48)
  static ::System::Runtime::InteropServices::VarEnum const VT_CLSID;

  /// @brief Field VT_VECTOR value: static_cast<int32_t>(0x1000)
  static ::System::Runtime::InteropServices::VarEnum const VT_VECTOR;

  /// @brief Field VT_ARRAY value: static_cast<int32_t>(0x2000)
  static ::System::Runtime::InteropServices::VarEnum const VT_ARRAY;

  /// @brief Field VT_BYREF value: static_cast<int32_t>(0x4000)
  static ::System::Runtime::InteropServices::VarEnum const VT_BYREF;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::VarEnum, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::VarEnum, value__) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::VarEnum, "System.Runtime.InteropServices", "VarEnum");
