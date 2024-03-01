#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(NoUserAgeWarningViewController)
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class NoUserAgeWarningViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoUserAgeWarningViewController);
// Type: ::NoUserAgeWarningViewController
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoUserAgeWarningViewController*
class CORDL_TYPE NoUserAgeWarningViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _confirmButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__confirmButton, put = __cordl_internal_set__confirmButton))::UnityW<::UnityEngine::UI::Button> _confirmButton;

  /// @brief Field didFinishEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent))::System::Action* didFinishEvent;

  /// @brief Method DidActivate, addr 0x23d0ce0, size 0xa8, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x23d0d88, size 0x30, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  static inline ::GlobalNamespace::NoUserAgeWarningViewController* New_ctor();

  /// @brief Method <DidActivate>b__4_0, addr 0x23d0dc0, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__4_0();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__confirmButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__confirmButton();

  constexpr ::System::Action*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__confirmButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x23d0db8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x23d0ba8, size 0x9c, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action* value);

  /// @brief Method remove_didFinishEvent, addr 0x23d0c44, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoUserAgeWarningViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoUserAgeWarningViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoUserAgeWarningViewController(NoUserAgeWarningViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoUserAgeWarningViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoUserAgeWarningViewController(NoUserAgeWarningViewController const&) = delete;

  /// @brief Field _confirmButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____confirmButton;

  /// @brief Field didFinishEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoUserAgeWarningViewController, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoUserAgeWarningViewController, ____confirmButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoUserAgeWarningViewController, ___didFinishEvent) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoUserAgeWarningViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoUserAgeWarningViewController*, "", "NoUserAgeWarningViewController");
