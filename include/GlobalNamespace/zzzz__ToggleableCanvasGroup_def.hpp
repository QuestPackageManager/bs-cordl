#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ToggleableCanvasGroup)
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class ToggleableCanvasGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ToggleableCanvasGroup);
// Type: ::ToggleableCanvasGroup
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ToggleableCanvasGroup*
class CORDL_TYPE ToggleableCanvasGroup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _canvasGroup, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroup, put = __cordl_internal_set__canvasGroup))::UnityW<::UnityEngine::CanvasGroup> _canvasGroup;

  /// @brief Field _invertToggle, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__invertToggle, put = __cordl_internal_set__invertToggle)) bool _invertToggle;

  /// @brief Field _toggle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__toggle, put = __cordl_internal_set__toggle))::UnityW<::UnityEngine::UI::Toggle> _toggle;

  /// @brief Method HandleToggleValueChanged, addr 0x22d9b34, size 0x8, virtual false, abstract: false, final false
  inline void HandleToggleValueChanged(bool isOn);

  static inline ::GlobalNamespace::ToggleableCanvasGroup* New_ctor();

  /// @brief Method OnDisable, addr 0x22d9a8c, size 0xa8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x22d99a0, size 0xbc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetCanvasGroupData, addr 0x22d9a5c, size 0x30, virtual false, abstract: false, final false
  inline void SetCanvasGroupData(bool isOn);

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__canvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__canvasGroup();

  constexpr bool const& __cordl_internal_get__invertToggle() const;

  constexpr bool& __cordl_internal_get__invertToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggle();

  constexpr void __cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__invertToggle(bool value);

  constexpr void __cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle> value);

  /// @brief Method .ctor, addr 0x22d9b3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleableCanvasGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToggleableCanvasGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToggleableCanvasGroup(ToggleableCanvasGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToggleableCanvasGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToggleableCanvasGroup(ToggleableCanvasGroup const&) = delete;

  /// @brief Field _canvasGroup, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____canvasGroup;

  /// @brief Field _toggle, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____toggle;

  /// @brief Field _invertToggle, offset: 0x28, size: 0x1, def value: None
  bool ____invertToggle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ToggleableCanvasGroup, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableCanvasGroup, ____canvasGroup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableCanvasGroup, ____toggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToggleableCanvasGroup, ____invertToggle) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ToggleableCanvasGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ToggleableCanvasGroup*, "", "ToggleableCanvasGroup");
