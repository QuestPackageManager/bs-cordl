#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ToggleableCanvasGroup)
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine::UI {
class Toggle;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13625))
// CS Name: ::ToggleableCanvasGroup*
class CORDL_TYPE ToggleableCanvasGroup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _canvasGroup, offset 0x18, size 0x8
  __declspec(property(get = __get__canvasGroup, put = __set__canvasGroup))::UnityEngine::CanvasGroup* _canvasGroup;

  /// @brief Field _toggle, offset 0x20, size 0x8
  __declspec(property(get = __get__toggle, put = __set__toggle))::UnityEngine::UI::Toggle* _toggle;

  /// @brief Field _invertToggle, offset 0x28, size 0x1
  __declspec(property(get = __get__invertToggle, put = __set__invertToggle)) bool _invertToggle;

  constexpr ::UnityEngine::CanvasGroup*& __get__canvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__canvasGroup() const;

  constexpr void __set__canvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__toggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__toggle() const;

  constexpr void __set__toggle(::UnityEngine::UI::Toggle* value);

  constexpr bool& __get__invertToggle();

  constexpr bool const& __get__invertToggle() const;

  constexpr void __set__invertToggle(bool value);

  /// @brief Method OnEnable addr 0x1fc0f9c size 0xbc virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x1fc1088 size 0xa8 virtual false final false
  inline void OnDisable();

  /// @brief Method HandleToggleValueChanged addr 0x1fc1130 size 0x8 virtual false final false
  inline void HandleToggleValueChanged(bool isOn);

  /// @brief Method SetCanvasGroupData addr 0x1fc1058 size 0x30 virtual false final false
  inline void SetCanvasGroupData(bool isOn);

  static inline ::GlobalNamespace::ToggleableCanvasGroup* New_ctor();

  /// @brief Method .ctor addr 0x1fc1138 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ToggleableCanvasGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToggleableCanvasGroup(ToggleableCanvasGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToggleableCanvasGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToggleableCanvasGroup(ToggleableCanvasGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleableCanvasGroup();

public:
  /// @brief Field _canvasGroup, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____canvasGroup;

  /// @brief Field _toggle, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____toggle;

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
