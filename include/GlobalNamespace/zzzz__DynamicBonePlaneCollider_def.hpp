#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DynamicBonePlaneCollider)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class DynamicBonePlaneCollider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DynamicBonePlaneCollider);
// Type: ::DynamicBonePlaneCollider
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DynamicBonePlaneCollider*
class CORDL_TYPE DynamicBonePlaneCollider : public ::GlobalNamespace::DynamicBoneColliderBase {
public:
  // Declarations
  /// @brief Method Collide, addr 0x1334ee0, size 0x188, virtual true, abstract: false, final false
  inline void Collide(ByRef<::UnityEngine::Vector3> particlePosition, float_t particleRadius);

  static inline ::GlobalNamespace::DynamicBonePlaneCollider* New_ctor();

  /// @brief Method OnDrawGizmosSelected, addr 0x1335068, size 0x160, virtual false, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method OnValidate, addr 0x1334edc, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method .ctor, addr 0x13351c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicBonePlaneCollider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicBonePlaneCollider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicBonePlaneCollider(DynamicBonePlaneCollider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicBonePlaneCollider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicBonePlaneCollider(DynamicBonePlaneCollider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DynamicBonePlaneCollider, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DynamicBonePlaneCollider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicBonePlaneCollider*, "", "DynamicBonePlaneCollider");
