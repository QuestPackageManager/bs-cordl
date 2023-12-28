#pragma once
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
// Type: UnityEngine::RaycastHit2D
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15934))
// CS Name: ::UnityEngine::RaycastHit2D
struct CORDL_TYPE RaycastHit2D {
public:
  // Declarations
  __declspec(property(get = get_point))::UnityEngine::Vector2 point;

  __declspec(property(get = get_normal))::UnityEngine::Vector2 normal;

  __declspec(property(get = get_distance)) float_t distance;

  __declspec(property(get = get_fraction)) float_t fraction;

  __declspec(property(get = get_collider))::UnityEngine::Collider2D* collider;

  /// @brief Method get_point addr 0x2d13340 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_point();

  /// @brief Method get_normal addr 0x2d13348 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_normal();

  /// @brief Method get_distance addr 0x2d13350 size 0x8 virtual false final false
  inline float_t get_distance();

  /// @brief Method get_fraction addr 0x2d13358 size 0x8 virtual false final false
  inline float_t get_fraction();

  /// @brief Method get_collider addr 0x2d13360 size 0xac virtual false final false
  inline ::UnityEngine::Collider2D* get_collider();

  // Ctor Parameters [CppParam { name: "m_Centroid", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
  // None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_Fraction", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RaycastHit2D(::UnityEngine::Vector2 m_Centroid, ::UnityEngine::Vector2 m_Point, ::UnityEngine::Vector2 m_Normal, float_t m_Distance, float_t m_Fraction, int32_t m_Collider) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RaycastHit2D();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RaycastHit2D, 0x24>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RaycastHit2D, "UnityEngine", "RaycastHit2D");
