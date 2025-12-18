#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugMipMapModeTerrainTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugMipMapModeTerrainTexture)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DebugMipMapModeTerrainTexture;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugMipMapModeTerrainTexture
struct CORDL_TYPE DebugMipMapModeTerrainTexture {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugMipMapModeTerrainTexture_Unwrapped
  enum struct __DebugMipMapModeTerrainTexture_Unwrapped : int32_t {
    __E_Control = static_cast<int32_t>(0x0),
    __E_Layer0 = static_cast<int32_t>(0x1),
    __E_Layer1 = static_cast<int32_t>(0x2),
    __E_Layer2 = static_cast<int32_t>(0x3),
    __E_Layer3 = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugMipMapModeTerrainTexture_Unwrapped() const noexcept {
    return static_cast<__DebugMipMapModeTerrainTexture_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugMipMapModeTerrainTexture();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugMipMapModeTerrainTexture(int32_t value__) noexcept;

  /// @brief Field Control value: I32(0)
  static ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture const Control;

  /// @brief Field Layer0 value: I32(1)
  static ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture const Layer0;

  /// @brief Field Layer1 value: I32(2)
  static ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture const Layer1;

  /// @brief Field Layer2 value: I32(3)
  static ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture const Layer2;

  /// @brief Field Layer3 value: I32(4)
  static ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture const Layer3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23123 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture, "UnityEngine.Rendering.Universal", "DebugMipMapModeTerrainTexture");
