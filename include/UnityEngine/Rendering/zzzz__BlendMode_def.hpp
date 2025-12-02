#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BlendMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlendMode)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BlendMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BlendMode);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BlendMode
struct CORDL_TYPE BlendMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BlendMode_Unwrapped
  enum struct __BlendMode_Unwrapped : int32_t {
    __E_Zero = static_cast<int32_t>(0x0),
    __E_One = static_cast<int32_t>(0x1),
    __E_DstColor = static_cast<int32_t>(0x2),
    __E_SrcColor = static_cast<int32_t>(0x3),
    __E_OneMinusDstColor = static_cast<int32_t>(0x4),
    __E_SrcAlpha = static_cast<int32_t>(0x5),
    __E_OneMinusSrcColor = static_cast<int32_t>(0x6),
    __E_DstAlpha = static_cast<int32_t>(0x7),
    __E_OneMinusDstAlpha = static_cast<int32_t>(0x8),
    __E_SrcAlphaSaturate = static_cast<int32_t>(0x9),
    __E_OneMinusSrcAlpha = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BlendMode_Unwrapped() const noexcept {
    return static_cast<__BlendMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlendMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BlendMode(int32_t value__) noexcept;

  /// @brief Field DstAlpha value: I32(7)
  static ::UnityEngine::Rendering::BlendMode const DstAlpha;

  /// @brief Field DstColor value: I32(2)
  static ::UnityEngine::Rendering::BlendMode const DstColor;

  /// @brief Field One value: I32(1)
  static ::UnityEngine::Rendering::BlendMode const One;

  /// @brief Field OneMinusDstAlpha value: I32(8)
  static ::UnityEngine::Rendering::BlendMode const OneMinusDstAlpha;

  /// @brief Field OneMinusDstColor value: I32(4)
  static ::UnityEngine::Rendering::BlendMode const OneMinusDstColor;

  /// @brief Field OneMinusSrcAlpha value: I32(10)
  static ::UnityEngine::Rendering::BlendMode const OneMinusSrcAlpha;

  /// @brief Field OneMinusSrcColor value: I32(6)
  static ::UnityEngine::Rendering::BlendMode const OneMinusSrcColor;

  /// @brief Field SrcAlpha value: I32(5)
  static ::UnityEngine::Rendering::BlendMode const SrcAlpha;

  /// @brief Field SrcAlphaSaturate value: I32(9)
  static ::UnityEngine::Rendering::BlendMode const SrcAlphaSaturate;

  /// @brief Field SrcColor value: I32(3)
  static ::UnityEngine::Rendering::BlendMode const SrcColor;

  /// @brief Field Zero value: I32(0)
  static ::UnityEngine::Rendering::BlendMode const Zero;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10687 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BlendMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BlendMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BlendMode, "UnityEngine.Rendering", "BlendMode");
