#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AixIoctlRequest)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct AixIoctlRequest;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixIoctlRequest);
// Type: System.Net.NetworkInformation::AixIoctlRequest
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9264))
// CS Name: ::System.Net.NetworkInformation::AixIoctlRequest
struct CORDL_TYPE AixIoctlRequest {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __AixIoctlRequest_Unwrapped
  enum struct __AixIoctlRequest_Unwrapped : uint32_t {
    __E_SIOCGSIZIFCONF = static_cast<uint32_t>(0x4696af0u),
    __E_SIOCGIFCONF = static_cast<uint32_t>(0x106945f0u),
    __E_SIOCGIFFLAGS = static_cast<uint32_t>(0x286911f0u),
    __E_SIOCGIFNETMASK = static_cast<uint32_t>(0x286925f0u),
    __E_SIOCGIFMTU = static_cast<uint32_t>(0x286956f0u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AixIoctlRequest_Unwrapped() const noexcept {
    return static_cast<__AixIoctlRequest_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr AixIoctlRequest(uint32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AixIoctlRequest();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SIOCGSIZIFCONF value: static_cast<uint32_t>(0x4696af0u)
  static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGSIZIFCONF;

  /// @brief Field SIOCGIFCONF value: static_cast<uint32_t>(0x106945f0u)
  static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFCONF;

  /// @brief Field SIOCGIFFLAGS value: static_cast<uint32_t>(0x286911f0u)
  static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFFLAGS;

  /// @brief Field SIOCGIFNETMASK value: static_cast<uint32_t>(0x286925f0u)
  static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFNETMASK;

  /// @brief Field SIOCGIFMTU value: static_cast<uint32_t>(0x286956f0u)
  static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFMTU;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixIoctlRequest, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixIoctlRequest, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixIoctlRequest, "System.Net.NetworkInformation", "AixIoctlRequest");
