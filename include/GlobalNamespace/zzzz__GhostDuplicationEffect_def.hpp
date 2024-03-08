#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__GhostDuplicationEffect_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostDuplicationEffect)
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
struct __GhostDuplicationEffect__GhostEffectParams;
}
namespace GlobalNamespace {
class __GhostDuplicationEffect___HideRedundantWithDelay_d__8;
}
namespace GlobalNamespace {
class __GhostDuplicationEffect____c__DisplayClass7_0;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostDuplicationEffect;
}
namespace GlobalNamespace {
class __GhostDuplicationEffect___HideRedundantWithDelay_d__8;
}
namespace GlobalNamespace {
class __GhostDuplicationEffect____c__DisplayClass7_0;
}
namespace GlobalNamespace {
struct __GhostDuplicationEffect__GhostEffectParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GhostDuplicationEffect);
MARK_REF_PTR_T(::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8);
MARK_REF_PTR_T(::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0);
MARK_VAL_T(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams);
// Type: ::GhostEffectParams
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 85, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GhostDuplicationEffect::GhostEffectParams
struct CORDL_TYPE __GhostDuplicationEffect__GhostEffectParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GhostDuplicationEffect__GhostEffectParams();

  // Ctor Parameters [CppParam { name: "startAlpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None },
  // CppParam { name: "startSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "endAlpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "endPosition", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "endSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "::GlobalNamespace::EaseType", modifiers: "", def_value: None },
  // CppParam { name: "distanceCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None }, CppParam { name: "peakDistance", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "lastPhase", ty: "bool", modifiers: "", def_value: None }]
  constexpr __GhostDuplicationEffect__GhostEffectParams(float_t startAlpha, ::UnityEngine::Vector3 startPosition, float_t startSize, float_t endAlpha, ::UnityEngine::Vector3 endPosition,
                                                        float_t endSize, float_t duration, float_t delay, ::GlobalNamespace::EaseType easeType, ::UnityEngine::AnimationCurve* distanceCurve,
                                                        float_t peakDistance, bool lastPhase) noexcept;

  /// @brief Field startAlpha, offset: 0x0, size: 0x4, def value: None
  float_t startAlpha;

  /// @brief Field startPosition, offset: 0x4, size: 0xc, def value: None
  ::UnityEngine::Vector3 startPosition;

  /// @brief Field startSize, offset: 0x10, size: 0x4, def value: None
  float_t startSize;

  /// @brief Field endAlpha, offset: 0x14, size: 0x4, def value: None
  float_t endAlpha;

  /// @brief Field endPosition, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 endPosition;

  /// @brief Field endSize, offset: 0x24, size: 0x4, def value: None
  float_t endSize;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t duration;

  /// @brief Field delay, offset: 0x2c, size: 0x4, def value: None
  float_t delay;

  /// @brief Field easeType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::EaseType easeType;

  /// @brief Field distanceCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* distanceCurve;

  /// @brief Field peakDistance, offset: 0x40, size: 0x4, def value: None
  float_t peakDistance;

  /// @brief Field lastPhase, offset: 0x44, size: 0x1, def value: None
  bool lastPhase;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, startAlpha) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, startPosition) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, startSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, endAlpha) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, endPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, endSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, delay) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, easeType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, distanceCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, peakDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, lastPhase) == 0x44, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GhostDuplicationEffect::<>c__DisplayClass7_0*
class CORDL_TYPE __GhostDuplicationEffect____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::GhostDuplicationEffect> __4__this;

  /// @brief Field direction, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get_direction, put = __cordl_internal_set_direction))::UnityEngine::Vector3 direction;

  /// @brief Field ghostEffectParams, offset 0x18, size 0x48
  __declspec(property(get = __cordl_internal_get_ghostEffectParams, put = __cordl_internal_set_ghostEffectParams))::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams ghostEffectParams;

  static inline ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0* New_ctor();

  /// @brief Method <Animate>b__0, addr 0x248fb14, size 0x18, virtual false, abstract: false, final false
  inline void _Animate_b__0(float_t val);

  /// @brief Method <Animate>b__1, addr 0x248fb2c, size 0x2c, virtual false, abstract: false, final false
  inline void _Animate_b__1(float_t val);

  /// @brief Method <Animate>b__2, addr 0x248fb58, size 0x50, virtual false, abstract: false, final false
  inline void _Animate_b__2(::UnityEngine::Vector3 pos);

  /// @brief Method <Animate>b__3, addr 0x248fba8, size 0x40, virtual false, abstract: false, final false
  inline void _Animate_b__3(float_t val);

  constexpr ::UnityW<::GlobalNamespace::GhostDuplicationEffect> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GhostDuplicationEffect>& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_direction() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_direction();

  constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams const& __cordl_internal_get_ghostEffectParams() const;

  constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams& __cordl_internal_get_ghostEffectParams();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GhostDuplicationEffect> value);

  constexpr void __cordl_internal_set_direction(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_ghostEffectParams(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams value);

  /// @brief Method .ctor, addr 0x248f840, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GhostDuplicationEffect____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GhostDuplicationEffect____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GhostDuplicationEffect____c__DisplayClass7_0(__GhostDuplicationEffect____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GhostDuplicationEffect____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GhostDuplicationEffect____c__DisplayClass7_0(__GhostDuplicationEffect____c__DisplayClass7_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GhostDuplicationEffect> _____4__this;

  /// @brief Field ghostEffectParams, offset: 0x18, size: 0x48, def value: None
  ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams ___ghostEffectParams;

  /// @brief Field direction, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___direction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0, ___ghostEffectParams) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0, ___direction) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<HideRedundantWithDelay>d__8
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GhostDuplicationEffect::<HideRedundantWithDelay>d__8*
class CORDL_TYPE __GhostDuplicationEffect___HideRedundantWithDelay_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::GhostDuplicationEffect> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x248fbec, size 0xfc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x248fce8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x248fcf0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x248fd30, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x248fbe8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::GhostDuplicationEffect> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GhostDuplicationEffect>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GhostDuplicationEffect> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  /// @brief Method .ctor, addr 0x248f8c0, size 0x28, virtual false, abstract: false, final false
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
  constexpr __GhostDuplicationEffect___HideRedundantWithDelay_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GhostDuplicationEffect___HideRedundantWithDelay_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GhostDuplicationEffect___HideRedundantWithDelay_d__8(__GhostDuplicationEffect___HideRedundantWithDelay_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GhostDuplicationEffect___HideRedundantWithDelay_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GhostDuplicationEffect___HideRedundantWithDelay_d__8(__GhostDuplicationEffect___HideRedundantWithDelay_d__8 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GhostDuplicationEffect> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8, _____4__this) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GhostDuplicationEffect
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GhostDuplicationEffect*
class CORDL_TYPE GhostDuplicationEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GhostEffectParams = ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams;

  using _HideRedundantWithDelay_d__8 = ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8;

  using __c__DisplayClass7_0 = ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0;

  /// @brief Field _canvases, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__canvases,
                      put = __cordl_internal_set__canvases))::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> _canvases;

  /// @brief Field _tweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager))::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  __declspec(property(get = get_alpha, put = set_alpha)) float_t alpha;

  __declspec(property(put = set_hide)) bool hide;

  /// @brief Field isInitialized, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isInitialized, put = __cordl_internal_set_isInitialized)) bool isInitialized;

  __declspec(property(get = get_size, put = set_size)) float_t size;

  /// @brief Method Animate, addr 0x248f48c, size 0x3b4, virtual false, abstract: false, final false
  inline void Animate(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams ghostEffectParams);

  /// @brief Method Awake, addr 0x248f370, size 0x10, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HideRedundantWithDelay, addr 0x248f848, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* HideRedundantWithDelay(float_t delay);

  /// @brief Method Init, addr 0x248f380, size 0x88, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::GhostDuplicationEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x248f2e8, size 0x88, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetDistances, addr 0x248f8e8, size 0xec, virtual false, abstract: false, final false
  inline void SetDistances(float_t distance, ::UnityEngine::Vector3 direction);

  constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> const& __cordl_internal_get__canvases() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*>& __cordl_internal_get__canvases();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr bool const& __cordl_internal_get_isInitialized() const;

  constexpr bool& __cordl_internal_get_isInitialized();

  constexpr void __cordl_internal_set__canvases(::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr void __cordl_internal_set_isInitialized(bool value);

  /// @brief Method .ctor, addr 0x248fb0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alpha, addr 0x248facc, size 0x40, virtual false, abstract: false, final false
  inline float_t get_alpha();

  /// @brief Method get_size, addr 0x248fa84, size 0x48, virtual false, abstract: false, final false
  inline float_t get_size();

  /// @brief Method set_alpha, addr 0x248f408, size 0x84, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

  /// @brief Method set_hide, addr 0x248f9d4, size 0x2c, virtual false, abstract: false, final false
  inline void set_hide(bool value);

  /// @brief Method set_size, addr 0x248fa00, size 0x84, virtual false, abstract: false, final false
  inline void set_size(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GhostDuplicationEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GhostDuplicationEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GhostDuplicationEffect(GhostDuplicationEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GhostDuplicationEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GhostDuplicationEffect(GhostDuplicationEffect const&) = delete;

  /// @brief Field _canvases, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> ____canvases;

  /// @brief Field isInitialized, offset: 0x20, size: 0x1, def value: None
  bool ___isInitialized;

  /// @brief Field _tweeningManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GhostDuplicationEffect, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostDuplicationEffect, ____canvases) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostDuplicationEffect, ___isInitialized) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostDuplicationEffect, ____tweeningManager) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GhostDuplicationEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GhostDuplicationEffect*, "", "GhostDuplicationEffect");
NEED_NO_BOX(::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*, "", "GhostDuplicationEffect/<HideRedundantWithDelay>d__8");
NEED_NO_BOX(::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*, "", "GhostDuplicationEffect/<>c__DisplayClass7_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, "", "GhostDuplicationEffect/GhostEffectParams");
