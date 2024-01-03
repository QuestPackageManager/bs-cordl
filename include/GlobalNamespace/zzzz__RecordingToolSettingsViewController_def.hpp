#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSettingsViewController)
namespace HMUI {
class TextPageScrollView;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class RecordingToolManager;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSettingsViewController);
// Type: ::RecordingToolSettingsViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5740))
// CS Name: ::RecordingToolSettingsViewController*
class CORDL_TYPE RecordingToolSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _continueButton, offset 0x70, size 0x8
  __declspec(property(get = __get__continueButton, put = __set__continueButton))::UnityEngine::UI::Button* _continueButton;

  /// @brief Field _textPageScrollView, offset 0x78, size 0x8
  __declspec(property(get = __get__textPageScrollView, put = __set__textPageScrollView))::HMUI::TextPageScrollView* _textPageScrollView;

  /// @brief Field _recordingToolManager, offset 0x80, size 0x8
  __declspec(property(get = __get__recordingToolManager, put = __set__recordingToolManager))::GlobalNamespace::RecordingToolManager* _recordingToolManager;

  /// @brief Field didFinishEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action* didFinishEvent;

  constexpr ::UnityEngine::UI::Button*& __get__continueButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__continueButton() const;

  constexpr void __set__continueButton(::UnityEngine::UI::Button* value);

  constexpr ::HMUI::TextPageScrollView*& __get__textPageScrollView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> const& __get__textPageScrollView() const;

  constexpr void __set__textPageScrollView(::HMUI::TextPageScrollView* value);

  constexpr ::GlobalNamespace::RecordingToolManager*& __get__recordingToolManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolManager*> const& __get__recordingToolManager() const;

  constexpr void __set__recordingToolManager(::GlobalNamespace::RecordingToolManager* value);

  constexpr ::System::Action*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action* value);

  /// @brief Method add_didFinishEvent, addr 0x22d5fd0, size 0x9c, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action* value);

  /// @brief Method remove_didFinishEvent, addr 0x22d606c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action* value);

  /// @brief Method DidActivate, addr 0x22d6108, size 0x120, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::RecordingToolSettingsViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22d6228, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__6_0, addr 0x22d6230, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__6_0();

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSettingsViewController(RecordingToolSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSettingsViewController(RecordingToolSettingsViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSettingsViewController();

public:
  /// @brief Field _continueButton, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____continueButton;

  /// @brief Field _textPageScrollView, offset: 0x78, size: 0x8, def value: None
  ::HMUI::TextPageScrollView* ____textPageScrollView;

  /// @brief Field _recordingToolManager, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolManager* ____recordingToolManager;

  /// @brief Field didFinishEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettingsViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsViewController, ____continueButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsViewController, ____textPageScrollView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsViewController, ____recordingToolManager) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsViewController, ___didFinishEvent) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsViewController*, "", "RecordingToolSettingsViewController");
