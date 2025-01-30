#pragma once
// IWYU pragma private; include "UnityEngine/DetailRenderMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DetailRenderMode)
// Forward declare root types
namespace UnityEngine {
struct DetailRenderMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::DetailRenderMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.DetailRenderMode
struct CORDL_TYPE DetailRenderMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DetailRenderMode_Unwrapped
  enum struct __DetailRenderMode_Unwrapped : int32_t {
    __E_GrassBillboard = static_cast<int32_t>(0x0),
    __E_VertexLit = static_cast<int32_t>(0x1),
    __E_Grass = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DetailRenderMode_Unwrapped() const noexcept {
    return static_cast<__DetailRenderMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DetailRenderMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DetailRenderMode(int32_t value__) noexcept;

  /// @brief Field Grass value: I32(2)
  static ::UnityEngine::DetailRenderMode const Grass;

  /// @brief Field GrassBillboard value: I32(0)
  static ::UnityEngine::DetailRenderMode const GrassBillboard;

  /// @brief Field VertexLit value: I32(1)
  static ::UnityEngine::DetailRenderMode const VertexLit;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18128 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::DetailRenderMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::DetailRenderMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DetailRenderMode, "UnityEngine", "DetailRenderMode");
