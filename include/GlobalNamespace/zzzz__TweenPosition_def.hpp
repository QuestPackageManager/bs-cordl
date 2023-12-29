#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TweenPosition)
namespace GlobalNamespace {
class __TweenPosition___AnimateToNewPosCoroutine_d__11;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class AnimationCurve;
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
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class TweenPosition;
}
namespace GlobalNamespace {
class __TweenPosition___AnimateToNewPosCoroutine_d__11;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TweenPosition);
MARK_REF_PTR_T(::GlobalNamespace::__TweenPosition___AnimateToNewPosCoroutine_d__11);
// Type: ::<AnimateToNewPosCoroutine>d__11
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13909))
// CS Name: ::TweenPosition::<AnimateToNewPosCoroutine>d__11*
class CORDL_TYPE __TweenPosition___AnimateToNewPosCoroutine_d__11 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::TweenPosition* __4__this;

  /// @brief Field <startPos>5__2, offset 0x28, size 0xc
  __declspec(property(get = __get__startPos_5__2, put = __set__startPos_5__2))::UnityEngine::Vector3 _startPos_5__2;

  /// @brief Field <elapsedTime>5__3, offset 0x34, size 0x4
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

  constexpr ::GlobalNamespace::TweenPosition*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TweenPosition*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::TweenPosition* value);

  constexpr ::UnityEngine::Vector3& __get__startPos_5__2();

  constexpr ::UnityEngine::Vector3 const& __get__startPos_5__2() const;

  constexpr void __set__startPos_5__2(::UnityEngine::Vector3 value);

  constexpr float_t& __get__elapsedTime_5__3();

  constexpr float_t const& __get__elapsedTime_5__3() const;

  constexpr void __set__elapsedTime_5__3(float_t value);

  static inline ::GlobalNamespace::__TweenPosition___AnimateToNewPosCoroutine_d__11* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x1f9aff0 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x1f9b054 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x1f9b058 size 0x17c virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f9b1d4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x1f9b1dc size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f9b21c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__TweenPosition___AnimateToNewPosCoroutine_d__11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TweenPosition___AnimateToNewPosCoroutine_d__11(__TweenPosition___AnimateToNewPosCoroutine_d__11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TweenPosition___AnimateToNewPosCoroutine_d__11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TweenPosition___AnimateToNewPosCoroutine_d__11(__TweenPosition___AnimateToNewPosCoroutine_d__11 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TweenPosition___AnimateToNewPosCoroutine_d__11();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::TweenPosition* _____4__this;

  /// @brief Field <startPos>5__2, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos_5__2;

  /// @brief Field <elapsedTime>5__3, offset: 0x34, size: 0x4, def value: None
  float_t ____elapsedTime_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TweenPosition___AnimateToNewPosCoroutine_d__11, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TweenPosition___AnimateToNewPosCoroutine_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TweenPosition___AnimateToNewPosCoroutine_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TweenPosition___AnimateToNewPosCoroutine_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TweenPosition___AnimateToNewPosCoroutine_d__11, ____startPos_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TweenPosition___AnimateToNewPosCoroutine_d__11, ____elapsedTime_5__3) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TweenPosition
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13910))
// CS Name: ::TweenPosition*
class CORDL_TYPE TweenPosition : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _AnimateToNewPosCoroutine_d__11 = ::GlobalNamespace::__TweenPosition___AnimateToNewPosCoroutine_d__11;

  /// @brief Field _unscaledTime, offset 0x18, size 0x1
  __declspec(property(get = __get__unscaledTime, put = __set__unscaledTime)) bool _unscaledTime;

  /// @brief Field _localPosition, offset 0x19, size 0x1
  __declspec(property(get = __get__localPosition, put = __set__localPosition)) bool _localPosition;

  /// @brief Field _duration, offset 0x1c, size 0x4
  __declspec(property(get = __get__duration, put = __set__duration)) float_t _duration;

  /// @brief Field _animationCurve, offset 0x20, size 0x8
  __declspec(property(get = __get__animationCurve, put = __set__animationCurve))::UnityEngine::AnimationCurve* _animationCurve;

  /// @brief Field _transform, offset 0x28, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Field _targetPos, offset 0x30, size 0xc
  __declspec(property(get = __get__targetPos, put = __set__targetPos))::UnityEngine::Vector3 _targetPos;

  __declspec(property(get = get_TargetPos, put = set_TargetPos))::UnityEngine::Vector3 TargetPos;

  constexpr bool& __get__unscaledTime();

  constexpr bool const& __get__unscaledTime() const;

  constexpr void __set__unscaledTime(bool value);

  constexpr bool& __get__localPosition();

  constexpr bool const& __get__localPosition() const;

  constexpr void __set__localPosition(bool value);

  constexpr float_t& __get__duration();

  constexpr float_t const& __get__duration() const;

  constexpr void __set__duration(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get__animationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__animationCurve() const;

  constexpr void __set__animationCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get__targetPos();

  constexpr ::UnityEngine::Vector3 const& __get__targetPos() const;

  constexpr void __set__targetPos(::UnityEngine::Vector3 value);

  /// @brief Method set_TargetPos addr 0x1f9ae58 size 0x48 virtual false final false
  inline void set_TargetPos(::UnityEngine::Vector3 value);

  /// @brief Method get_TargetPos addr 0x1f9af60 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_TargetPos();

  /// @brief Method Awake addr 0x1f9af6c size 0x1c virtual false final false
  inline void Awake();

  /// @brief Method AnimateToNewPos addr 0x1f9aea0 size 0xc0 virtual false final false
  inline void AnimateToNewPos(::UnityEngine::Vector3 pos);

  /// @brief Method AnimateToNewPosCoroutine addr 0x1f9af88 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* AnimateToNewPosCoroutine(::UnityEngine::Vector3 pos);

  static inline ::GlobalNamespace::TweenPosition* New_ctor();

  /// @brief Method .ctor addr 0x1f9b018 size 0x3c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TweenPosition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweenPosition(TweenPosition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweenPosition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweenPosition(TweenPosition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweenPosition();

public:
  /// @brief Field _unscaledTime, offset: 0x18, size: 0x1, def value: None
  bool ____unscaledTime;

  /// @brief Field _localPosition, offset: 0x19, size: 0x1, def value: None
  bool ____localPosition;

  /// @brief Field _duration, offset: 0x1c, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _animationCurve, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____animationCurve;

  /// @brief Field _transform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  /// @brief Field _targetPos, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____targetPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TweenPosition, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TweenPosition, ____unscaledTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TweenPosition, ____localPosition) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TweenPosition, ____duration) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TweenPosition, ____animationCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TweenPosition, ____transform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TweenPosition, ____targetPos) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TweenPosition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TweenPosition*, "", "TweenPosition");
NEED_NO_BOX(::GlobalNamespace::__TweenPosition___AnimateToNewPosCoroutine_d__11);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TweenPosition___AnimateToNewPosCoroutine_d__11*, "", "TweenPosition/<AnimateToNewPosCoroutine>d__11");
