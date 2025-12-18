#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/FormatUsage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FormatUsage)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::FormatUsage);
// Dependencies
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: UnityEngine.Experimental.Rendering.FormatUsage
struct CORDL_TYPE FormatUsage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FormatUsage_Unwrapped
  enum struct __FormatUsage_Unwrapped : int32_t {
    __E_Sample = static_cast<int32_t>(0x0),
    __E_Linear = static_cast<int32_t>(0x1),
    __E_Sparse = static_cast<int32_t>(0x2),
    __E_Render = static_cast<int32_t>(0x4),
    __E_Blend = static_cast<int32_t>(0x5),
    __E_GetPixels = static_cast<int32_t>(0x6),
    __E_SetPixels = static_cast<int32_t>(0x7),
    __E_SetPixels32 = static_cast<int32_t>(0x8),
    __E_ReadPixels = static_cast<int32_t>(0x9),
    __E_LoadStore = static_cast<int32_t>(0xa),
    __E_MSAA2x = static_cast<int32_t>(0xb),
    __E_MSAA4x = static_cast<int32_t>(0xc),
    __E_MSAA8x = static_cast<int32_t>(0xd),
    __E_StencilSampling = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FormatUsage_Unwrapped() const noexcept {
    return static_cast<__FormatUsage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FormatUsage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FormatUsage(int32_t value__) noexcept;

  /// @brief Field Blend value: I32(5)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const Blend;

  /// @brief Field GetPixels value: I32(6)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const GetPixels;

  /// @brief Field Linear value: I32(1)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const Linear;

  /// @brief Field LoadStore value: I32(10)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const LoadStore;

  /// @brief Field MSAA2x value: I32(11)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const MSAA2x;

  /// @brief Field MSAA4x value: I32(12)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const MSAA4x;

  /// @brief Field MSAA8x value: I32(13)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const MSAA8x;

  /// @brief Field ReadPixels value: I32(9)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const ReadPixels;

  /// @brief Field Render value: I32(4)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const Render;

  /// @brief Field Sample value: I32(0)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const Sample;

  /// @brief Field SetPixels value: I32(7)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const SetPixels;

  /// @brief Field SetPixels32 value: I32(8)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const SetPixels32;

  /// @brief Field Sparse value: I32(2)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const Sparse;

  /// @brief Field StencilSampling value: I32(16)
  static ::UnityEngine::Experimental::Rendering::FormatUsage const StencilSampling;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10900 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::FormatUsage, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::FormatUsage, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::FormatUsage, "UnityEngine.Experimental.Rendering", "FormatUsage");
