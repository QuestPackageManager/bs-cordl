#pragma once
// IWYU pragma private; include "GlobalNamespace/SwitchSettingsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SwitchSettingsController)
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class SwitchSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SwitchSettingsController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SwitchSettingsController
class CORDL_TYPE SwitchSettingsController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _on, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__on, put = __cordl_internal_set__on)) bool _on;

  /// @brief Field _toggle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__toggle, put = __cordl_internal_set__toggle)) ::UnityW<::UnityEngine::UI::Toggle> _toggle;

  /// @brief Method ApplyValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ApplyValue(bool value);

  /// @brief Method Awake, addr 0x3c28a0c, size 0xa4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetInitValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool GetInitValue();

  /// @brief Method HandleToggleValueDidChange, addr 0x3c28bb4, size 0x10, virtual false, abstract: false, final false
  inline void HandleToggleValueDidChange(bool value);

  static inline ::GlobalNamespace::SwitchSettingsController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3c28ab0, size 0xa4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x3c28b54, size 0x3c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshUI, addr 0x3c28b90, size 0x24, virtual false, abstract: false, final false
  inline void RefreshUI();

  constexpr bool const& __cordl_internal_get__on() const;

  constexpr bool& __cordl_internal_get__on();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggle();

  constexpr void __cordl_internal_set__on(bool value);

  constexpr void __cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle> value);

  /// @brief Method .ctor, addr 0x3c28bc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SwitchSettingsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SwitchSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SwitchSettingsController(SwitchSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SwitchSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SwitchSettingsController(SwitchSettingsController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18984 };

  /// @brief Field _toggle, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____toggle;

  /// @brief Field _on, offset: 0x28, size: 0x1, def value: None
  bool ____on;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SwitchSettingsController, ____toggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SwitchSettingsController, ____on) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SwitchSettingsController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SwitchSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SwitchSettingsController*, "", "SwitchSettingsController");
