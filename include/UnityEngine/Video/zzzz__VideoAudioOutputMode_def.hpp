#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoAudioOutputMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoAudioOutputMode)
// Forward declare root types
namespace UnityEngine::Video {
struct VideoAudioOutputMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Video::VideoAudioOutputMode);
// Dependencies
namespace UnityEngine::Video {
// Is value type: true
// CS Name: UnityEngine.Video.VideoAudioOutputMode
struct CORDL_TYPE VideoAudioOutputMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VideoAudioOutputMode_Unwrapped
  enum struct __VideoAudioOutputMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_AudioSource = static_cast<int32_t>(0x1),
    __E_Direct = static_cast<int32_t>(0x2),
    __E_APIOnly = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VideoAudioOutputMode_Unwrapped() const noexcept {
    return static_cast<__VideoAudioOutputMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoAudioOutputMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VideoAudioOutputMode(int32_t value__) noexcept;

  /// @brief Field APIOnly value: I32(3)
  static ::UnityEngine::Video::VideoAudioOutputMode const APIOnly;

  /// @brief Field AudioSource value: I32(1)
  static ::UnityEngine::Video::VideoAudioOutputMode const AudioSource;

  /// @brief Field Direct value: I32(2)
  static ::UnityEngine::Video::VideoAudioOutputMode const Direct;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Video::VideoAudioOutputMode const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18539 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Video::VideoAudioOutputMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoAudioOutputMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoAudioOutputMode, "UnityEngine.Video", "VideoAudioOutputMode");
