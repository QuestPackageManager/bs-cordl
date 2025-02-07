#pragma once
// IWYU pragma private; include "HMUI/PanelAnimation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelAnimation)
namespace HMUI {
class PanelAnimation__AnimationCoroutine_d__1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HMUI {
class PanelAnimation;
}
namespace HMUI {
class PanelAnimation__AnimationCoroutine_d__1;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::PanelAnimation);
MARK_REF_PTR_T(::HMUI::PanelAnimation__AnimationCoroutine_d__1);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.PanelAnimation/<AnimationCoroutine>d__1
class CORDL_TYPE PanelAnimation__AnimationCoroutine_d__1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::PanelAnimation> __4__this;

  /// @brief Field <canvasTransform>5__2, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasTransform_5__2, put = __cordl_internal_set__canvasTransform_5__2)) ::UnityW<::UnityEngine::Transform> _canvasTransform_5__2;

  /// @brief Field <elapsedTime>5__3, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__3, put = __cordl_internal_set__elapsedTime_5__3)) float_t _elapsedTime_5__3;

  /// @brief Field alphaAnimationCurve, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_alphaAnimationCurve, put = __cordl_internal_set_alphaAnimationCurve)) ::UnityEngine::AnimationCurve* alphaAnimationCurve;

  /// @brief Field canvasGroup, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_canvasGroup, put = __cordl_internal_set_canvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> canvasGroup;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field finishedCallback, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field parentAlphaAnimationCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_parentAlphaAnimationCurve, put = __cordl_internal_set_parentAlphaAnimationCurve)) ::UnityEngine::AnimationCurve* parentAlphaAnimationCurve;

  /// @brief Field parentCanvasGroup, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_parentCanvasGroup, put = __cordl_internal_set_parentCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> parentCanvasGroup;

  /// @brief Field scaleXAnimationCurve, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleXAnimationCurve, put = __cordl_internal_set_scaleXAnimationCurve)) ::UnityEngine::AnimationCurve* scaleXAnimationCurve;

  /// @brief Field scaleYAnimationCurve, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleYAnimationCurve, put = __cordl_internal_set_scaleYAnimationCurve)) ::UnityEngine::AnimationCurve* scaleYAnimationCurve;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39ee90c, size 0x294, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::HMUI::PanelAnimation__AnimationCoroutine_d__1* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39eeba0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39eeba8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39eebe0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39ee908, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::HMUI::PanelAnimation> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::PanelAnimation>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__canvasTransform_5__2() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__canvasTransform_5__2();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__3() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__3();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_alphaAnimationCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_alphaAnimationCurve();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_canvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_canvasGroup();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_parentAlphaAnimationCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_parentAlphaAnimationCurve();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_parentCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_parentCanvasGroup();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_scaleXAnimationCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_scaleXAnimationCurve();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_scaleYAnimationCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_scaleYAnimationCurve();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::PanelAnimation> value);

  constexpr void __cordl_internal_set__canvasTransform_5__2(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__elapsedTime_5__3(float_t value);

  constexpr void __cordl_internal_set_alphaAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_parentAlphaAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_parentCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set_scaleXAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_scaleYAnimationCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method .ctor, addr 0x39ee8d8, size 0x28, virtual false, abstract: false, final false
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
  constexpr PanelAnimation__AnimationCoroutine_d__1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelAnimation__AnimationCoroutine_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelAnimation__AnimationCoroutine_d__1(PanelAnimation__AnimationCoroutine_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelAnimation__AnimationCoroutine_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelAnimation__AnimationCoroutine_d__1(PanelAnimation__AnimationCoroutine_d__1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16014 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field canvasGroup, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ___canvasGroup;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field parentCanvasGroup, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ___parentCanvasGroup;

  /// @brief Field parentAlphaAnimationCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___parentAlphaAnimationCurve;

  /// @brief Field alphaAnimationCurve, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___alphaAnimationCurve;

  /// @brief Field scaleXAnimationCurve, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___scaleXAnimationCurve;

  /// @brief Field scaleYAnimationCurve, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___scaleYAnimationCurve;

  /// @brief Field <>4__this, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::HMUI::PanelAnimation> _____4__this;

  /// @brief Field finishedCallback, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field <canvasTransform>5__2, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____canvasTransform_5__2;

  /// @brief Field <elapsedTime>5__3, offset: 0x70, size: 0x4, def value: None
  float_t ____elapsedTime_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::PanelAnimation__AnimationCoroutine_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimation__AnimationCoroutine_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimation__AnimationCoroutine_d__1, ___canvasGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimation__AnimationCoroutine_d__1, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimation__AnimationCoroutine_d__1, ___parentCanvasGroup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimation__AnimationCoroutine_d__1, ___parentAlphaAnimationCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimation__AnimationCoroutine_d__1, ___alphaAnimationCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimation__AnimationCoroutine_d__1, ___scaleXAnimationCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimation__AnimationCoroutine_d__1, ___scaleYAnimationCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimation__AnimationCoroutine_d__1, _____4__this) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimation__AnimationCoroutine_d__1, ___finishedCallback) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimation__AnimationCoroutine_d__1, ____canvasTransform_5__2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimation__AnimationCoroutine_d__1, ____elapsedTime_5__3) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::PanelAnimation__AnimationCoroutine_d__1, 0x78>, "Size mismatch!");

} // namespace HMUI
// Dependencies UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.PanelAnimation
class CORDL_TYPE PanelAnimation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _AnimationCoroutine_d__1 = ::HMUI::PanelAnimation__AnimationCoroutine_d__1;

  /// @brief Method AnimationCoroutine, addr 0x39ee81c, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* AnimationCoroutine(float_t duration, ::UnityEngine::CanvasGroup* canvasGroup, ::UnityEngine::CanvasGroup* parentCanvasGroup,
                                                                ::UnityEngine::AnimationCurve* scaleXAnimationCurve, ::UnityEngine::AnimationCurve* scaleYAnimationCurve,
                                                                ::UnityEngine::AnimationCurve* alphaAnimationCurve, ::UnityEngine::AnimationCurve* parentAlphaAnimationCurve,
                                                                ::System::Action* finishedCallback);

  static inline ::HMUI::PanelAnimation* New_ctor();

  /// @brief Method StartAnimation, addr 0x39ee6c8, size 0x154, virtual false, abstract: false, final false
  inline void StartAnimation(::UnityEngine::CanvasGroup* canvasGroup, ::UnityEngine::CanvasGroup* parentCanvasGroup, float_t duration, ::UnityEngine::AnimationCurve* scaleXAnimationCurve,
                             ::UnityEngine::AnimationCurve* scaleYAnimationCurve, ::UnityEngine::AnimationCurve* alphaAnimationCurve, ::UnityEngine::AnimationCurve* parentAlphaAnimationCurve,
                             ::System::Action* finishedCallback);

  /// @brief Method .ctor, addr 0x39ee900, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelAnimation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelAnimation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelAnimation(PanelAnimation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelAnimation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelAnimation(PanelAnimation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16015 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::PanelAnimation, 0x20>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::PanelAnimation);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::PanelAnimation*, "HMUI", "PanelAnimation");
NEED_NO_BOX(::HMUI::PanelAnimation__AnimationCoroutine_d__1);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::PanelAnimation__AnimationCoroutine_d__1*, "HMUI", "PanelAnimation/<AnimationCoroutine>d__1");
