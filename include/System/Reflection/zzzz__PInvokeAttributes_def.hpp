#pragma once
// IWYU pragma private; include "System/Reflection/PInvokeAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PInvokeAttributes)
// Forward declare root types
namespace System::Reflection {
struct PInvokeAttributes;
}
// Write type traits
MARK_VAL_T(::System::Reflection::PInvokeAttributes);
// Type: System.Reflection::PInvokeAttributes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: true
// CS Name: ::System.Reflection::PInvokeAttributes
struct CORDL_TYPE PInvokeAttributes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PInvokeAttributes_Unwrapped
  enum struct __PInvokeAttributes_Unwrapped : int32_t {
    __E_NoMangle = static_cast<int32_t>(0x1),
    __E_CharSetMask = static_cast<int32_t>(0x6),
    __E_CharSetNotSpec = static_cast<int32_t>(0x0),
    __E_CharSetAnsi = static_cast<int32_t>(0x2),
    __E_CharSetUnicode = static_cast<int32_t>(0x4),
    __E_CharSetAuto = static_cast<int32_t>(0x6),
    __E_BestFitUseAssem = static_cast<int32_t>(0x0),
    __E_BestFitEnabled = static_cast<int32_t>(0x10),
    __E_BestFitDisabled = static_cast<int32_t>(0x20),
    __E_BestFitMask = static_cast<int32_t>(0x30),
    __E_ThrowOnUnmappableCharUseAssem = static_cast<int32_t>(0x0),
    __E_ThrowOnUnmappableCharEnabled = static_cast<int32_t>(0x1000),
    __E_ThrowOnUnmappableCharDisabled = static_cast<int32_t>(0x2000),
    __E_ThrowOnUnmappableCharMask = static_cast<int32_t>(0x3000),
    __E_SupportsLastError = static_cast<int32_t>(0x40),
    __E_CallConvMask = static_cast<int32_t>(0x700),
    __E_CallConvWinapi = static_cast<int32_t>(0x100),
    __E_CallConvCdecl = static_cast<int32_t>(0x200),
    __E_CallConvStdcall = static_cast<int32_t>(0x300),
    __E_CallConvThiscall = static_cast<int32_t>(0x400),
    __E_CallConvFastcall = static_cast<int32_t>(0x500),
    __E_MaxValue = static_cast<int32_t>(0xffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PInvokeAttributes_Unwrapped() const noexcept {
    return static_cast<__PInvokeAttributes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PInvokeAttributes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PInvokeAttributes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BestFitDisabled value: static_cast<int32_t>(0x20)
  static ::System::Reflection::PInvokeAttributes const BestFitDisabled;

  /// @brief Field BestFitEnabled value: static_cast<int32_t>(0x10)
  static ::System::Reflection::PInvokeAttributes const BestFitEnabled;

  /// @brief Field BestFitMask value: static_cast<int32_t>(0x30)
  static ::System::Reflection::PInvokeAttributes const BestFitMask;

  /// @brief Field BestFitUseAssem value: static_cast<int32_t>(0x0)
  static ::System::Reflection::PInvokeAttributes const BestFitUseAssem;

  /// @brief Field CallConvCdecl value: static_cast<int32_t>(0x200)
  static ::System::Reflection::PInvokeAttributes const CallConvCdecl;

  /// @brief Field CallConvFastcall value: static_cast<int32_t>(0x500)
  static ::System::Reflection::PInvokeAttributes const CallConvFastcall;

  /// @brief Field CallConvMask value: static_cast<int32_t>(0x700)
  static ::System::Reflection::PInvokeAttributes const CallConvMask;

  /// @brief Field CallConvStdcall value: static_cast<int32_t>(0x300)
  static ::System::Reflection::PInvokeAttributes const CallConvStdcall;

  /// @brief Field CallConvThiscall value: static_cast<int32_t>(0x400)
  static ::System::Reflection::PInvokeAttributes const CallConvThiscall;

  /// @brief Field CallConvWinapi value: static_cast<int32_t>(0x100)
  static ::System::Reflection::PInvokeAttributes const CallConvWinapi;

  /// @brief Field CharSetAnsi value: static_cast<int32_t>(0x2)
  static ::System::Reflection::PInvokeAttributes const CharSetAnsi;

  /// @brief Field CharSetAuto value: static_cast<int32_t>(0x6)
  static ::System::Reflection::PInvokeAttributes const CharSetAuto;

  /// @brief Field CharSetMask value: static_cast<int32_t>(0x6)
  static ::System::Reflection::PInvokeAttributes const CharSetMask;

  /// @brief Field CharSetNotSpec value: static_cast<int32_t>(0x0)
  static ::System::Reflection::PInvokeAttributes const CharSetNotSpec;

  /// @brief Field CharSetUnicode value: static_cast<int32_t>(0x4)
  static ::System::Reflection::PInvokeAttributes const CharSetUnicode;

  /// @brief Field MaxValue value: static_cast<int32_t>(0xffff)
  static ::System::Reflection::PInvokeAttributes const MaxValue;

  /// @brief Field NoMangle value: static_cast<int32_t>(0x1)
  static ::System::Reflection::PInvokeAttributes const NoMangle;

  /// @brief Field SupportsLastError value: static_cast<int32_t>(0x40)
  static ::System::Reflection::PInvokeAttributes const SupportsLastError;

  /// @brief Field ThrowOnUnmappableCharDisabled value: static_cast<int32_t>(0x2000)
  static ::System::Reflection::PInvokeAttributes const ThrowOnUnmappableCharDisabled;

  /// @brief Field ThrowOnUnmappableCharEnabled value: static_cast<int32_t>(0x1000)
  static ::System::Reflection::PInvokeAttributes const ThrowOnUnmappableCharEnabled;

  /// @brief Field ThrowOnUnmappableCharMask value: static_cast<int32_t>(0x3000)
  static ::System::Reflection::PInvokeAttributes const ThrowOnUnmappableCharMask;

  /// @brief Field ThrowOnUnmappableCharUseAssem value: static_cast<int32_t>(0x0)
  static ::System::Reflection::PInvokeAttributes const ThrowOnUnmappableCharUseAssem;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::PInvokeAttributes, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::PInvokeAttributes, value__) == 0x0, "Offset mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::PInvokeAttributes, "System.Reflection", "PInvokeAttributes");
