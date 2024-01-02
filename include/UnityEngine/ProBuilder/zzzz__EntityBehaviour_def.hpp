#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EntityBehaviour)
namespace UnityEngine {
class Material;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class EntityBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::EntityBehaviour);
// Type: UnityEngine.ProBuilder::EntityBehaviour
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12123))
// CS Name: ::UnityEngine.ProBuilder::EntityBehaviour*
class CORDL_TYPE EntityBehaviour : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field manageVisibility, offset 0x18, size 0x1
  __declspec(property(get = __get_manageVisibility, put = __set_manageVisibility)) bool manageVisibility;

  constexpr bool& __get_manageVisibility();

  constexpr bool const& __get_manageVisibility() const;

  constexpr void __set_manageVisibility(bool value);

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Initialize();

  /// @brief Method OnEnterPlayMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnEnterPlayMode();

  /// @brief Method OnSceneLoaded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  /// @brief Method SetMaterial, addr 0x2b3c57c, size 0xe4, virtual false, abstract: false, final false
  inline void SetMaterial(::UnityEngine::Material* material);

  static inline ::UnityEngine::ProBuilder::EntityBehaviour* New_ctor();

  /// @brief Method .ctor, addr 0x2b3c7e0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EntityBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EntityBehaviour(EntityBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EntityBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EntityBehaviour(EntityBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntityBehaviour();

public:
  /// @brief Field manageVisibility, offset: 0x18, size: 0x1, def value: None
  bool ___manageVisibility;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::EntityBehaviour, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::EntityBehaviour, ___manageVisibility) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::EntityBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::EntityBehaviour*, "UnityEngine.ProBuilder", "EntityBehaviour");
