#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentCollisionRepository.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentCollisionRepository)
namespace GlobalNamespace {
class ColliderEventEffect;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentCollisionRepository;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentCollisionRepository);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentCollisionRepository
class CORDL_TYPE EnvironmentCollisionRepository : public ::System::Object {
public:
  // Declarations
  /// @brief Field _colliders, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__colliders,
      put = __cordl_internal_set__colliders)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityW<::GlobalNamespace::ColliderEventEffect>>* _colliders;

  static inline ::GlobalNamespace::EnvironmentCollisionRepository* New_ctor();

  /// @brief Method RegisterColliderEventEffect, addr 0x3b94d7c, size 0x60, virtual false, abstract: false, final false
  inline void RegisterColliderEventEffect(::GlobalNamespace::ColliderEventEffect* colliderEventEffect);

  /// @brief Method TryGetColliderEventEffect, addr 0x3b94df4, size 0xb8, virtual false, abstract: false, final false
  inline bool TryGetColliderEventEffect(::UnityEngine::Collider* collider, ::ByRef<::GlobalNamespace::ColliderEventEffect*> colliderEventEffect);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityW<::GlobalNamespace::ColliderEventEffect>>* const& __cordl_internal_get__colliders() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityW<::GlobalNamespace::ColliderEventEffect>>*& __cordl_internal_get__colliders();

  constexpr void __cordl_internal_set__colliders(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityW<::GlobalNamespace::ColliderEventEffect>>* value);

  /// @brief Method .ctor, addr 0x3b94eac, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentCollisionRepository();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentCollisionRepository", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentCollisionRepository(EnvironmentCollisionRepository&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentCollisionRepository", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentCollisionRepository(EnvironmentCollisionRepository const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4334 };

  /// @brief Field _colliders, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityW<::GlobalNamespace::ColliderEventEffect>>* ____colliders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentCollisionRepository, ____colliders) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentCollisionRepository, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentCollisionRepository);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentCollisionRepository*, "", "EnvironmentCollisionRepository");
