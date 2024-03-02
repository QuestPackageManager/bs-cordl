#pragma once
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
// Type: UnityEngine.Rendering::ShaderPropertyFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::ShaderPropertyFlags
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Gamma value: static_cast<int32_t>(0x20)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const Gamma;

  /// @brief Field HDR value: static_cast<int32_t>(0x10)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const HDR;

  /// @brief Field HideInInspector value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const HideInInspector;

  /// @brief Field MainColor value: static_cast<int32_t>(0x100)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const MainColor;

  /// @brief Field MainTexture value: static_cast<int32_t>(0x80)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const MainTexture;

  /// @brief Field NoScaleOffset value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const NoScaleOffset;

  /// @brief Field NonModifiableTextureData value: static_cast<int32_t>(0x40)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const NonModifiableTextureData;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const None;

  /// @brief Field Normal value: static_cast<int32_t>(0x8)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const Normal;

  /// @brief Field PerRendererData value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::ShaderPropertyFlags const PerRendererData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderPropertyFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderPropertyFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderPropertyFlags, "UnityEngine.Rendering", "ShaderPropertyFlags");
