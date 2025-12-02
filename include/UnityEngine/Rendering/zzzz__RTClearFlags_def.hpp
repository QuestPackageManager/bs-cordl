#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTClearFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RTClearFlags)
// Forward declare root types
namespace UnityEngine::Rendering {
struct RTClearFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RTClearFlags);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RTClearFlags
struct CORDL_TYPE RTClearFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RTClearFlags_Unwrapped
  enum struct __RTClearFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Color = static_cast<int32_t>(0x1),
    __E_Depth = static_cast<int32_t>(0x2),
    __E_Stencil = static_cast<int32_t>(0x4),
    __E_All = static_cast<int32_t>(0x7),
    __E_DepthStencil = static_cast<int32_t>(0x6),
    __E_ColorDepth = static_cast<int32_t>(0x3),
    __E_ColorStencil = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RTClearFlags_Unwrapped() const noexcept {
    return static_cast<__RTClearFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RTClearFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RTClearFlags(int32_t value__) noexcept;

  /// @brief Field All value: I32(7)
  static ::UnityEngine::Rendering::RTClearFlags const All;

  /// @brief Field Color value: I32(1)
  static ::UnityEngine::Rendering::RTClearFlags const Color;

  /// @brief Field ColorDepth value: I32(3)
  static ::UnityEngine::Rendering::RTClearFlags const ColorDepth;

  /// @brief Field ColorStencil value: I32(5)
  static ::UnityEngine::Rendering::RTClearFlags const ColorStencil;

  /// @brief Field Depth value: I32(2)
  static ::UnityEngine::Rendering::RTClearFlags const Depth;

  /// @brief Field DepthStencil value: I32(6)
  static ::UnityEngine::Rendering::RTClearFlags const DepthStencil;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::RTClearFlags const None;

  /// @brief Field Stencil value: I32(4)
  static ::UnityEngine::Rendering::RTClearFlags const Stencil;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10726 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RTClearFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RTClearFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RTClearFlags, "UnityEngine.Rendering", "RTClearFlags");
