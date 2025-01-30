#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixIoctlRequest.hpp"
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
// Dependencies
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.AixIoctlRequest
struct CORDL_TYPE AixIoctlRequest {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __AixIoctlRequest_Unwrapped
  enum struct __AixIoctlRequest_Unwrapped : uint32_t {
    __E_SIOCGSIZIFCONF = static_cast<uint32_t>(0x4004696au),
    __E_SIOCGIFCONF = static_cast<uint32_t>(0xc0106945u),
    __E_SIOCGIFFLAGS = static_cast<uint32_t>(0xc0286911u),
    __E_SIOCGIFNETMASK = static_cast<uint32_t>(0xc0286925u),
    __E_SIOCGIFMTU = static_cast<uint32_t>(0xc0286956u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AixIoctlRequest_Unwrapped() const noexcept {
    return static_cast<__AixIoctlRequest_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AixIoctlRequest();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr AixIoctlRequest(uint32_t value__) noexcept;

  /// @brief Field SIOCGIFCONF value: U32(3222300997)
  static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFCONF;

  /// @brief Field SIOCGIFFLAGS value: U32(3223873809)
  static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFFLAGS;

  /// @brief Field SIOCGIFMTU value: U32(3223873878)
  static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFMTU;

  /// @brief Field SIOCGIFNETMASK value: U32(3223873829)
  static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFNETMASK;

  /// @brief Field SIOCGSIZIFCONF value: U32(1074030954)
  static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGSIZIFCONF;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9783 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::AixIoctlRequest, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixIoctlRequest, 0x4>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixIoctlRequest, "System.Net.NetworkInformation", "AixIoctlRequest");
