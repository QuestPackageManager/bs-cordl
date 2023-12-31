#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HEU_BoundingVolume)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class HEU_BoundingVolume;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HEU_BoundingVolume);
// Type: ::HEU_BoundingVolume
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9586))
// CS Name: ::HEU_BoundingVolume*
class CORDL_TYPE HEU_BoundingVolume : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_BoundingCollider))::UnityEngine::Collider* BoundingCollider;

  /// @brief Method get_BoundingCollider, addr 0x214ac6c, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Collider* get_BoundingCollider();

  /// @brief Method GetAllIntersectingObjects, addr 0x214acb4, size 0x2b4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetAllIntersectingObjects();

  static inline ::GlobalNamespace::HEU_BoundingVolume* New_ctor();

  /// @brief Method .ctor, addr 0x214af68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_BoundingVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_BoundingVolume(HEU_BoundingVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_BoundingVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_BoundingVolume(HEU_BoundingVolume const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_BoundingVolume();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HEU_BoundingVolume, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HEU_BoundingVolume);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HEU_BoundingVolume*, "", "HEU_BoundingVolume");
