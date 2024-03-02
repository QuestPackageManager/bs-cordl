#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlockController)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
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
// Type: ::MaterialPropertyBlockController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MaterialPropertyBlockController*
class CORDL_TYPE MaterialPropertyBlockController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _isInitialized, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _materialPropertyBlock, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlock, put = __cordl_internal_set__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _numberOfMaterialsInRenderers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__numberOfMaterialsInRenderers,
                      put = __cordl_internal_set__numberOfMaterialsInRenderers))::System::Collections::Generic::List_1<int32_t>* _numberOfMaterialsInRenderers;

  /// @brief Field _renderers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__renderers, put = __cordl_internal_set__renderers))::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> _renderers;

  __declspec(property(get = get_materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* materialPropertyBlock;

  __declspec(property(get = get_renderers))::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> renderers;

  /// @brief Method ApplyChanges, addr 0x227690c, size 0x1f0, virtual false, abstract: false, final false
  inline void ApplyChanges();

  static inline ::GlobalNamespace::MaterialPropertyBlockController* New_ctor();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__materialPropertyBlock();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __cordl_internal_get__materialPropertyBlock() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__numberOfMaterialsInRenderers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get__numberOfMaterialsInRenderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> const& __cordl_internal_get__renderers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*>& __cordl_internal_get__renderers();

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set__numberOfMaterialsInRenderers(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set__renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> value);

  /// @brief Method .ctor, addr 0x2276e78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_materialPropertyBlock, addr 0x2276b70, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::MaterialPropertyBlock* get_materialPropertyBlock();

  /// @brief Method get_renderers, addr 0x2276e70, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _renderers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Renderer>, ::Array<::UnityW<::UnityEngine::Renderer>>*> ____renderers;

  /// @brief Field _materialPropertyBlock, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____materialPropertyBlock;

  /// @brief Field _numberOfMaterialsInRenderers, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____numberOfMaterialsInRenderers;

  /// @brief Field _isInitialized, offset: 0x30, size: 0x1, def value: None
  bool ____isInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockController, ____renderers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockController, ____materialPropertyBlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockController, ____numberOfMaterialsInRenderers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockController, ____isInitialized) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockController*, "", "MaterialPropertyBlockController");
