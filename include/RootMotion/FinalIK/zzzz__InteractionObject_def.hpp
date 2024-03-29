#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__InteractionObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractionObject)
namespace GlobalNamespace {
struct __InteractionObject__WeightCurve__Type;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace RootMotion::FinalIK {
class InteractionSystem;
}
namespace RootMotion::FinalIK {
class InteractionTarget;
}
namespace RootMotion::FinalIK {
class __InteractionObject__AnimatorEvent;
}
namespace RootMotion::FinalIK {
class __InteractionObject__InteractionEvent;
}
namespace RootMotion::FinalIK {
class __InteractionObject__Message;
}
namespace RootMotion::FinalIK {
class __InteractionObject__Multiplier;
}
namespace RootMotion::FinalIK {
class __InteractionObject__WeightCurve;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct __InteractionObject__WeightCurve__Type;
}
namespace RootMotion::FinalIK {
class InteractionObject;
}
namespace RootMotion::FinalIK {
class __InteractionObject__AnimatorEvent;
}
namespace RootMotion::FinalIK {
class __InteractionObject__InteractionEvent;
}
namespace RootMotion::FinalIK {
class __InteractionObject__Message;
}
namespace RootMotion::FinalIK {
class __InteractionObject__Multiplier;
}
namespace RootMotion::FinalIK {
class __InteractionObject__WeightCurve;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__InteractionObject__WeightCurve__Type);
MARK_REF_PTR_T(::RootMotion::FinalIK::InteractionObject);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionObject__AnimatorEvent);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionObject__InteractionEvent);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionObject__Message);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionObject__Multiplier);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionObject__WeightCurve);
// Type: ::InteractionEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::InteractionObject::InteractionEvent*
class CORDL_TYPE __InteractionObject__InteractionEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field animations, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_animations,
      put = __cordl_internal_set_animations))::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*> animations;

  /// @brief Field messages, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_messages,
                      put = __cordl_internal_set_messages))::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*, ::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*> messages;

  /// @brief Field pause, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_pause, put = __cordl_internal_set_pause)) bool pause;

  /// @brief Field pickUp, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_pickUp, put = __cordl_internal_set_pickUp)) bool pickUp;

  /// @brief Field time, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Field unityEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_unityEvent, put = __cordl_internal_set_unityEvent))::UnityEngine::Events::UnityEvent* unityEvent;

  /// @brief Method Activate, addr 0x1389450, size 0xc4, virtual false, abstract: false, final false
  inline void Activate(::UnityEngine::Transform* t);

  static inline ::RootMotion::FinalIK::__InteractionObject__InteractionEvent* New_ctor();

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*> const& __cordl_internal_get_animations() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*>& __cordl_internal_get_animations();

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*, ::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*> const& __cordl_internal_get_messages() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*, ::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*>& __cordl_internal_get_messages();

  constexpr bool const& __cordl_internal_get_pause() const;

  constexpr bool& __cordl_internal_get_pause();

  constexpr bool const& __cordl_internal_get_pickUp() const;

  constexpr bool& __cordl_internal_get_pickUp();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_unityEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_unityEvent() const;

  constexpr void __cordl_internal_set_animations(::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*> value);

  constexpr void __cordl_internal_set_messages(::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*, ::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*> value);

  constexpr void __cordl_internal_set_pause(bool value);

  constexpr void __cordl_internal_set_pickUp(bool value);

  constexpr void __cordl_internal_set_time(float_t value);

  constexpr void __cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent* value);

  /// @brief Method .ctor, addr 0x138acd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionObject__InteractionEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InteractionObject__InteractionEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionObject__InteractionEvent(__InteractionObject__InteractionEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionObject__InteractionEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionObject__InteractionEvent(__InteractionObject__InteractionEvent const&) = delete;

  /// @brief Field time, offset: 0x10, size: 0x4, def value: None
  float_t ___time;

  /// @brief Field pause, offset: 0x14, size: 0x1, def value: None
  bool ___pause;

  /// @brief Field pickUp, offset: 0x15, size: 0x1, def value: None
  bool ___pickUp;

  /// @brief Field animations, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*>*> ___animations;

  /// @brief Field messages, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Message*, ::Array<::RootMotion::FinalIK::__InteractionObject__Message*>*> ___messages;

  /// @brief Field unityEvent, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___unityEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionObject__InteractionEvent, 0x30>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__InteractionEvent, ___time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__InteractionEvent, ___pause) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__InteractionEvent, ___pickUp) == 0x15, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__InteractionEvent, ___animations) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__InteractionEvent, ___messages) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__InteractionEvent, ___unityEvent) == 0x28, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Message
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::InteractionObject::Message*
class CORDL_TYPE __InteractionObject__Message : public ::System::Object {
public:
  // Declarations
  /// @brief Field function, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_function, put = __cordl_internal_set_function))::StringW function;

  /// @brief Field recipient, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_recipient, put = __cordl_internal_set_recipient))::UnityW<::UnityEngine::GameObject> recipient;

  static inline ::RootMotion::FinalIK::__InteractionObject__Message* New_ctor();

  /// @brief Method Send, addr 0x138abe0, size 0xf8, virtual false, abstract: false, final false
  inline void Send(::UnityEngine::Transform* t);

  constexpr ::StringW const& __cordl_internal_get_function() const;

  constexpr ::StringW& __cordl_internal_get_function();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_recipient() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_recipient();

  constexpr void __cordl_internal_set_function(::StringW value);

  constexpr void __cordl_internal_set_recipient(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x138ace0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionObject__Message();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InteractionObject__Message", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionObject__Message(__InteractionObject__Message&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionObject__Message", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionObject__Message(__InteractionObject__Message const&) = delete;

  /// @brief Field function, offset: 0x10, size: 0x8, def value: None
  ::StringW ___function;

  /// @brief Field recipient, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___recipient;

  /// @brief Field empty offset 0xffffffff size 0x8
  static constexpr ::ConstString empty{ u"" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionObject__Message, 0x20>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__Message, ___function) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__Message, ___recipient) == 0x18, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::AnimatorEvent
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::InteractionObject::AnimatorEvent*
class CORDL_TYPE __InteractionObject__AnimatorEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field animation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_animation, put = __cordl_internal_set_animation))::UnityW<::UnityEngine::Animation> animation;

  /// @brief Field animationState, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_animationState, put = __cordl_internal_set_animationState))::StringW animationState;

  /// @brief Field animator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_animator, put = __cordl_internal_set_animator))::UnityW<::UnityEngine::Animator> animator;

  /// @brief Field crossfadeTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_crossfadeTime, put = __cordl_internal_set_crossfadeTime)) float_t crossfadeTime;

  /// @brief Field layer, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_layer, put = __cordl_internal_set_layer)) int32_t layer;

  /// @brief Field resetNormalizedTime, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_resetNormalizedTime, put = __cordl_internal_set_resetNormalizedTime)) bool resetNormalizedTime;

  /// @brief Method Activate, addr 0x138ad98, size 0xd8, virtual false, abstract: false, final false
  inline void Activate(::UnityEngine::Animation* animation);

  /// @brief Method Activate, addr 0x138ace8, size 0xb0, virtual false, abstract: false, final false
  inline void Activate(::UnityEngine::Animator* animator);

  /// @brief Method Activate, addr 0x138ab04, size 0xdc, virtual false, abstract: false, final false
  inline void Activate(bool pickUp);

  static inline ::RootMotion::FinalIK::__InteractionObject__AnimatorEvent* New_ctor();

  constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_animation() const;

  constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_animation();

  constexpr ::StringW const& __cordl_internal_get_animationState() const;

  constexpr ::StringW& __cordl_internal_get_animationState();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator();

  constexpr float_t const& __cordl_internal_get_crossfadeTime() const;

  constexpr float_t& __cordl_internal_get_crossfadeTime();

  constexpr int32_t const& __cordl_internal_get_layer() const;

  constexpr int32_t& __cordl_internal_get_layer();

  constexpr bool const& __cordl_internal_get_resetNormalizedTime() const;

  constexpr bool& __cordl_internal_get_resetNormalizedTime();

  constexpr void __cordl_internal_set_animation(::UnityW<::UnityEngine::Animation> value);

  constexpr void __cordl_internal_set_animationState(::StringW value);

  constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set_crossfadeTime(float_t value);

  constexpr void __cordl_internal_set_layer(int32_t value);

  constexpr void __cordl_internal_set_resetNormalizedTime(bool value);

  /// @brief Method .ctor, addr 0x138ae70, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionObject__AnimatorEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InteractionObject__AnimatorEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionObject__AnimatorEvent(__InteractionObject__AnimatorEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionObject__AnimatorEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionObject__AnimatorEvent(__InteractionObject__AnimatorEvent const&) = delete;

  /// @brief Field animator, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ___animator;

  /// @brief Field animation, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animation> ___animation;

  /// @brief Field animationState, offset: 0x20, size: 0x8, def value: None
  ::StringW ___animationState;

  /// @brief Field crossfadeTime, offset: 0x28, size: 0x4, def value: None
  float_t ___crossfadeTime;

  /// @brief Field layer, offset: 0x2c, size: 0x4, def value: None
  int32_t ___layer;

  /// @brief Field resetNormalizedTime, offset: 0x30, size: 0x1, def value: None
  bool ___resetNormalizedTime;

  /// @brief Field empty offset 0xffffffff size 0x8
  static constexpr ::ConstString empty{ u"" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionObject__AnimatorEvent, 0x38>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__AnimatorEvent, ___animator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__AnimatorEvent, ___animation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__AnimatorEvent, ___animationState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__AnimatorEvent, ___crossfadeTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__AnimatorEvent, ___layer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__AnimatorEvent, ___resetNormalizedTime) == 0x30, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InteractionObject::WeightCurve::Type
struct CORDL_TYPE __InteractionObject__WeightCurve__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InteractionObject__WeightCurve__Type_Unwrapped
  enum struct ____InteractionObject__WeightCurve__Type_Unwrapped : int32_t {
    __E_PositionWeight = static_cast<int32_t>(0x0),
    __E_RotationWeight = static_cast<int32_t>(0x1),
    __E_PositionOffsetX = static_cast<int32_t>(0x2),
    __E_PositionOffsetY = static_cast<int32_t>(0x3),
    __E_PositionOffsetZ = static_cast<int32_t>(0x4),
    __E_Pull = static_cast<int32_t>(0x5),
    __E_Reach = static_cast<int32_t>(0x6),
    __E_RotateBoneWeight = static_cast<int32_t>(0x7),
    __E_Push = static_cast<int32_t>(0x8),
    __E_PushParent = static_cast<int32_t>(0x9),
    __E_PoserWeight = static_cast<int32_t>(0xa),
    __E_BendGoalWeight = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InteractionObject__WeightCurve__Type_Unwrapped() const noexcept {
    return static_cast<____InteractionObject__WeightCurve__Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionObject__WeightCurve__Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InteractionObject__WeightCurve__Type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BendGoalWeight value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__InteractionObject__WeightCurve__Type const BendGoalWeight;

  /// @brief Field PoserWeight value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__InteractionObject__WeightCurve__Type const PoserWeight;

  /// @brief Field PositionOffsetX value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__InteractionObject__WeightCurve__Type const PositionOffsetX;

  /// @brief Field PositionOffsetY value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__InteractionObject__WeightCurve__Type const PositionOffsetY;

  /// @brief Field PositionOffsetZ value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__InteractionObject__WeightCurve__Type const PositionOffsetZ;

  /// @brief Field PositionWeight value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__InteractionObject__WeightCurve__Type const PositionWeight;

  /// @brief Field Pull value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__InteractionObject__WeightCurve__Type const Pull;

  /// @brief Field Push value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__InteractionObject__WeightCurve__Type const Push;

  /// @brief Field PushParent value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__InteractionObject__WeightCurve__Type const PushParent;

  /// @brief Field Reach value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__InteractionObject__WeightCurve__Type const Reach;

  /// @brief Field RotateBoneWeight value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__InteractionObject__WeightCurve__Type const RotateBoneWeight;

  /// @brief Field RotationWeight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__InteractionObject__WeightCurve__Type const RotationWeight;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InteractionObject__WeightCurve__Type, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InteractionObject__WeightCurve__Type, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::WeightCurve
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::InteractionObject::WeightCurve*
class CORDL_TYPE __InteractionObject__WeightCurve : public ::System::Object {
public:
  // Declarations
  using Type = ::GlobalNamespace::__InteractionObject__WeightCurve__Type;

  /// @brief Field curve, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_curve, put = __cordl_internal_set_curve))::UnityEngine::AnimationCurve* curve;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::GlobalNamespace::__InteractionObject__WeightCurve__Type type;

  /// @brief Method GetValue, addr 0x138a414, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetValue(float_t timer);

  static inline ::RootMotion::FinalIK::__InteractionObject__WeightCurve* New_ctor();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_curve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_curve() const;

  constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type const& __cordl_internal_get_type() const;

  constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_curve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_type(::GlobalNamespace::__InteractionObject__WeightCurve__Type value);

  /// @brief Method .ctor, addr 0x138ae84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionObject__WeightCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InteractionObject__WeightCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionObject__WeightCurve(__InteractionObject__WeightCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionObject__WeightCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionObject__WeightCurve(__InteractionObject__WeightCurve const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__InteractionObject__WeightCurve__Type ___type;

  /// @brief Field curve, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___curve;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionObject__WeightCurve, 0x20>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__WeightCurve, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__WeightCurve, ___curve) == 0x18, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Multiplier
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::InteractionObject::Multiplier*
class CORDL_TYPE __InteractionObject__Multiplier : public ::System::Object {
public:
  // Declarations
  /// @brief Field curve, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_curve, put = __cordl_internal_set_curve))::GlobalNamespace::__InteractionObject__WeightCurve__Type curve;

  /// @brief Field multiplier, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_multiplier, put = __cordl_internal_set_multiplier)) float_t multiplier;

  /// @brief Field result, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result))::GlobalNamespace::__InteractionObject__WeightCurve__Type result;

  /// @brief Method GetValue, addr 0x138aa1c, size 0x30, virtual false, abstract: false, final false
  inline float_t GetValue(::RootMotion::FinalIK::__InteractionObject__WeightCurve* weightCurve, float_t timer);

  static inline ::RootMotion::FinalIK::__InteractionObject__Multiplier* New_ctor();

  constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type const& __cordl_internal_get_curve() const;

  constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type& __cordl_internal_get_curve();

  constexpr float_t const& __cordl_internal_get_multiplier() const;

  constexpr float_t& __cordl_internal_get_multiplier();

  constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type const& __cordl_internal_get_result() const;

  constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type& __cordl_internal_get_result();

  constexpr void __cordl_internal_set_curve(::GlobalNamespace::__InteractionObject__WeightCurve__Type value);

  constexpr void __cordl_internal_set_multiplier(float_t value);

  constexpr void __cordl_internal_set_result(::GlobalNamespace::__InteractionObject__WeightCurve__Type value);

  /// @brief Method .ctor, addr 0x138ae8c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionObject__Multiplier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InteractionObject__Multiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionObject__Multiplier(__InteractionObject__Multiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionObject__Multiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionObject__Multiplier(__InteractionObject__Multiplier const&) = delete;

  /// @brief Field curve, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__InteractionObject__WeightCurve__Type ___curve;

  /// @brief Field multiplier, offset: 0x14, size: 0x4, def value: None
  float_t ___multiplier;

  /// @brief Field result, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__InteractionObject__WeightCurve__Type ___result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionObject__Multiplier, 0x20>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__Multiplier, ___curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__Multiplier, ___multiplier) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionObject__Multiplier, ___result) == 0x18, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::InteractionObject
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::InteractionObject*
class CORDL_TYPE InteractionObject : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AnimatorEvent = ::RootMotion::FinalIK::__InteractionObject__AnimatorEvent;

  using InteractionEvent = ::RootMotion::FinalIK::__InteractionObject__InteractionEvent;

  using Message = ::RootMotion::FinalIK::__InteractionObject__Message;

  using Multiplier = ::RootMotion::FinalIK::__InteractionObject__Multiplier;

  using WeightCurve = ::RootMotion::FinalIK::__InteractionObject__WeightCurve;

  /// @brief Field <lastUsedInteractionSystem>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__lastUsedInteractionSystem_k__BackingField,
                      put = __cordl_internal_set__lastUsedInteractionSystem_k__BackingField))::UnityW<::RootMotion::FinalIK::InteractionSystem> _lastUsedInteractionSystem_k__BackingField;

  /// @brief Field <length>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__length_k__BackingField, put = __cordl_internal_set__length_k__BackingField)) float_t _length_k__BackingField;

  /// @brief Field events, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_events,
      put = __cordl_internal_set_events))::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*> events;

  __declspec(property(get = get_lastUsedInteractionSystem, put = set_lastUsedInteractionSystem))::UnityW<::RootMotion::FinalIK::InteractionSystem> lastUsedInteractionSystem;

  __declspec(property(get = get_length, put = set_length)) float_t length;

  __declspec(property(get = get_lookAtTarget))::UnityW<::UnityEngine::Transform> lookAtTarget;

  /// @brief Field multipliers, offset 0x38, size 0x8
  __declspec(
      property(get = __cordl_internal_get_multipliers,
               put = __cordl_internal_set_multipliers))::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*, ::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*> multipliers;

  /// @brief Field otherLookAtTarget, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_otherLookAtTarget, put = __cordl_internal_set_otherLookAtTarget))::UnityW<::UnityEngine::Transform> otherLookAtTarget;

  /// @brief Field otherTargetsRoot, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_otherTargetsRoot, put = __cordl_internal_set_otherTargetsRoot))::UnityW<::UnityEngine::Transform> otherTargetsRoot;

  /// @brief Field positionOffsetSpace, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_positionOffsetSpace, put = __cordl_internal_set_positionOffsetSpace))::UnityW<::UnityEngine::Transform> positionOffsetSpace;

  /// @brief Field targets, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_targets,
                      put = __cordl_internal_set_targets))::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionTarget>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionTarget>>*> targets;

  __declspec(property(get = get_targetsRoot))::UnityW<::UnityEngine::Transform> targetsRoot;

  /// @brief Field weightCurves, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_weightCurves,
      put = __cordl_internal_set_weightCurves))::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*, ::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*> weightCurves;

  /// @brief Method ASThread, addr 0x1389f38, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method Apply, addr 0x138888c, size 0x408, virtual false, abstract: false, final false
  inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionTarget* target, float_t timer,
                    float_t weight);

  /// @brief Method Apply, addr 0x138a430, size 0x590, virtual false, abstract: false, final false
  inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::RootMotion::FinalIK::FullBodyBipedEffector effector, ::GlobalNamespace::__InteractionObject__WeightCurve__Type type,
                    float_t value, float_t weight);

  /// @brief Method CurveUsed, addr 0x1387d14, size 0x94, virtual false, abstract: false, final false
  inline bool CurveUsed(::GlobalNamespace::__InteractionObject__WeightCurve__Type type);

  /// @brief Method GetMultiplierIndex, addr 0x138aa50, size 0x5c, virtual false, abstract: false, final false
  inline int32_t GetMultiplierIndex(::GlobalNamespace::__InteractionObject__WeightCurve__Type weightCurveType);

  /// @brief Method GetTarget, addr 0x138a1cc, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::RootMotion::FinalIK::InteractionTarget> GetTarget(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionSystem* interactionSystem);

  /// @brief Method GetTarget, addr 0x138a34c, size 0x64, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetTarget(::RootMotion::FinalIK::FullBodyBipedEffector effectorType);

  /// @brief Method GetTarget, addr 0x1387bd0, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetTarget(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::StringW tag);

  /// @brief Method GetTargets, addr 0x138a344, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionTarget>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionTarget>>*> GetTargets();

  /// @brief Method GetValue, addr 0x13890cc, size 0x20c, virtual false, abstract: false, final false
  inline float_t GetValue(::GlobalNamespace::__InteractionObject__WeightCurve__Type weightCurveType, ::RootMotion::FinalIK::InteractionTarget* target, float_t timer);

  /// @brief Method GetWeightCurveIndex, addr 0x138a9c0, size 0x5c, virtual false, abstract: false, final false
  inline int32_t GetWeightCurveIndex(::GlobalNamespace::__InteractionObject__WeightCurve__Type weightCurveType);

  /// @brief Method Initiate, addr 0x1389f9c, size 0x1b0, virtual false, abstract: false, final false
  inline void Initiate();

  static inline ::RootMotion::FinalIK::InteractionObject* New_ctor();

  /// @brief Method OnStartInteraction, addr 0x1387d0c, size 0x8, virtual false, abstract: false, final false
  inline void OnStartInteraction(::RootMotion::FinalIK::InteractionSystem* interactionSystem);

  /// @brief Method OpenScriptReference, addr 0x1389da0, size 0x44, virtual false, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenTutorial1, addr 0x1389de4, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial1();

  /// @brief Method OpenTutorial2, addr 0x1389e28, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial2();

  /// @brief Method OpenTutorial3, addr 0x1389e6c, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial3();

  /// @brief Method OpenTutorial4, addr 0x1389eb0, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial4();

  /// @brief Method OpenUserManual, addr 0x1389d5c, size 0x44, virtual false, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method Start, addr 0x138aa4c, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method SupportGroup, addr 0x1389ef4, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  constexpr ::UnityW<::RootMotion::FinalIK::InteractionSystem> const& __cordl_internal_get__lastUsedInteractionSystem_k__BackingField() const;

  constexpr ::UnityW<::RootMotion::FinalIK::InteractionSystem>& __cordl_internal_get__lastUsedInteractionSystem_k__BackingField();

  constexpr float_t const& __cordl_internal_get__length_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__length_k__BackingField();

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*> const& __cordl_internal_get_events() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*>& __cordl_internal_get_events();

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*, ::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*> const& __cordl_internal_get_multipliers() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*, ::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*>& __cordl_internal_get_multipliers();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_otherLookAtTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_otherLookAtTarget();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_otherTargetsRoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_otherTargetsRoot();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_positionOffsetSpace() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_positionOffsetSpace();

  constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionTarget>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionTarget>>*> const& __cordl_internal_get_targets() const;

  constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionTarget>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionTarget>>*>& __cordl_internal_get_targets();

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*, ::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*> const& __cordl_internal_get_weightCurves() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*, ::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*>& __cordl_internal_get_weightCurves();

  constexpr void __cordl_internal_set__lastUsedInteractionSystem_k__BackingField(::UnityW<::RootMotion::FinalIK::InteractionSystem> value);

  constexpr void __cordl_internal_set__length_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_events(::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*> value);

  constexpr void __cordl_internal_set_multipliers(::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*, ::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*> value);

  constexpr void __cordl_internal_set_otherLookAtTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_otherTargetsRoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_positionOffsetSpace(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_targets(::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionTarget>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionTarget>>*> value);

  constexpr void __cordl_internal_set_weightCurves(::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*, ::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*> value);

  /// @brief Method .ctor, addr 0x138aaac, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lastUsedInteractionSystem, addr 0x1389f8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::RootMotion::FinalIK::InteractionSystem> get_lastUsedInteractionSystem();

  /// @brief Method get_length, addr 0x1389f7c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_length();

  /// @brief Method get_lookAtTarget, addr 0x138a14c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_lookAtTarget();

  /// @brief Method get_targetsRoot, addr 0x1389514, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_targetsRoot();

  /// @brief Method set_lastUsedInteractionSystem, addr 0x1389f94, size 0x8, virtual false, abstract: false, final false
  inline void set_lastUsedInteractionSystem(::RootMotion::FinalIK::InteractionSystem* value);

  /// @brief Method set_length, addr 0x1389f84, size 0x8, virtual false, abstract: false, final false
  inline void set_length(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractionObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractionObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractionObject(InteractionObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractionObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractionObject(InteractionObject const&) = delete;

  /// @brief Field otherLookAtTarget, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___otherLookAtTarget;

  /// @brief Field otherTargetsRoot, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___otherTargetsRoot;

  /// @brief Field positionOffsetSpace, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___positionOffsetSpace;

  /// @brief Field weightCurves, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__InteractionObject__WeightCurve*, ::Array<::RootMotion::FinalIK::__InteractionObject__WeightCurve*>*> ___weightCurves;

  /// @brief Field multipliers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__InteractionObject__Multiplier*, ::Array<::RootMotion::FinalIK::__InteractionObject__Multiplier*>*> ___multipliers;

  /// @brief Field events, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*, ::Array<::RootMotion::FinalIK::__InteractionObject__InteractionEvent*>*> ___events;

  /// @brief Field <length>k__BackingField, offset: 0x48, size: 0x4, def value: None
  float_t ____length_k__BackingField;

  /// @brief Field <lastUsedInteractionSystem>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::InteractionSystem> ____lastUsedInteractionSystem_k__BackingField;

  /// @brief Field targets, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::RootMotion::FinalIK::InteractionTarget>, ::Array<::UnityW<::RootMotion::FinalIK::InteractionTarget>>*> ___targets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::InteractionObject, 0x60>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionObject, ___otherLookAtTarget) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionObject, ___otherTargetsRoot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionObject, ___positionOffsetSpace) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionObject, ___weightCurves) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionObject, ___multipliers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionObject, ___events) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionObject, ____length_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionObject, ____lastUsedInteractionSystem_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionObject, ___targets) == 0x58, "Offset mismatch!");

} // namespace RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InteractionObject__WeightCurve__Type, "RootMotion.FinalIK", "InteractionObject/WeightCurve/Type");
NEED_NO_BOX(::RootMotion::FinalIK::InteractionObject);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionObject*, "RootMotion.FinalIK", "InteractionObject");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionObject__AnimatorEvent);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionObject__AnimatorEvent*, "RootMotion.FinalIK", "InteractionObject/AnimatorEvent");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionObject__InteractionEvent);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionObject__InteractionEvent*, "RootMotion.FinalIK", "InteractionObject/InteractionEvent");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionObject__Message);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionObject__Message*, "RootMotion.FinalIK", "InteractionObject/Message");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionObject__Multiplier);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionObject__Multiplier*, "RootMotion.FinalIK", "InteractionObject/Multiplier");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionObject__WeightCurve);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionObject__WeightCurve*, "RootMotion.FinalIK", "InteractionObject/WeightCurve");
