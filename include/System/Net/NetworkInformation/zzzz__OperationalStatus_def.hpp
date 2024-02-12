#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OperationalStatus)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct OperationalStatus;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::OperationalStatus);
// Type: System.Net.NetworkInformation::OperationalStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7264))
// CS Name: ::System.Net.NetworkInformation::OperationalStatus
struct CORDL_TYPE OperationalStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OperationalStatus_Unwrapped
  enum struct __OperationalStatus_Unwrapped : int32_t {
    __E_Up = static_cast<int32_t>(0x1),
    __E_Down = static_cast<int32_t>(0x2),
    __E_Testing = static_cast<int32_t>(0x3),
    __E_Unknown = static_cast<int32_t>(0x4),
    __E_Dormant = static_cast<int32_t>(0x5),
    __E_NotPresent = static_cast<int32_t>(0x6),
    __E_LowerLayerDown = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OperationalStatus_Unwrapped() const noexcept {
    return static_cast<__OperationalStatus_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OperationalStatus(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OperationalStatus();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Up value: static_cast<int32_t>(0x1)
  static ::System::Net::NetworkInformation::OperationalStatus const Up;

  /// @brief Field Down value: static_cast<int32_t>(0x2)
  static ::System::Net::NetworkInformation::OperationalStatus const Down;

  /// @brief Field Testing value: static_cast<int32_t>(0x3)
  static ::System::Net::NetworkInformation::OperationalStatus const Testing;

  /// @brief Field Unknown value: static_cast<int32_t>(0x4)
  static ::System::Net::NetworkInformation::OperationalStatus const Unknown;

  /// @brief Field Dormant value: static_cast<int32_t>(0x5)
  static ::System::Net::NetworkInformation::OperationalStatus const Dormant;

  /// @brief Field NotPresent value: static_cast<int32_t>(0x6)
  static ::System::Net::NetworkInformation::OperationalStatus const NotPresent;

  /// @brief Field LowerLayerDown value: static_cast<int32_t>(0x7)
  static ::System::Net::NetworkInformation::OperationalStatus const LowerLayerDown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::OperationalStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::OperationalStatus, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::OperationalStatus, "System.Net.NetworkInformation", "OperationalStatus");
