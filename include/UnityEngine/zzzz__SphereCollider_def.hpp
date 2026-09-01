#pragma once
// IWYU pragma private; include "UnityEngine\SphereCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SphereCollider)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class SphereCollider;
}
// Write type traits
MARK_REF_T(::UnityEngine::SphereCollider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SphereCollider*, "UnityEngine", "SphereCollider");
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SphereCollider
class CORDL_TYPE SphereCollider : public ::UnityEngine::Collider {
public:
  // Declarations
  __declspec(property(get = get_center, put = set_center)) ::UnityEngine::Vector3 center;

  __declspec(property(get = get_radius, put = set_radius)) float_t radius;

  static inline ::UnityEngine::SphereCollider* New_ctor();

  /// @brief Method .ctor, addr 0x6b9da1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_center, addr 0x6b9d6c4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method get_center_Injected, addr 0x6b9d764, size 0x44, virtual false, abstract: false, final false
  static inline void get_center_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_radius, addr 0x6b9d884, size 0x80, virtual false, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method get_radius_Injected, addr 0x6b9d904, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_radius_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_center, addr 0x6b9d7a8, size 0x98, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method set_center_Injected, addr 0x6b9d840, size 0x44, virtual false, abstract: false, final false
  static inline void set_center_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_radius, addr 0x6b9d940, size 0x90, virtual false, abstract: false, final false
  inline void set_radius(float_t value);

  /// @brief Method set_radius_Injected, addr 0x6b9d9d0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_radius_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SphereCollider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SphereCollider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SphereCollider(SphereCollider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SphereCollider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SphereCollider(SphereCollider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18691 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SphereCollider) == 0x18, "Size mismatch!");

} // namespace UnityEngine
