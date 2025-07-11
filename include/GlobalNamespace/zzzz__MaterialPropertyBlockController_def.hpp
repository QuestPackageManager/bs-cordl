#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyBlockController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MaterialPropertyBlockController)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialPropertyBlockController
class CORDL_TYPE MaterialPropertyBlockController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _materialPropertyBlock, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlock, put = __cordl_internal_set__materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _renderers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__renderers, put = __cordl_internal_set__renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*>
      _renderers;

  __declspec(property(get = get_materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* materialPropertyBlock;

  __declspec(property(get = get_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> renderers;

  /// @brief Method ApplyChanges, addr 0x39e5834, size 0x64, virtual false, abstract: false, final false
  inline void ApplyChanges();

  static inline ::GlobalNamespace::MaterialPropertyBlockController* New_ctor();

  /// @brief Method SetRendererState, addr 0x39e5a20, size 0x68, virtual false, abstract: false, final false
  inline void SetRendererState(bool newState);

  constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__materialPropertyBlock() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__materialPropertyBlock();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> const& __cordl_internal_get__renderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*>& __cordl_internal_get__renderers();

  constexpr void __cordl_internal_set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set__renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> value);

  /// @brief Method .ctor, addr 0x39e5c0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_materialPropertyBlock, addr 0x39e590c, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::MaterialPropertyBlock* get_materialPropertyBlock();

  /// @brief Method get_renderers, addr 0x39e5c04, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> get_renderers();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockController(MaterialPropertyBlockController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockController(MaterialPropertyBlockController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16358 };

  /// @brief Field _renderers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> ____renderers;

  /// @brief Field _materialPropertyBlock, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____materialPropertyBlock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockController, ____renderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockController, ____materialPropertyBlock) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockController*, "", "MaterialPropertyBlockController");
