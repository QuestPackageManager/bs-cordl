#pragma once
// IWYU pragma private; include "UnityEngine/Collider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Collider)
namespace System {
struct IntPtr;
}
namespace UnityEngine::LowLevelPhysics {
struct GeometryHolder;
}
namespace UnityEngine {
class ArticulationBody;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Collider;
}
// Write type traits
MARK_REF_T(::UnityEngine::Collider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Collider*, "UnityEngine", "Collider");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Collider
class CORDL_TYPE Collider : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(get = get_GeometryHolder)) ::UnityEngine::LowLevelPhysics::GeometryHolder GeometryHolder;

  __declspec(property(get = get_attachedArticulationBody)) ::UnityW<::UnityEngine::ArticulationBody> attachedArticulationBody;

  __declspec(property(get = get_attachedRigidbody)) ::UnityW<::UnityEngine::Rigidbody> attachedRigidbody;

  __declspec(property(get = get_bounds)) ::UnityEngine::Bounds bounds;

  __declspec(property(get = get_contactOffset, put = set_contactOffset)) float_t contactOffset;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_excludeLayers, put = set_excludeLayers)) ::UnityEngine::LayerMask excludeLayers;

  __declspec(property(get = get_hasModifiableContacts, put = set_hasModifiableContacts)) bool hasModifiableContacts;

  __declspec(property(get = get_includeLayers, put = set_includeLayers)) ::UnityEngine::LayerMask includeLayers;

  __declspec(property(get = get_isTrigger, put = set_isTrigger)) bool isTrigger;

  __declspec(property(get = get_layerOverridePriority, put = set_layerOverridePriority)) int32_t layerOverridePriority;

  __declspec(property(get = get_material, put = set_material)) ::UnityW<::UnityEngine::PhysicsMaterial> material;

  __declspec(property(get = get_providesContacts, put = set_providesContacts)) bool providesContacts;

  __declspec(property(get = get_sharedMaterial, put = set_sharedMaterial)) ::UnityW<::UnityEngine::PhysicsMaterial> sharedMaterial;

  /// @brief Method ClosestPoint, addr 0x6b7b61c, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 position);

  /// @brief Method ClosestPointOnBounds, addr 0x6b7c92c, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 position);

  /// @brief Method ClosestPoint_Injected, addr 0x6b7b6c8, size 0x54, virtual false, abstract: false, final false
  static inline void ClosestPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetGeometry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetGeometry();

  /// @brief Method Internal_ClosestPointOnBounds, addr 0x6b7c820, size 0xb0, virtual false, abstract: false, final false
  inline void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 point, ::by_ref<::UnityEngine::Vector3> outPos, ::by_ref<float_t> distance);

  /// @brief Method Internal_ClosestPointOnBounds_Injected, addr 0x6b7c8d0, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_ClosestPointOnBounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> point, ::by_ref<::UnityEngine::Vector3> outPos, ::by_ref<float_t> distance);

  static inline ::UnityEngine::Collider* New_ctor();

  /// @brief Method Raycast, addr 0x6b7c684, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit Raycast(::UnityEngine::Ray ray, float_t maxDistance, ::by_ref<bool> hasHit);

  /// @brief Method Raycast, addr 0x6b7c7d0, size 0x50, virtual false, abstract: false, final false
  inline bool Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method Raycast_Injected, addr 0x6b7c764, size 0x6c, virtual false, abstract: false, final false
  static inline void Raycast_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Ray> ray, float_t maxDistance, ::by_ref<bool> hasHit, ::by_ref<::UnityEngine::RaycastHit> ret);

  /// @brief Method .ctor, addr 0x6b782cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GeometryHolder, addr 0x6b7c028, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics::GeometryHolder get_GeometryHolder();

  /// @brief Method get_GeometryHolder_Injected, addr 0x6b7c120, size 0x44, virtual false, abstract: false, final false
  static inline void get_GeometryHolder_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LowLevelPhysics::GeometryHolder> ret);

  /// @brief Method get_attachedArticulationBody, addr 0x6b7b168, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ArticulationBody> get_attachedArticulationBody();

  /// @brief Method get_attachedArticulationBody_Injected, addr 0x6b7b2b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_attachedArticulationBody_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_attachedRigidbody, addr 0x6b78980, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rigidbody> get_attachedRigidbody();

  /// @brief Method get_attachedRigidbody_Injected, addr 0x6b7b12c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_attachedRigidbody_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bounds, addr 0x6b7b71c, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x6b7b7cc, size 0x44, virtual false, abstract: false, final false
  static inline void get_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret);

  /// @brief Method get_contactOffset, addr 0x6b7b484, size 0x80, virtual false, abstract: false, final false
  inline float_t get_contactOffset();

  /// @brief Method get_contactOffset_Injected, addr 0x6b7b504, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_contactOffset_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enabled, addr 0x6b7af9c, size 0x80, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_enabled_Injected, addr 0x6b7b01c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_excludeLayers, addr 0x6b7bcc0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_excludeLayers();

  /// @brief Method get_excludeLayers_Injected, addr 0x6b7bd58, size 0x44, virtual false, abstract: false, final false
  static inline void get_excludeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> ret);

  /// @brief Method get_hasModifiableContacts, addr 0x6b7b810, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasModifiableContacts();

  /// @brief Method get_hasModifiableContacts_Injected, addr 0x6b7b890, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasModifiableContacts_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_includeLayers, addr 0x6b7be74, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_includeLayers();

  /// @brief Method get_includeLayers_Injected, addr 0x6b7bf0c, size 0x44, virtual false, abstract: false, final false
  static inline void get_includeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> ret);

  /// @brief Method get_isTrigger, addr 0x6b7b2f4, size 0x80, virtual false, abstract: false, final false
  inline bool get_isTrigger();

  /// @brief Method get_isTrigger_Injected, addr 0x6b7b374, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isTrigger_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_layerOverridePriority, addr 0x6b7bb30, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_layerOverridePriority();

  /// @brief Method get_layerOverridePriority_Injected, addr 0x6b7bbb0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_layerOverridePriority_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_material, addr 0x6b7c3f4, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::PhysicsMaterial> get_material();

  /// @brief Method get_material_Injected, addr 0x6b7c544, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_material_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_providesContacts, addr 0x6b7b9a0, size 0x80, virtual false, abstract: false, final false
  inline bool get_providesContacts();

  /// @brief Method get_providesContacts_Injected, addr 0x6b7ba20, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_providesContacts_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sharedMaterial, addr 0x6b7c164, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::PhysicsMaterial> get_sharedMaterial();

  /// @brief Method get_sharedMaterial_Injected, addr 0x6b7c2b4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_sharedMaterial_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_contactOffset, addr 0x6b7b540, size 0x90, virtual false, abstract: false, final false
  inline void set_contactOffset(float_t value);

  /// @brief Method set_contactOffset_Injected, addr 0x6b7b5d0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_contactOffset_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_enabled, addr 0x6b7b058, size 0x90, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_enabled_Injected, addr 0x6b7b0e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_enabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_excludeLayers, addr 0x6b7bd9c, size 0x94, virtual false, abstract: false, final false
  inline void set_excludeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_excludeLayers_Injected, addr 0x6b7be30, size 0x44, virtual false, abstract: false, final false
  static inline void set_excludeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> value);

  /// @brief Method set_hasModifiableContacts, addr 0x6b7b8cc, size 0x90, virtual false, abstract: false, final false
  inline void set_hasModifiableContacts(bool value);

  /// @brief Method set_hasModifiableContacts_Injected, addr 0x6b7b95c, size 0x44, virtual false, abstract: false, final false
  static inline void set_hasModifiableContacts_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_includeLayers, addr 0x6b7bf50, size 0x94, virtual false, abstract: false, final false
  inline void set_includeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_includeLayers_Injected, addr 0x6b7bfe4, size 0x44, virtual false, abstract: false, final false
  static inline void set_includeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> value);

  /// @brief Method set_isTrigger, addr 0x6b7b3b0, size 0x90, virtual false, abstract: false, final false
  inline void set_isTrigger(bool value);

  /// @brief Method set_isTrigger_Injected, addr 0x6b7b440, size 0x44, virtual false, abstract: false, final false
  static inline void set_isTrigger_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_layerOverridePriority, addr 0x6b7bbec, size 0x90, virtual false, abstract: false, final false
  inline void set_layerOverridePriority(int32_t value);

  /// @brief Method set_layerOverridePriority_Injected, addr 0x6b7bc7c, size 0x44, virtual false, abstract: false, final false
  static inline void set_layerOverridePriority_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_material, addr 0x6b7c580, size 0xc0, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::PhysicsMaterial* value);

  /// @brief Method set_material_Injected, addr 0x6b7c640, size 0x44, virtual false, abstract: false, final false
  static inline void set_material_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_providesContacts, addr 0x6b7ba5c, size 0x90, virtual false, abstract: false, final false
  inline void set_providesContacts(bool value);

  /// @brief Method set_providesContacts_Injected, addr 0x6b7baec, size 0x44, virtual false, abstract: false, final false
  static inline void set_providesContacts_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_sharedMaterial, addr 0x6b7c2f0, size 0xc0, virtual false, abstract: false, final false
  inline void set_sharedMaterial(::UnityEngine::PhysicsMaterial* value);

  /// @brief Method set_sharedMaterial_Injected, addr 0x6b7c3b0, size 0x44, virtual false, abstract: false, final false
  static inline void set_sharedMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Collider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Collider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Collider(Collider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Collider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Collider(Collider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18606 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Collider) == 0x18, "Size mismatch!");

} // namespace UnityEngine
