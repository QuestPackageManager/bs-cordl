#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderIntensityEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class __SliderIntensityEffect__FadeElement;
}
namespace GlobalNamespace {
class __SliderIntensityEffect__InitData;
}
namespace GlobalNamespace {
class __SliderIntensityEffect__IntensityCalculationDelegate;
}
namespace GlobalNamespace {
class __SliderIntensityEffect___ProcessEffectCoroutine_d__32;
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
class IDisposable;
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
class __SliderIntensityEffect__FadeElement;
}
namespace GlobalNamespace {
class __SliderIntensityEffect__InitData;
}
namespace GlobalNamespace {
class __SliderIntensityEffect__IntensityCalculationDelegate;
}
namespace GlobalNamespace {
class __SliderIntensityEffect___ProcessEffectCoroutine_d__32;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderIntensityEffect);
MARK_REF_PTR_T(::GlobalNamespace::__SliderIntensityEffect__FadeElement);
MARK_REF_PTR_T(::GlobalNamespace::__SliderIntensityEffect__InitData);
MARK_REF_PTR_T(::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderIntensityEffect::InitData*
class CORDL_TYPE __SliderIntensityEffect__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field hapticFeedback, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_hapticFeedback, put = __cordl_internal_set_hapticFeedback)) float_t hapticFeedback;

  /// @brief Field sliderColorIntensity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_sliderColorIntensity, put = __cordl_internal_set_sliderColorIntensity)) float_t sliderColorIntensity;

  static inline ::GlobalNamespace::__SliderIntensityEffect__InitData* New_ctor(::GlobalNamespace::ArcVisibilityType arcVisibilityType, bool hapticFeedbackEnabled);

  constexpr float_t const& __cordl_internal_get_hapticFeedback() const;

  constexpr float_t& __cordl_internal_get_hapticFeedback();

  constexpr float_t const& __cordl_internal_get_sliderColorIntensity() const;

  constexpr float_t& __cordl_internal_get_sliderColorIntensity();

  constexpr void __cordl_internal_set_hapticFeedback(float_t value);

  constexpr void __cordl_internal_set_sliderColorIntensity(float_t value);

  /// @brief Method .ctor, addr 0x3a9a9c0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ArcVisibilityType arcVisibilityType, bool hapticFeedbackEnabled);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderIntensityEffect__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SliderIntensityEffect__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderIntensityEffect__InitData(__SliderIntensityEffect__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderIntensityEffect__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderIntensityEffect__InitData(__SliderIntensityEffect__InitData const&) = delete;

  /// @brief Field sliderColorIntensity, offset: 0x10, size: 0x4, def value: None
  float_t ___sliderColorIntensity;

  /// @brief Field hapticFeedback, offset: 0x14, size: 0x4, def value: None
  float_t ___hapticFeedback;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4154 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderIntensityEffect__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect__InitData, ___sliderColorIntensity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect__InitData, ___hapticFeedback) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FadeElement
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderIntensityEffect::FadeElement*
class CORDL_TYPE __SliderIntensityEffect__FadeElement : public ::System::Object {
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

  static inline ::GlobalNamespace::__SliderIntensityEffect__FadeElement* New_ctor(::GlobalNamespace::EaseType easeType, float_t startIntensity, float_t endIntensity, ::System::Action* startCallback);

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr float_t const& __cordl_internal_get_endIntensity() const;

  constexpr float_t& __cordl_internal_get_endIntensity();

  constexpr ::System::Action*& __cordl_internal_get_startCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_startCallback() const;

  constexpr float_t const& __cordl_internal_get_startIntensity() const;

  constexpr float_t& __cordl_internal_get_startIntensity();

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_endIntensity(float_t value);

  constexpr void __cordl_internal_set_startCallback(::System::Action* value);

  constexpr void __cordl_internal_set_startIntensity(float_t value);

  /// @brief Method .ctor, addr 0x3a9a864, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::EaseType easeType, float_t startIntensity, float_t endIntensity, ::System::Action* startCallback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderIntensityEffect__FadeElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SliderIntensityEffect__FadeElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderIntensityEffect__FadeElement(__SliderIntensityEffect__FadeElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderIntensityEffect__FadeElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderIntensityEffect__FadeElement(__SliderIntensityEffect__FadeElement const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4155 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderIntensityEffect__FadeElement, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect__FadeElement, ___duration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect__FadeElement, ___startIntensity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect__FadeElement, ___endIntensity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect__FadeElement, ___easeType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect__FadeElement, ___startCallback) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::IntensityCalculationDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderIntensityEffect::IntensityCalculationDelegate*
class CORDL_TYPE __SliderIntensityEffect__IntensityCalculationDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3a9aad8, size 0x9c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(float_t timeSinceLastSection, float_t timeSinceHeadNoteJump, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3a9ab74, size 0x28, virtual true, abstract: false, final false
  inline float_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3a9aac4, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke(float_t timeSinceLastSection, float_t timeSinceHeadNoteJump);

  static inline ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3a9aa38, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderIntensityEffect__IntensityCalculationDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SliderIntensityEffect__IntensityCalculationDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderIntensityEffect__IntensityCalculationDelegate(__SliderIntensityEffect__IntensityCalculationDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderIntensityEffect__IntensityCalculationDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderIntensityEffect__IntensityCalculationDelegate(__SliderIntensityEffect__IntensityCalculationDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4156 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<ProcessEffectCoroutine>d__32
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderIntensityEffect::<ProcessEffectCoroutine>d__32*
class CORDL_TYPE __SliderIntensityEffect___ProcessEffectCoroutine_d__32 : public ::System::Object {
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
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>* __7__wrap1;

  /// @brief Field <fadeElement>5__3, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeElement_5__3, put = __cordl_internal_set__fadeElement_5__3)) ::GlobalNamespace::__SliderIntensityEffect__FadeElement* _fadeElement_5__3;

  /// @brief Field <startTime>5__4, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__startTime_5__4, put = __cordl_internal_set__startTime_5__4)) float_t _startTime_5__4;

  /// @brief Field fadeElements, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_fadeElements,
                      put = __cordl_internal_set_fadeElements)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>* fadeElements;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3a9abb8, size 0x388, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3a9aff0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3a9aff8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3a9b030, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3a9ab9c, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> const&
  __cordl_internal_get___7__wrap1() const;

  constexpr ::GlobalNamespace::__SliderIntensityEffect__FadeElement*& __cordl_internal_get__fadeElement_5__3();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderIntensityEffect__FadeElement*> const& __cordl_internal_get__fadeElement_5__3() const;

  constexpr float_t const& __cordl_internal_get__startTime_5__4() const;

  constexpr float_t& __cordl_internal_get__startTime_5__4();

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*& __cordl_internal_get_fadeElements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> const&
  __cordl_internal_get_fadeElements() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SliderIntensityEffect> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>* value);

  constexpr void __cordl_internal_set__fadeElement_5__3(::GlobalNamespace::__SliderIntensityEffect__FadeElement* value);

  constexpr void __cordl_internal_set__startTime_5__4(float_t value);

  constexpr void __cordl_internal_set_fadeElements(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>* value);

  /// @brief Method <>m__Finally1, addr 0x3a9af40, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3a9a914, size 0x28, virtual false, abstract: false, final false
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
  constexpr __SliderIntensityEffect___ProcessEffectCoroutine_d__32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SliderIntensityEffect___ProcessEffectCoroutine_d__32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderIntensityEffect___ProcessEffectCoroutine_d__32(__SliderIntensityEffect___ProcessEffectCoroutine_d__32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderIntensityEffect___ProcessEffectCoroutine_d__32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderIntensityEffect___ProcessEffectCoroutine_d__32(__SliderIntensityEffect___ProcessEffectCoroutine_d__32 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field fadeElements, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>* ___fadeElements;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SliderIntensityEffect> _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>* _____7__wrap1;

  /// @brief Field <fadeElement>5__3, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__SliderIntensityEffect__FadeElement* ____fadeElement_5__3;

  /// @brief Field <startTime>5__4, offset: 0x40, size: 0x4, def value: None
  float_t ____startTime_5__4;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4157 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32, ___fadeElements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32, ____fadeElement_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32, ____startTime_5__4) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SliderIntensityEffect
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderIntensityEffect*
class CORDL_TYPE SliderIntensityEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using FadeElement = ::GlobalNamespace::__SliderIntensityEffect__FadeElement;

  using InitData = ::GlobalNamespace::__SliderIntensityEffect__InitData;

  using IntensityCalculationDelegate = ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate;

  using _ProcessEffectCoroutine_d__32 = ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32;

  /// @brief Field _audioTimeSyncController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _coreIntensity, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__coreIntensity, put = __cordl_internal_set__coreIntensity)) float_t _coreIntensity;

  /// @brief Field _dipEffectFadeElements, offset 0x78, size 0x8
  __declspec(property(
      get = __cordl_internal_get__dipEffectFadeElements,
      put = __cordl_internal_set__dipEffectFadeElements)) ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>
      _dipEffectFadeElements;

  /// @brief Field _effectIntensity, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__effectIntensity, put = __cordl_internal_set__effectIntensity)) float_t _effectIntensity;

  /// @brief Field _fadeInEffectFadeElements, offset 0x88, size 0x8
  __declspec(property(
      get = __cordl_internal_get__fadeInEffectFadeElements,
      put = __cordl_internal_set__fadeInEffectFadeElements)) ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>
      _fadeInEffectFadeElements;

  /// @brief Field _fadeOutDuration, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeOutDuration, put = __cordl_internal_set__fadeOutDuration)) float_t _fadeOutDuration;

  /// @brief Field _flashBoost, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__flashBoost, put = __cordl_internal_set__flashBoost)) float_t _flashBoost;

  /// @brief Field _flashEffectFadeElements, offset 0x80, size 0x8
  __declspec(property(
      get = __cordl_internal_get__flashEffectFadeElements,
      put = __cordl_internal_set__flashEffectFadeElements)) ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>
      _flashEffectFadeElements;

  /// @brief Field _flashInDuration, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__flashInDuration, put = __cordl_internal_set__flashInDuration)) float_t _flashInDuration;

  /// @brief Field _flashOutDuration, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__flashOutDuration, put = __cordl_internal_set__flashOutDuration)) float_t _flashOutDuration;

  /// @brief Field _halfJumpDuration, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__halfJumpDuration, put = __cordl_internal_set__halfJumpDuration)) float_t _halfJumpDuration;

  /// @brief Field _initData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::__SliderIntensityEffect__InitData* _initData;

  /// @brief Field _intensityCalculationDelegate, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__intensityCalculationDelegate,
                      put = __cordl_internal_set__intensityCalculationDelegate)) ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate* _intensityCalculationDelegate;

  /// @brief Field _longSliderHeadIntensity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__longSliderHeadIntensity, put = __cordl_internal_set__longSliderHeadIntensity)) float_t _longSliderHeadIntensity;

  /// @brief Field _shortSliderHeadIntensity, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__shortSliderHeadIntensity, put = __cordl_internal_set__shortSliderHeadIntensity)) float_t _shortSliderHeadIntensity;

  /// @brief Field _sliderDuration, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__sliderDuration, put = __cordl_internal_set__sliderDuration)) float_t _sliderDuration;

  /// @brief Field _stayOffDuration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__stayOffDuration, put = __cordl_internal_set__stayOffDuration)) float_t _stayOffDuration;

  /// @brief Field _tailIntensity, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__tailIntensity, put = __cordl_internal_set__tailIntensity)) float_t _tailIntensity;

  __declspec(property(get = get_colorIntensity)) float_t colorIntensity;

  /// @brief Field fadeInDidStartEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_fadeInDidStartEvent, put = __cordl_internal_set_fadeInDidStartEvent)) ::System::Action* fadeInDidStartEvent;

  /// @brief Field headIntensity, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_headIntensity, put = __cordl_internal_set_headIntensity)) float_t headIntensity;

  __declspec(property(get = get_intensity)) float_t intensity;

  /// @brief Method Awake, addr 0x3a9a558, size 0x30c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Init, addr 0x3a98740, size 0xf4, virtual false, abstract: false, final false
  inline void Init(float_t sliderDuration, float_t halfJumpDuration, bool startVisible);

  /// @brief Method ManualUpdate, addr 0x3a99170, size 0x3c, virtual false, abstract: false, final false
  inline void ManualUpdate(float_t timeSinceHeadNoteJump);

  static inline ::GlobalNamespace::SliderIntensityEffect* New_ctor();

  /// @brief Method ProcessEffectCoroutine, addr 0x3a9a8a8, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ProcessEffectCoroutine(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>* fadeElements);

  /// @brief Method StartFlashEffect, addr 0x3a9a93c, size 0x30, virtual false, abstract: false, final false
  inline void StartFlashEffect();

  /// @brief Method StartIntensityDipEffect, addr 0x3a999b8, size 0x30, virtual false, abstract: false, final false
  inline void StartIntensityDipEffect();

  /// @brief Method StartIntensityFadeInEffect, addr 0x3a9976c, size 0x30, virtual false, abstract: false, final false
  inline void StartIntensityFadeInEffect();

  /// @brief Method <Awake>b__29_0, addr 0x3a9a988, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__29_0();

  /// @brief Method <Awake>b__29_1, addr 0x3a9a9a4, size 0x1c, virtual false, abstract: false, final false
  inline void _Awake_b__29_1();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr float_t const& __cordl_internal_get__coreIntensity() const;

  constexpr float_t& __cordl_internal_get__coreIntensity();

  constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> const&
  __cordl_internal_get__dipEffectFadeElements() const;

  constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>& __cordl_internal_get__dipEffectFadeElements();

  constexpr float_t const& __cordl_internal_get__effectIntensity() const;

  constexpr float_t& __cordl_internal_get__effectIntensity();

  constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> const&
  __cordl_internal_get__fadeInEffectFadeElements() const;

  constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>& __cordl_internal_get__fadeInEffectFadeElements();

  constexpr float_t const& __cordl_internal_get__fadeOutDuration() const;

  constexpr float_t& __cordl_internal_get__fadeOutDuration();

  constexpr float_t const& __cordl_internal_get__flashBoost() const;

  constexpr float_t& __cordl_internal_get__flashBoost();

  constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> const&
  __cordl_internal_get__flashEffectFadeElements() const;

  constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>& __cordl_internal_get__flashEffectFadeElements();

  constexpr float_t const& __cordl_internal_get__flashInDuration() const;

  constexpr float_t& __cordl_internal_get__flashInDuration();

  constexpr float_t const& __cordl_internal_get__flashOutDuration() const;

  constexpr float_t& __cordl_internal_get__flashOutDuration();

  constexpr float_t const& __cordl_internal_get__halfJumpDuration() const;

  constexpr float_t& __cordl_internal_get__halfJumpDuration();

  constexpr ::GlobalNamespace::__SliderIntensityEffect__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderIntensityEffect__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*& __cordl_internal_get__intensityCalculationDelegate();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*> const& __cordl_internal_get__intensityCalculationDelegate() const;

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

  constexpr ::System::Action*& __cordl_internal_get_fadeInDidStartEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_fadeInDidStartEvent() const;

  constexpr float_t const& __cordl_internal_get_headIntensity() const;

  constexpr float_t& __cordl_internal_get_headIntensity();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__coreIntensity(float_t value);

  constexpr void
  __cordl_internal_set__dipEffectFadeElements(::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> value);

  constexpr void __cordl_internal_set__effectIntensity(float_t value);

  constexpr void
  __cordl_internal_set__fadeInEffectFadeElements(::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> value);

  constexpr void __cordl_internal_set__fadeOutDuration(float_t value);

  constexpr void __cordl_internal_set__flashBoost(float_t value);

  constexpr void
  __cordl_internal_set__flashEffectFadeElements(::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> value);

  constexpr void __cordl_internal_set__flashInDuration(float_t value);

  constexpr void __cordl_internal_set__flashOutDuration(float_t value);

  constexpr void __cordl_internal_set__halfJumpDuration(float_t value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__SliderIntensityEffect__InitData* value);

  constexpr void __cordl_internal_set__intensityCalculationDelegate(::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate* value);

  constexpr void __cordl_internal_set__longSliderHeadIntensity(float_t value);

  constexpr void __cordl_internal_set__shortSliderHeadIntensity(float_t value);

  constexpr void __cordl_internal_set__sliderDuration(float_t value);

  constexpr void __cordl_internal_set__stayOffDuration(float_t value);

  constexpr void __cordl_internal_set__tailIntensity(float_t value);

  constexpr void __cordl_internal_set_fadeInDidStartEvent(::System::Action* value);

  constexpr void __cordl_internal_set_headIntensity(float_t value);

  /// @brief Method .ctor, addr 0x3a9a96c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_fadeInDidStartEvent, addr 0x3a98cc8, size 0x9c, virtual false, abstract: false, final false
  inline void add_fadeInDidStartEvent(::System::Action* value);

  /// @brief Method get_colorIntensity, addr 0x3a9a530, size 0x28, virtual false, abstract: false, final false
  inline float_t get_colorIntensity();

  /// @brief Method get_intensity, addr 0x3a982f4, size 0x28, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method remove_fadeInDidStartEvent, addr 0x3a99000, size 0x9c, virtual false, abstract: false, final false
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

  /// @brief Field _flashBoost, offset: 0x34, size: 0x4, def value: None
  float_t ____flashBoost;

  /// @brief Field _flashInDuration, offset: 0x38, size: 0x4, def value: None
  float_t ____flashInDuration;

  /// @brief Field _flashOutDuration, offset: 0x3c, size: 0x4, def value: None
  float_t ____flashOutDuration;

  /// @brief Field _audioTimeSyncController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _initData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__SliderIntensityEffect__InitData* ____initData;

  /// @brief Field fadeInDidStartEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___fadeInDidStartEvent;

  /// @brief Field _coreIntensity, offset: 0x58, size: 0x4, def value: None
  float_t ____coreIntensity;

  /// @brief Field _effectIntensity, offset: 0x5c, size: 0x4, def value: None
  float_t ____effectIntensity;

  /// @brief Field _halfJumpDuration, offset: 0x60, size: 0x4, def value: None
  float_t ____halfJumpDuration;

  /// @brief Field _sliderDuration, offset: 0x64, size: 0x4, def value: None
  float_t ____sliderDuration;

  /// @brief Field headIntensity, offset: 0x68, size: 0x4, def value: None
  float_t ___headIntensity;

  /// @brief Field _intensityCalculationDelegate, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate* ____intensityCalculationDelegate;

  /// @brief Field _dipEffectFadeElements, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> ____dipEffectFadeElements;

  /// @brief Field _flashEffectFadeElements, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> ____flashEffectFadeElements;

  /// @brief Field _fadeInEffectFadeElements, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, ::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> ____fadeInEffectFadeElements;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4158 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderIntensityEffect, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____longSliderHeadIntensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____shortSliderHeadIntensity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____tailIntensity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____fadeOutDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____stayOffDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____flashBoost) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____flashInDuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____flashOutDuration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____audioTimeSyncController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____initData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ___fadeInDidStartEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____coreIntensity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____effectIntensity) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____halfJumpDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____sliderDuration) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ___headIntensity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____intensityCalculationDelegate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____dipEffectFadeElements) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____flashEffectFadeElements) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderIntensityEffect, ____fadeInEffectFadeElements) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderIntensityEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderIntensityEffect*, "", "SliderIntensityEffect");
NEED_NO_BOX(::GlobalNamespace::__SliderIntensityEffect__FadeElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderIntensityEffect__FadeElement*, "", "SliderIntensityEffect/FadeElement");
NEED_NO_BOX(::GlobalNamespace::__SliderIntensityEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderIntensityEffect__InitData*, "", "SliderIntensityEffect/InitData");
NEED_NO_BOX(::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*, "", "SliderIntensityEffect/IntensityCalculationDelegate");
NEED_NO_BOX(::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*, "", "SliderIntensityEffect/<ProcessEffectCoroutine>d__32");
