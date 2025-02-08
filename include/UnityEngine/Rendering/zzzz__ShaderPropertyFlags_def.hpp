#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderPropertyFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderPropertyFlags)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderPropertyFlags);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShaderPropertyFlags
struct CORDL_TYPE ShaderPropertyFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ShaderPropertyFlags_Unwrapped
  enum struct __ShaderPropertyFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_HideInInspector = static_cast<int32_t>(0x1),
    __E_PerRendererData = static_cast<int32_t>(0x2),
    __E_NoScaleOffset = static_cast<int32_t>(0x4),
    __E_Normal = static_cast<int32_t>(0x8),
    __E_HDR = static_cast<int32_t>(0x10),
    __E_Gamma = static_cast<int32_t>(0x20),
    __E_NonModifiableTextureData = static_cast<int32_t>(0x40),
    __E_MainTexture = static_cast<int32_t>(0x80),
    __E_MainColor = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShaderPropertyFlags_Unwrapped() const noexcept {
    return static_cast<__ShaderPropertyFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderPropertyFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShaderPropertyFlags(int32_t value__) noexcept;

  /// @brief Field Gamma value: I32(32)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const Gamma;

  /// @brief Field HDR value: I32(16)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const HDR;

  /// @brief Field HideInInspector value: I32(1)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const HideInInspector;

  /// @brief Field MainColor value: I32(256)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const MainColor;

  /// @brief Field MainTexture value: I32(128)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const MainTexture;

  /// @brief Field NoScaleOffset value: I32(4)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const NoScaleOffset;

  /// @brief Field NonModifiableTextureData value: I32(64)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const NonModifiableTextureData;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const None;

  /// @brief Field Normal value: I32(8)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const Normal;

  /// @brief Field PerRendererData value: I32(2)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const PerRendererData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11262 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShaderPropertyFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderPropertyFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderPropertyFlags, "UnityEngine.Rendering", "ShaderPropertyFlags");
