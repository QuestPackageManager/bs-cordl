#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoTimeReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoTimeReference)
// Forward declare root types
namespace UnityEngine::Video {
struct VideoTimeReference;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Video::VideoTimeReference);
// Dependencies
namespace UnityEngine::Video {
// Is value type: true
// CS Name: UnityEngine.Video.VideoTimeReference
struct CORDL_TYPE VideoTimeReference {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VideoTimeReference_Unwrapped
  enum struct __VideoTimeReference_Unwrapped : int32_t {
    __E_Freerun = static_cast<int32_t>(0x0),
    __E_InternalTime = static_cast<int32_t>(0x1),
    __E_ExternalTime = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VideoTimeReference_Unwrapped() const noexcept {
    return static_cast<__VideoTimeReference_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoTimeReference();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VideoTimeReference(int32_t value__) noexcept;

  /// @brief Field ExternalTime value: I32(2)
  static ::UnityEngine::Video::VideoTimeReference const ExternalTime;

  /// @brief Field Freerun value: I32(0)
  static ::UnityEngine::Video::VideoTimeReference const Freerun;

  /// @brief Field InternalTime value: I32(1)
  static ::UnityEngine::Video::VideoTimeReference const InternalTime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22048 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Video::VideoTimeReference, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoTimeReference, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoTimeReference, "UnityEngine.Video", "VideoTimeReference");
