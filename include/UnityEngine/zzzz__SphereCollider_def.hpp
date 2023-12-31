#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SphereCollider)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class SphereCollider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SphereCollider);
// Type: UnityEngine::SphereCollider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15492))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15495))
// CS Name: ::UnityEngine::SphereCollider*
class CORDL_TYPE SphereCollider : public ::UnityEngine::Collider {
public:
  // Declarations
  __declspec(property(get = get_center, put = set_center))::UnityEngine::Vector3 center;

  __declspec(property(get = get_radius, put = set_radius)) float_t radius;

  /// @brief Method get_center, addr 0x2d171c4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method set_center, addr 0x2d17264, size 0x54, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method get_radius, addr 0x2d172fc, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method set_radius, addr 0x2d17338, size 0x4c, virtual false, abstract: false, final false
  inline void set_radius(float_t value);

  static inline ::UnityEngine::SphereCollider* New_ctor();

  /// @brief Method .ctor, addr 0x2d17384, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_center_Injected, addr 0x2d17220, size 0x44, virtual false, abstract: false, final false
  inline void get_center_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_center_Injected, addr 0x2d172b8, size 0x44, virtual false, abstract: false, final false
  inline void set_center_Injected(ByRef<::UnityEngine::Vector3> value);

  // Ctor Parameters [CppParam { name: "", ty: "SphereCollider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SphereCollider(SphereCollider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SphereCollider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SphereCollider(SphereCollider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SphereCollider();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SphereCollider, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SphereCollider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SphereCollider*, "UnityEngine", "SphereCollider");
