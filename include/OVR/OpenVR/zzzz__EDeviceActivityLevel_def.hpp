#pragma once
// IWYU pragma private; include "OVR/OpenVR/EDeviceActivityLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EDeviceActivityLevel)
// Forward declare root types
namespace OVR::OpenVR {
struct EDeviceActivityLevel;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EDeviceActivityLevel);
// Type: OVR.OpenVR::EDeviceActivityLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::EDeviceActivityLevel
struct CORDL_TYPE EDeviceActivityLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EDeviceActivityLevel_Unwrapped
  enum struct __EDeviceActivityLevel_Unwrapped : int32_t {
    __E_k_EDeviceActivityLevel_Unknown = static_cast<int32_t>(0xffffffff),
    __E_k_EDeviceActivityLevel_Idle = static_cast<int32_t>(0x0),
    __E_k_EDeviceActivityLevel_UserInteraction = static_cast<int32_t>(0x1),
    __E_k_EDeviceActivityLevel_UserInteraction_Timeout = static_cast<int32_t>(0x2),
    __E_k_EDeviceActivityLevel_Standby = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EDeviceActivityLevel_Unwrapped() const noexcept {
    return static_cast<__EDeviceActivityLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EDeviceActivityLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EDeviceActivityLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8880 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field k_EDeviceActivityLevel_Idle value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EDeviceActivityLevel const k_EDeviceActivityLevel_Idle;

  /// @brief Field k_EDeviceActivityLevel_Standby value: static_cast<int32_t>(0x3)
  static ::OVR::OpenVR::EDeviceActivityLevel const k_EDeviceActivityLevel_Standby;

  /// @brief Field k_EDeviceActivityLevel_Unknown value: static_cast<int32_t>(0xffffffff)
  static ::OVR::OpenVR::EDeviceActivityLevel const k_EDeviceActivityLevel_Unknown;

  /// @brief Field k_EDeviceActivityLevel_UserInteraction value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EDeviceActivityLevel const k_EDeviceActivityLevel_UserInteraction;

  /// @brief Field k_EDeviceActivityLevel_UserInteraction_Timeout value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::EDeviceActivityLevel const k_EDeviceActivityLevel_UserInteraction_Timeout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EDeviceActivityLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EDeviceActivityLevel, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EDeviceActivityLevel, "OVR.OpenVR", "EDeviceActivityLevel");
