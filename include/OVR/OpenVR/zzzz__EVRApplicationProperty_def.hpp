#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRApplicationProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRApplicationProperty)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRApplicationProperty;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRApplicationProperty);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRApplicationProperty
struct CORDL_TYPE EVRApplicationProperty {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRApplicationProperty_Unwrapped
  enum struct __EVRApplicationProperty_Unwrapped : int32_t {
    __E_Name_String = static_cast<int32_t>(0x0),
    __E_LaunchType_String = static_cast<int32_t>(0xb),
    __E_WorkingDirectory_String = static_cast<int32_t>(0xc),
    __E_BinaryPath_String = static_cast<int32_t>(0xd),
    __E_Arguments_String = static_cast<int32_t>(0xe),
    __E_URL_String = static_cast<int32_t>(0xf),
    __E_Description_String = static_cast<int32_t>(0x32),
    __E_NewsURL_String = static_cast<int32_t>(0x33),
    __E_ImagePath_String = static_cast<int32_t>(0x34),
    __E_Source_String = static_cast<int32_t>(0x35),
    __E_ActionManifestURL_String = static_cast<int32_t>(0x36),
    __E_IsDashboardOverlay_Bool = static_cast<int32_t>(0x3c),
    __E_IsTemplate_Bool = static_cast<int32_t>(0x3d),
    __E_IsInstanced_Bool = static_cast<int32_t>(0x3e),
    __E_IsInternal_Bool = static_cast<int32_t>(0x3f),
    __E_WantsCompositorPauseInStandby_Bool = static_cast<int32_t>(0x40),
    __E_LastLaunchTime_Uint64 = static_cast<int32_t>(0x46),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRApplicationProperty_Unwrapped() const noexcept {
    return static_cast<__EVRApplicationProperty_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRApplicationProperty();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRApplicationProperty(int32_t value__) noexcept;

  /// @brief Field ActionManifestURL_String value: I32(54)
  static ::OVR::OpenVR::EVRApplicationProperty const ActionManifestURL_String;

  /// @brief Field Arguments_String value: I32(14)
  static ::OVR::OpenVR::EVRApplicationProperty const Arguments_String;

  /// @brief Field BinaryPath_String value: I32(13)
  static ::OVR::OpenVR::EVRApplicationProperty const BinaryPath_String;

  /// @brief Field Description_String value: I32(50)
  static ::OVR::OpenVR::EVRApplicationProperty const Description_String;

  /// @brief Field ImagePath_String value: I32(52)
  static ::OVR::OpenVR::EVRApplicationProperty const ImagePath_String;

  /// @brief Field IsDashboardOverlay_Bool value: I32(60)
  static ::OVR::OpenVR::EVRApplicationProperty const IsDashboardOverlay_Bool;

  /// @brief Field IsInstanced_Bool value: I32(62)
  static ::OVR::OpenVR::EVRApplicationProperty const IsInstanced_Bool;

  /// @brief Field IsInternal_Bool value: I32(63)
  static ::OVR::OpenVR::EVRApplicationProperty const IsInternal_Bool;

  /// @brief Field IsTemplate_Bool value: I32(61)
  static ::OVR::OpenVR::EVRApplicationProperty const IsTemplate_Bool;

  /// @brief Field LastLaunchTime_Uint64 value: I32(70)
  static ::OVR::OpenVR::EVRApplicationProperty const LastLaunchTime_Uint64;

  /// @brief Field LaunchType_String value: I32(11)
  static ::OVR::OpenVR::EVRApplicationProperty const LaunchType_String;

  /// @brief Field Name_String value: I32(0)
  static ::OVR::OpenVR::EVRApplicationProperty const Name_String;

  /// @brief Field NewsURL_String value: I32(51)
  static ::OVR::OpenVR::EVRApplicationProperty const NewsURL_String;

  /// @brief Field Source_String value: I32(53)
  static ::OVR::OpenVR::EVRApplicationProperty const Source_String;

  /// @brief Field URL_String value: I32(15)
  static ::OVR::OpenVR::EVRApplicationProperty const URL_String;

  /// @brief Field WantsCompositorPauseInStandby_Bool value: I32(64)
  static ::OVR::OpenVR::EVRApplicationProperty const WantsCompositorPauseInStandby_Bool;

  /// @brief Field WorkingDirectory_String value: I32(12)
  static ::OVR::OpenVR::EVRApplicationProperty const WorkingDirectory_String;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8935 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRApplicationProperty, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRApplicationProperty, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRApplicationProperty, "OVR.OpenVR", "EVRApplicationProperty");
