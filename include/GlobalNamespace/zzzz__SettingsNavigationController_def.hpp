#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsNavigationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__NavigationController_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsNavigationController)
namespace GlobalNamespace {
struct SettingsNavigationController_FinishAction;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
struct SettingsNavigationController_FinishAction;
}
namespace GlobalNamespace {
class SettingsNavigationController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SettingsNavigationController_FinishAction);
MARK_REF_PTR_T(::GlobalNamespace::SettingsNavigationController);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SettingsNavigationController/FinishAction
struct CORDL_TYPE SettingsNavigationController_FinishAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SettingsNavigationController_FinishAction_Unwrapped
  enum struct __SettingsNavigationController_FinishAction_Unwrapped : int32_t {
    __E_Ok = static_cast<int32_t>(0x0),
    __E_Cancel = static_cast<int32_t>(0x1),
    __E_Apply = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SettingsNavigationController_FinishAction_Unwrapped() const noexcept {
    return static_cast<__SettingsNavigationController_FinishAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsNavigationController_FinishAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SettingsNavigationController_FinishAction(int32_t value__) noexcept;

  /// @brief Field Apply value: I32(2)
  static ::GlobalNamespace::SettingsNavigationController_FinishAction const Apply;

  /// @brief Field Cancel value: I32(1)
  static ::GlobalNamespace::SettingsNavigationController_FinishAction const Cancel;

  /// @brief Field Ok value: I32(0)
  static ::GlobalNamespace::SettingsNavigationController_FinishAction const Ok;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6533 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsNavigationController_FinishAction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsNavigationController_FinishAction, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.NavigationController
namespace GlobalNamespace {
// Is value type: false
// CS Name: SettingsNavigationController
class CORDL_TYPE SettingsNavigationController : public ::HMUI::NavigationController {
public:
  // Declarations
  using FinishAction = ::GlobalNamespace::SettingsNavigationController_FinishAction;

  /// @brief Field _applyButton, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__applyButton, put = __cordl_internal_set__applyButton)) ::UnityW<::UnityEngine::UI::Button> _applyButton;

  /// @brief Field _cancelButton, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelButton, put = __cordl_internal_set__cancelButton)) ::UnityW<::UnityEngine::UI::Button> _cancelButton;

  /// @brief Field _okButton, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__okButton, put = __cordl_internal_set__okButton)) ::UnityW<::UnityEngine::UI::Button> _okButton;

  /// @brief Field didFinishEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>* didFinishEvent;

  /// @brief Method DidActivate, addr 0x573a8f8, size 0x1c0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleFinishButton, addr 0x573aab8, size 0x1c, virtual false, abstract: false, final false
  inline void HandleFinishButton(::GlobalNamespace::SettingsNavigationController_FinishAction finishAction);

  static inline ::GlobalNamespace::SettingsNavigationController* New_ctor();

  /// @brief Method <DidActivate>b__7_0, addr 0x573aae0, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__7_0();

  /// @brief Method <DidActivate>b__7_1, addr 0x573ab00, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__7_1();

  /// @brief Method <DidActivate>b__7_2, addr 0x573ab20, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__7_2();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__applyButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__applyButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__okButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__okButton();

  constexpr ::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__applyButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>* value);

  /// @brief Method .ctor, addr 0x573aad4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x573a778, size 0xc0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>* value);

  /// @brief Method remove_didFinishEvent, addr 0x573a838, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsNavigationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsNavigationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsNavigationController(SettingsNavigationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsNavigationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsNavigationController(SettingsNavigationController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6534 };

  /// @brief Field _okButton, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____okButton;

  /// @brief Field _applyButton, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____applyButton;

  /// @brief Field _cancelButton, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelButton;

  /// @brief Field didFinishEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::SettingsNavigationController_FinishAction>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsNavigationController, ____okButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsNavigationController, ____applyButton) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsNavigationController, ____cancelButton) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsNavigationController, ___didFinishEvent) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsNavigationController, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsNavigationController_FinishAction, "", "SettingsNavigationController/FinishAction");
NEED_NO_BOX(::GlobalNamespace::SettingsNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsNavigationController*, "", "SettingsNavigationController");
