#pragma once
// IWYU pragma private; include "UnityEngine/CapsuleCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CapsuleCollider)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class CapsuleCollider;
}
// Write type traits
MARK_REF_T(::UnityEngine::CapsuleCollider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::CapsuleCollider*, "UnityEngine", "CapsuleCollider");
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeHeader("Modules/Physics/CapsuleCollider.h")]
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CapsuleCollider
class CORDL_TYPE CapsuleCollider : public ::UnityEngine::Collider {
public:
  // Declarations
  __declspec(property(get = get_center, put = set_center)) ::UnityEngine::Vector3 center;

  __declspec(property(get = get_direction, put = set_direction)) int32_t direction;

  __declspec(property(get = get_height, put = set_height)) float_t height;

  __declspec(property(get = get_radius, put = set_radius)) float_t radius;

  static inline ::UnityEngine::CapsuleCollider* New_ctor();

  /// @brief Method .ctor, addr 0x6fe78f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_center, addr 0x6fe7270, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method get_center_Injected, addr 0x6fe7310, size 0x44, virtual false, abstract: false, final false
  static inline void get_center_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_direction, addr 0x6fe7760, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_direction();

  /// @brief Method get_direction_Injected, addr 0x6fe77e0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_direction_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_height, addr 0x6fe75c8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_height();

  /// @brief Method get_height_Injected, addr 0x6fe7648, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_height_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_radius, addr 0x6fe7430, size 0x80, virtual false, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method get_radius_Injected, addr 0x6fe74b0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_radius_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_center, addr 0x6fe7354, size 0x98, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method set_center_Injected, addr 0x6fe73ec, size 0x44, virtual false, abstract: false, final false
  static inline void set_center_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_direction, addr 0x6fe781c, size 0x90, virtual false, abstract: false, final false
  inline void set_direction(int32_t value);

  /// @brief Method set_direction_Injected, addr 0x6fe78ac, size 0x44, virtual false, abstract: false, final false
  static inline void set_direction_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_height, addr 0x6fe7684, size 0x90, virtual false, abstract: false, final false
  inline void set_height(float_t value);

  /// @brief Method set_height_Injected, addr 0x6fe7714, size 0x4c, virtual false, abstract: false, final false
  static inline void set_height_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_radius, addr 0x6fe74ec, size 0x90, virtual false, abstract: false, final false
  inline void set_radius(float_t value);

  /// @brief Method set_radius_Injected, addr 0x6fe757c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_radius_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CapsuleCollider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CapsuleCollider", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CapsuleCollider(CapsuleCollider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CapsuleCollider", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CapsuleCollider(CapsuleCollider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19043 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::CapsuleCollider) == 0x18, "Size mismatch!");

} // namespace UnityEngine
