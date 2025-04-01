#pragma once
// IWYU pragma private; include "GlobalNamespace/BTSCharacterMaterialSwitcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BTSCharacterMaterialSwitcher)
namespace GlobalNamespace {
class BTSCharacterMaterialSwitcher_MaterialPairs;
}
namespace GlobalNamespace {
class BTSCharacterMaterialSwitcher_RendererMaterialsPairs;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterMaterialSwitcher;
}
namespace GlobalNamespace {
class BTSCharacterMaterialSwitcher_MaterialPairs;
}
namespace GlobalNamespace {
class BTSCharacterMaterialSwitcher_RendererMaterialsPairs;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterMaterialSwitcher);
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs);
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BTSCharacterMaterialSwitcher/RendererMaterialsPairs
class CORDL_TYPE BTSCharacterMaterialSwitcher_RendererMaterialsPairs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _materialPairs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPairs,
                      put = __cordl_internal_set__materialPairs)) ::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>* _materialPairs;

  /// @brief Field _renderer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer> _renderer;

  __declspec(property(get = get_materialPairs)) ::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>* materialPairs;

  __declspec(property(get = get_renderer)) ::UnityW<::UnityEngine::Renderer> renderer;

  static inline ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs* New_ctor(::UnityEngine::Renderer* renderer);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>* const& __cordl_internal_get__materialPairs() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>*& __cordl_internal_get__materialPairs();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer();

  constexpr void __cordl_internal_set__materialPairs(::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>* value);

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value);

  /// @brief Method .ctor, addr 0x225e5ec, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Renderer* renderer);

  /// @brief Method get_materialPairs, addr 0x225e5e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>* get_materialPairs();

  /// @brief Method get_renderer, addr 0x225e5dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_renderer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterMaterialSwitcher_RendererMaterialsPairs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterMaterialSwitcher_RendererMaterialsPairs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterMaterialSwitcher_RendererMaterialsPairs(BTSCharacterMaterialSwitcher_RendererMaterialsPairs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterMaterialSwitcher_RendererMaterialsPairs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterMaterialSwitcher_RendererMaterialsPairs(BTSCharacterMaterialSwitcher_RendererMaterialsPairs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17677 };

  /// @brief Field _renderer, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ____renderer;

  /// @brief Field _materialPairs, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*>* ____materialPairs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs, ____renderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs, ____materialPairs) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BTSCharacterMaterialSwitcher/MaterialPairs
class CORDL_TYPE BTSCharacterMaterialSwitcher_MaterialPairs : public ::System::Object {
public:
  // Declarations
  /// @brief Field alternativeMaterial, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_alternativeMaterial, put = __cordl_internal_set_alternativeMaterial)) ::UnityW<::UnityEngine::Material> alternativeMaterial;

  /// @brief Field defaultMaterial, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultMaterial, put = __cordl_internal_set_defaultMaterial)) ::UnityW<::UnityEngine::Material> defaultMaterial;

  /// @brief Field materialIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_materialIndex, put = __cordl_internal_set_materialIndex)) int32_t materialIndex;

  static inline ::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_alternativeMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_alternativeMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultMaterial();

  constexpr int32_t const& __cordl_internal_get_materialIndex() const;

  constexpr int32_t& __cordl_internal_get_materialIndex();

  constexpr void __cordl_internal_set_alternativeMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_defaultMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_materialIndex(int32_t value);

  /// @brief Method .ctor, addr 0x225e674, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterMaterialSwitcher_MaterialPairs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterMaterialSwitcher_MaterialPairs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterMaterialSwitcher_MaterialPairs(BTSCharacterMaterialSwitcher_MaterialPairs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterMaterialSwitcher_MaterialPairs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterMaterialSwitcher_MaterialPairs(BTSCharacterMaterialSwitcher_MaterialPairs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17678 };

  /// @brief Field materialIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___materialIndex;

  /// @brief Field defaultMaterial, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___defaultMaterial;

  /// @brief Field alternativeMaterial, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___alternativeMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs, ___materialIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs, ___defaultMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs, ___alternativeMaterial) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BTSCharacterMaterialSwitcher
class CORDL_TYPE BTSCharacterMaterialSwitcher : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MaterialPairs = ::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs;

  using RendererMaterialsPairs = ::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs;

  /// @brief Field _rendererMaterialsPairs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rendererMaterialsPairs,
                      put = __cordl_internal_set__rendererMaterialsPairs)) ::ArrayW<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*,
                                                                                    ::Array<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>*>
      _rendererMaterialsPairs;

  static inline ::GlobalNamespace::BTSCharacterMaterialSwitcher* New_ctor();

  /// @brief Method SwapMaterials, addr 0x225e330, size 0x254, virtual false, abstract: false, final false
  inline void SwapMaterials(bool alternative);

  constexpr ::ArrayW<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*, ::Array<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>*> const&
  __cordl_internal_get__rendererMaterialsPairs() const;

  constexpr ::ArrayW<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*, ::Array<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>*>&
  __cordl_internal_get__rendererMaterialsPairs();

  constexpr void __cordl_internal_set__rendererMaterialsPairs(
      ::ArrayW<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*, ::Array<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>*> value);

  /// @brief Method .ctor, addr 0x225e5d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterMaterialSwitcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterMaterialSwitcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterMaterialSwitcher(BTSCharacterMaterialSwitcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterMaterialSwitcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterMaterialSwitcher(BTSCharacterMaterialSwitcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17679 };

  /// @brief Field _rendererMaterialsPairs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*, ::Array<::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*>*> ____rendererMaterialsPairs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BTSCharacterMaterialSwitcher, ____rendererMaterialsPairs) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterMaterialSwitcher, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterMaterialSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterMaterialSwitcher*, "", "BTSCharacterMaterialSwitcher");
NEED_NO_BOX(::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterMaterialSwitcher_MaterialPairs*, "", "BTSCharacterMaterialSwitcher/MaterialPairs");
NEED_NO_BOX(::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterMaterialSwitcher_RendererMaterialsPairs*, "", "BTSCharacterMaterialSwitcher/RendererMaterialsPairs");
