#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/EntityBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EntityBehaviour)
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class EntityBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::EntityBehaviour);
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.EntityBehaviour
class CORDL_TYPE EntityBehaviour : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field manageVisibility, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_manageVisibility, put = __cordl_internal_set_manageVisibility)) bool manageVisibility;

  /// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::UnityEngine::ProBuilder::EntityBehaviour* New_ctor();

  /// @brief Method OnEnterPlayMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnEnterPlayMode();

  /// @brief Method OnSceneLoaded, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method SetMaterial, addr 0x470028c, size 0xe4, virtual false, abstract: false, final false
  inline void SetMaterial(::UnityEngine::Material* material);

  constexpr bool const& __cordl_internal_get_manageVisibility() const;

  constexpr bool& __cordl_internal_get_manageVisibility();

  constexpr void __cordl_internal_set_manageVisibility(bool value);

  /// @brief Method .ctor, addr 0x47004f0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntityBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EntityBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EntityBehaviour(EntityBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EntityBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EntityBehaviour(EntityBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14239 };

  /// @brief Field manageVisibility, offset: 0x20, size: 0x1, def value: None
  bool ___manageVisibility;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::EntityBehaviour, ___manageVisibility) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::EntityBehaviour, 0x28>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::EntityBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::EntityBehaviour*, "UnityEngine.ProBuilder", "EntityBehaviour");
