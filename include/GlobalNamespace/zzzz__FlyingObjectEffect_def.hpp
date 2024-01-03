#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingObjectEffect)
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
namespace GlobalNamespace {
template <typename T> class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingObjectEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingObjectEffect);
// Type: ::FlyingObjectEffect
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4852))
// CS Name: ::FlyingObjectEffect*
class CORDL_TYPE FlyingObjectEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _moveAnimationCurve, offset 0x18, size 0x8
  __declspec(property(get = __get__moveAnimationCurve, put = __set__moveAnimationCurve))::UnityEngine::AnimationCurve* _moveAnimationCurve;

  /// @brief Field _shakeFrequency, offset 0x20, size 0x4
  __declspec(property(get = __get__shakeFrequency, put = __set__shakeFrequency)) float_t _shakeFrequency;

  /// @brief Field _shakeStrength, offset 0x24, size 0x4
  __declspec(property(get = __get__shakeStrength, put = __set__shakeStrength)) float_t _shakeStrength;

  /// @brief Field _shakeStrengthAnimationCurve, offset 0x28, size 0x8
  __declspec(property(get = __get__shakeStrengthAnimationCurve, put = __set__shakeStrengthAnimationCurve))::UnityEngine::AnimationCurve* _shakeStrengthAnimationCurve;

  /// @brief Field _initialized, offset 0x30, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  /// @brief Field _shakeRotation, offset 0x34, size 0x10
  __declspec(property(get = __get__shakeRotation, put = __set__shakeRotation))::UnityEngine::Quaternion _shakeRotation;

  /// @brief Field _rotation, offset 0x44, size 0x10
  __declspec(property(get = __get__rotation, put = __set__rotation))::UnityEngine::Quaternion _rotation;

  /// @brief Field _elapsedTime, offset 0x54, size 0x4
  __declspec(property(get = __get__elapsedTime, put = __set__elapsedTime)) float_t _elapsedTime;

  /// @brief Field _startPos, offset 0x58, size 0xc
  __declspec(property(get = __get__startPos, put = __set__startPos))::UnityEngine::Vector3 _startPos;

  /// @brief Field _targetPos, offset 0x64, size 0xc
  __declspec(property(get = __get__targetPos, put = __set__targetPos))::UnityEngine::Vector3 _targetPos;

  /// @brief Field _duration, offset 0x70, size 0x4
  __declspec(property(get = __get__duration, put = __set__duration)) float_t _duration;

  /// @brief Field _shake, offset 0x74, size 0x1
  __declspec(property(get = __get__shake, put = __set__shake)) bool _shake;

  /// @brief Field _didFinishEvent, offset 0x78, size 0x8
  __declspec(property(get = __get__didFinishEvent, put = __set__didFinishEvent))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* _didFinishEvent;

  __declspec(property(get = get_didFinishEvent))::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* didFinishEvent;

  constexpr ::UnityEngine::AnimationCurve*& __get__moveAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__moveAnimationCurve() const;

  constexpr void __set__moveAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __get__shakeFrequency();

  constexpr float_t const& __get__shakeFrequency() const;

  constexpr void __set__shakeFrequency(float_t value);

  constexpr float_t& __get__shakeStrength();

  constexpr float_t const& __get__shakeStrength() const;

  constexpr void __set__shakeStrength(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get__shakeStrengthAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__shakeStrengthAnimationCurve() const;

  constexpr void __set__shakeStrengthAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  constexpr ::UnityEngine::Quaternion& __get__shakeRotation();

  constexpr ::UnityEngine::Quaternion const& __get__shakeRotation() const;

  constexpr void __set__shakeRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get__rotation();

  constexpr ::UnityEngine::Quaternion const& __get__rotation() const;

  constexpr void __set__rotation(::UnityEngine::Quaternion value);

  constexpr float_t& __get__elapsedTime();

  constexpr float_t const& __get__elapsedTime() const;

  constexpr void __set__elapsedTime(float_t value);

  constexpr ::UnityEngine::Vector3& __get__startPos();

  constexpr ::UnityEngine::Vector3 const& __get__startPos() const;

  constexpr void __set__startPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__targetPos();

  constexpr ::UnityEngine::Vector3 const& __get__targetPos() const;

  constexpr void __set__targetPos(::UnityEngine::Vector3 value);

  constexpr float_t& __get__duration();

  constexpr float_t const& __get__duration() const;

  constexpr void __set__duration(float_t value);

  constexpr bool& __get__shake();

  constexpr bool const& __get__shake() const;

  constexpr void __set__shake(bool value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*& __get__didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*> const& __get__didFinishEvent() const;

  constexpr void __set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* value);

  /// @brief Method get_didFinishEvent, addr 0x239821c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* get_didFinishEvent();

  /// @brief Method InitAndPresent, addr 0x2398224, size 0xe8, virtual false, abstract: false, final false
  inline void InitAndPresent(float_t duration, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion rotation, bool shake);

  /// @brief Method Update, addr 0x239830c, size 0x3b8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method ManualUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ManualUpdate(float_t t);

  static inline ::GlobalNamespace::FlyingObjectEffect* New_ctor();

  /// @brief Method .ctor, addr 0x23986c4, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FlyingObjectEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlyingObjectEffect(FlyingObjectEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlyingObjectEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlyingObjectEffect(FlyingObjectEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlyingObjectEffect();

public:
  /// @brief Field _moveAnimationCurve, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____moveAnimationCurve;

  /// @brief Field _shakeFrequency, offset: 0x20, size: 0x4, def value: None
  float_t ____shakeFrequency;

  /// @brief Field _shakeStrength, offset: 0x24, size: 0x4, def value: None
  float_t ____shakeStrength;

  /// @brief Field _shakeStrengthAnimationCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____shakeStrengthAnimationCurve;

  /// @brief Field _initialized, offset: 0x30, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _shakeRotation, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____shakeRotation;

  /// @brief Field _rotation, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rotation;

  /// @brief Field _elapsedTime, offset: 0x54, size: 0x4, def value: None
  float_t ____elapsedTime;

  /// @brief Field _startPos, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _targetPos, offset: 0x64, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____targetPos;

  /// @brief Field _duration, offset: 0x70, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _shake, offset: 0x74, size: 0x1, def value: None
  bool ____shake;

  /// @brief Field _didFinishEvent, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* ____didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingObjectEffect, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____moveAnimationCurve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____shakeFrequency) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____shakeStrength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____shakeStrengthAnimationCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____initialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____shakeRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____rotation) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____elapsedTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____startPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____targetPos) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____duration) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____shake) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlyingObjectEffect, ____didFinishEvent) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingObjectEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingObjectEffect*, "", "FlyingObjectEffect");
