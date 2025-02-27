#pragma once
// IWYU pragma private; include "HMUI/ViewControllerTransitionHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ViewControllerTransitionHelpers)
namespace HMUI {
class ViewControllerTransitionHelpers__AnimationCoroutine_d__8;
}
namespace HMUI {
class ViewControllerTransitionHelpers__DoDismissTransition_d__4;
}
namespace HMUI {
class ViewControllerTransitionHelpers__DoHorizontalTransition_d__5;
}
namespace HMUI {
class ViewControllerTransitionHelpers__DoPresentTransition_d__3;
}
namespace HMUI {
class ViewControllerTransitionHelpers__DoVerticalTransition_d__6;
}
namespace HMUI {
class ViewControllerTransitionHelpers___c__DisplayClass5_0;
}
namespace HMUI {
class ViewControllerTransitionHelpers___c__DisplayClass6_0;
}
namespace HMUI {
struct ViewController_AnimationDirection;
}
namespace HMUI {
class ViewController;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace HMUI {
class ViewControllerTransitionHelpers;
}
namespace HMUI {
class ViewControllerTransitionHelpers__AnimationCoroutine_d__8;
}
namespace HMUI {
class ViewControllerTransitionHelpers__DoDismissTransition_d__4;
}
namespace HMUI {
class ViewControllerTransitionHelpers__DoHorizontalTransition_d__5;
}
namespace HMUI {
class ViewControllerTransitionHelpers__DoPresentTransition_d__3;
}
namespace HMUI {
class ViewControllerTransitionHelpers__DoVerticalTransition_d__6;
}
namespace HMUI {
class ViewControllerTransitionHelpers___c__DisplayClass5_0;
}
namespace HMUI {
class ViewControllerTransitionHelpers___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ViewControllerTransitionHelpers);
MARK_REF_PTR_T(::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8);
MARK_REF_PTR_T(::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4);
MARK_REF_PTR_T(::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5);
MARK_REF_PTR_T(::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3);
MARK_REF_PTR_T(::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6);
MARK_REF_PTR_T(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0);
MARK_REF_PTR_T(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0);
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewControllerTransitionHelpers/<>c__DisplayClass5_0
class CORDL_TYPE ViewControllerTransitionHelpers___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseCanvasGroupAlpha, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_baseCanvasGroupAlpha, put = __cordl_internal_set_baseCanvasGroupAlpha)) float_t baseCanvasGroupAlpha;

  /// @brief Field moveOffset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_moveOffset, put = __cordl_internal_set_moveOffset)) float_t moveOffset;

  /// @brief Field toDismissViewController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_toDismissViewController, put = __cordl_internal_set_toDismissViewController)) ::UnityW<::HMUI::ViewController> toDismissViewController;

  /// @brief Field toPresentViewController, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_toPresentViewController, put = __cordl_internal_set_toPresentViewController)) ::UnityW<::HMUI::ViewController> toPresentViewController;

  static inline ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0* New_ctor();

  /// @brief Method <DoHorizontalTransition>b__0, addr 0x2291118, size 0xd8, virtual false, abstract: false, final false
  inline void _DoHorizontalTransition_b__0(float_t t);

  constexpr float_t const& __cordl_internal_get_baseCanvasGroupAlpha() const;

  constexpr float_t& __cordl_internal_get_baseCanvasGroupAlpha();

  constexpr float_t const& __cordl_internal_get_moveOffset() const;

  constexpr float_t& __cordl_internal_get_moveOffset();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toDismissViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toDismissViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toPresentViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toPresentViewController();

  constexpr void __cordl_internal_set_baseCanvasGroupAlpha(float_t value);

  constexpr void __cordl_internal_set_moveOffset(float_t value);

  constexpr void __cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x2291110, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewControllerTransitionHelpers___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewControllerTransitionHelpers___c__DisplayClass5_0(ViewControllerTransitionHelpers___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewControllerTransitionHelpers___c__DisplayClass5_0(ViewControllerTransitionHelpers___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16828 };

  /// @brief Field toPresentViewController, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toPresentViewController;

  /// @brief Field moveOffset, offset: 0x18, size: 0x4, def value: None
  float_t ___moveOffset;

  /// @brief Field toDismissViewController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toDismissViewController;

  /// @brief Field baseCanvasGroupAlpha, offset: 0x28, size: 0x4, def value: None
  float_t ___baseCanvasGroupAlpha;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0, ___toPresentViewController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0, ___moveOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0, ___toDismissViewController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0, ___baseCanvasGroupAlpha) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0, 0x30>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewControllerTransitionHelpers/<>c__DisplayClass6_0
class CORDL_TYPE ViewControllerTransitionHelpers___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field baseCanvasGroupAlpha, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_baseCanvasGroupAlpha, put = __cordl_internal_set_baseCanvasGroupAlpha)) float_t baseCanvasGroupAlpha;

  /// @brief Field moveOffset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_moveOffset, put = __cordl_internal_set_moveOffset)) float_t moveOffset;

  /// @brief Field toDismissViewController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_toDismissViewController, put = __cordl_internal_set_toDismissViewController)) ::UnityW<::HMUI::ViewController> toDismissViewController;

  /// @brief Field toPresentViewController, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_toPresentViewController, put = __cordl_internal_set_toPresentViewController)) ::UnityW<::HMUI::ViewController> toPresentViewController;

  static inline ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0* New_ctor();

  /// @brief Method <DoVerticalTransition>b__0, addr 0x22911f8, size 0xe4, virtual false, abstract: false, final false
  inline void _DoVerticalTransition_b__0(float_t t);

  constexpr float_t const& __cordl_internal_get_baseCanvasGroupAlpha() const;

  constexpr float_t& __cordl_internal_get_baseCanvasGroupAlpha();

  constexpr float_t const& __cordl_internal_get_moveOffset() const;

  constexpr float_t& __cordl_internal_get_moveOffset();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toDismissViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toDismissViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toPresentViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toPresentViewController();

  constexpr void __cordl_internal_set_baseCanvasGroupAlpha(float_t value);

  constexpr void __cordl_internal_set_moveOffset(float_t value);

  constexpr void __cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x22911f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewControllerTransitionHelpers___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewControllerTransitionHelpers___c__DisplayClass6_0(ViewControllerTransitionHelpers___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewControllerTransitionHelpers___c__DisplayClass6_0(ViewControllerTransitionHelpers___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16829 };

  /// @brief Field toPresentViewController, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toPresentViewController;

  /// @brief Field moveOffset, offset: 0x18, size: 0x4, def value: None
  float_t ___moveOffset;

  /// @brief Field baseCanvasGroupAlpha, offset: 0x1c, size: 0x4, def value: None
  float_t ___baseCanvasGroupAlpha;

  /// @brief Field toDismissViewController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toDismissViewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0, ___toPresentViewController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0, ___moveOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0, ___baseCanvasGroupAlpha) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0, ___toDismissViewController) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0, 0x28>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewControllerTransitionHelpers/<AnimationCoroutine>d__8
class CORDL_TYPE ViewControllerTransitionHelpers__AnimationCoroutine_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <elapsedTime>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__2, put = __cordl_internal_set__elapsedTime_5__2)) float_t _elapsedTime_5__2;

  /// @brief Field transitionAnimation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionAnimation, put = __cordl_internal_set_transitionAnimation)) ::System::Action_1<float_t>* transitionAnimation;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x22912e0, size 0xe0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22913c0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22913c8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2291400, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22912dc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__2() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__2();

  constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_transitionAnimation() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_transitionAnimation();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set__elapsedTime_5__2(float_t value);

  constexpr void __cordl_internal_set_transitionAnimation(::System::Action_1<float_t>* value);

  /// @brief Method .ctor, addr 0x22910e0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewControllerTransitionHelpers__AnimationCoroutine_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers__AnimationCoroutine_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewControllerTransitionHelpers__AnimationCoroutine_d__8(ViewControllerTransitionHelpers__AnimationCoroutine_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers__AnimationCoroutine_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewControllerTransitionHelpers__AnimationCoroutine_d__8(ViewControllerTransitionHelpers__AnimationCoroutine_d__8 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16830 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field transitionAnimation, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___transitionAnimation;

  /// @brief Field <elapsedTime>5__2, offset: 0x28, size: 0x4, def value: None
  float_t ____elapsedTime_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8, ___transitionAnimation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8, ____elapsedTime_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8, 0x30>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.ViewController::AnimationDirection, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewControllerTransitionHelpers/<DoDismissTransition>d__4
class CORDL_TYPE ViewControllerTransitionHelpers__DoDismissTransition_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field animationDirection, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_animationDirection, put = __cordl_internal_set_animationDirection)) ::HMUI::ViewController_AnimationDirection animationDirection;

  /// @brief Field moveOffsetMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_moveOffsetMultiplier, put = __cordl_internal_set_moveOffsetMultiplier)) float_t moveOffsetMultiplier;

  /// @brief Field toDismissViewController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_toDismissViewController, put = __cordl_internal_set_toDismissViewController)) ::UnityW<::HMUI::ViewController> toDismissViewController;

  /// @brief Field toPresentViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_toPresentViewController, put = __cordl_internal_set_toPresentViewController)) ::UnityW<::HMUI::ViewController> toPresentViewController;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x229140c, size 0x94, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22914a0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22914a8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22914e0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2291408, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::HMUI::ViewController_AnimationDirection const& __cordl_internal_get_animationDirection() const;

  constexpr ::HMUI::ViewController_AnimationDirection& __cordl_internal_get_animationDirection();

  constexpr float_t const& __cordl_internal_get_moveOffsetMultiplier() const;

  constexpr float_t& __cordl_internal_get_moveOffsetMultiplier();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toDismissViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toDismissViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toPresentViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toPresentViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set_animationDirection(::HMUI::ViewController_AnimationDirection value);

  constexpr void __cordl_internal_set_moveOffsetMultiplier(float_t value);

  constexpr void __cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x2290f10, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewControllerTransitionHelpers__DoDismissTransition_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers__DoDismissTransition_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewControllerTransitionHelpers__DoDismissTransition_d__4(ViewControllerTransitionHelpers__DoDismissTransition_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers__DoDismissTransition_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewControllerTransitionHelpers__DoDismissTransition_d__4(ViewControllerTransitionHelpers__DoDismissTransition_d__4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16831 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field animationDirection, offset: 0x20, size: 0x4, def value: None
  ::HMUI::ViewController_AnimationDirection ___animationDirection;

  /// @brief Field toPresentViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toPresentViewController;

  /// @brief Field toDismissViewController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toDismissViewController;

  /// @brief Field moveOffsetMultiplier, offset: 0x38, size: 0x4, def value: None
  float_t ___moveOffsetMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4, ___animationDirection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4, ___toPresentViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4, ___toDismissViewController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4, ___moveOffsetMultiplier) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4, 0x40>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewControllerTransitionHelpers/<DoHorizontalTransition>d__5
class CORDL_TYPE ViewControllerTransitionHelpers__DoHorizontalTransition_d__5 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>8__1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___8__1, put = __cordl_internal_set___8__1)) ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0* __8__1;

  /// @brief Field moveOffsetMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_moveOffsetMultiplier, put = __cordl_internal_set_moveOffsetMultiplier)) float_t moveOffsetMultiplier;

  /// @brief Field toDismissViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_toDismissViewController, put = __cordl_internal_set_toDismissViewController)) ::UnityW<::HMUI::ViewController> toDismissViewController;

  /// @brief Field toPresentViewController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_toPresentViewController, put = __cordl_internal_set_toPresentViewController)) ::UnityW<::HMUI::ViewController> toPresentViewController;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x22914ec, size 0x154, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2291640, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2291648, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2291680, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22914e8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0* const& __cordl_internal_get___8__1() const;

  constexpr ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0*& __cordl_internal_get___8__1();

  constexpr float_t const& __cordl_internal_get_moveOffsetMultiplier() const;

  constexpr float_t& __cordl_internal_get_moveOffsetMultiplier();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toDismissViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toDismissViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toPresentViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toPresentViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___8__1(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0* value);

  constexpr void __cordl_internal_set_moveOffsetMultiplier(float_t value);

  constexpr void __cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x2290fb4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewControllerTransitionHelpers__DoHorizontalTransition_d__5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers__DoHorizontalTransition_d__5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewControllerTransitionHelpers__DoHorizontalTransition_d__5(ViewControllerTransitionHelpers__DoHorizontalTransition_d__5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers__DoHorizontalTransition_d__5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewControllerTransitionHelpers__DoHorizontalTransition_d__5(ViewControllerTransitionHelpers__DoHorizontalTransition_d__5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16832 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field toPresentViewController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toPresentViewController;

  /// @brief Field toDismissViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toDismissViewController;

  /// @brief Field moveOffsetMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ___moveOffsetMultiplier;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0* _____8__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5, ___toPresentViewController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5, ___toDismissViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5, ___moveOffsetMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5, _____8__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5, 0x40>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.ViewController::AnimationDirection, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewControllerTransitionHelpers/<DoPresentTransition>d__3
class CORDL_TYPE ViewControllerTransitionHelpers__DoPresentTransition_d__3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field animationDirection, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_animationDirection, put = __cordl_internal_set_animationDirection)) ::HMUI::ViewController_AnimationDirection animationDirection;

  /// @brief Field moveOffsetMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_moveOffsetMultiplier, put = __cordl_internal_set_moveOffsetMultiplier)) float_t moveOffsetMultiplier;

  /// @brief Field toDismissViewController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_toDismissViewController, put = __cordl_internal_set_toDismissViewController)) ::UnityW<::HMUI::ViewController> toDismissViewController;

  /// @brief Field toPresentViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_toPresentViewController, put = __cordl_internal_set_toPresentViewController)) ::UnityW<::HMUI::ViewController> toPresentViewController;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x229168c, size 0x94, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2291720, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2291728, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2291760, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2291688, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::HMUI::ViewController_AnimationDirection const& __cordl_internal_get_animationDirection() const;

  constexpr ::HMUI::ViewController_AnimationDirection& __cordl_internal_get_animationDirection();

  constexpr float_t const& __cordl_internal_get_moveOffsetMultiplier() const;

  constexpr float_t& __cordl_internal_get_moveOffsetMultiplier();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toDismissViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toDismissViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toPresentViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toPresentViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set_animationDirection(::HMUI::ViewController_AnimationDirection value);

  constexpr void __cordl_internal_set_moveOffsetMultiplier(float_t value);

  constexpr void __cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x2290ee8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewControllerTransitionHelpers__DoPresentTransition_d__3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers__DoPresentTransition_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewControllerTransitionHelpers__DoPresentTransition_d__3(ViewControllerTransitionHelpers__DoPresentTransition_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers__DoPresentTransition_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewControllerTransitionHelpers__DoPresentTransition_d__3(ViewControllerTransitionHelpers__DoPresentTransition_d__3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16833 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field animationDirection, offset: 0x20, size: 0x4, def value: None
  ::HMUI::ViewController_AnimationDirection ___animationDirection;

  /// @brief Field toPresentViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toPresentViewController;

  /// @brief Field toDismissViewController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toDismissViewController;

  /// @brief Field moveOffsetMultiplier, offset: 0x38, size: 0x4, def value: None
  float_t ___moveOffsetMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3, ___animationDirection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3, ___toPresentViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3, ___toDismissViewController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3, ___moveOffsetMultiplier) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3, 0x40>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewControllerTransitionHelpers/<DoVerticalTransition>d__6
class CORDL_TYPE ViewControllerTransitionHelpers__DoVerticalTransition_d__6 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>8__1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___8__1, put = __cordl_internal_set___8__1)) ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0* __8__1;

  /// @brief Field moveOffsetMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_moveOffsetMultiplier, put = __cordl_internal_set_moveOffsetMultiplier)) float_t moveOffsetMultiplier;

  /// @brief Field toDismissViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_toDismissViewController, put = __cordl_internal_set_toDismissViewController)) ::UnityW<::HMUI::ViewController> toDismissViewController;

  /// @brief Field toPresentViewController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_toPresentViewController, put = __cordl_internal_set_toPresentViewController)) ::UnityW<::HMUI::ViewController> toPresentViewController;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x229176c, size 0x158, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22918c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22918cc, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2291904, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2291768, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0* const& __cordl_internal_get___8__1() const;

  constexpr ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0*& __cordl_internal_get___8__1();

  constexpr float_t const& __cordl_internal_get_moveOffsetMultiplier() const;

  constexpr float_t& __cordl_internal_get_moveOffsetMultiplier();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toDismissViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toDismissViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_toPresentViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_toPresentViewController();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___8__1(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0* value);

  constexpr void __cordl_internal_set_moveOffsetMultiplier(float_t value);

  constexpr void __cordl_internal_set_toDismissViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_toPresentViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x2291058, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewControllerTransitionHelpers__DoVerticalTransition_d__6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers__DoVerticalTransition_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewControllerTransitionHelpers__DoVerticalTransition_d__6(ViewControllerTransitionHelpers__DoVerticalTransition_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers__DoVerticalTransition_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewControllerTransitionHelpers__DoVerticalTransition_d__6(ViewControllerTransitionHelpers__DoVerticalTransition_d__6 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16834 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field toPresentViewController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toPresentViewController;

  /// @brief Field toDismissViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___toDismissViewController;

  /// @brief Field moveOffsetMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ___moveOffsetMultiplier;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0* _____8__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6, ___toPresentViewController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6, ___toDismissViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6, ___moveOffsetMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6, _____8__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6, 0x40>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ViewControllerTransitionHelpers
class CORDL_TYPE ViewControllerTransitionHelpers : public ::System::Object {
public:
  // Declarations
  using _AnimationCoroutine_d__8 = ::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8;

  using _DoDismissTransition_d__4 = ::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4;

  using _DoHorizontalTransition_d__5 = ::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5;

  using _DoPresentTransition_d__3 = ::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3;

  using _DoVerticalTransition_d__6 = ::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6;

  using __c__DisplayClass5_0 = ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0;

  using __c__DisplayClass6_0 = ::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0;

  /// @brief Method AnimationCoroutine, addr 0x2291080, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* AnimationCoroutine(::System::Action_1<float_t>* transitionAnimation);

  /// @brief Method DoDismissTransition, addr 0x22907a0, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* DoDismissTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController,
                                                                        ::HMUI::ViewController_AnimationDirection animationDirection, float_t moveOffsetMultiplier);

  /// @brief Method DoHorizontalTransition, addr 0x2290f38, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* DoHorizontalTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController,
                                                                           float_t moveOffsetMultiplier);

  /// @brief Method DoPresentTransition, addr 0x2290b7c, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* DoPresentTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController,
                                                                        ::HMUI::ViewController_AnimationDirection animationDirection, float_t moveOffsetMultiplier);

  /// @brief Method DoVerticalTransition, addr 0x2290fdc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Collections::IEnumerator* DoVerticalTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController,
                                                                         float_t moveOffsetMultiplier);

  /// @brief Method ImmediateTransition, addr 0x2290824, size 0xfc, virtual false, abstract: false, final false
  static inline void ImmediateTransition(::HMUI::ViewController* toPresentViewController, ::HMUI::ViewController* toDismissViewController);

  static inline ::HMUI::ViewControllerTransitionHelpers* New_ctor();

  /// @brief Method .ctor, addr 0x2291108, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViewControllerTransitionHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViewControllerTransitionHelpers(ViewControllerTransitionHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViewControllerTransitionHelpers(ViewControllerTransitionHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16835 };

  /// @brief Field kHorizontalTransitionMoveOffset offset 0xffffffff size 0x4
  static constexpr float_t kHorizontalTransitionMoveOffset{ static_cast<float_t>(2.0f) };

  /// @brief Field kTransitionDuration offset 0xffffffff size 0x4
  static constexpr float_t kTransitionDuration{ static_cast<float_t>(0.4f) };

  /// @brief Field kVerticalTransitionMoveOffset offset 0xffffffff size 0x4
  static constexpr float_t kVerticalTransitionMoveOffset{ static_cast<float_t>(0.5f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerTransitionHelpers, 0x10>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers*, "HMUI", "ViewControllerTransitionHelpers");
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers__AnimationCoroutine_d__8*, "HMUI", "ViewControllerTransitionHelpers/<AnimationCoroutine>d__8");
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers__DoDismissTransition_d__4*, "HMUI", "ViewControllerTransitionHelpers/<DoDismissTransition>d__4");
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers__DoHorizontalTransition_d__5*, "HMUI", "ViewControllerTransitionHelpers/<DoHorizontalTransition>d__5");
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers__DoPresentTransition_d__3*, "HMUI", "ViewControllerTransitionHelpers/<DoPresentTransition>d__3");
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers__DoVerticalTransition_d__6*, "HMUI", "ViewControllerTransitionHelpers/<DoVerticalTransition>d__6");
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass5_0*, "HMUI", "ViewControllerTransitionHelpers/<>c__DisplayClass5_0");
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers___c__DisplayClass6_0*, "HMUI", "ViewControllerTransitionHelpers/<>c__DisplayClass6_0");
