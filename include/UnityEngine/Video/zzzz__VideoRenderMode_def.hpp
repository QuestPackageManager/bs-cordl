#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoRenderMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoRenderMode)
// Forward declare root types
namespace UnityEngine::Video {
struct VideoRenderMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Video::VideoRenderMode);
// Dependencies
namespace UnityEngine::Video {
// Is value type: true
// CS Name: UnityEngine.Video.VideoRenderMode
struct CORDL_TYPE VideoRenderMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VideoRenderMode_Unwrapped
  enum struct __VideoRenderMode_Unwrapped : int32_t {
    __E_CameraFarPlane = static_cast<int32_t>(0x0),
    __E_CameraNearPlane = static_cast<int32_t>(0x1),
    __E_RenderTexture = static_cast<int32_t>(0x2),
    __E_MaterialOverride = static_cast<int32_t>(0x3),
    __E_APIOnly = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VideoRenderMode_Unwrapped() const noexcept {
    return static_cast<__VideoRenderMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoRenderMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VideoRenderMode(int32_t value__) noexcept;

  /// @brief Field APIOnly value: I32(4)
  static ::UnityEngine::Video::VideoRenderMode const APIOnly;

  /// @brief Field CameraFarPlane value: I32(0)
  static ::UnityEngine::Video::VideoRenderMode const CameraFarPlane;

  /// @brief Field CameraNearPlane value: I32(1)
  static ::UnityEngine::Video::VideoRenderMode const CameraNearPlane;

  /// @brief Field MaterialOverride value: I32(3)
  static ::UnityEngine::Video::VideoRenderMode const MaterialOverride;

  /// @brief Field RenderTexture value: I32(2)
  static ::UnityEngine::Video::VideoRenderMode const RenderTexture;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18525 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Video::VideoRenderMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoRenderMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoRenderMode, "UnityEngine.Video", "VideoRenderMode");
