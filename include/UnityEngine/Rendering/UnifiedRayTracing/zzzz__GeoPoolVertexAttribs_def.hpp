#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GeoPoolVertexAttribs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeoPoolVertexAttribs)
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct GeoPoolVertexAttribs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertexAttribs);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertexAttribs, "UnityEngine.Rendering.UnifiedRayTracing", "GeoPoolVertexAttribs");
// [Flags]
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GeoPoolVertexAttribs
struct CORDL_TYPE GeoPoolVertexAttribs {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GeoPoolVertexAttribs_Unwrapped
  enum struct __GeoPoolVertexAttribs_Unwrapped : int32_t {
    __E_Position = static_cast<int32_t>(0x1),
    __E_Normal = static_cast<int32_t>(0x2),
    __E_Uv0 = static_cast<int32_t>(0x4),
    __E_Uv1 = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GeoPoolVertexAttribs_Unwrapped() const noexcept {
    return static_cast<__GeoPoolVertexAttribs_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeoPoolVertexAttribs();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr GeoPoolVertexAttribs(int32_t value__) noexcept;

  /// @brief Field Normal value: I32(2)
  static ::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertexAttribs const Normal;

  /// @brief Field Position value: I32(1)
  static ::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertexAttribs const Position;

  /// @brief Field Uv0 value: I32(4)
  static ::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertexAttribs const Uv0;

  /// @brief Field Uv1 value: I32(8)
  static ::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertexAttribs const Uv1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20470 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertexAttribs, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GeoPoolVertexAttribs) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
