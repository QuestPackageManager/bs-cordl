#pragma once
// IWYU pragma private; include "GlobalNamespace/DisconnectPromptView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisconnectPromptView)
namespace GlobalNamespace {
class DisconnectPromptView___c__DisplayClass12_0;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class PanelAnimationSO;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class DisconnectPromptView;
}
namespace GlobalNamespace {
class DisconnectPromptView___c__DisplayClass12_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisconnectPromptView);
MARK_REF_PTR_T(::GlobalNamespace::DisconnectPromptView___c__DisplayClass12_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisconnectPromptView/<>c__DisplayClass12_0
class CORDL_TYPE DisconnectPromptView___c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::DisconnectPromptView> __4__this;

  /// @brief Field finishedCallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  static inline ::GlobalNamespace::DisconnectPromptView___c__DisplayClass12_0* New_ctor();

  /// @brief Method <Hide>b__0, addr 0x3affe30, size 0x44, virtual false, abstract: false, final false
  inline void _Hide_b__0();

  constexpr ::UnityW<::GlobalNamespace::DisconnectPromptView> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::DisconnectPromptView>& __cordl_internal_get___4__this();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DisconnectPromptView> value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  /// @brief Method .ctor, addr 0x3affd88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisconnectPromptView___c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisconnectPromptView___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisconnectPromptView___c__DisplayClass12_0(DisconnectPromptView___c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisconnectPromptView___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisconnectPromptView___c__DisplayClass12_0(DisconnectPromptView___c__DisplayClass12_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4973 };

  /// @brief Field finishedCallback, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DisconnectPromptView> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DisconnectPromptView___c__DisplayClass12_0, ___finishedCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectPromptView___c__DisplayClass12_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisconnectPromptView___c__DisplayClass12_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisconnectPromptView
class CORDL_TYPE DisconnectPromptView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass12_0 = ::GlobalNamespace::DisconnectPromptView___c__DisplayClass12_0;

  /// @brief Field _buttonBinder, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _cancelButton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelButton, put = __cordl_internal_set__cancelButton)) ::UnityW<::UnityEngine::UI::Button> _cancelButton;

  /// @brief Field _dismissPanelAnimation, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__dismissPanelAnimation, put = __cordl_internal_set__dismissPanelAnimation)) ::UnityW<::HMUI::PanelAnimationSO> _dismissPanelAnimation;

  /// @brief Field _okButton, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__okButton, put = __cordl_internal_set__okButton)) ::UnityW<::UnityEngine::UI::Button> _okButton;

  /// @brief Field _presentPanelAnimation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__presentPanelAnimation, put = __cordl_internal_set__presentPanelAnimation)) ::UnityW<::HMUI::PanelAnimationSO> _presentPanelAnimation;

  /// @brief Field _promptGameObject, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__promptGameObject, put = __cordl_internal_set__promptGameObject)) ::UnityW<::UnityEngine::GameObject> _promptGameObject;

  /// @brief Field didViewFinishEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_didViewFinishEvent, put = __cordl_internal_set_didViewFinishEvent)) ::System::Action_1<bool>* didViewFinishEvent;

  /// @brief Method Hide, addr 0x3affcc0, size 0xc8, virtual false, abstract: false, final false
  inline void Hide(::System::Action* finishedCallback);

  static inline ::GlobalNamespace::DisconnectPromptView* New_ctor();

  /// @brief Method OnDisable, addr 0x3affc6c, size 0x1c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3affb7c, size 0xf0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Show, addr 0x3affc88, size 0x38, virtual false, abstract: false, final false
  inline void Show();

  /// @brief Method <OnEnable>b__9_0, addr 0x3affdf0, size 0x20, virtual false, abstract: false, final false
  inline void _OnEnable_b__9_0();

  /// @brief Method <OnEnable>b__9_1, addr 0x3affe10, size 0x20, virtual false, abstract: false, final false
  inline void _OnEnable_b__9_1();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelButton();

  constexpr ::UnityW<::HMUI::PanelAnimationSO> const& __cordl_internal_get__dismissPanelAnimation() const;

  constexpr ::UnityW<::HMUI::PanelAnimationSO>& __cordl_internal_get__dismissPanelAnimation();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__okButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__okButton();

  constexpr ::UnityW<::HMUI::PanelAnimationSO> const& __cordl_internal_get__presentPanelAnimation() const;

  constexpr ::UnityW<::HMUI::PanelAnimationSO>& __cordl_internal_get__presentPanelAnimation();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__promptGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__promptGameObject();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get_didViewFinishEvent() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_didViewFinishEvent();

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__dismissPanelAnimation(::UnityW<::HMUI::PanelAnimationSO> value);

  constexpr void __cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__presentPanelAnimation(::UnityW<::HMUI::PanelAnimationSO> value);

  constexpr void __cordl_internal_set__promptGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_didViewFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x3affd90, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didViewFinishEvent, addr 0x3affa1c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didViewFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method remove_didViewFinishEvent, addr 0x3affacc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didViewFinishEvent(::System::Action_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisconnectPromptView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisconnectPromptView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisconnectPromptView(DisconnectPromptView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisconnectPromptView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisconnectPromptView(DisconnectPromptView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4974 };

  /// @brief Field _presentPanelAnimation, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::PanelAnimationSO> ____presentPanelAnimation;

  /// @brief Field _dismissPanelAnimation, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::PanelAnimationSO> ____dismissPanelAnimation;

  /// @brief Field _promptGameObject, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____promptGameObject;

  /// @brief Field _okButton, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____okButton;

  /// @brief Field _cancelButton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelButton;

  /// @brief Field didViewFinishEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<bool>* ___didViewFinishEvent;

  /// @brief Field _buttonBinder, offset: 0x50, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DisconnectPromptView, ____presentPanelAnimation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectPromptView, ____dismissPanelAnimation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectPromptView, ____promptGameObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectPromptView, ____okButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectPromptView, ____cancelButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectPromptView, ___didViewFinishEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectPromptView, ____buttonBinder) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisconnectPromptView, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisconnectPromptView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisconnectPromptView*, "", "DisconnectPromptView");
NEED_NO_BOX(::GlobalNamespace::DisconnectPromptView___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisconnectPromptView___c__DisplayClass12_0*, "", "DisconnectPromptView/<>c__DisplayClass12_0");
