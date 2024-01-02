#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AixAddressFamily)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct AixAddressFamily;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixAddressFamily);
// Type: System.Net.NetworkInformation::AixAddressFamily
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9263))
// CS Name: ::System.Net.NetworkInformation::AixAddressFamily
struct CORDL_TYPE AixAddressFamily {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AixAddressFamily_Unwrapped
  enum struct __AixAddressFamily_Unwrapped : int32_t {
    __E_AF_INET = static_cast<int32_t>(0x2),
    __E_AF_INET6 = static_cast<int32_t>(0x18),
    __E_AF_LINK = static_cast<int32_t>(0x12),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AixAddressFamily_Unwrapped() const noexcept {
    return static_cast<__AixAddressFamily_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AixAddressFamily(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AixAddressFamily();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AF_INET value: static_cast<int32_t>(0x2)
  static ::System::Net::NetworkInformation::AixAddressFamily const AF_INET;

  /// @brief Field AF_INET6 value: static_cast<int32_t>(0x18)
  static ::System::Net::NetworkInformation::AixAddressFamily const AF_INET6;

  /// @brief Field AF_LINK value: static_cast<int32_t>(0x12)
  static ::System::Net::NetworkInformation::AixAddressFamily const AF_LINK;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixAddressFamily, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixAddressFamily, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixAddressFamily, "System.Net.NetworkInformation", "AixAddressFamily");
