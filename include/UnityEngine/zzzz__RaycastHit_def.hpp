#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastHit)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct RaycastHit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RaycastHit);
// Type: UnityEngine::RaycastHit
// SizeInfo { instance_size: 44, native_size: 44, calculated_instance_size: 44, calculated_native_size: 60, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15487))
// CS Name: ::UnityEngine::RaycastHit
struct CORDL_TYPE RaycastHit {
public:
  // Declarations
  __declspec(property(get = get_collider))::UnityEngine::Collider* collider;

  __declspec(property(get = get_point, put = set_point))::UnityEngine::Vector3 point;

  __declspec(property(get = get_normal, put = set_normal))::UnityEngine::Vector3 normal;

  __declspec(property(get = get_distance, put = set_distance)) float_t distance;

  /// @brief Method get_collider, addr 0x2d15b90, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Collider* get_collider();

  /// @brief Method get_point, addr 0x2d15c3c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point();

  /// @brief Method set_point, addr 0x2d15c48, size 0xc, virtual false, abstract: false, final false
  inline void set_point(::UnityEngine::Vector3 value);

  /// @brief Method get_normal, addr 0x2d15c54, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_normal();

  /// @brief Method set_normal, addr 0x2d15c60, size 0xc, virtual false, abstract: false, final false
  inline void set_normal(::UnityEngine::Vector3 value);

  /// @brief Method get_distance, addr 0x2d15c6c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// @brief Method set_distance, addr 0x2d15c74, size 0x8, virtual false, abstract: false, final false
  inline void set_distance(float_t value);

  // Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }, CppParam { name: "m_FaceID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UV", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RaycastHit(::UnityEngine::Vector3 m_Point, ::UnityEngine::Vector3 m_Normal, uint32_t m_FaceID, float_t m_Distance, ::UnityEngine::Vector2 m_UV, int32_t m_Collider) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RaycastHit();

  /// @brief Field m_Point, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Point;

  /// @brief Field m_Normal, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Normal;

  /// @brief Field m_FaceID, offset: 0x18, size: 0x4, def value: None
  uint32_t m_FaceID;

  /// @brief Field m_Distance, offset: 0x1c, size: 0x4, def value: None
  float_t m_Distance;

  /// @brief Field m_UV, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_UV;

  /// @brief Field m_Collider, offset: 0x28, size: 0x4, def value: None
  int32_t m_Collider;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RaycastHit, 0x2c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_Point) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_Normal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_FaceID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_Distance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_UV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RaycastHit, m_Collider) == 0x28, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RaycastHit, "UnityEngine", "RaycastHit");
