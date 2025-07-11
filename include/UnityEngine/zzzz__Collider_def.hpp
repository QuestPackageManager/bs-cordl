#pragma once
// IWYU pragma private; include "UnityEngine/Collider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Collider)
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
class PhysicMaterial;
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

  __declspec(property(get = get_material, put = set_material)) ::UnityW<::UnityEngine::PhysicMaterial> material;

  __declspec(property(get = get_providesContacts, put = set_providesContacts)) bool providesContacts;

  __declspec(property(get = get_sharedMaterial, put = set_sharedMaterial)) ::UnityW<::UnityEngine::PhysicMaterial> sharedMaterial;

  /// @brief Method ClosestPoint, addr 0x4909184, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 position);

  /// @brief Method ClosestPointOnBounds, addr 0x4909a18, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 position);

  /// @brief Method ClosestPoint_Injected, addr 0x49091ec, size 0x54, virtual false, abstract: false, final false
  inline void ClosestPoint_Injected(::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method Internal_ClosestPointOnBounds, addr 0x4909950, size 0x6c, virtual false, abstract: false, final false
  inline void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 point, ::ByRef<::UnityEngine::Vector3> outPos, ::ByRef<float_t> distance);

  /// @brief Method Internal_ClosestPointOnBounds_Injected, addr 0x49099bc, size 0x5c, virtual false, abstract: false, final false
  inline void Internal_ClosestPointOnBounds_Injected(::ByRef<::UnityEngine::Vector3> point, ::ByRef<::UnityEngine::Vector3> outPos, ::ByRef<float_t> distance);

  static inline ::UnityEngine::Collider* New_ctor();

  /// @brief Method Raycast, addr 0x49097a4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit Raycast(::UnityEngine::Ray ray, float_t maxDistance, ::ByRef<bool> hasHit);

  /// @brief Method Raycast, addr 0x49098a4, size 0xac, virtual false, abstract: false, final false
  inline bool Raycast(::UnityEngine::Ray ray, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method Raycast_Injected, addr 0x4909838, size 0x6c, virtual false, abstract: false, final false
  inline void Raycast_Injected(::ByRef<::UnityEngine::Ray> ray, float_t maxDistance, ::ByRef<bool> hasHit, ::ByRef<::UnityEngine::RaycastHit> ret);

  /// @brief Method .ctor, addr 0x4909abc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_attachedArticulationBody, addr 0x49067b4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ArticulationBody> get_attachedArticulationBody();

  /// @brief Method get_attachedRigidbody, addr 0x48f5538, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rigidbody> get_attachedRigidbody();

  /// @brief Method get_bounds, addr 0x4909240, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x49092a8, size 0x44, virtual false, abstract: false, final false
  inline void get_bounds_Injected(::ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_contactOffset, addr 0x49090fc, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_contactOffset();

  /// @brief Method get_enabled, addr 0x4908ffc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_excludeLayers, addr 0x490946c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_excludeLayers();

  /// @brief Method get_excludeLayers_Injected, addr 0x49094b8, size 0x44, virtual false, abstract: false, final false
  inline void get_excludeLayers_Injected(::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_hasModifiableContacts, addr 0x49092ec, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasModifiableContacts();

  /// @brief Method get_includeLayers, addr 0x4909588, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_includeLayers();

  /// @brief Method get_includeLayers_Injected, addr 0x49095d4, size 0x44, virtual false, abstract: false, final false
  inline void get_includeLayers_Injected(::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_isTrigger, addr 0x490907c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isTrigger();

  /// @brief Method get_layerOverridePriority, addr 0x49093ec, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_layerOverridePriority();

  /// @brief Method get_material, addr 0x4909724, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::PhysicMaterial> get_material();

  /// @brief Method get_providesContacts, addr 0x490936c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_providesContacts();

  /// @brief Method get_sharedMaterial, addr 0x49096a4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::PhysicMaterial> get_sharedMaterial();

  /// @brief Method set_contactOffset, addr 0x4909138, size 0x4c, virtual false, abstract: false, final false
  inline void set_contactOffset(float_t value);

  /// @brief Method set_enabled, addr 0x4909038, size 0x44, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_excludeLayers, addr 0x49094fc, size 0x48, virtual false, abstract: false, final false
  inline void set_excludeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_excludeLayers_Injected, addr 0x4909544, size 0x44, virtual false, abstract: false, final false
  inline void set_excludeLayers_Injected(::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_hasModifiableContacts, addr 0x4909328, size 0x44, virtual false, abstract: false, final false
  inline void set_hasModifiableContacts(bool value);

  /// @brief Method set_includeLayers, addr 0x4909618, size 0x48, virtual false, abstract: false, final false
  inline void set_includeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_includeLayers_Injected, addr 0x4909660, size 0x44, virtual false, abstract: false, final false
  inline void set_includeLayers_Injected(::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_isTrigger, addr 0x49090b8, size 0x44, virtual false, abstract: false, final false
  inline void set_isTrigger(bool value);

  /// @brief Method set_layerOverridePriority, addr 0x4909428, size 0x44, virtual false, abstract: false, final false
  inline void set_layerOverridePriority(int32_t value);

  /// @brief Method set_material, addr 0x4909760, size 0x44, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::PhysicMaterial* value);

  /// @brief Method set_providesContacts, addr 0x49093a8, size 0x44, virtual false, abstract: false, final false
  inline void set_providesContacts(bool value);

  /// @brief Method set_sharedMaterial, addr 0x49096e0, size 0x44, virtual false, abstract: false, final false
  inline void set_sharedMaterial(::UnityEngine::PhysicMaterial* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15755 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Collider, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Collider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collider*, "UnityEngine", "Collider");
