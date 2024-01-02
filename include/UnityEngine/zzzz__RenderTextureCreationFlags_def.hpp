#pragma once
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
// Type: UnityEngine::RenderTextureCreationFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10119))
// CS Name: ::UnityEngine::RenderTextureCreationFlags
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderTextureCreationFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTextureCreationFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MipMap value: static_cast<int32_t>(0x1)
  static ::UnityEngine::RenderTextureCreationFlags const MipMap;

  /// @brief Field AutoGenerateMips value: static_cast<int32_t>(0x2)
  static ::UnityEngine::RenderTextureCreationFlags const AutoGenerateMips;

  /// @brief Field SRGB value: static_cast<int32_t>(0x4)
  static ::UnityEngine::RenderTextureCreationFlags const SRGB;

  /// @brief Field EyeTexture value: static_cast<int32_t>(0x8)
  static ::UnityEngine::RenderTextureCreationFlags const EyeTexture;

  /// @brief Field EnableRandomWrite value: static_cast<int32_t>(0x10)
  static ::UnityEngine::RenderTextureCreationFlags const EnableRandomWrite;

  /// @brief Field CreatedFromScript value: static_cast<int32_t>(0x20)
  static ::UnityEngine::RenderTextureCreationFlags const CreatedFromScript;

  /// @brief Field AllowVerticalFlip value: static_cast<int32_t>(0x80)
  static ::UnityEngine::RenderTextureCreationFlags const AllowVerticalFlip;

  /// @brief Field NoResolvedColorSurface value: static_cast<int32_t>(0x100)
  static ::UnityEngine::RenderTextureCreationFlags const NoResolvedColorSurface;

  /// @brief Field DynamicallyScalable value: static_cast<int32_t>(0x400)
  static ::UnityEngine::RenderTextureCreationFlags const DynamicallyScalable;

  /// @brief Field BindMS value: static_cast<int32_t>(0x800)
  static ::UnityEngine::RenderTextureCreationFlags const BindMS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderTextureCreationFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::RenderTextureCreationFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTextureCreationFlags, "UnityEngine", "RenderTextureCreationFlags");
