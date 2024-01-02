#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModalView)
namespace HMUI {
class PanelAnimationSO;
}
namespace HMUI {
class __ModalView____c__DisplayClass21_0;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
namespace HMUI {
class __ModalView____c__DisplayClass17_0;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Action;
}
namespace HMUI {
class ViewController;
}
// Forward declare root types
namespace HMUI {
class ModalView;
}
namespace HMUI {
class __ModalView____c__DisplayClass17_0;
}
namespace HMUI {
class __ModalView____c__DisplayClass21_0;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ModalView);
MARK_REF_PTR_T(::HMUI::__ModalView____c__DisplayClass17_0);
MARK_REF_PTR_T(::HMUI::__ModalView____c__DisplayClass21_0);
// Type: ::<>c__DisplayClass17_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13634))
// CS Name: ::ModalView::<>c__DisplayClass17_0*
class CORDL_TYPE __ModalView____c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HMUI::ModalView* __4__this;

  /// @brief Field finishedCallback, offset 0x18, size 0x8
  __declspec(property(get = __get_finishedCallback, put = __set_finishedCallback))::System::Action* finishedCallback;

  constexpr ::HMUI::ModalView*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ModalView*> const& __get___4__this() const;

  constexpr void __set___4__this(::HMUI::ModalView* value);

  constexpr ::System::Action*& __get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_finishedCallback() const;

  constexpr void __set_finishedCallback(::System::Action* value);

  static inline ::HMUI::__ModalView____c__DisplayClass17_0* New_ctor();

  /// @brief Method .ctor, addr 0x2142054, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Hide>b__0, addr 0x2142aa4, size 0x7c, virtual false, abstract: false, final false
  inline void _Hide_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__ModalView____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ModalView____c__DisplayClass17_0(__ModalView____c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ModalView____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ModalView____c__DisplayClass17_0(__ModalView____c__DisplayClass17_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ModalView____c__DisplayClass17_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::HMUI::ModalView* _____4__this;

  /// @brief Field finishedCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ModalView____c__DisplayClass17_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ModalView____c__DisplayClass17_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ModalView____c__DisplayClass17_0, ___finishedCallback) == 0x18, "Offset mismatch!");

} // namespace HMUI
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13635))
// CS Name: ::ModalView::<>c__DisplayClass21_0*
class CORDL_TYPE __ModalView____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HMUI::ModalView* __4__this;

  /// @brief Field prevAnimateParentCanvas, offset 0x18, size 0x1
  __declspec(property(get = __get_prevAnimateParentCanvas, put = __set_prevAnimateParentCanvas)) bool prevAnimateParentCanvas;

  constexpr ::HMUI::ModalView*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ModalView*> const& __get___4__this() const;

  constexpr void __set___4__this(::HMUI::ModalView* value);

  constexpr bool& __get_prevAnimateParentCanvas();

  constexpr bool const& __get_prevAnimateParentCanvas() const;

  constexpr void __set_prevAnimateParentCanvas(bool value);

  static inline ::HMUI::__ModalView____c__DisplayClass21_0* New_ctor();

  /// @brief Method .ctor, addr 0x2142a8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <HandleParentViewControllerDidDeactivate>b__0, addr 0x2142b20, size 0x20, virtual false, abstract: false, final false
  inline void _HandleParentViewControllerDidDeactivate_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__ModalView____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ModalView____c__DisplayClass21_0(__ModalView____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ModalView____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ModalView____c__DisplayClass21_0(__ModalView____c__DisplayClass21_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ModalView____c__DisplayClass21_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::HMUI::ModalView* _____4__this;

  /// @brief Field prevAnimateParentCanvas, offset: 0x18, size: 0x1, def value: None
  bool ___prevAnimateParentCanvas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ModalView____c__DisplayClass21_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ModalView____c__DisplayClass21_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ModalView____c__DisplayClass21_0, ___prevAnimateParentCanvas) == 0x18, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::ModalView
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13636))
// CS Name: ::HMUI::ModalView*
class CORDL_TYPE ModalView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass21_0 = ::HMUI::__ModalView____c__DisplayClass21_0;

  using __c__DisplayClass17_0 = ::HMUI::__ModalView____c__DisplayClass17_0;

  /// @brief Field _presentPanelAnimations, offset 0x18, size 0x8
  __declspec(property(get = __get__presentPanelAnimations, put = __set__presentPanelAnimations))::HMUI::PanelAnimationSO* _presentPanelAnimations;

  /// @brief Field _dismissPanelAnimation, offset 0x20, size 0x8
  __declspec(property(get = __get__dismissPanelAnimation, put = __set__dismissPanelAnimation))::HMUI::PanelAnimationSO* _dismissPanelAnimation;

  /// @brief Field _animateParentCanvas, offset 0x28, size 0x1
  __declspec(property(get = __get__animateParentCanvas, put = __set__animateParentCanvas)) bool _animateParentCanvas;

  /// @brief Field _container, offset 0x30, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field blockerClickedEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_blockerClickedEvent, put = __set_blockerClickedEvent))::System::Action* blockerClickedEvent;

  /// @brief Field _previousParent, offset 0x40, size 0x8
  __declspec(property(get = __get__previousParent, put = __set__previousParent))::UnityEngine::Transform* _previousParent;

  /// @brief Field _isShown, offset 0x48, size 0x1
  __declspec(property(get = __get__isShown, put = __set__isShown)) bool _isShown;

  /// @brief Field _viewIsValid, offset 0x49, size 0x1
  __declspec(property(get = __get__viewIsValid, put = __set__viewIsValid)) bool _viewIsValid;

  /// @brief Field _mainCanvas, offset 0x50, size 0x8
  __declspec(property(get = __get__mainCanvas, put = __set__mainCanvas))::UnityEngine::Canvas* _mainCanvas;

  /// @brief Field _parentCanvasGroup, offset 0x58, size 0x8
  __declspec(property(get = __get__parentCanvasGroup, put = __set__parentCanvasGroup))::UnityEngine::CanvasGroup* _parentCanvasGroup;

  /// @brief Field _blockerGO, offset 0x60, size 0x8
  __declspec(property(get = __get__blockerGO, put = __set__blockerGO))::UnityEngine::GameObject* _blockerGO;

  /// @brief Field _test, offset 0x68, size 0x4
  __declspec(property(get = __get__test, put = __set__test)) int32_t _test;

  constexpr ::HMUI::PanelAnimationSO*& __get__presentPanelAnimations();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> const& __get__presentPanelAnimations() const;

  constexpr void __set__presentPanelAnimations(::HMUI::PanelAnimationSO* value);

  constexpr ::HMUI::PanelAnimationSO*& __get__dismissPanelAnimation();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> const& __get__dismissPanelAnimation() const;

  constexpr void __set__dismissPanelAnimation(::HMUI::PanelAnimationSO* value);

  constexpr bool& __get__animateParentCanvas();

  constexpr bool const& __get__animateParentCanvas() const;

  constexpr void __set__animateParentCanvas(bool value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Action*& __get_blockerClickedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_blockerClickedEvent() const;

  constexpr void __set_blockerClickedEvent(::System::Action* value);

  constexpr ::UnityEngine::Transform*& __get__previousParent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__previousParent() const;

  constexpr void __set__previousParent(::UnityEngine::Transform* value);

  constexpr bool& __get__isShown();

  constexpr bool const& __get__isShown() const;

  constexpr void __set__isShown(bool value);

  constexpr bool& __get__viewIsValid();

  constexpr bool const& __get__viewIsValid() const;

  constexpr void __set__viewIsValid(bool value);

  constexpr ::UnityEngine::Canvas*& __get__mainCanvas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& __get__mainCanvas() const;

  constexpr void __set__mainCanvas(::UnityEngine::Canvas* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__parentCanvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__parentCanvasGroup() const;

  constexpr void __set__parentCanvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr ::UnityEngine::GameObject*& __get__blockerGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__blockerGO() const;

  constexpr void __set__blockerGO(::UnityEngine::GameObject* value);

  constexpr int32_t& __get__test();

  constexpr int32_t const& __get__test() const;

  constexpr void __set__test(int32_t value);

  /// @brief Method add_blockerClickedEvent, addr 0x21419f0, size 0x9c, virtual false, abstract: false, final false
  inline void add_blockerClickedEvent(::System::Action* value);

  /// @brief Method remove_blockerClickedEvent, addr 0x2141a8c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_blockerClickedEvent(::System::Action* value);

  /// @brief Method OnDisable, addr 0x2141b28, size 0xc, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x2141d48, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetupView, addr 0x2141dd4, size 0x280, virtual false, abstract: false, final false
  inline void SetupView(::UnityEngine::Transform* screenTransform);

  /// @brief Method Hide, addr 0x2141b34, size 0x214, virtual false, abstract: false, final false
  /// @param finishedCallback: ::System::Action* (default: nullptr)
  inline void Hide(bool animated, ::System::Action* finishedCallback = nullptr);

  /// @brief Method Show, addr 0x214205c, size 0x3e4, virtual false, abstract: false, final false
  /// @param moveToCenter: bool (default: false)
  /// @param finishedCallback: ::System::Action* (default: nullptr)
  inline void Show(bool animated, bool moveToCenter = false, ::System::Action* finishedCallback = nullptr);

  /// @brief Method CreateBlocker, addr 0x2142540, size 0x45c, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* CreateBlocker();

  /// @brief Method HandleBlockerButtonClicked, addr 0x214299c, size 0x1c, virtual false, abstract: false, final false
  inline void HandleBlockerButtonClicked();

  /// @brief Method HandleParentViewControllerDidDeactivate, addr 0x21429b8, size 0xd4, virtual false, abstract: false, final false
  inline void HandleParentViewControllerDidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method GetModalRootTransform, addr 0x2142440, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::Transform* GetModalRootTransform(::UnityEngine::Transform* transform, ByRef<::UnityEngine::Canvas*> canvas, ByRef<::HMUI::ViewController*> viewController);

  static inline ::HMUI::ModalView* New_ctor();

  /// @brief Method .ctor, addr 0x2142a94, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ModalView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModalView(ModalView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModalView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModalView(ModalView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModalView();

public:
  /// @brief Field _presentPanelAnimations, offset: 0x18, size: 0x8, def value: None
  ::HMUI::PanelAnimationSO* ____presentPanelAnimations;

  /// @brief Field _dismissPanelAnimation, offset: 0x20, size: 0x8, def value: None
  ::HMUI::PanelAnimationSO* ____dismissPanelAnimation;

  /// @brief Field _animateParentCanvas, offset: 0x28, size: 0x1, def value: None
  bool ____animateParentCanvas;

  /// @brief Field _container, offset: 0x30, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field blockerClickedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___blockerClickedEvent;

  /// @brief Field _previousParent, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Transform* ____previousParent;

  /// @brief Field _isShown, offset: 0x48, size: 0x1, def value: None
  bool ____isShown;

  /// @brief Field _viewIsValid, offset: 0x49, size: 0x1, def value: None
  bool ____viewIsValid;

  /// @brief Field _mainCanvas, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Canvas* ____mainCanvas;

  /// @brief Field _parentCanvasGroup, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____parentCanvasGroup;

  /// @brief Field _blockerGO, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____blockerGO;

  /// @brief Field _test, offset: 0x68, size: 0x4, def value: None
  int32_t ____test;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ModalView, 0x70>, "Size mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____presentPanelAnimations) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____dismissPanelAnimation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____animateParentCanvas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____container) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ___blockerClickedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____previousParent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____isShown) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____viewIsValid) == 0x49, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____mainCanvas) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____parentCanvasGroup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____blockerGO) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____test) == 0x68, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ModalView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ModalView*, "HMUI", "ModalView");
NEED_NO_BOX(::HMUI::__ModalView____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ModalView____c__DisplayClass17_0*, "HMUI", "ModalView/<>c__DisplayClass17_0");
NEED_NO_BOX(::HMUI::__ModalView____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ModalView____c__DisplayClass21_0*, "HMUI", "ModalView/<>c__DisplayClass21_0");
