#pragma once
// IWYU pragma private; include "UnityEngine/RenderTextureCreationFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTextureCreationFlags)
// Forward declare root types
namespace UnityEngine {
struct RenderTextureCreationFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderTextureCreationFlags);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RenderTextureCreationFlags
struct CORDL_TYPE RenderTextureCreationFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderTextureCreationFlags_Unwrapped
  enum struct __RenderTextureCreationFlags_Unwrapped : int32_t {
    __E_MipMap = static_cast<int32_t>(0x1),
    __E_AutoGenerateMips = static_cast<int32_t>(0x2),
    __E_SRGB = static_cast<int32_t>(0x4),
    __E_EyeTexture = static_cast<int32_t>(0x8),
    __E_EnableRandomWrite = static_cast<int32_t>(0x10),
    __E_CreatedFromScript = static_cast<int32_t>(0x20),
    __E_AllowVerticalFlip = static_cast<int32_t>(0x80),
    __E_NoResolvedColorSurface = static_cast<int32_t>(0x100),
    __E_DynamicallyScalable = static_cast<int32_t>(0x400),
    __E_BindMS = static_cast<int32_t>(0x800),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderTextureCreationFlags_Unwrapped() const noexcept {
    return static_cast<__RenderTextureCreationFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTextureCreationFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderTextureCreationFlags(int32_t value__) noexcept;

  /// @brief Field AllowVerticalFlip value: I32(128)
  static ::UnityEngine::RenderTextureCreationFlags const AllowVerticalFlip;

  /// @brief Field AutoGenerateMips value: I32(2)
  static ::UnityEngine::RenderTextureCreationFlags const AutoGenerateMips;

  /// @brief Field BindMS value: I32(2048)
  static ::UnityEngine::RenderTextureCreationFlags const BindMS;

  /// @brief Field CreatedFromScript value: I32(32)
  static ::UnityEngine::RenderTextureCreationFlags const CreatedFromScript;

  /// @brief Field DynamicallyScalable value: I32(1024)
  static ::UnityEngine::RenderTextureCreationFlags const DynamicallyScalable;

  /// @brief Field EnableRandomWrite value: I32(16)
  static ::UnityEngine::RenderTextureCreationFlags const EnableRandomWrite;

  /// @brief Field EyeTexture value: I32(8)
  static ::UnityEngine::RenderTextureCreationFlags const EyeTexture;

  /// @brief Field MipMap value: I32(1)
  static ::UnityEngine::RenderTextureCreationFlags const MipMap;

  /// @brief Field NoResolvedColorSurface value: I32(256)
  static ::UnityEngine::RenderTextureCreationFlags const NoResolvedColorSurface;

  /// @brief Field SRGB value: I32(4)
  static ::UnityEngine::RenderTextureCreationFlags const SRGB;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10768 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RenderTextureCreationFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderTextureCreationFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTextureCreationFlags, "UnityEngine", "RenderTextureCreationFlags");
