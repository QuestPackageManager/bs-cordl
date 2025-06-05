#pragma once
// IWYU pragma private; include "HMUI/ModalView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ModalViewBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModalView)
namespace HMUI {
class ModalView___c__DisplayClass19_0;
}
namespace HMUI {
class ModalView___c__DisplayClass23_0;
}
namespace HMUI {
class PanelAnimationSO;
}
namespace HMUI {
class ViewControllerBase;
}
namespace System {
class Action;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace HMUI {
class ModalView;
}
namespace HMUI {
class ModalView___c__DisplayClass19_0;
}
namespace HMUI {
class ModalView___c__DisplayClass23_0;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ModalView);
MARK_REF_PTR_T(::HMUI::ModalView___c__DisplayClass19_0);
MARK_REF_PTR_T(::HMUI::ModalView___c__DisplayClass23_0);
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ModalView/<>c__DisplayClass19_0
class CORDL_TYPE ModalView___c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::ModalView> __4__this;

  /// @brief Field finishedCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  static inline ::HMUI::ModalView___c__DisplayClass19_0* New_ctor();

  /// @brief Method <Hide>b__0, addr 0x22943fc, size 0x7c, virtual false, abstract: false, final false
  inline void _Hide_b__0();

  constexpr ::UnityW<::HMUI::ModalView> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::ModalView>& __cordl_internal_get___4__this();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::ModalView> value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  /// @brief Method .ctor, addr 0x22939dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModalView___c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ModalView___c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModalView___c__DisplayClass19_0(ModalView___c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModalView___c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModalView___c__DisplayClass19_0(ModalView___c__DisplayClass19_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16847 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::HMUI::ModalView> _____4__this;

  /// @brief Field finishedCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ModalView___c__DisplayClass19_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView___c__DisplayClass19_0, ___finishedCallback) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ModalView___c__DisplayClass19_0, 0x20>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ModalView/<>c__DisplayClass23_0
class CORDL_TYPE ModalView___c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::ModalView> __4__this;

  /// @brief Field prevAnimateParentCanvas, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_prevAnimateParentCanvas, put = __cordl_internal_set_prevAnimateParentCanvas)) bool prevAnimateParentCanvas;

  static inline ::HMUI::ModalView___c__DisplayClass23_0* New_ctor();

  /// @brief Method <HandleParentViewControllerDidDeactivate>b__0, addr 0x2294478, size 0x20, virtual false, abstract: false, final false
  inline void _HandleParentViewControllerDidDeactivate_b__0();

  constexpr ::UnityW<::HMUI::ModalView> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::ModalView>& __cordl_internal_get___4__this();

  constexpr bool const& __cordl_internal_get_prevAnimateParentCanvas() const;

  constexpr bool& __cordl_internal_get_prevAnimateParentCanvas();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::ModalView> value);

  constexpr void __cordl_internal_set_prevAnimateParentCanvas(bool value);

  /// @brief Method .ctor, addr 0x22943e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModalView___c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ModalView___c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModalView___c__DisplayClass23_0(ModalView___c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModalView___c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModalView___c__DisplayClass23_0(ModalView___c__DisplayClass23_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16848 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::HMUI::ModalView> _____4__this;

  /// @brief Field prevAnimateParentCanvas, offset: 0x18, size: 0x1, def value: None
  bool ___prevAnimateParentCanvas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ModalView___c__DisplayClass23_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView___c__DisplayClass23_0, ___prevAnimateParentCanvas) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ModalView___c__DisplayClass23_0, 0x20>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.ModalViewBase
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ModalView
class CORDL_TYPE ModalView : public ::HMUI::ModalViewBase {
public:
  // Declarations
  using __c__DisplayClass19_0 = ::HMUI::ModalView___c__DisplayClass19_0;

  using __c__DisplayClass23_0 = ::HMUI::ModalView___c__DisplayClass23_0;

  /// @brief Field _animateParentCanvas, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__animateParentCanvas, put = __cordl_internal_set__animateParentCanvas)) bool _animateParentCanvas;

  /// @brief Field _blockerGO, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__blockerGO, put = __cordl_internal_set__blockerGO)) ::UnityW<::UnityEngine::GameObject> _blockerGO;

  /// @brief Field _container, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _dismissPanelAnimation, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__dismissPanelAnimation, put = __cordl_internal_set__dismissPanelAnimation)) ::UnityW<::HMUI::PanelAnimationSO> _dismissPanelAnimation;

  /// @brief Field _isShown, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__isShown, put = __cordl_internal_set__isShown)) bool _isShown;

  /// @brief Field _mainCanvas, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__mainCanvas, put = __cordl_internal_set__mainCanvas)) ::UnityW<::UnityEngine::Canvas> _mainCanvas;

  /// @brief Field _parentCanvasGroup, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__parentCanvasGroup, put = __cordl_internal_set__parentCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> _parentCanvasGroup;

  /// @brief Field _presentPanelAnimations, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__presentPanelAnimations, put = __cordl_internal_set__presentPanelAnimations)) ::UnityW<::HMUI::PanelAnimationSO> _presentPanelAnimations;

  /// @brief Field _previousParent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__previousParent, put = __cordl_internal_set__previousParent)) ::UnityW<::UnityEngine::Transform> _previousParent;

  /// @brief Field _test, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__test, put = __cordl_internal_set__test)) int32_t _test;

  /// @brief Field _viewIsValid, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__viewIsValid, put = __cordl_internal_set__viewIsValid)) bool _viewIsValid;

  /// @brief Field blockerClickedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_blockerClickedEvent, put = __cordl_internal_set_blockerClickedEvent)) ::System::Action* blockerClickedEvent;

  __declspec(property(get = get_isShown)) bool isShown;

  /// @brief Method CreateBlocker, addr 0x2293e98, size 0x458, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CreateBlocker();

  /// @brief Method GetModalRootTransform, addr 0x2293d98, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetModalRootTransform(::UnityEngine::Transform* transform, ::ByRef<::UnityEngine::Canvas*> canvas,
                                                                         ::ByRef<::HMUI::ViewControllerBase*> viewController);

  /// @brief Method HandleBlockerButtonClicked, addr 0x22942f0, size 0x1c, virtual false, abstract: false, final false
  inline void HandleBlockerButtonClicked();

  /// @brief Method HandleParentViewControllerDidDeactivate, addr 0x229430c, size 0xd8, virtual false, abstract: false, final false
  inline void HandleParentViewControllerDidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method Hide, addr 0x22937d0, size 0x20c, virtual true, abstract: false, final false
  inline void Hide(bool animated, ::System::Action* finishedCallback);

  static inline ::HMUI::ModalView* New_ctor();

  /// @brief Method OnDestroy, addr 0x22934c4, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x22934b0, size 0x14, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method SetupView, addr 0x2293550, size 0x280, virtual false, abstract: false, final false
  inline void SetupView(::UnityEngine::Transform* screenTransform);

  /// @brief Method Show, addr 0x22939e4, size 0x3b4, virtual true, abstract: false, final false
  inline void Show(bool animated, bool moveToCenter, ::System::Action* finishedCallback);

  constexpr bool const& __cordl_internal_get__animateParentCanvas() const;

  constexpr bool& __cordl_internal_get__animateParentCanvas();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__blockerGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__blockerGO();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::UnityW<::HMUI::PanelAnimationSO> const& __cordl_internal_get__dismissPanelAnimation() const;

  constexpr ::UnityW<::HMUI::PanelAnimationSO>& __cordl_internal_get__dismissPanelAnimation();

  constexpr bool const& __cordl_internal_get__isShown() const;

  constexpr bool& __cordl_internal_get__isShown();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__mainCanvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__mainCanvas();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__parentCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__parentCanvasGroup();

  constexpr ::UnityW<::HMUI::PanelAnimationSO> const& __cordl_internal_get__presentPanelAnimations() const;

  constexpr ::UnityW<::HMUI::PanelAnimationSO>& __cordl_internal_get__presentPanelAnimations();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__previousParent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__previousParent();

  constexpr int32_t const& __cordl_internal_get__test() const;

  constexpr int32_t& __cordl_internal_get__test();

  constexpr bool const& __cordl_internal_get__viewIsValid() const;

  constexpr bool& __cordl_internal_get__viewIsValid();

  constexpr ::System::Action* const& __cordl_internal_get_blockerClickedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_blockerClickedEvent();

  constexpr void __cordl_internal_set__animateParentCanvas(bool value);

  constexpr void __cordl_internal_set__blockerGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__dismissPanelAnimation(::UnityW<::HMUI::PanelAnimationSO> value);

  constexpr void __cordl_internal_set__isShown(bool value);

  constexpr void __cordl_internal_set__mainCanvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set__parentCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__presentPanelAnimations(::UnityW<::HMUI::PanelAnimationSO> value);

  constexpr void __cordl_internal_set__previousParent(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__test(int32_t value);

  constexpr void __cordl_internal_set__viewIsValid(bool value);

  constexpr void __cordl_internal_set_blockerClickedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x22943ec, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_blockerClickedEvent, addr 0x2293370, size 0x9c, virtual true, abstract: false, final false
  inline void add_blockerClickedEvent(::System::Action* value);

  /// @brief Method get_isShown, addr 0x22934a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isShown();

  /// @brief Method remove_blockerClickedEvent, addr 0x229340c, size 0x9c, virtual true, abstract: false, final false
  inline void remove_blockerClickedEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModalView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ModalView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModalView(ModalView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModalView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModalView(ModalView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16849 };

  /// @brief Field _presentPanelAnimations, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::PanelAnimationSO> ____presentPanelAnimations;

  /// @brief Field _dismissPanelAnimation, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::PanelAnimationSO> ____dismissPanelAnimation;

  /// @brief Field _animateParentCanvas, offset: 0x30, size: 0x1, def value: None
  bool ____animateParentCanvas;

  /// @brief Field _container, offset: 0x38, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field blockerClickedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___blockerClickedEvent;

  /// @brief Field _previousParent, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____previousParent;

  /// @brief Field _isShown, offset: 0x50, size: 0x1, def value: None
  bool ____isShown;

  /// @brief Field _viewIsValid, offset: 0x51, size: 0x1, def value: None
  bool ____viewIsValid;

  /// @brief Field _mainCanvas, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ____mainCanvas;

  /// @brief Field _parentCanvasGroup, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____parentCanvasGroup;

  /// @brief Field _blockerGO, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____blockerGO;

  /// @brief Field _test, offset: 0x70, size: 0x4, def value: None
  int32_t ____test;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ModalView, ____presentPanelAnimations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____dismissPanelAnimation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____animateParentCanvas) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____container) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ___blockerClickedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____previousParent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____isShown) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____viewIsValid) == 0x51, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____mainCanvas) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____parentCanvasGroup) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____blockerGO) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::ModalView, ____test) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ModalView, 0x78>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ModalView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ModalView*, "HMUI", "ModalView");
NEED_NO_BOX(::HMUI::ModalView___c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ModalView___c__DisplayClass19_0*, "HMUI", "ModalView/<>c__DisplayClass19_0");
NEED_NO_BOX(::HMUI::ModalView___c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ModalView___c__DisplayClass23_0*, "HMUI", "ModalView/<>c__DisplayClass23_0");
