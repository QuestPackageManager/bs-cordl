#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContactPoint)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ContactPoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ContactPoint);
// Type: UnityEngine::ContactPoint
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ContactPoint
struct CORDL_TYPE ContactPoint {
public:
  // Declarations
  __declspec(property(get = get_normal))::UnityEngine::Vector3 normal;

  __declspec(property(get = get_otherCollider))::UnityW<::UnityEngine::Collider> otherCollider;

  __declspec(property(get = get_point))::UnityEngine::Vector3 point;

  __declspec(property(get = get_separation)) float_t separation;

  __declspec(property(get = get_thisCollider))::UnityW<::UnityEngine::Collider> thisCollider;

  /// @brief Method GetColliderByInstanceID, addr 0x346d7c8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Collider> GetColliderByInstanceID(int32_t instanceID);

  /// @brief Method get_normal, addr 0x346d780, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_normal();

  /// @brief Method get_otherCollider, addr 0x346d804, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_otherCollider();

  /// @brief Method get_point, addr 0x346d774, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point();

  /// @brief Method get_separation, addr 0x346d840, size 0x8, virtual false, abstract: false, final false
  inline float_t get_separation();

  /// @brief Method get_thisCollider, addr 0x346d78c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_thisCollider();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContactPoint();

  // Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }, CppParam { name: "m_ThisColliderInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OtherColliderInstanceID", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ContactPoint(::UnityEngine::Vector3 m_Point, ::UnityEngine::Vector3 m_Normal, int32_t m_ThisColliderInstanceID, int32_t m_OtherColliderInstanceID, float_t m_Separation) noexcept;

  /// @brief Field m_Point, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Point;

  /// @brief Field m_Normal, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Normal;

  /// @brief Field m_ThisColliderInstanceID, offset: 0x18, size: 0x4, def value: None
  int32_t m_ThisColliderInstanceID;

  /// @brief Field m_OtherColliderInstanceID, offset: 0x1c, size: 0x4, def value: None
  int32_t m_OtherColliderInstanceID;

  /// @brief Field m_Separation, offset: 0x20, size: 0x4, def value: None
  float_t m_Separation;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ContactPoint, 0x24>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint, m_Point) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint, m_Normal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint, m_ThisColliderInstanceID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint, m_OtherColliderInstanceID) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint, m_Separation) == 0x20, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContactPoint, "UnityEngine", "ContactPoint");
