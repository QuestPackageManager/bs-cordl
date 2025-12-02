#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRRenderModelError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRRenderModelError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRRenderModelError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRRenderModelError);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRRenderModelError
struct CORDL_TYPE EVRRenderModelError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRRenderModelError_Unwrapped
  enum struct __EVRRenderModelError_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Loading = static_cast<int32_t>(0x64),
    __E_NotSupported = static_cast<int32_t>(0xc8),
    __E_InvalidArg = static_cast<int32_t>(0x12c),
    __E_InvalidModel = static_cast<int32_t>(0x12d),
    __E_NoShapes = static_cast<int32_t>(0x12e),
    __E_MultipleShapes = static_cast<int32_t>(0x12f),
    __E_TooManyVertices = static_cast<int32_t>(0x130),
    __E_MultipleTextures = static_cast<int32_t>(0x131),
    __E_BufferTooSmall = static_cast<int32_t>(0x132),
    __E_NotEnoughNormals = static_cast<int32_t>(0x133),
    __E_NotEnoughTexCoords = static_cast<int32_t>(0x134),
    __E_InvalidTexture = static_cast<int32_t>(0x190),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRRenderModelError_Unwrapped() const noexcept {
    return static_cast<__EVRRenderModelError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRRenderModelError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRRenderModelError(int32_t value__) noexcept;

  /// @brief Field BufferTooSmall value: I32(306)
  static ::OVR::OpenVR::EVRRenderModelError const BufferTooSmall;

  /// @brief Field InvalidArg value: I32(300)
  static ::OVR::OpenVR::EVRRenderModelError const InvalidArg;

  /// @brief Field InvalidModel value: I32(301)
  static ::OVR::OpenVR::EVRRenderModelError const InvalidModel;

  /// @brief Field InvalidTexture value: I32(400)
  static ::OVR::OpenVR::EVRRenderModelError const InvalidTexture;

  /// @brief Field Loading value: I32(100)
  static ::OVR::OpenVR::EVRRenderModelError const Loading;

  /// @brief Field MultipleShapes value: I32(303)
  static ::OVR::OpenVR::EVRRenderModelError const MultipleShapes;

  /// @brief Field MultipleTextures value: I32(305)
  static ::OVR::OpenVR::EVRRenderModelError const MultipleTextures;

  /// @brief Field NoShapes value: I32(302)
  static ::OVR::OpenVR::EVRRenderModelError const NoShapes;

  /// @brief Field None value: I32(0)
  static ::OVR::OpenVR::EVRRenderModelError const None;

  /// @brief Field NotEnoughNormals value: I32(307)
  static ::OVR::OpenVR::EVRRenderModelError const NotEnoughNormals;

  /// @brief Field NotEnoughTexCoords value: I32(308)
  static ::OVR::OpenVR::EVRRenderModelError const NotEnoughTexCoords;

  /// @brief Field NotSupported value: I32(200)
  static ::OVR::OpenVR::EVRRenderModelError const NotSupported;

  /// @brief Field TooManyVertices value: I32(304)
  static ::OVR::OpenVR::EVRRenderModelError const TooManyVertices;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8427 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRRenderModelError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRRenderModelError, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRRenderModelError, "OVR.OpenVR", "EVRRenderModelError");
