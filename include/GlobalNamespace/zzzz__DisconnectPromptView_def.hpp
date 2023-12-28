#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisconnectPromptView)
namespace GlobalNamespace {
class __DisconnectPromptView____c__DisplayClass12_0;
}
namespace HMUI {
class PanelAnimationSO;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class ButtonBinder;
}
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class DisconnectPromptView;
}
namespace GlobalNamespace {
class __DisconnectPromptView____c__DisplayClass12_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisconnectPromptView);
MARK_REF_PTR_T(::GlobalNamespace::__DisconnectPromptView____c__DisplayClass12_0);
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5777))
// CS Name: ::DisconnectPromptView::<>c__DisplayClass12_0*
class CORDL_TYPE __DisconnectPromptView____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field finishedCallback, offset 0x10, size 0x8
  __declspec(property(get = __get_finishedCallback, put = __set_finishedCallback))::System::Action* finishedCallback;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::DisconnectPromptView* __4__this;

  constexpr ::System::Action*& __get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_finishedCallback() const;

  constexpr void __set_finishedCallback(::System::Action* value);

  constexpr ::GlobalNamespace::DisconnectPromptView*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DisconnectPromptView*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::DisconnectPromptView* value);

  static inline ::GlobalNamespace::__DisconnectPromptView____c__DisplayClass12_0* New_ctor();

  /// @brief Method .ctor addr 0x22e0e70 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Hide>b__0 addr 0x22e0f20 size 0x44 virtual false final false
  inline void _Hide_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__DisconnectPromptView____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DisconnectPromptView____c__DisplayClass12_0(__DisconnectPromptView____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DisconnectPromptView____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DisconnectPromptView____c__DisplayClass12_0(__DisconnectPromptView____c__DisplayClass12_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DisconnectPromptView____c__DisplayClass12_0();

public:
  /// @brief Field finishedCallback, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::DisconnectPromptView* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DisconnectPromptView____c__DisplayClass12_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::DisconnectPromptView
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5778))
// CS Name: ::DisconnectPromptView*
class CORDL_TYPE DisconnectPromptView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass12_0 = ::GlobalNamespace::__DisconnectPromptView____c__DisplayClass12_0;

  /// @brief Field _presentPanelAnimation, offset 0x18, size 0x8
  __declspec(property(get = __get__presentPanelAnimation, put = __set__presentPanelAnimation))::HMUI::PanelAnimationSO* _presentPanelAnimation;

  /// @brief Field _dismissPanelAnimation, offset 0x20, size 0x8
  __declspec(property(get = __get__dismissPanelAnimation, put = __set__dismissPanelAnimation))::HMUI::PanelAnimationSO* _dismissPanelAnimation;

  /// @brief Field _promptGameObject, offset 0x28, size 0x8
  __declspec(property(get = __get__promptGameObject, put = __set__promptGameObject))::UnityEngine::GameObject* _promptGameObject;

  /// @brief Field _okButton, offset 0x30, size 0x8
  __declspec(property(get = __get__okButton, put = __set__okButton))::UnityEngine::UI::Button* _okButton;

  /// @brief Field _cancelButton, offset 0x38, size 0x8
  __declspec(property(get = __get__cancelButton, put = __set__cancelButton))::UnityEngine::UI::Button* _cancelButton;

  /// @brief Field didViewFinishEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_didViewFinishEvent, put = __set_didViewFinishEvent))::System::Action_1<bool>* didViewFinishEvent;

  /// @brief Field _buttonBinder, offset 0x48, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  constexpr ::HMUI::PanelAnimationSO*& __get__presentPanelAnimation();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> const& __get__presentPanelAnimation() const;

  constexpr void __set__presentPanelAnimation(::HMUI::PanelAnimationSO* value);

  constexpr ::HMUI::PanelAnimationSO*& __get__dismissPanelAnimation();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> const& __get__dismissPanelAnimation() const;

  constexpr void __set__dismissPanelAnimation(::HMUI::PanelAnimationSO* value);

  constexpr ::UnityEngine::GameObject*& __get__promptGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__promptGameObject() const;

  constexpr void __set__promptGameObject(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::UI::Button*& __get__okButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__okButton() const;

  constexpr void __set__okButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__cancelButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__cancelButton() const;

  constexpr void __set__cancelButton(::UnityEngine::UI::Button* value);

  constexpr ::System::Action_1<bool>*& __get_didViewFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __get_didViewFinishEvent() const;

  constexpr void __set_didViewFinishEvent(::System::Action_1<bool>* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  /// @brief Method add_didViewFinishEvent addr 0x22e0b00 size 0xb0 virtual false final false
  inline void add_didViewFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method remove_didViewFinishEvent addr 0x22e0bb0 size 0xb0 virtual false final false
  inline void remove_didViewFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method OnEnable addr 0x22e0c60 size 0xf0 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x22e0d50 size 0x1c virtual false final false
  inline void OnDisable();

  /// @brief Method Show addr 0x22e0d6c size 0x38 virtual false final false
  inline void Show();

  /// @brief Method Hide addr 0x22e0da4 size 0xcc virtual false final false
  inline void Hide(::System::Action* finishedCallback);

  static inline ::GlobalNamespace::DisconnectPromptView* New_ctor();

  /// @brief Method .ctor addr 0x22e0e78 size 0x68 virtual false final false
  inline void _ctor();

  /// @brief Method <OnEnable>b__9_0 addr 0x22e0ee0 size 0x20 virtual false final false
  inline void _OnEnable_b__9_0();

  /// @brief Method <OnEnable>b__9_1 addr 0x22e0f00 size 0x20 virtual false final false
  inline void _OnEnable_b__9_1();

  // Ctor Parameters [CppParam { name: "", ty: "DisconnectPromptView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisconnectPromptView(DisconnectPromptView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisconnectPromptView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisconnectPromptView(DisconnectPromptView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisconnectPromptView();

public:
  /// @brief Field _presentPanelAnimation, offset: 0x18, size: 0x8, def value: None
  ::HMUI::PanelAnimationSO* ____presentPanelAnimation;

  /// @brief Field _dismissPanelAnimation, offset: 0x20, size: 0x8, def value: None
  ::HMUI::PanelAnimationSO* ____dismissPanelAnimation;

  /// @brief Field _promptGameObject, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____promptGameObject;

  /// @brief Field _okButton, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____okButton;

  /// @brief Field _cancelButton, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____cancelButton;

  /// @brief Field didViewFinishEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<bool>* ___didViewFinishEvent;

  /// @brief Field _buttonBinder, offset: 0x48, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisconnectPromptView, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisconnectPromptView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisconnectPromptView*, "", "DisconnectPromptView");
NEED_NO_BOX(::GlobalNamespace::__DisconnectPromptView____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DisconnectPromptView____c__DisplayClass12_0*, "", "DisconnectPromptView/<>c__DisplayClass12_0");
