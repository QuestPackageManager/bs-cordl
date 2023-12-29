#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoSource)
// Forward declare root types
namespace UnityEngine::Video {
struct VideoSource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Video::VideoSource);
// Type: UnityEngine.Video::VideoSource
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15922))
// CS Name: ::UnityEngine.Video::VideoSource
struct CORDL_TYPE VideoSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VideoSource_Unwrapped
  enum struct __VideoSource_Unwrapped : int32_t {
    __E_VideoClip = static_cast<int32_t>(0x0),
    __E_Url = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VideoSource_Unwrapped() const noexcept {
    return static_cast<__VideoSource_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VideoSource(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoSource();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field VideoClip value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Video::VideoSource const VideoClip;

  /// @brief Field Url value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Video::VideoSource const Url;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoSource, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoSource, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoSource, "UnityEngine.Video", "VideoSource");
