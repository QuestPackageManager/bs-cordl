#pragma once
// IWYU pragma private; include "UnityEngine/ClothSphereColliderPair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ClothSphereColliderPair)
namespace UnityEngine {
class SphereCollider;
}
// Forward declare root types
namespace UnityEngine {
struct ClothSphereColliderPair;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ClothSphereColliderPair);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ClothSphereColliderPair
struct CORDL_TYPE ClothSphereColliderPair {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClothSphereColliderPair();

  // Ctor Parameters [CppParam { name: "_first_k__BackingField", ty: "::UnityW<::UnityEngine::SphereCollider>", modifiers: "", def_value: None }, CppParam { name: "_second_k__BackingField", ty:
  // "::UnityW<::UnityEngine::SphereCollider>", modifiers: "", def_value: None }]
  constexpr ClothSphereColliderPair(::UnityW<::UnityEngine::SphereCollider> _first_k__BackingField, ::UnityW<::UnityEngine::SphereCollider> _second_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22344 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <first>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SphereCollider> _first_k__BackingField;

  /// @brief Field <second>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SphereCollider> _second_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ClothSphereColliderPair, _first_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ClothSphereColliderPair, _second_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ClothSphereColliderPair, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ClothSphereColliderPair, "UnityEngine", "ClothSphereColliderPair");
