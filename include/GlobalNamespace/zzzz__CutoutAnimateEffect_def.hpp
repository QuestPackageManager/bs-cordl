#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CutoutAnimateEffect)
namespace GlobalNamespace {
class CutoutEffect;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CutoutAnimateEffect;
}
namespace GlobalNamespace {
class __CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CutoutAnimateEffect);
MARK_REF_PTR_T(::GlobalNamespace::__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7);
// Type: ::<AnimateToCutoutCoroutine>d__7
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4839))
// CS Name: ::CutoutAnimateEffect::<AnimateToCutoutCoroutine>d__7*
class CORDL_TYPE __CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::CutoutAnimateEffect* __4__this;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __get_duration, put = __set_duration)) float_t duration;

  /// @brief Field cutoutStart, offset 0x2c, size 0x4
  __declspec(property(get = __get_cutoutStart, put = __set_cutoutStart)) float_t cutoutStart;

  /// @brief Field cutoutEnd, offset 0x30, size 0x4
  __declspec(property(get = __get_cutoutEnd, put = __set_cutoutEnd)) float_t cutoutEnd;

  /// @brief Field <elapsedTime>5__2, offset 0x34, size 0x4
  __declspec(property(get = __get__elapsedTime_5__2, put = __set__elapsedTime_5__2)) float_t _elapsedTime_5__2;

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

  constexpr ::GlobalNamespace::CutoutAnimateEffect*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CutoutAnimateEffect*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::CutoutAnimateEffect* value);

  constexpr float_t& __get_duration();

  constexpr float_t const& __get_duration() const;

  constexpr void __set_duration(float_t value);

  constexpr float_t& __get_cutoutStart();

  constexpr float_t const& __get_cutoutStart() const;

  constexpr void __set_cutoutStart(float_t value);

  constexpr float_t& __get_cutoutEnd();

  constexpr float_t const& __get_cutoutEnd() const;

  constexpr void __set_cutoutEnd(float_t value);

  constexpr float_t& __get__elapsedTime_5__2();

  constexpr float_t const& __get__elapsedTime_5__2() const;

  constexpr void __set__elapsedTime_5__2(float_t value);

  static inline ::GlobalNamespace::__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2396940 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2396a60 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2396a64 size 0xf8 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2396b5c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2396b64 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2396ba4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7(__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7(__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::CutoutAnimateEffect* _____4__this;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CutoutAnimateEffect
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4840))
// CS Name: ::CutoutAnimateEffect*
class CORDL_TYPE CutoutAnimateEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _AnimateToCutoutCoroutine_d__7 = ::GlobalNamespace::__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7;

  /// @brief Field _cuttoutEffects, offset 0x18, size 0x8
  __declspec(property(get = __get__cuttoutEffects, put = __set__cuttoutEffects))::ArrayW<::GlobalNamespace::CutoutEffect*, ::Array<::GlobalNamespace::CutoutEffect*>*> _cuttoutEffects;

  /// @brief Field _transitionCurve, offset 0x20, size 0x8
  __declspec(property(get = __get__transitionCurve, put = __set__transitionCurve))::UnityEngine::AnimationCurve* _transitionCurve;

  /// @brief Field <animating>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __get__animating_k__BackingField, put = __set__animating_k__BackingField)) bool _animating_k__BackingField;

  __declspec(property(get = get_animating, put = set_animating)) bool animating;

  constexpr ::ArrayW<::GlobalNamespace::CutoutEffect*, ::Array<::GlobalNamespace::CutoutEffect*>*>& __get__cuttoutEffects();

  constexpr ::ArrayW<::GlobalNamespace::CutoutEffect*, ::Array<::GlobalNamespace::CutoutEffect*>*> const& __get__cuttoutEffects() const;

  constexpr void __set__cuttoutEffects(::ArrayW<::GlobalNamespace::CutoutEffect*, ::Array<::GlobalNamespace::CutoutEffect*>*> value);

  constexpr ::UnityEngine::AnimationCurve*& __get__transitionCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__transitionCurve() const;

  constexpr void __set__transitionCurve(::UnityEngine::AnimationCurve* value);

  constexpr bool& __get__animating_k__BackingField();

  constexpr bool const& __get__animating_k__BackingField() const;

  constexpr void __set__animating_k__BackingField(bool value);

  /// @brief Method get_animating addr 0x239682c size 0x8 virtual false final false
  inline bool get_animating();

  /// @brief Method set_animating addr 0x2396834 size 0xc virtual false final false
  inline void set_animating(bool value);

  /// @brief Method Start addr 0x2396840 size 0x8 virtual false final false
  inline void Start();

  /// @brief Method AnimateToCutoutCoroutine addr 0x23968b4 size 0x8c virtual false final false
  inline ::System::Collections::IEnumerator* AnimateToCutoutCoroutine(float_t cutoutStart, float_t cutoutEnd, float_t duration);

  /// @brief Method SetCutout addr 0x2396848 size 0x6c virtual false final false
  inline void SetCutout(float_t cutout);

  /// @brief Method ResetEffect addr 0x238e510 size 0x24 virtual false final false
  inline void ResetEffect();

  /// @brief Method AnimateCutout addr 0x238e558 size 0x54 virtual false final false
  inline void AnimateCutout(float_t cutoutStart, float_t cutoutEnd, float_t duration);

  static inline ::GlobalNamespace::CutoutAnimateEffect* New_ctor();

  /// @brief Method .ctor addr 0x2396a2c size 0x34 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CutoutAnimateEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CutoutAnimateEffect(CutoutAnimateEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CutoutAnimateEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CutoutAnimateEffect(CutoutAnimateEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CutoutAnimateEffect();

public:
  /// @brief Field _cuttoutEffects, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::CutoutEffect*, ::Array<::GlobalNamespace::CutoutEffect*>*> ____cuttoutEffects;

  /// @brief Field _transitionCurve, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____transitionCurve;

  /// @brief Field <animating>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____animating_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CutoutAnimateEffect, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CutoutAnimateEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CutoutAnimateEffect*, "", "CutoutAnimateEffect");
NEED_NO_BOX(::GlobalNamespace::__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7*, "", "CutoutAnimateEffect/<AnimateToCutoutCoroutine>d__7");
