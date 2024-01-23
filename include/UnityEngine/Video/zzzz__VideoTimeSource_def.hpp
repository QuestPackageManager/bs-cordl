#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoTimeSource)
// Forward declare root types
namespace UnityEngine::Video {
struct VideoTimeSource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Video::VideoTimeSource);
// Type: UnityEngine.Video::VideoTimeSource
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16079))
// CS Name: ::UnityEngine.Video::VideoTimeSource
struct CORDL_TYPE VideoTimeSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VideoTimeSource_Unwrapped
  enum struct __VideoTimeSource_Unwrapped : int32_t {
    __E_AudioDSPTimeSource = static_cast<int32_t>(0x0),
    __E_GameTimeSource = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VideoTimeSource_Unwrapped() const noexcept {
    return static_cast<__VideoTimeSource_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VideoTimeSource(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoTimeSource();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AudioDSPTimeSource value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Video::VideoTimeSource const AudioDSPTimeSource;

  /// @brief Field GameTimeSource value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Video::VideoTimeSource const GameTimeSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoTimeSource, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoTimeSource, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoTimeSource, "UnityEngine.Video", "VideoTimeSource");
