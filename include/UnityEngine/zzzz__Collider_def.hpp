#pragma once
// IWYU pragma private; include "UnityEngine/Collider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::UnityEngine::Collider);
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

  /// @brief Method ClosestPoint, addr 0x69b36c0, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 position);

  /// @brief Method ClosestPointOnBounds, addr 0x69b49d0, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 position);

  /// @brief Method ClosestPoint_Injected, addr 0x69b376c, size 0x54, virtual false, abstract: false, final false
  static inline void ClosestPoint_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetGeometry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetGeometry();

  /// @brief Method Internal_ClosestPointOnBounds, addr 0x69b48c4, size 0xb0, virtual false, abstract: false, final false
  inline void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 point, ::ByRef<::UnityEngine::Vector3> outPos, ::ByRef<float_t> distance);

  /// @brief Method Internal_ClosestPointOnBounds_Injected, addr 0x69b4974, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_ClosestPointOnBounds_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> point, ::ByRef<::UnityEngine::Vector3> outPos, ::ByRef<float_t> distance);

  static inline ::UnityEngine::Collider* New_ctor();

  /// @brief Method Raycast, addr 0x69b4728, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit Raycast(::UnityEngine::Ray ray, float_t maxDistance, ::ByRef<bool> hasHit);

  /// @brief Method Raycast, addr 0x69b4874, size 0x50, virtual false, abstract: false, final false
  inline bool Raycast(::UnityEngine::Ray ray, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method Raycast_Injected, addr 0x69b4808, size 0x6c, virtual false, abstract: false, final false
  static inline void Raycast_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Ray> ray, float_t maxDistance, ::ByRef<bool> hasHit, ::ByRef<::UnityEngine::RaycastHit> ret);

  /// @brief Method .ctor, addr 0x69b0370, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GeometryHolder, addr 0x69b40cc, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics::GeometryHolder get_GeometryHolder();

  /// @brief Method get_GeometryHolder_Injected, addr 0x69b41c4, size 0x44, virtual false, abstract: false, final false
  static inline void get_GeometryHolder_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LowLevelPhysics::GeometryHolder> ret);

  /// @brief Method get_attachedArticulationBody, addr 0x69b320c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ArticulationBody> get_attachedArticulationBody();

  /// @brief Method get_attachedArticulationBody_Injected, addr 0x69b335c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_attachedArticulationBody_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_attachedRigidbody, addr 0x69b0a24, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rigidbody> get_attachedRigidbody();

  /// @brief Method get_attachedRigidbody_Injected, addr 0x69b31d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_attachedRigidbody_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bounds, addr 0x69b37c0, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x69b3870, size 0x44, virtual false, abstract: false, final false
  static inline void get_bounds_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_contactOffset, addr 0x69b3528, size 0x80, virtual false, abstract: false, final false
  inline float_t get_contactOffset();

  /// @brief Method get_contactOffset_Injected, addr 0x69b35a8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_contactOffset_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enabled, addr 0x69b3040, size 0x80, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_enabled_Injected, addr 0x69b30c0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_excludeLayers, addr 0x69b3d64, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_excludeLayers();

  /// @brief Method get_excludeLayers_Injected, addr 0x69b3dfc, size 0x44, virtual false, abstract: false, final false
  static inline void get_excludeLayers_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_hasModifiableContacts, addr 0x69b38b4, size 0x80, virtual false, abstract: false, final false
  inline bool get_hasModifiableContacts();

  /// @brief Method get_hasModifiableContacts_Injected, addr 0x69b3934, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hasModifiableContacts_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_includeLayers, addr 0x69b3f18, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_includeLayers();

  /// @brief Method get_includeLayers_Injected, addr 0x69b3fb0, size 0x44, virtual false, abstract: false, final false
  static inline void get_includeLayers_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_isTrigger, addr 0x69b3398, size 0x80, virtual false, abstract: false, final false
  inline bool get_isTrigger();

  /// @brief Method get_isTrigger_Injected, addr 0x69b3418, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isTrigger_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_layerOverridePriority, addr 0x69b3bd4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_layerOverridePriority();

  /// @brief Method get_layerOverridePriority_Injected, addr 0x69b3c54, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_layerOverridePriority_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_material, addr 0x69b4498, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::PhysicsMaterial> get_material();

  /// @brief Method get_material_Injected, addr 0x69b45e8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_material_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_providesContacts, addr 0x69b3a44, size 0x80, virtual false, abstract: false, final false
  inline bool get_providesContacts();

  /// @brief Method get_providesContacts_Injected, addr 0x69b3ac4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_providesContacts_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sharedMaterial, addr 0x69b4208, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::PhysicsMaterial> get_sharedMaterial();

  /// @brief Method get_sharedMaterial_Injected, addr 0x69b4358, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_sharedMaterial_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_contactOffset, addr 0x69b35e4, size 0x90, virtual false, abstract: false, final false
  inline void set_contactOffset(float_t value);

  /// @brief Method set_contactOffset_Injected, addr 0x69b3674, size 0x4c, virtual false, abstract: false, final false
  static inline void set_contactOffset_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_enabled, addr 0x69b30fc, size 0x90, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_enabled_Injected, addr 0x69b318c, size 0x44, virtual false, abstract: false, final false
  static inline void set_enabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_excludeLayers, addr 0x69b3e40, size 0x94, virtual false, abstract: false, final false
  inline void set_excludeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_excludeLayers_Injected, addr 0x69b3ed4, size 0x44, virtual false, abstract: false, final false
  static inline void set_excludeLayers_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_hasModifiableContacts, addr 0x69b3970, size 0x90, virtual false, abstract: false, final false
  inline void set_hasModifiableContacts(bool value);

  /// @brief Method set_hasModifiableContacts_Injected, addr 0x69b3a00, size 0x44, virtual false, abstract: false, final false
  static inline void set_hasModifiableContacts_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_includeLayers, addr 0x69b3ff4, size 0x94, virtual false, abstract: false, final false
  inline void set_includeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_includeLayers_Injected, addr 0x69b4088, size 0x44, virtual false, abstract: false, final false
  static inline void set_includeLayers_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_isTrigger, addr 0x69b3454, size 0x90, virtual false, abstract: false, final false
  inline void set_isTrigger(bool value);

  /// @brief Method set_isTrigger_Injected, addr 0x69b34e4, size 0x44, virtual false, abstract: false, final false
  static inline void set_isTrigger_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_layerOverridePriority, addr 0x69b3c90, size 0x90, virtual false, abstract: false, final false
  inline void set_layerOverridePriority(int32_t value);

  /// @brief Method set_layerOverridePriority_Injected, addr 0x69b3d20, size 0x44, virtual false, abstract: false, final false
  static inline void set_layerOverridePriority_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_material, addr 0x69b4624, size 0xc0, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::PhysicsMaterial* value);

  /// @brief Method set_material_Injected, addr 0x69b46e4, size 0x44, virtual false, abstract: false, final false
  static inline void set_material_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_providesContacts, addr 0x69b3b00, size 0x90, virtual false, abstract: false, final false
  inline void set_providesContacts(bool value);

  /// @brief Method set_providesContacts_Injected, addr 0x69b3b90, size 0x44, virtual false, abstract: false, final false
  static inline void set_providesContacts_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_sharedMaterial, addr 0x69b4394, size 0xc0, virtual false, abstract: false, final false
  inline void set_sharedMaterial(::UnityEngine::PhysicsMaterial* value);

  /// @brief Method set_sharedMaterial_Injected, addr 0x69b4454, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18603 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Collider, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Collider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collider*, "UnityEngine", "Collider");
