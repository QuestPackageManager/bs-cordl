#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialSwapTransitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
CORDL_MODULE_EXPORT(MaterialSwapTransitionSO)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialSwapTransitionSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialSwapTransitionSO);
// Dependencies BaseTransitionSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialSwapTransitionSO
class CORDL_TYPE MaterialSwapTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
  // Declarations
  /// @brief Field _disabledMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledMaterial, put = __cordl_internal_set__disabledMaterial)) ::UnityW<::UnityEngine::Material> _disabledMaterial;

  /// @brief Field _highlightedMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightedMaterial, put = __cordl_internal_set__highlightedMaterial)) ::UnityW<::UnityEngine::Material> _highlightedMaterial;

  /// @brief Field _normalMaterial, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__normalMaterial, put = __cordl_internal_set__normalMaterial)) ::UnityW<::UnityEngine::Material> _normalMaterial;

  /// @brief Field _pressedMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pressedMaterial, put = __cordl_internal_set__pressedMaterial)) ::UnityW<::UnityEngine::Material> _pressedMaterial;

  /// @brief Field _selectedAndHighlightedMaterial, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAndHighlightedMaterial, put = __cordl_internal_set__selectedAndHighlightedMaterial)) ::UnityW<::UnityEngine::Material>
      _selectedAndHighlightedMaterial;

  /// @brief Field _selectedMaterial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedMaterial, put = __cordl_internal_set__selectedMaterial)) ::UnityW<::UnityEngine::Material> _selectedMaterial;

  __declspec(property(get = get_disabledMaterial)) ::UnityW<::UnityEngine::Material> disabledMaterial;

  __declspec(property(get = get_highlightedMaterial)) ::UnityW<::UnityEngine::Material> highlightedMaterial;

  __declspec(property(get = get_normalMaterial)) ::UnityW<::UnityEngine::Material> normalMaterial;

  __declspec(property(get = get_pressedMaterial)) ::UnityW<::UnityEngine::Material> pressedMaterial;

  __declspec(property(get = get_selectedAndHighlightedMaterial)) ::UnityW<::UnityEngine::Material> selectedAndHighlightedMaterial;

  __declspec(property(get = get_selectedMaterial)) ::UnityW<::UnityEngine::Material> selectedMaterial;

  static inline ::GlobalNamespace::MaterialSwapTransitionSO* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__disabledMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__disabledMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__highlightedMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__highlightedMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__normalMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__normalMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__pressedMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__pressedMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__selectedAndHighlightedMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__selectedAndHighlightedMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__selectedMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__selectedMaterial();

  constexpr void __cordl_internal_set__disabledMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__highlightedMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__normalMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__pressedMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__selectedAndHighlightedMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__selectedMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x44d8230, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disabledMaterial, addr 0x44d8218, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_disabledMaterial();

  /// @brief Method get_highlightedMaterial, addr 0x44d8208, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_highlightedMaterial();

  /// @brief Method get_normalMaterial, addr 0x44d8200, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_normalMaterial();

  /// @brief Method get_pressedMaterial, addr 0x44d8210, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_pressedMaterial();

  /// @brief Method get_selectedAndHighlightedMaterial, addr 0x44d8228, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_selectedAndHighlightedMaterial();

  /// @brief Method get_selectedMaterial, addr 0x44d8220, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_selectedMaterial();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialSwapTransitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialSwapTransitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialSwapTransitionSO(MaterialSwapTransitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialSwapTransitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialSwapTransitionSO(MaterialSwapTransitionSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18216 };

  /// @brief Field _normalMaterial, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____normalMaterial;

  /// @brief Field _highlightedMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____highlightedMaterial;

  /// @brief Field _pressedMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____pressedMaterial;

  /// @brief Field _disabledMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____disabledMaterial;

  /// @brief Field _selectedMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____selectedMaterial;

  /// @brief Field _selectedAndHighlightedMaterial, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____selectedAndHighlightedMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialSwapTransitionSO, ____normalMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialSwapTransitionSO, ____highlightedMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialSwapTransitionSO, ____pressedMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialSwapTransitionSO, ____disabledMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialSwapTransitionSO, ____selectedMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialSwapTransitionSO, ____selectedAndHighlightedMaterial) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialSwapTransitionSO, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialSwapTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialSwapTransitionSO*, "", "MaterialSwapTransitionSO");
