#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelAnimation)
namespace UnityEngine {
class AnimationCurve;
}
namespace HMUI {
class __PanelAnimation___AnimationCoroutine_d__1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace HMUI {
class PanelAnimation;
}
namespace HMUI {
class __PanelAnimation___AnimationCoroutine_d__1;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::PanelAnimation);
MARK_REF_PTR_T(::HMUI::__PanelAnimation___AnimationCoroutine_d__1);
// Type: ::<AnimationCoroutine>d__1
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13628))
// CS Name: ::PanelAnimation::<AnimationCoroutine>d__1*
class CORDL_TYPE __PanelAnimation___AnimationCoroutine_d__1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field canvasGroup, offset 0x20, size 0x8
  __declspec(property(get = __get_canvasGroup, put = __set_canvasGroup))::UnityEngine::CanvasGroup* canvasGroup;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __get_duration, put = __set_duration)) float_t duration;

  /// @brief Field parentCanvasGroup, offset 0x30, size 0x8
  __declspec(property(get = __get_parentCanvasGroup, put = __set_parentCanvasGroup))::UnityEngine::CanvasGroup* parentCanvasGroup;

  /// @brief Field parentAlphaAnimationCurve, offset 0x38, size 0x8
  __declspec(property(get = __get_parentAlphaAnimationCurve, put = __set_parentAlphaAnimationCurve))::UnityEngine::AnimationCurve* parentAlphaAnimationCurve;

  /// @brief Field alphaAnimationCurve, offset 0x40, size 0x8
  __declspec(property(get = __get_alphaAnimationCurve, put = __set_alphaAnimationCurve))::UnityEngine::AnimationCurve* alphaAnimationCurve;

  /// @brief Field scaleXAnimationCurve, offset 0x48, size 0x8
  __declspec(property(get = __get_scaleXAnimationCurve, put = __set_scaleXAnimationCurve))::UnityEngine::AnimationCurve* scaleXAnimationCurve;

  /// @brief Field scaleYAnimationCurve, offset 0x50, size 0x8
  __declspec(property(get = __get_scaleYAnimationCurve, put = __set_scaleYAnimationCurve))::UnityEngine::AnimationCurve* scaleYAnimationCurve;

  /// @brief Field <>4__this, offset 0x58, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::HMUI::PanelAnimation* __4__this;

  /// @brief Field finishedCallback, offset 0x60, size 0x8
  __declspec(property(get = __get_finishedCallback, put = __set_finishedCallback))::System::Action* finishedCallback;

  /// @brief Field <canvasTransform>5__2, offset 0x68, size 0x8
  __declspec(property(get = __get__canvasTransform_5__2, put = __set__canvasTransform_5__2))::UnityEngine::Transform* _canvasTransform_5__2;

  /// @brief Field <elapsedTime>5__3, offset 0x70, size 0x4
  __declspec(property(get = __get__elapsedTime_5__3, put = __set__elapsedTime_5__3)) float_t _elapsedTime_5__3;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::UnityEngine::CanvasGroup*& __get_canvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get_canvasGroup() const;

  constexpr void __set_canvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr float_t& __get_duration();

  constexpr float_t const& __get_duration() const;

  constexpr void __set_duration(float_t value);

  constexpr ::UnityEngine::CanvasGroup*& __get_parentCanvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get_parentCanvasGroup() const;

  constexpr void __set_parentCanvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr ::UnityEngine::AnimationCurve*& __get_parentAlphaAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_parentAlphaAnimationCurve() const;

  constexpr void __set_parentAlphaAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get_alphaAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_alphaAnimationCurve() const;

  constexpr void __set_alphaAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get_scaleXAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_scaleXAnimationCurve() const;

  constexpr void __set_scaleXAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get_scaleYAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_scaleYAnimationCurve() const;

  constexpr void __set_scaleYAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::HMUI::PanelAnimation*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimation*> const& __get___4__this() const;

  constexpr void __set___4__this(::HMUI::PanelAnimation* value);

  constexpr ::System::Action*& __get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_finishedCallback() const;

  constexpr void __set_finishedCallback(::System::Action* value);

  constexpr ::UnityEngine::Transform*& __get__canvasTransform_5__2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__canvasTransform_5__2() const;

  constexpr void __set__canvasTransform_5__2(::UnityEngine::Transform* value);

  constexpr float_t& __get__elapsedTime_5__3();

  constexpr float_t const& __get__elapsedTime_5__3() const;

  constexpr void __set__elapsedTime_5__3(float_t value);

  static inline ::HMUI::__PanelAnimation___AnimationCoroutine_d__1* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x1fc2368 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x1fc2398 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x1fc239c size 0x28c virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fc2628 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x1fc2630 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fc2670 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__PanelAnimation___AnimationCoroutine_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PanelAnimation___AnimationCoroutine_d__1(__PanelAnimation___AnimationCoroutine_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PanelAnimation___AnimationCoroutine_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PanelAnimation___AnimationCoroutine_d__1(__PanelAnimation___AnimationCoroutine_d__1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PanelAnimation___AnimationCoroutine_d__1();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field canvasGroup, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ___canvasGroup;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field parentCanvasGroup, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ___parentCanvasGroup;

  /// @brief Field parentAlphaAnimationCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___parentAlphaAnimationCurve;

  /// @brief Field alphaAnimationCurve, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___alphaAnimationCurve;

  /// @brief Field scaleXAnimationCurve, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___scaleXAnimationCurve;

  /// @brief Field scaleYAnimationCurve, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___scaleYAnimationCurve;

  /// @brief Field <>4__this, offset: 0x58, size: 0x8, def value: None
  ::HMUI::PanelAnimation* _____4__this;

  /// @brief Field finishedCallback, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field <canvasTransform>5__2, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Transform* ____canvasTransform_5__2;

  /// @brief Field <elapsedTime>5__3, offset: 0x70, size: 0x4, def value: None
  float_t ____elapsedTime_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__PanelAnimation___AnimationCoroutine_d__1, 0x78>, "Size mismatch!");

static_assert(offsetof(::HMUI::__PanelAnimation___AnimationCoroutine_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__PanelAnimation___AnimationCoroutine_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__PanelAnimation___AnimationCoroutine_d__1, ___canvasGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::__PanelAnimation___AnimationCoroutine_d__1, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::__PanelAnimation___AnimationCoroutine_d__1, ___parentCanvasGroup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::__PanelAnimation___AnimationCoroutine_d__1, ___parentAlphaAnimationCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::__PanelAnimation___AnimationCoroutine_d__1, ___alphaAnimationCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::__PanelAnimation___AnimationCoroutine_d__1, ___scaleXAnimationCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::__PanelAnimation___AnimationCoroutine_d__1, ___scaleYAnimationCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::__PanelAnimation___AnimationCoroutine_d__1, _____4__this) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::__PanelAnimation___AnimationCoroutine_d__1, ___finishedCallback) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::__PanelAnimation___AnimationCoroutine_d__1, ____canvasTransform_5__2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::__PanelAnimation___AnimationCoroutine_d__1, ____elapsedTime_5__3) == 0x70, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::PanelAnimation
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13629))
// CS Name: ::HMUI::PanelAnimation*
class CORDL_TYPE PanelAnimation : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _AnimationCoroutine_d__1 = ::HMUI::__PanelAnimation___AnimationCoroutine_d__1;

  /// @brief Method StartAnimation addr 0x1fc2150 size 0x154 virtual false final false
  inline void StartAnimation(::UnityEngine::CanvasGroup* canvasGroup, ::UnityEngine::CanvasGroup* parentCanvasGroup, float_t duration, ::UnityEngine::AnimationCurve* scaleXAnimationCurve,
                             ::UnityEngine::AnimationCurve* scaleYAnimationCurve, ::UnityEngine::AnimationCurve* alphaAnimationCurve, ::UnityEngine::AnimationCurve* parentAlphaAnimationCurve,
                             ::System::Action* finishedCallback);

  /// @brief Method AnimationCoroutine addr 0x1fc22a4 size 0xc4 virtual false final false
  inline ::System::Collections::IEnumerator* AnimationCoroutine(float_t duration, ::UnityEngine::CanvasGroup* canvasGroup, ::UnityEngine::CanvasGroup* parentCanvasGroup,
                                                                ::UnityEngine::AnimationCurve* scaleXAnimationCurve, ::UnityEngine::AnimationCurve* scaleYAnimationCurve,
                                                                ::UnityEngine::AnimationCurve* alphaAnimationCurve, ::UnityEngine::AnimationCurve* parentAlphaAnimationCurve,
                                                                ::System::Action* finishedCallback);

  static inline ::HMUI::PanelAnimation* New_ctor();

  /// @brief Method .ctor addr 0x1fc2390 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PanelAnimation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelAnimation(PanelAnimation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelAnimation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelAnimation(PanelAnimation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelAnimation();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::PanelAnimation, 0x18>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::PanelAnimation);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::PanelAnimation*, "HMUI", "PanelAnimation");
NEED_NO_BOX(::HMUI::__PanelAnimation___AnimationCoroutine_d__1);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__PanelAnimation___AnimationCoroutine_d__1*, "HMUI", "PanelAnimation/<AnimationCoroutine>d__1");
