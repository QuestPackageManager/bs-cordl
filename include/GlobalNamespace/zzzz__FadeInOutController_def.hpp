#pragma once
// IWYU pragma private; include "GlobalNamespace/FadeInOutController.hpp"
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
CORDL_MODULE_EXPORT(FadeInOutController)
namespace GlobalNamespace {
class FadeInOutController__Fade_d__19;
}
namespace GlobalNamespace {
class FloatSO;
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
// Forward declare root types
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class FadeInOutController__Fade_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FadeInOutController);
MARK_REF_PTR_T(::GlobalNamespace::FadeInOutController__Fade_d__19);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FadeInOutController/<Fade>d__19
class CORDL_TYPE FadeInOutController__Fade_d__19 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::FadeInOutController> __4__this;

  /// @brief Field <elapsedTime>5__2, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__2, put = __cordl_internal_set__elapsedTime_5__2)) float_t _elapsedTime_5__2;

  /// @brief Field curve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_curve, put = __cordl_internal_set_curve)) ::UnityEngine::AnimationCurve* curve;

  /// @brief Field duration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field fadeFinishedCallback, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_fadeFinishedCallback, put = __cordl_internal_set_fadeFinishedCallback)) ::System::Action* fadeFinishedCallback;

  /// @brief Field fromValue, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_fromValue, put = __cordl_internal_set_fromValue)) float_t fromValue;

  /// @brief Field startDelay, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_startDelay, put = __cordl_internal_set_startDelay)) float_t startDelay;

  /// @brief Field toValue, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_toValue, put = __cordl_internal_set_toValue)) float_t toValue;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39c2a94, size 0x1a0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::FadeInOutController__Fade_d__19* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39c2c34, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39c2c3c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39c2c74, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39c2a90, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__2() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__2();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_curve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_curve();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::System::Action* const& __cordl_internal_get_fadeFinishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_fadeFinishedCallback();

  constexpr float_t const& __cordl_internal_get_fromValue() const;

  constexpr float_t& __cordl_internal_get_fromValue();

  constexpr float_t const& __cordl_internal_get_startDelay() const;

  constexpr float_t& __cordl_internal_get_startDelay();

  constexpr float_t const& __cordl_internal_get_toValue() const;

  constexpr float_t& __cordl_internal_get_toValue();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FadeInOutController> value);

  constexpr void __cordl_internal_set__elapsedTime_5__2(float_t value);

  constexpr void __cordl_internal_set_curve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_fadeFinishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_fromValue(float_t value);

  constexpr void __cordl_internal_set_startDelay(float_t value);

  constexpr void __cordl_internal_set_toValue(float_t value);

  /// @brief Method .ctor, addr 0x39c2a4c, size 0x28, virtual false, abstract: false, final false
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
  constexpr FadeInOutController__Fade_d__19();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FadeInOutController__Fade_d__19", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FadeInOutController__Fade_d__19(FadeInOutController__Fade_d__19&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FadeInOutController__Fade_d__19", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FadeInOutController__Fade_d__19(FadeInOutController__Fade_d__19 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16427 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FadeInOutController> _____4__this;

  /// @brief Field startDelay, offset: 0x28, size: 0x4, def value: None
  float_t ___startDelay;

  /// @brief Field fromValue, offset: 0x2c, size: 0x4, def value: None
  float_t ___fromValue;

  /// @brief Field toValue, offset: 0x30, size: 0x4, def value: None
  float_t ___toValue;

  /// @brief Field curve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___curve;

  /// @brief Field duration, offset: 0x40, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field fadeFinishedCallback, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___fadeFinishedCallback;

  /// @brief Field <elapsedTime>5__2, offset: 0x50, size: 0x4, def value: None
  float_t ____elapsedTime_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FadeInOutController__Fade_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController__Fade_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController__Fade_d__19, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController__Fade_d__19, ___startDelay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController__Fade_d__19, ___fromValue) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController__Fade_d__19, ___toValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController__Fade_d__19, ___curve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController__Fade_d__19, ___duration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController__Fade_d__19, ___fadeFinishedCallback) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController__Fade_d__19, ____elapsedTime_5__2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FadeInOutController__Fade_d__19, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FadeInOutController
class CORDL_TYPE FadeInOutController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Fade_d__19 = ::GlobalNamespace::FadeInOutController__Fade_d__19;

  /// @brief Field _defaultFadeInDuration, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultFadeInDuration, put = __cordl_internal_set__defaultFadeInDuration)) float_t _defaultFadeInDuration;

  /// @brief Field _defaultFadeOutDuration, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultFadeOutDuration, put = __cordl_internal_set__defaultFadeOutDuration)) float_t _defaultFadeOutDuration;

  /// @brief Field _easeValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__easeValue, put = __cordl_internal_set__easeValue)) ::UnityW<::GlobalNamespace::FloatSO> _easeValue;

  /// @brief Field _fadeInCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInCurve, put = __cordl_internal_set__fadeInCurve)) ::UnityEngine::AnimationCurve* _fadeInCurve;

  /// @brief Field _fadeInStartDelay, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeInStartDelay, put = __cordl_internal_set__fadeInStartDelay)) float_t _fadeInStartDelay;

  /// @brief Field _fadeOutCurve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutCurve, put = __cordl_internal_set__fadeOutCurve)) ::UnityEngine::AnimationCurve* _fadeOutCurve;

  /// @brief Field <inTransition>k__BackingField, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__inTransition_k__BackingField, put = __cordl_internal_set__inTransition_k__BackingField)) bool _inTransition_k__BackingField;

  __declspec(property(get = get_inTransition, put = set_inTransition)) bool inTransition;

  /// @brief Method Fade, addr 0x39c29a8, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Fade(float_t fromValue, float_t toValue, float_t duration, float_t startDelay, ::UnityEngine::AnimationCurve* curve,
                                                  ::System::Action* fadeFinishedCallback);

  /// @brief Method FadeIn, addr 0x39c28b4, size 0xc, virtual false, abstract: false, final false
  inline void FadeIn();

  /// @brief Method FadeIn, addr 0x39c2988, size 0x8, virtual false, abstract: false, final false
  inline void FadeIn(float_t duration);

  /// @brief Method FadeIn, addr 0x39c28c0, size 0xbc, virtual false, abstract: false, final false
  inline void FadeIn(float_t duration, ::System::Action* fadeInFinishedCallback);

  /// @brief Method FadeIn, addr 0x39c2998, size 0x8, virtual false, abstract: false, final false
  inline void FadeIn(::System::Action* fadeInCallback);

  /// @brief Method FadeOut, addr 0x39c297c, size 0xc, virtual false, abstract: false, final false
  inline void FadeOut();

  /// @brief Method FadeOut, addr 0x39c2990, size 0x8, virtual false, abstract: false, final false
  inline void FadeOut(float_t duration);

  /// @brief Method FadeOut, addr 0x39c27f4, size 0xc0, virtual false, abstract: false, final false
  inline void FadeOut(float_t duration, ::System::Action* fadeOutFinishedCallback);

  /// @brief Method FadeOut, addr 0x39c29a0, size 0x8, virtual false, abstract: false, final false
  inline void FadeOut(::System::Action* fadeOutCallback);

  /// @brief Method FadeOutInstant, addr 0x39c27e8, size 0xc, virtual false, abstract: false, final false
  inline void FadeOutInstant();

  static inline ::GlobalNamespace::FadeInOutController* New_ctor();

  constexpr float_t const& __cordl_internal_get__defaultFadeInDuration() const;

  constexpr float_t& __cordl_internal_get__defaultFadeInDuration();

  constexpr float_t const& __cordl_internal_get__defaultFadeOutDuration() const;

  constexpr float_t& __cordl_internal_get__defaultFadeOutDuration();

  constexpr ::UnityW<::GlobalNamespace::FloatSO> const& __cordl_internal_get__easeValue() const;

  constexpr ::UnityW<::GlobalNamespace::FloatSO>& __cordl_internal_get__easeValue();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__fadeInCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__fadeInCurve();

  constexpr float_t const& __cordl_internal_get__fadeInStartDelay() const;

  constexpr float_t& __cordl_internal_get__fadeInStartDelay();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__fadeOutCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__fadeOutCurve();

  constexpr bool const& __cordl_internal_get__inTransition_k__BackingField() const;

  constexpr bool& __cordl_internal_get__inTransition_k__BackingField();

  constexpr void __cordl_internal_set__defaultFadeInDuration(float_t value);

  constexpr void __cordl_internal_set__defaultFadeOutDuration(float_t value);

  constexpr void __cordl_internal_set__easeValue(::UnityW<::GlobalNamespace::FloatSO> value);

  constexpr void __cordl_internal_set__fadeInCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__fadeInStartDelay(float_t value);

  constexpr void __cordl_internal_set__fadeOutCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__inTransition_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x39c2a74, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_inTransition, addr 0x39c27d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_inTransition();

  /// @brief Method set_inTransition, addr 0x39c27dc, size 0xc, virtual false, abstract: false, final false
  inline void set_inTransition(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FadeInOutController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FadeInOutController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FadeInOutController(FadeInOutController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FadeInOutController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FadeInOutController(FadeInOutController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16428 };

  /// @brief Field _easeValue, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatSO> ____easeValue;

  /// @brief Field _fadeInCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____fadeInCurve;

  /// @brief Field _fadeOutCurve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____fadeOutCurve;

  /// @brief Field _fadeInStartDelay, offset: 0x38, size: 0x4, def value: None
  float_t ____fadeInStartDelay;

  /// @brief Field _defaultFadeOutDuration, offset: 0x3c, size: 0x4, def value: None
  float_t ____defaultFadeOutDuration;

  /// @brief Field _defaultFadeInDuration, offset: 0x40, size: 0x4, def value: None
  float_t ____defaultFadeInDuration;

  /// @brief Field <inTransition>k__BackingField, offset: 0x44, size: 0x1, def value: None
  bool ____inTransition_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FadeInOutController, ____easeValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController, ____fadeInCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController, ____fadeOutCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController, ____fadeInStartDelay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController, ____defaultFadeOutDuration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController, ____defaultFadeInDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FadeInOutController, ____inTransition_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FadeInOutController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FadeInOutController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeInOutController*, "", "FadeInOutController");
NEED_NO_BOX(::GlobalNamespace::FadeInOutController__Fade_d__19);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeInOutController__Fade_d__19*, "", "FadeInOutController/<Fade>d__19");
