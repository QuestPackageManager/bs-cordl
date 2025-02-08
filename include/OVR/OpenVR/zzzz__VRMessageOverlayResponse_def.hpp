#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRMessageOverlayResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRMessageOverlayResponse)
// Forward declare root types
namespace OVR::OpenVR {
struct VRMessageOverlayResponse;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRMessageOverlayResponse);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VRMessageOverlayResponse
struct CORDL_TYPE VRMessageOverlayResponse {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VRMessageOverlayResponse_Unwrapped
  enum struct __VRMessageOverlayResponse_Unwrapped : int32_t {
    __E_ButtonPress_0 = static_cast<int32_t>(0x0),
    __E_ButtonPress_1 = static_cast<int32_t>(0x1),
    __E_ButtonPress_2 = static_cast<int32_t>(0x2),
    __E_ButtonPress_3 = static_cast<int32_t>(0x3),
    __E_CouldntFindSystemOverlay = static_cast<int32_t>(0x4),
    __E_CouldntFindOrCreateClientOverlay = static_cast<int32_t>(0x5),
    __E_ApplicationQuit = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VRMessageOverlayResponse_Unwrapped() const noexcept {
    return static_cast<__VRMessageOverlayResponse_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VRMessageOverlayResponse();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VRMessageOverlayResponse(int32_t value__) noexcept;

  /// @brief Field ApplicationQuit value: I32(6)
  static ::OVR::OpenVR::VRMessageOverlayResponse const ApplicationQuit;

  /// @brief Field ButtonPress_0 value: I32(0)
  static ::OVR::OpenVR::VRMessageOverlayResponse const ButtonPress_0;

  /// @brief Field ButtonPress_1 value: I32(1)
  static ::OVR::OpenVR::VRMessageOverlayResponse const ButtonPress_1;

  /// @brief Field ButtonPress_2 value: I32(2)
  static ::OVR::OpenVR::VRMessageOverlayResponse const ButtonPress_2;

  /// @brief Field ButtonPress_3 value: I32(3)
  static ::OVR::OpenVR::VRMessageOverlayResponse const ButtonPress_3;

  /// @brief Field CouldntFindOrCreateClientOverlay value: I32(5)
  static ::OVR::OpenVR::VRMessageOverlayResponse const CouldntFindOrCreateClientOverlay;

  /// @brief Field CouldntFindSystemOverlay value: I32(4)
  static ::OVR::OpenVR::VRMessageOverlayResponse const CouldntFindSystemOverlay;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8944 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VRMessageOverlayResponse, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRMessageOverlayResponse, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRMessageOverlayResponse, "OVR.OpenVR", "VRMessageOverlayResponse");
