#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/GraphicsFormatUsage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsFormatUsage)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormatUsage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::GraphicsFormatUsage);
// Dependencies
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: UnityEngine.Experimental.Rendering.GraphicsFormatUsage
struct CORDL_TYPE GraphicsFormatUsage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GraphicsFormatUsage_Unwrapped
  enum struct __GraphicsFormatUsage_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Sample = static_cast<int32_t>(0x1),
    __E_Linear = static_cast<int32_t>(0x2),
    __E_Sparse = static_cast<int32_t>(0x4),
    __E_Render = static_cast<int32_t>(0x10),
    __E_Blend = static_cast<int32_t>(0x20),
    __E_GetPixels = static_cast<int32_t>(0x40),
    __E_SetPixels = static_cast<int32_t>(0x80),
    __E_SetPixels32 = static_cast<int32_t>(0x100),
    __E_ReadPixels = static_cast<int32_t>(0x200),
    __E_LoadStore = static_cast<int32_t>(0x400),
    __E_MSAA2x = static_cast<int32_t>(0x800),
    __E_MSAA4x = static_cast<int32_t>(0x1000),
    __E_MSAA8x = static_cast<int32_t>(0x2000),
    __E_StencilSampling = static_cast<int32_t>(0x10000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GraphicsFormatUsage_Unwrapped() const noexcept {
    return static_cast<__GraphicsFormatUsage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsFormatUsage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GraphicsFormatUsage(int32_t value__) noexcept;

  /// @brief Field Blend value: I32(32)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const Blend;

  /// @brief Field GetPixels value: I32(64)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const GetPixels;

  /// @brief Field Linear value: I32(2)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const Linear;

  /// @brief Field LoadStore value: I32(1024)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const LoadStore;

  /// @brief Field MSAA2x value: I32(2048)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const MSAA2x;

  /// @brief Field MSAA4x value: I32(4096)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const MSAA4x;

  /// @brief Field MSAA8x value: I32(8192)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const MSAA8x;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const None;

  /// @brief Field ReadPixels value: I32(512)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const ReadPixels;

  /// @brief Field Render value: I32(16)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const Render;

  /// @brief Field Sample value: I32(1)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const Sample;

  /// @brief Field SetPixels value: I32(128)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const SetPixels;

  /// @brief Field SetPixels32 value: I32(256)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const SetPixels32;

  /// @brief Field Sparse value: I32(4)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const Sparse;

  /// @brief Field StencilSampling value: I32(65536)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormatUsage const StencilSampling;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10901 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::GraphicsFormatUsage, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::GraphicsFormatUsage, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::GraphicsFormatUsage, "UnityEngine.Experimental.Rendering", "GraphicsFormatUsage");
