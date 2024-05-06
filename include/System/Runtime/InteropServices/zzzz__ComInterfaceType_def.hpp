#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ComInterfaceType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComInterfaceType)
// Forward declare root types
namespace System::Runtime::InteropServices {
struct ComInterfaceType;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::ComInterfaceType);
// Type: System.Runtime.InteropServices::ComInterfaceType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: true
// CS Name: ::System.Runtime.InteropServices::ComInterfaceType
struct CORDL_TYPE ComInterfaceType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ComInterfaceType_Unwrapped
  enum struct __ComInterfaceType_Unwrapped : int32_t {
    __E_InterfaceIsDual = static_cast<int32_t>(0x0),
    __E_InterfaceIsIUnknown = static_cast<int32_t>(0x1),
    __E_InterfaceIsIDispatch = static_cast<int32_t>(0x2),
    __E_InterfaceIsIInspectable = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ComInterfaceType_Unwrapped() const noexcept {
    return static_cast<__ComInterfaceType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ComInterfaceType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ComInterfaceType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field InterfaceIsDual value: static_cast<int32_t>(0x0)
  static ::System::Runtime::InteropServices::ComInterfaceType const InterfaceIsDual;

  /// @brief Field InterfaceIsIDispatch value: static_cast<int32_t>(0x2)
  static ::System::Runtime::InteropServices::ComInterfaceType const InterfaceIsIDispatch;

  /// @brief Field InterfaceIsIInspectable value: static_cast<int32_t>(0x3)
  static ::System::Runtime::InteropServices::ComInterfaceType const InterfaceIsIInspectable;

  /// @brief Field InterfaceIsIUnknown value: static_cast<int32_t>(0x1)
  static ::System::Runtime::InteropServices::ComInterfaceType const InterfaceIsIUnknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::ComInterfaceType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::ComInterfaceType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ComInterfaceType, "System.Runtime.InteropServices", "ComInterfaceType");
