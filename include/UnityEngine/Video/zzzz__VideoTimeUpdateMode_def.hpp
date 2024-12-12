#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoTimeUpdateMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoTimeUpdateMode)
// Forward declare root types
namespace UnityEngine::Video {
struct VideoTimeUpdateMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Video::VideoTimeUpdateMode);
// Dependencies
namespace UnityEngine::Video {
// Is value type: true
// CS Name: UnityEngine.Video.VideoTimeUpdateMode
struct CORDL_TYPE VideoTimeUpdateMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VideoTimeUpdateMode_Unwrapped
  enum struct __VideoTimeUpdateMode_Unwrapped : int32_t {
    __E_DSPTime = static_cast<int32_t>(0x0),
    __E_GameTime = static_cast<int32_t>(0x1),
    __E_UnscaledGameTime = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VideoTimeUpdateMode_Unwrapped() const noexcept {
    return static_cast<__VideoTimeUpdateMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoTimeUpdateMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VideoTimeUpdateMode(int32_t value__) noexcept;

  /// @brief Field DSPTime value: I32(0)
  static ::UnityEngine::Video::VideoTimeUpdateMode const DSPTime;

  /// @brief Field GameTime value: I32(1)
  static ::UnityEngine::Video::VideoTimeUpdateMode const GameTime;

  /// @brief Field UnscaledGameTime value: I32(2)
  static ::UnityEngine::Video::VideoTimeUpdateMode const UnscaledGameTime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18526 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Video::VideoTimeUpdateMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoTimeUpdateMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoTimeUpdateMode, "UnityEngine.Video", "VideoTimeUpdateMode");
