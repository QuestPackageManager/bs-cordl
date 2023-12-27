#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRApplicationType)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRApplicationType;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRApplicationType);
// Type: OVR.OpenVR::EVRApplicationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8603))
// CS Name: ::OVR.OpenVR::EVRApplicationType
struct CORDL_TYPE EVRApplicationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRApplicationType_Unwrapped
  enum struct __EVRApplicationType_Unwrapped : int32_t {
    __E_VRApplication_Other = static_cast<int32_t>(0x0),
    __E_VRApplication_Scene = static_cast<int32_t>(0x1),
    __E_VRApplication_Overlay = static_cast<int32_t>(0x2),
    __E_VRApplication_Background = static_cast<int32_t>(0x3),
    __E_VRApplication_Utility = static_cast<int32_t>(0x4),
    __E_VRApplication_VRMonitor = static_cast<int32_t>(0x5),
    __E_VRApplication_SteamWatchdog = static_cast<int32_t>(0x6),
    __E_VRApplication_Bootstrapper = static_cast<int32_t>(0x7),
    __E_VRApplication_Max = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRApplicationType_Unwrapped() const noexcept {
    return static_cast<__EVRApplicationType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRApplicationType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRApplicationType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field VRApplication_Other value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVRApplicationType const VRApplication_Other;

  /// @brief Field VRApplication_Scene value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EVRApplicationType const VRApplication_Scene;

  /// @brief Field VRApplication_Overlay value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::EVRApplicationType const VRApplication_Overlay;

  /// @brief Field VRApplication_Background value: static_cast<int32_t>(0x3)
  static ::OVR::OpenVR::EVRApplicationType const VRApplication_Background;

  /// @brief Field VRApplication_Utility value: static_cast<int32_t>(0x4)
  static ::OVR::OpenVR::EVRApplicationType const VRApplication_Utility;

  /// @brief Field VRApplication_VRMonitor value: static_cast<int32_t>(0x5)
  static ::OVR::OpenVR::EVRApplicationType const VRApplication_VRMonitor;

  /// @brief Field VRApplication_SteamWatchdog value: static_cast<int32_t>(0x6)
  static ::OVR::OpenVR::EVRApplicationType const VRApplication_SteamWatchdog;

  /// @brief Field VRApplication_Bootstrapper value: static_cast<int32_t>(0x7)
  static ::OVR::OpenVR::EVRApplicationType const VRApplication_Bootstrapper;

  /// @brief Field VRApplication_Max value: static_cast<int32_t>(0x8)
  static ::OVR::OpenVR::EVRApplicationType const VRApplication_Max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRApplicationType, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRApplicationType, "OVR.OpenVR", "EVRApplicationType");
