#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnmanagedType)
// Forward declare root types
namespace System::Runtime::InteropServices {
struct UnmanagedType;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::UnmanagedType);
// Type: System.Runtime.InteropServices::UnmanagedType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3318))
// CS Name: ::System.Runtime.InteropServices::UnmanagedType
struct CORDL_TYPE UnmanagedType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnmanagedType_Unwrapped
  enum struct __UnmanagedType_Unwrapped : int32_t {
    __E_Bool = static_cast<int32_t>(0x2),
    __E_I1 = static_cast<int32_t>(0x3),
    __E_U1 = static_cast<int32_t>(0x4),
    __E_I2 = static_cast<int32_t>(0x5),
    __E_U2 = static_cast<int32_t>(0x6),
    __E_I4 = static_cast<int32_t>(0x7),
    __E_U4 = static_cast<int32_t>(0x8),
    __E_I8 = static_cast<int32_t>(0x9),
    __E_U8 = static_cast<int32_t>(0xa),
    __E_R4 = static_cast<int32_t>(0xb),
    __E_R8 = static_cast<int32_t>(0xc),
    __E_Currency = static_cast<int32_t>(0xf),
    __E_BStr = static_cast<int32_t>(0x13),
    __E_LPStr = static_cast<int32_t>(0x14),
    __E_LPWStr = static_cast<int32_t>(0x15),
    __E_LPTStr = static_cast<int32_t>(0x16),
    __E_ByValTStr = static_cast<int32_t>(0x17),
    __E_IUnknown = static_cast<int32_t>(0x19),
    __E_IDispatch = static_cast<int32_t>(0x1a),
    __E_Struct = static_cast<int32_t>(0x1b),
    __E_Interface = static_cast<int32_t>(0x1c),
    __E_SafeArray = static_cast<int32_t>(0x1d),
    __E_ByValArray = static_cast<int32_t>(0x1e),
    __E_SysInt = static_cast<int32_t>(0x1f),
    __E_SysUInt = static_cast<int32_t>(0x20),
    __E_VBByRefStr = static_cast<int32_t>(0x22),
    __E_AnsiBStr = static_cast<int32_t>(0x23),
    __E_TBStr = static_cast<int32_t>(0x24),
    __E_VariantBool = static_cast<int32_t>(0x25),
    __E_FunctionPtr = static_cast<int32_t>(0x26),
    __E_AsAny = static_cast<int32_t>(0x28),
    __E_LPArray = static_cast<int32_t>(0x2a),
    __E_LPStruct = static_cast<int32_t>(0x2b),
    __E_CustomMarshaler = static_cast<int32_t>(0x2c),
    __E_Error = static_cast<int32_t>(0x2d),
    __E_IInspectable = static_cast<int32_t>(0x2e),
    __E_HString = static_cast<int32_t>(0x2f),
    __E_LPUTF8Str = static_cast<int32_t>(0x30),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnmanagedType_Unwrapped() const noexcept {
    return static_cast<__UnmanagedType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnmanagedType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnmanagedType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Bool value: static_cast<int32_t>(0x2)
  static ::System::Runtime::InteropServices::UnmanagedType const Bool;

  /// @brief Field I1 value: static_cast<int32_t>(0x3)
  static ::System::Runtime::InteropServices::UnmanagedType const I1;

  /// @brief Field U1 value: static_cast<int32_t>(0x4)
  static ::System::Runtime::InteropServices::UnmanagedType const U1;

  /// @brief Field I2 value: static_cast<int32_t>(0x5)
  static ::System::Runtime::InteropServices::UnmanagedType const I2;

  /// @brief Field U2 value: static_cast<int32_t>(0x6)
  static ::System::Runtime::InteropServices::UnmanagedType const U2;

  /// @brief Field I4 value: static_cast<int32_t>(0x7)
  static ::System::Runtime::InteropServices::UnmanagedType const I4;

  /// @brief Field U4 value: static_cast<int32_t>(0x8)
  static ::System::Runtime::InteropServices::UnmanagedType const U4;

  /// @brief Field I8 value: static_cast<int32_t>(0x9)
  static ::System::Runtime::InteropServices::UnmanagedType const I8;

  /// @brief Field U8 value: static_cast<int32_t>(0xa)
  static ::System::Runtime::InteropServices::UnmanagedType const U8;

  /// @brief Field R4 value: static_cast<int32_t>(0xb)
  static ::System::Runtime::InteropServices::UnmanagedType const R4;

  /// @brief Field R8 value: static_cast<int32_t>(0xc)
  static ::System::Runtime::InteropServices::UnmanagedType const R8;

  /// @brief Field Currency value: static_cast<int32_t>(0xf)
  static ::System::Runtime::InteropServices::UnmanagedType const Currency;

  /// @brief Field BStr value: static_cast<int32_t>(0x13)
  static ::System::Runtime::InteropServices::UnmanagedType const BStr;

  /// @brief Field LPStr value: static_cast<int32_t>(0x14)
  static ::System::Runtime::InteropServices::UnmanagedType const LPStr;

  /// @brief Field LPWStr value: static_cast<int32_t>(0x15)
  static ::System::Runtime::InteropServices::UnmanagedType const LPWStr;

  /// @brief Field LPTStr value: static_cast<int32_t>(0x16)
  static ::System::Runtime::InteropServices::UnmanagedType const LPTStr;

  /// @brief Field ByValTStr value: static_cast<int32_t>(0x17)
  static ::System::Runtime::InteropServices::UnmanagedType const ByValTStr;

  /// @brief Field IUnknown value: static_cast<int32_t>(0x19)
  static ::System::Runtime::InteropServices::UnmanagedType const IUnknown;

  /// @brief Field IDispatch value: static_cast<int32_t>(0x1a)
  static ::System::Runtime::InteropServices::UnmanagedType const IDispatch;

  /// @brief Field Struct value: static_cast<int32_t>(0x1b)
  static ::System::Runtime::InteropServices::UnmanagedType const Struct;

  /// @brief Field Interface value: static_cast<int32_t>(0x1c)
  static ::System::Runtime::InteropServices::UnmanagedType const Interface;

  /// @brief Field SafeArray value: static_cast<int32_t>(0x1d)
  static ::System::Runtime::InteropServices::UnmanagedType const SafeArray;

  /// @brief Field ByValArray value: static_cast<int32_t>(0x1e)
  static ::System::Runtime::InteropServices::UnmanagedType const ByValArray;

  /// @brief Field SysInt value: static_cast<int32_t>(0x1f)
  static ::System::Runtime::InteropServices::UnmanagedType const SysInt;

  /// @brief Field SysUInt value: static_cast<int32_t>(0x20)
  static ::System::Runtime::InteropServices::UnmanagedType const SysUInt;

  /// @brief Field VBByRefStr value: static_cast<int32_t>(0x22)
  static ::System::Runtime::InteropServices::UnmanagedType const VBByRefStr;

  /// @brief Field AnsiBStr value: static_cast<int32_t>(0x23)
  static ::System::Runtime::InteropServices::UnmanagedType const AnsiBStr;

  /// @brief Field TBStr value: static_cast<int32_t>(0x24)
  static ::System::Runtime::InteropServices::UnmanagedType const TBStr;

  /// @brief Field VariantBool value: static_cast<int32_t>(0x25)
  static ::System::Runtime::InteropServices::UnmanagedType const VariantBool;

  /// @brief Field FunctionPtr value: static_cast<int32_t>(0x26)
  static ::System::Runtime::InteropServices::UnmanagedType const FunctionPtr;

  /// @brief Field AsAny value: static_cast<int32_t>(0x28)
  static ::System::Runtime::InteropServices::UnmanagedType const AsAny;

  /// @brief Field LPArray value: static_cast<int32_t>(0x2a)
  static ::System::Runtime::InteropServices::UnmanagedType const LPArray;

  /// @brief Field LPStruct value: static_cast<int32_t>(0x2b)
  static ::System::Runtime::InteropServices::UnmanagedType const LPStruct;

  /// @brief Field CustomMarshaler value: static_cast<int32_t>(0x2c)
  static ::System::Runtime::InteropServices::UnmanagedType const CustomMarshaler;

  /// @brief Field Error value: static_cast<int32_t>(0x2d)
  static ::System::Runtime::InteropServices::UnmanagedType const Error;

  /// @brief Field IInspectable value: static_cast<int32_t>(0x2e)
  static ::System::Runtime::InteropServices::UnmanagedType const IInspectable;

  /// @brief Field HString value: static_cast<int32_t>(0x2f)
  static ::System::Runtime::InteropServices::UnmanagedType const HString;

  /// @brief Field LPUTF8Str value: static_cast<int32_t>(0x30)
  static ::System::Runtime::InteropServices::UnmanagedType const LPUTF8Str;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::UnmanagedType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::UnmanagedType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::UnmanagedType, "System.Runtime.InteropServices", "UnmanagedType");
