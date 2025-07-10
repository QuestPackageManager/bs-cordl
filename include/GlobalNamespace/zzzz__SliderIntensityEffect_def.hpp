#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderIntensityEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderIntensityEffect)
namespace GlobalNamespace {
struct ArcVisibilityType;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class SliderIntensityEffect_FadeElement;
}
namespace GlobalNamespace {
class SliderIntensityEffect_InitData;
}
namespace GlobalNamespace {
class SliderIntensityEffect_IntensityCalculationDelegate;
}
namespace GlobalNamespace {
class SliderIntensityEffect__ProcessEffectCoroutine_d__27;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderIntensityEffect;
}
namespace GlobalNamespace {
class SliderIntensityEffect_FadeElement;
}
namespace GlobalNamespace {
class SliderIntensityEffect_InitData;
}
namespace GlobalNamespace {
class SliderIntensityEffect_IntensityCalculationDelegate;
}
namespace GlobalNamespace {
class SliderIntensityEffect__ProcessEffectCoroutine_d__27;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderIntensityEffect);
MARK_REF_PTR_T(::GlobalNamespace::SliderIntensityEffect_FadeElement);
MARK_REF_PTR_T(::GlobalNamespace::SliderIntensityEffect_InitData);
MARK_REF_PTR_T(::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate);
MARK_REF_PTR_T(::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderIntensityEffect/InitData
class CORDL_TYPE SliderIntensityEffect_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field hapticFeedback, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_hapticFeedback, put = __cordl_internal_set_hapticFeedback)) float_t hapticFeedback;

  /// @brief Field sliderColorIntensity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_sliderColorIntensity, put = __cordl_internal_set_sliderColorIntensity)) float_t sliderColorIntensity;

  static inline ::GlobalNamespace::SliderIntensityEffect_InitData* New_ctor(::GlobalNamespace::ArcVisibilityType arcVisibilityType, bool hapticFeedbackEnabled);

  constexpr float_t const& __cordl_internal_get_hapticFeedback() const;

  constexpr float_t& __cordl_internal_get_hapticFeedback();

  constexpr float_t const& __cordl_internal_get_sliderColorIntensity() const;

  constexpr float_t& __cordl_internal_get_sliderColorIntensity();

  constexpr void __cordl_internal_set_hapticFeedback(float_t value);

  constexpr void __cordl_internal_set_sliderColorIntensity(float_t value);

  /// @brief Method .ctor, addr 0x3b7a520, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ArcVisibilityType arcVisibilityType, bool hapticFeedbackEnabled);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderIntensityEffect_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderIntensityEffect_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderIntensityEffect_InitData(SliderIntensityEffect_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderIntensityEffect_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderIntensityEffect_InitData(SliderIntensityEffect_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4169 };

  /// @brief Field sliderColorIntensity, offset: 0x10, size: 0x4, def value: None
  float_t ___sliderColorIntensity;

  /// @brief Field hapticFeedback, offset: 0x14, size: 0x4, def value: None
  float_t ___hapticFeedback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect_InitData, ___sliderColorIntensity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect_InitData, ___hapticFeedback) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderIntensityEffect_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EaseType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderIntensityEffect/FadeElement
class CORDL_TYPE SliderIntensityEffect_FadeElement : public ::System::Object {
public:
  // Declarations
  /// @brief Field duration, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Field easeType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType)) ::GlobalNamespace::EaseType easeType;

  /// @brief Field endIntensity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_endIntensity, put = __cordl_internal_set_endIntensity)) float_t endIntensity;

  /// @brief Field startCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_startCallback, put = __cordl_internal_set_startCallback)) ::System::Action* startCallback;

  /// @brief Field startIntensity, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_startIntensity, put = __cordl_internal_set_startIntensity)) float_t startIntensity;

  static inline ::GlobalNamespace::SliderIntensityEffect_FadeElement* New_ctor(::GlobalNamespace::EaseType easeType, float_t startIntensity, float_t endIntensity, ::System::Action* startCallback);

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr float_t const& __cordl_internal_get_endIntensity() const;

  constexpr float_t& __cordl_internal_get_endIntensity();

  constexpr ::System::Action* const& __cordl_internal_get_startCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_startCallback();

  constexpr float_t const& __cordl_internal_get_startIntensity() const;

  constexpr float_t& __cordl_internal_get_startIntensity();

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_endIntensity(float_t value);

  constexpr void __cordl_internal_set_startCallback(::System::Action* value);

  constexpr void __cordl_internal_set_startIntensity(float_t value);

  /// @brief Method .ctor, addr 0x3b7a3f4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::EaseType easeType, float_t startIntensity, float_t endIntensity, ::System::Action* startCallback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderIntensityEffect_FadeElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderIntensityEffect_FadeElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderIntensityEffect_FadeElement(SliderIntensityEffect_FadeElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderIntensityEffect_FadeElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderIntensityEffect_FadeElement(SliderIntensityEffect_FadeElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4170 };

  /// @brief Field duration, offset: 0x10, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field startIntensity, offset: 0x14, size: 0x4, def value: None
  float_t ___startIntensity;

  /// @brief Field endIntensity, offset: 0x18, size: 0x4, def value: None
  float_t ___endIntensity;

  /// @brief Field easeType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  /// @brief Field startCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___startCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect_FadeElement, ___duration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect_FadeElement, ___startIntensity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect_FadeElement, ___endIntensity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect_FadeElement, ___easeType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect_FadeElement, ___startCallback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderIntensityEffect_FadeElement, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderIntensityEffect/IntensityCalculationDelegate
class CORDL_TYPE SliderIntensityEffect_IntensityCalculationDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3b7a638, size 0x9c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(float_t timeSinceLastSection, float_t timeSinceHeadNoteJump, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3b7a6d4, size 0x28, virtual true, abstract: false, final false
  inline float_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3b7a624, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke(float_t timeSinceLastSection, float_t timeSinceHeadNoteJump);

  static inline ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3b7a598, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderIntensityEffect_IntensityCalculationDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderIntensityEffect_IntensityCalculationDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderIntensityEffect_IntensityCalculationDelegate(SliderIntensityEffect_IntensityCalculationDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderIntensityEffect_IntensityCalculationDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderIntensityEffect_IntensityCalculationDelegate(SliderIntensityEffect_IntensityCalculationDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4171 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderIntensityEffect/<ProcessEffectCoroutine>d__27
class CORDL_TYPE SliderIntensityEffect__ProcessEffectCoroutine_d__27 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SliderIntensityEffect> __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* __7__wrap1;

  /// @brief Field <fadeElement>5__3, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeElement_5__3, put = __cordl_internal_set__fadeElement_5__3)) ::GlobalNamespace::SliderIntensityEffect_FadeElement* _fadeElement_5__3;

  /// @brief Field <startTime>5__4, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__startTime_5__4, put = __cordl_internal_set__startTime_5__4)) float_t _startTime_5__4;

  /// @brief Field fadeElements, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_fadeElements,
                      put = __cordl_internal_set_fadeElements)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* fadeElements;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3b7a718, size 0x388, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3b7ab50, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3b7ab58, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3b7ab90, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3b7a6fc, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*& __cordl_internal_get___7__wrap1();

  constexpr ::GlobalNamespace::SliderIntensityEffect_FadeElement* const& __cordl_internal_get__fadeElement_5__3() const;

  constexpr ::GlobalNamespace::SliderIntensityEffect_FadeElement*& __cordl_internal_get__fadeElement_5__3();

  constexpr float_t const& __cordl_internal_get__startTime_5__4() const;

  constexpr float_t& __cordl_internal_get__startTime_5__4();

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* const& __cordl_internal_get_fadeElements() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*& __cordl_internal_get_fadeElements();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SliderIntensityEffect> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* value);

  constexpr void __cordl_internal_set__fadeElement_5__3(::GlobalNamespace::SliderIntensityEffect_FadeElement* value);

  constexpr void __cordl_internal_set__startTime_5__4(float_t value);

  constexpr void __cordl_internal_set_fadeElements(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* value);

  /// @brief Method <>m__Finally1, addr 0x3b7aaa0, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3b7a4a4, size 0x28, virtual false, abstract: false, final false
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
  constexpr SliderIntensityEffect__ProcessEffectCoroutine_d__27();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderIntensityEffect__ProcessEffectCoroutine_d__27", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderIntensityEffect__ProcessEffectCoroutine_d__27(SliderIntensityEffect__ProcessEffectCoroutine_d__27&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderIntensityEffect__ProcessEffectCoroutine_d__27", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderIntensityEffect__ProcessEffectCoroutine_d__27(SliderIntensityEffect__ProcessEffectCoroutine_d__27 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4172 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field fadeElements, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* ___fadeElements;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderIntensityEffect> _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* _____7__wrap1;

  /// @brief Field <fadeElement>5__3, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SliderIntensityEffect_FadeElement* ____fadeElement_5__3;

  /// @brief Field <startTime>5__4, offset: 0x40, size: 0x4, def value: None
  float_t ____startTime_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27, ___fadeElements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27, ____fadeElement_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27, ____startTime_5__4) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderIntensityEffect
class CORDL_TYPE SliderIntensityEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using FadeElement = ::GlobalNamespace::SliderIntensityEffect_FadeElement;

  using InitData = ::GlobalNamespace::SliderIntensityEffect_InitData;

  using IntensityCalculationDelegate = ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate;

  using _ProcessEffectCoroutine_d__27 = ::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27;

  /// @brief Field _audioTimeSyncController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _coreIntensity, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__coreIntensity, put = __cordl_internal_set__coreIntensity)) float_t _coreIntensity;

  /// @brief Field _dipEffectFadeElements, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__dipEffectFadeElements,
                      put =
                          __cordl_internal_set__dipEffectFadeElements)) ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*>
      _dipEffectFadeElements;

  /// @brief Field _effectIntensity, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__effectIntensity, put = __cordl_internal_set__effectIntensity)) float_t _effectIntensity;

  /// @brief Field _fadeInEffectFadeElements, offset 0x70, size 0x8
  __declspec(property(
      get = __cordl_internal_get__fadeInEffectFadeElements,
      put = __cordl_internal_set__fadeInEffectFadeElements)) ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*>
      _fadeInEffectFadeElements;

  /// @brief Field _fadeOutDuration, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeOutDuration, put = __cordl_internal_set__fadeOutDuration)) float_t _fadeOutDuration;

  /// @brief Field _headIntensity, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__headIntensity, put = __cordl_internal_set__headIntensity)) float_t _headIntensity;

  /// @brief Field _initData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::SliderIntensityEffect_InitData* _initData;

  /// @brief Field _intensityCalculationDelegate, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__intensityCalculationDelegate,
                      put = __cordl_internal_set__intensityCalculationDelegate)) ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate* _intensityCalculationDelegate;

  /// @brief Field _longSliderHeadIntensity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__longSliderHeadIntensity, put = __cordl_internal_set__longSliderHeadIntensity)) float_t _longSliderHeadIntensity;

  /// @brief Field _shortSliderHeadIntensity, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__shortSliderHeadIntensity, put = __cordl_internal_set__shortSliderHeadIntensity)) float_t _shortSliderHeadIntensity;

  /// @brief Field _sliderDuration, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__sliderDuration, put = __cordl_internal_set__sliderDuration)) float_t _sliderDuration;

  /// @brief Field _stayOffDuration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__stayOffDuration, put = __cordl_internal_set__stayOffDuration)) float_t _stayOffDuration;

  /// @brief Field _tailIntensity, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__tailIntensity, put = __cordl_internal_set__tailIntensity)) float_t _tailIntensity;

  __declspec(property(get = get_colorIntensity)) float_t colorIntensity;

  /// @brief Field fadeInDidStartEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_fadeInDidStartEvent, put = __cordl_internal_set_fadeInDidStartEvent)) ::System::Action* fadeInDidStartEvent;

  __declspec(property(get = get_intensity)) float_t intensity;

  /// @brief Method Awake, addr 0x3b7a1a0, size 0x254, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Init, addr 0x3b76ce0, size 0xbc, virtual false, abstract: false, final false
  inline void Init(float_t sliderDuration, float_t initialHalfJumpDuration, bool startVisible);

  /// @brief Method ManualUpdate, addr 0x3b78820, size 0x38, virtual false, abstract: false, final false
  inline void ManualUpdate(float_t timeSinceHeadNoteJump, float_t halfJumpDuration);

  static inline ::GlobalNamespace::SliderIntensityEffect* New_ctor();

  /// @brief Method ProcessEffectCoroutine, addr 0x3b7a438, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ProcessEffectCoroutine(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SliderIntensityEffect_FadeElement*>* fadeElements);

  /// @brief Method StartIntensityDipEffect, addr 0x3b794d0, size 0x30, virtual false, abstract: false, final false
  inline void StartIntensityDipEffect();

  /// @brief Method StartIntensityFadeInEffect, addr 0x3b79284, size 0x30, virtual false, abstract: false, final false
  inline void StartIntensityFadeInEffect();

  /// @brief Method <Awake>b__24_0, addr 0x3b7a4e8, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__24_0();

  /// @brief Method <Awake>b__24_1, addr 0x3b7a504, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__24_1();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr float_t const& __cordl_internal_get__coreIntensity() const;

  constexpr float_t& __cordl_internal_get__coreIntensity();

  constexpr ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*> const& __cordl_internal_get__dipEffectFadeElements() const;

  constexpr ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*>& __cordl_internal_get__dipEffectFadeElements();

  constexpr float_t const& __cordl_internal_get__effectIntensity() const;

  constexpr float_t& __cordl_internal_get__effectIntensity();

  constexpr ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*> const&
  __cordl_internal_get__fadeInEffectFadeElements() const;

  constexpr ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*>& __cordl_internal_get__fadeInEffectFadeElements();

  constexpr float_t const& __cordl_internal_get__fadeOutDuration() const;

  constexpr float_t& __cordl_internal_get__fadeOutDuration();

  constexpr float_t const& __cordl_internal_get__headIntensity() const;

  constexpr float_t& __cordl_internal_get__headIntensity();

  constexpr ::GlobalNamespace::SliderIntensityEffect_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::SliderIntensityEffect_InitData*& __cordl_internal_get__initData();

  constexpr ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate* const& __cordl_internal_get__intensityCalculationDelegate() const;

  constexpr ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*& __cordl_internal_get__intensityCalculationDelegate();

  constexpr float_t const& __cordl_internal_get__longSliderHeadIntensity() const;

  constexpr float_t& __cordl_internal_get__longSliderHeadIntensity();

  constexpr float_t const& __cordl_internal_get__shortSliderHeadIntensity() const;

  constexpr float_t& __cordl_internal_get__shortSliderHeadIntensity();

  constexpr float_t const& __cordl_internal_get__sliderDuration() const;

  constexpr float_t& __cordl_internal_get__sliderDuration();

  constexpr float_t const& __cordl_internal_get__stayOffDuration() const;

  constexpr float_t& __cordl_internal_get__stayOffDuration();

  constexpr float_t const& __cordl_internal_get__tailIntensity() const;

  constexpr float_t& __cordl_internal_get__tailIntensity();

  constexpr ::System::Action* const& __cordl_internal_get_fadeInDidStartEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_fadeInDidStartEvent();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__coreIntensity(float_t value);

  constexpr void __cordl_internal_set__dipEffectFadeElements(::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*> value);

  constexpr void __cordl_internal_set__effectIntensity(float_t value);

  constexpr void __cordl_internal_set__fadeInEffectFadeElements(::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*> value);

  constexpr void __cordl_internal_set__fadeOutDuration(float_t value);

  constexpr void __cordl_internal_set__headIntensity(float_t value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::SliderIntensityEffect_InitData* value);

  constexpr void __cordl_internal_set__intensityCalculationDelegate(::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate* value);

  constexpr void __cordl_internal_set__longSliderHeadIntensity(float_t value);

  constexpr void __cordl_internal_set__shortSliderHeadIntensity(float_t value);

  constexpr void __cordl_internal_set__sliderDuration(float_t value);

  constexpr void __cordl_internal_set__stayOffDuration(float_t value);

  constexpr void __cordl_internal_set__tailIntensity(float_t value);

  constexpr void __cordl_internal_set_fadeInDidStartEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3b7a4cc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_fadeInDidStartEvent, addr 0x3b77c14, size 0x9c, virtual false, abstract: false, final false
  inline void add_fadeInDidStartEvent(::System::Action* value);

  /// @brief Method get_colorIntensity, addr 0x3b7a178, size 0x28, virtual false, abstract: false, final false
  inline float_t get_colorIntensity();

  /// @brief Method get_intensity, addr 0x3b766d8, size 0x28, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method remove_fadeInDidStartEvent, addr 0x3b78114, size 0x9c, virtual false, abstract: false, final false
  inline void remove_fadeInDidStartEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderIntensityEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderIntensityEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderIntensityEffect(SliderIntensityEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderIntensityEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderIntensityEffect(SliderIntensityEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4173 };

  /// @brief Field _longSliderHeadIntensity, offset: 0x20, size: 0x4, def value: None
  float_t ____longSliderHeadIntensity;

  /// @brief Field _shortSliderHeadIntensity, offset: 0x24, size: 0x4, def value: None
  float_t ____shortSliderHeadIntensity;

  /// @brief Field _tailIntensity, offset: 0x28, size: 0x4, def value: None
  float_t ____tailIntensity;

  /// @brief Field _fadeOutDuration, offset: 0x2c, size: 0x4, def value: None
  float_t ____fadeOutDuration;

  /// @brief Field _stayOffDuration, offset: 0x30, size: 0x4, def value: None
  float_t ____stayOffDuration;

  /// @brief Field _audioTimeSyncController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _initData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SliderIntensityEffect_InitData* ____initData;

  /// @brief Field fadeInDidStartEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___fadeInDidStartEvent;

  /// @brief Field _coreIntensity, offset: 0x50, size: 0x4, def value: None
  float_t ____coreIntensity;

  /// @brief Field _effectIntensity, offset: 0x54, size: 0x4, def value: None
  float_t ____effectIntensity;

  /// @brief Field _sliderDuration, offset: 0x58, size: 0x4, def value: None
  float_t ____sliderDuration;

  /// @brief Field _headIntensity, offset: 0x5c, size: 0x4, def value: None
  float_t ____headIntensity;

  /// @brief Field _intensityCalculationDelegate, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate* ____intensityCalculationDelegate;

  /// @brief Field _dipEffectFadeElements, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*> ____dipEffectFadeElements;

  /// @brief Field _fadeInEffectFadeElements, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SliderIntensityEffect_FadeElement*, ::Array<::GlobalNamespace::SliderIntensityEffect_FadeElement*>*> ____fadeInEffectFadeElements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____longSliderHeadIntensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____shortSliderHeadIntensity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____tailIntensity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____fadeOutDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____stayOffDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____audioTimeSyncController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____initData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ___fadeInDidStartEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____coreIntensity) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____effectIntensity) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____sliderDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____headIntensity) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____intensityCalculationDelegate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____dipEffectFadeElements) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____fadeInEffectFadeElements) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderIntensityEffect, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderIntensityEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderIntensityEffect*, "", "SliderIntensityEffect");
NEED_NO_BOX(::GlobalNamespace::SliderIntensityEffect_FadeElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderIntensityEffect_FadeElement*, "", "SliderIntensityEffect/FadeElement");
NEED_NO_BOX(::GlobalNamespace::SliderIntensityEffect_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderIntensityEffect_InitData*, "", "SliderIntensityEffect/InitData");
NEED_NO_BOX(::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderIntensityEffect_IntensityCalculationDelegate*, "", "SliderIntensityEffect/IntensityCalculationDelegate");
NEED_NO_BOX(::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderIntensityEffect__ProcessEffectCoroutine_d__27*, "", "SliderIntensityEffect/<ProcessEffectCoroutine>d__27");
