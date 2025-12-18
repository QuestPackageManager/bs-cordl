#pragma once
// IWYU pragma private; include "GlobalNamespace/CutoutAnimateEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CutoutAnimateEffect)
namespace GlobalNamespace {
class CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7;
}
namespace GlobalNamespace {
class CutoutEffect;
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
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class CutoutAnimateEffect;
}
namespace GlobalNamespace {
class CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CutoutAnimateEffect);
MARK_REF_PTR_T(::GlobalNamespace::CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CutoutAnimateEffect/<AnimateToCutoutCoroutine>d__7
class CORDL_TYPE CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CutoutAnimateEffect> __4__this;

  /// @brief Field <elapsedTime>5__2, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__elapsedTime_5__2, put = __cordl_internal_set__elapsedTime_5__2)) float_t _elapsedTime_5__2;

  /// @brief Field cutoutEnd, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_cutoutEnd, put = __cordl_internal_set_cutoutEnd)) float_t cutoutEnd;

  /// @brief Field cutoutStart, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_cutoutStart, put = __cordl_internal_set_cutoutStart)) float_t cutoutStart;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x57d2464, size 0x114, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x57d2578, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x57d2580, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x57d25b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x57d2460, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::CutoutAnimateEffect> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::CutoutAnimateEffect>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__elapsedTime_5__2() const;

  constexpr float_t& __cordl_internal_get__elapsedTime_5__2();

  constexpr float_t const& __cordl_internal_get_cutoutEnd() const;

  constexpr float_t& __cordl_internal_get_cutoutEnd();

  constexpr float_t const& __cordl_internal_get_cutoutStart() const;

  constexpr float_t& __cordl_internal_get_cutoutStart();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CutoutAnimateEffect> value);

  constexpr void __cordl_internal_set__elapsedTime_5__2(float_t value);

  constexpr void __cordl_internal_set_cutoutEnd(float_t value);

  constexpr void __cordl_internal_set_cutoutStart(float_t value);

  constexpr void __cordl_internal_set_duration(float_t value);

  /// @brief Method .ctor, addr 0x57d23c8, size 0x8, virtual false, abstract: false, final false
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
  constexpr CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7(CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7(CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5765 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CutoutAnimateEffect> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field cutoutStart, offset: 0x2c, size: 0x4, def value: None
  float_t ___cutoutStart;

  /// @brief Field cutoutEnd, offset: 0x30, size: 0x4, def value: None
  float_t ___cutoutEnd;

  /// @brief Field <elapsedTime>5__2, offset: 0x34, size: 0x4, def value: None
  float_t ____elapsedTime_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7, ___cutoutStart) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7, ___cutoutEnd) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7, ____elapsedTime_5__2) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CutoutAnimateEffect
class CORDL_TYPE CutoutAnimateEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _AnimateToCutoutCoroutine_d__7 = ::GlobalNamespace::CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7;

  /// @brief Field <animating>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__animating_k__BackingField, put = __cordl_internal_set__animating_k__BackingField)) bool _animating_k__BackingField;

  /// @brief Field _cuttoutEffects, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cuttoutEffects,
                      put = __cordl_internal_set__cuttoutEffects)) ::ArrayW<::UnityW<::GlobalNamespace::CutoutEffect>, ::Array<::UnityW<::GlobalNamespace::CutoutEffect>>*>
      _cuttoutEffects;

  /// @brief Field _transitionCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__transitionCurve, put = __cordl_internal_set__transitionCurve)) ::UnityEngine::AnimationCurve* _transitionCurve;

  __declspec(property(get = get_animating, put = set_animating)) bool animating;

  /// @brief Method AnimateCutout, addr 0x57cc028, size 0x54, virtual false, abstract: false, final false
  inline void AnimateCutout(float_t cutoutStart, float_t cutoutEnd, float_t duration);

  /// @brief Method AnimateToCutoutCoroutine, addr 0x57d2350, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* AnimateToCutoutCoroutine(float_t cutoutStart, float_t cutoutEnd, float_t duration);

  static inline ::GlobalNamespace::CutoutAnimateEffect* New_ctor();

  /// @brief Method ResetEffect, addr 0x57c8bf0, size 0x24, virtual false, abstract: false, final false
  inline void ResetEffect();

  /// @brief Method SetCutout, addr 0x57d22f0, size 0x60, virtual false, abstract: false, final false
  inline void SetCutout(float_t cutout);

  /// @brief Method Start, addr 0x57d22e8, size 0x8, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__animating_k__BackingField() const;

  constexpr bool& __cordl_internal_get__animating_k__BackingField();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::CutoutEffect>, ::Array<::UnityW<::GlobalNamespace::CutoutEffect>>*> const& __cordl_internal_get__cuttoutEffects() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::CutoutEffect>, ::Array<::UnityW<::GlobalNamespace::CutoutEffect>>*>& __cordl_internal_get__cuttoutEffects();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__transitionCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__transitionCurve();

  constexpr void __cordl_internal_set__animating_k__BackingField(bool value);

  constexpr void __cordl_internal_set__cuttoutEffects(::ArrayW<::UnityW<::GlobalNamespace::CutoutEffect>, ::Array<::UnityW<::GlobalNamespace::CutoutEffect>>*> value);

  constexpr void __cordl_internal_set__transitionCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method .ctor, addr 0x57d242c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animating, addr 0x57d22d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_animating();

  /// @brief Method set_animating, addr 0x57d22e0, size 0x8, virtual false, abstract: false, final false
  inline void set_animating(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CutoutAnimateEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CutoutAnimateEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CutoutAnimateEffect(CutoutAnimateEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CutoutAnimateEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CutoutAnimateEffect(CutoutAnimateEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5766 };

  /// @brief Field _cuttoutEffects, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::CutoutEffect>, ::Array<::UnityW<::GlobalNamespace::CutoutEffect>>*> ____cuttoutEffects;

  /// @brief Field _transitionCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____transitionCurve;

  /// @brief Field <animating>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____animating_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CutoutAnimateEffect, ____cuttoutEffects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutoutAnimateEffect, ____transitionCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutoutAnimateEffect, ____animating_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CutoutAnimateEffect, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CutoutAnimateEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CutoutAnimateEffect*, "", "CutoutAnimateEffect");
NEED_NO_BOX(::GlobalNamespace::CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CutoutAnimateEffect__AnimateToCutoutCoroutine_d__7*, "", "CutoutAnimateEffect/<AnimateToCutoutCoroutine>d__7");
