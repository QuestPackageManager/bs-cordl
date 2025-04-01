#pragma once
// IWYU pragma private; include "UnityEngine/RaycastHit2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastHit2D)
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct RaycastHit2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RaycastHit2D);
// Dependencies UnityEngine.Vector2
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RaycastHit2D
struct CORDL_TYPE RaycastHit2D {
public:
  // Declarations
  __declspec(property(get = get_collider)) ::UnityW<::UnityEngine::Collider2D> collider;

  __declspec(property(get = get_distance)) float_t distance;

  __declspec(property(get = get_fraction)) float_t fraction;

  __declspec(property(get = get_normal)) ::UnityEngine::Vector2 normal;

  __declspec(property(get = get_point)) ::UnityEngine::Vector2 point;

  /// @brief Method get_collider, addr 0x48ef60c, size 0xac, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider2D> get_collider();

  /// @brief Method get_distance, addr 0x48ef5fc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// @brief Method get_fraction, addr 0x48ef604, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fraction();

  /// @brief Method get_normal, addr 0x48ef5f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_normal();

  /// @brief Method get_point, addr 0x48ef5ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_point();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RaycastHit2D();

  // Ctor Parameters [CppParam { name: "m_Centroid", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
  // None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_Fraction", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RaycastHit2D(::UnityEngine::Vector2 m_Centroid, ::UnityEngine::Vector2 m_Point, ::UnityEngine::Vector2 m_Normal, float_t m_Distance, float_t m_Fraction, int32_t m_Collider) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18658 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// @brief Field m_Centroid, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Centroid;

  /// @brief Field m_Point, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Point;

  /// @brief Field m_Normal, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Normal;

  /// @brief Field m_Distance, offset: 0x18, size: 0x4, def value: None
  float_t m_Distance;

  /// @brief Field m_Fraction, offset: 0x1c, size: 0x4, def value: None
  float_t m_Fraction;

  /// @brief Field m_Collider, offset: 0x20, size: 0x4, def value: None
  int32_t m_Collider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RaycastHit2D, m_Centroid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit2D, m_Point) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit2D, m_Normal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit2D, m_Distance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit2D, m_Fraction) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit2D, m_Collider) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RaycastHit2D, 0x24>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RaycastHit2D, "UnityEngine", "RaycastHit2D");
