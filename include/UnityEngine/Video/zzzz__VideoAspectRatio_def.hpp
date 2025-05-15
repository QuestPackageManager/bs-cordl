#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoAspectRatio.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoAspectRatio)
// Forward declare root types
namespace UnityEngine::Video {
struct VideoAspectRatio;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Video::VideoAspectRatio);
// Dependencies
namespace UnityEngine::Video {
// Is value type: true
// CS Name: UnityEngine.Video.VideoAspectRatio
struct CORDL_TYPE VideoAspectRatio {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VideoAspectRatio_Unwrapped
  enum struct __VideoAspectRatio_Unwrapped : int32_t {
    __E_NoScaling = static_cast<int32_t>(0x0),
    __E_FitVertically = static_cast<int32_t>(0x1),
    __E_FitHorizontally = static_cast<int32_t>(0x2),
    __E_FitInside = static_cast<int32_t>(0x3),
    __E_FitOutside = static_cast<int32_t>(0x4),
    __E_Stretch = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VideoAspectRatio_Unwrapped() const noexcept {
    return static_cast<__VideoAspectRatio_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoAspectRatio();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VideoAspectRatio(int32_t value__) noexcept;

  /// @brief Field FitHorizontally value: I32(2)
  static ::UnityEngine::Video::VideoAspectRatio const FitHorizontally;

  /// @brief Field FitInside value: I32(3)
  static ::UnityEngine::Video::VideoAspectRatio const FitInside;

  /// @brief Field FitOutside value: I32(4)
  static ::UnityEngine::Video::VideoAspectRatio const FitOutside;

  /// @brief Field FitVertically value: I32(1)
  static ::UnityEngine::Video::VideoAspectRatio const FitVertically;

  /// @brief Field NoScaling value: I32(0)
  static ::UnityEngine::Video::VideoAspectRatio const NoScaling;

  /// @brief Field Stretch value: I32(5)
  static ::UnityEngine::Video::VideoAspectRatio const Stretch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18534 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Video::VideoAspectRatio, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoAspectRatio, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoAspectRatio, "UnityEngine.Video", "VideoAspectRatio");
