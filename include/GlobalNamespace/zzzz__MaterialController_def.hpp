#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MaterialController)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialController
class CORDL_TYPE MaterialController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _material, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__material, put = __cordl_internal_set__material)) ::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _renderers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__renderers, put = __cordl_internal_set__renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*>
      _renderers;

  __declspec(property(get = get_material)) ::UnityW<::UnityEngine::Material> material;

  static inline ::GlobalNamespace::MaterialController* New_ctor();

  /// @brief Method OnValidate, addr 0x39e56a4, size 0x18, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> const& __cordl_internal_get__renderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*>& __cordl_internal_get__renderers();

  constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> value);

  /// @brief Method .ctor, addr 0x39e56bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_material, addr 0x39e569c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialController(MaterialController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialController(MaterialController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16354 };

  /// @brief Field _material, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material;

  /// @brief Field _renderers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> ____renderers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialController, ____material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialController, ____renderers) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialController*, "", "MaterialController");
