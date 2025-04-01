#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomTweenBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomTweenBehaviour)
namespace GlobalNamespace {
class CustomTweenBehaviour___c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomTweenBehaviour;
}
namespace GlobalNamespace {
class CustomTweenBehaviour___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomTweenBehaviour);
MARK_REF_PTR_T(::GlobalNamespace::CustomTweenBehaviour___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomTweenBehaviour/<>c
class CORDL_TYPE CustomTweenBehaviour___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::CustomTweenBehaviour___c* __9;

  /// @brief Field <>9__21_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_0, put = setStaticF___9__21_0)) ::System::Func_2<int32_t, float_t>* __9__21_0;

  static inline ::GlobalNamespace::CustomTweenBehaviour___c* New_ctor();

  /// @brief Method <OnBehaviourPlay>b__21_0, addr 0x3b2fd24, size 0x8, virtual false, abstract: false, final false
  inline float_t _OnBehaviourPlay_b__21_0(int32_t i);

  /// @brief Method .ctor, addr 0x3b2fd1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::CustomTweenBehaviour___c* getStaticF___9();

  static inline ::System::Func_2<int32_t, float_t>* getStaticF___9__21_0();

  static inline void setStaticF___9(::GlobalNamespace::CustomTweenBehaviour___c* value);

  static inline void setStaticF___9__21_0(::System::Func_2<int32_t, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomTweenBehaviour___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomTweenBehaviour___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomTweenBehaviour___c(CustomTweenBehaviour___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomTweenBehaviour___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomTweenBehaviour___c(CustomTweenBehaviour___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5201 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomTweenBehaviour___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EaseType, UnityEngine.Playables.PlayableBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomTweenBehaviour
class CORDL_TYPE CustomTweenBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::CustomTweenBehaviour___c;

  /// @brief Field _duration, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__duration, put = __cordl_internal_set__duration)) float_t _duration;

  /// @brief Field _initialized, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _lockX, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__lockX, put = __cordl_internal_set__lockX)) bool _lockX;

  /// @brief Field _lockY, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__lockY, put = __cordl_internal_set__lockY)) bool _lockY;

  /// @brief Field _lockZ, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get__lockZ, put = __cordl_internal_set__lockZ)) bool _lockZ;

  /// @brief Field _originalLocalPos, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__originalLocalPos, put = __cordl_internal_set__originalLocalPos)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _originalLocalPos;

  /// @brief Field _perItemDuration, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__perItemDuration, put = __cordl_internal_set__perItemDuration)) float_t _perItemDuration;

  /// @brief Field _randomizeOrder, offset 0x43, size 0x1
  __declspec(property(get = __cordl_internal_get__randomizeOrder, put = __cordl_internal_set__randomizeOrder)) bool _randomizeOrder;

  /// @brief Field _randomizedDuration, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__randomizedDuration, put = __cordl_internal_set__randomizedDuration)) ::ArrayW<float_t, ::Array<float_t>*> _randomizedDuration;

  /// @brief Field _randomizedMinDurationMultiplier, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__randomizedMinDurationMultiplier, put = __cordl_internal_set__randomizedMinDurationMultiplier)) float_t _randomizedMinDurationMultiplier;

  /// @brief Field _randomizedOrder, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__randomizedOrder, put = __cordl_internal_set__randomizedOrder)) ::ArrayW<int32_t, ::Array<int32_t>*> _randomizedOrder;

  /// @brief Field _transforms, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__transforms, put = __cordl_internal_set__transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
      _transforms;

  /// @brief Field easeType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType)) ::GlobalNamespace::EaseType easeType;

  /// @brief Field elementDelay, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_elementDelay, put = __cordl_internal_set_elementDelay)) float_t elementDelay;

  /// @brief Field endLocalPos, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_endLocalPos, put = __cordl_internal_set_endLocalPos)) ::UnityEngine::Vector3 endLocalPos;

  /// @brief Field endXRelativeToSelfRotation, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_endXRelativeToSelfRotation, put = __cordl_internal_set_endXRelativeToSelfRotation)) bool endXRelativeToSelfRotation;

  /// @brief Field startLocalPos, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_startLocalPos, put = __cordl_internal_set_startLocalPos)) ::UnityEngine::Vector3 startLocalPos;

  /// @brief Field startLocationCurrentPosition, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_startLocationCurrentPosition, put = __cordl_internal_set_startLocationCurrentPosition)) bool startLocationCurrentPosition;

  static inline ::GlobalNamespace::CustomTweenBehaviour* New_ctor();

  /// @brief Method OnBehaviourPlay, addr 0x3b2fac4, size 0x1e4, virtual true, abstract: false, final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnGraphStart, addr 0x3b2f49c, size 0x13c, virtual true, abstract: false, final false
  inline void OnGraphStart(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnPlayableDestroy, addr 0x3b2f9c0, size 0x104, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method ProcessFrame, addr 0x3b2f5d8, size 0x3e8, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  constexpr float_t const& __cordl_internal_get__duration() const;

  constexpr float_t& __cordl_internal_get__duration();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr bool const& __cordl_internal_get__lockX() const;

  constexpr bool& __cordl_internal_get__lockX();

  constexpr bool const& __cordl_internal_get__lockY() const;

  constexpr bool& __cordl_internal_get__lockY();

  constexpr bool const& __cordl_internal_get__lockZ() const;

  constexpr bool& __cordl_internal_get__lockZ();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__originalLocalPos() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__originalLocalPos();

  constexpr float_t const& __cordl_internal_get__perItemDuration() const;

  constexpr float_t& __cordl_internal_get__perItemDuration();

  constexpr bool const& __cordl_internal_get__randomizeOrder() const;

  constexpr bool& __cordl_internal_get__randomizeOrder();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__randomizedDuration() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__randomizedDuration();

  constexpr float_t const& __cordl_internal_get__randomizedMinDurationMultiplier() const;

  constexpr float_t& __cordl_internal_get__randomizedMinDurationMultiplier();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__randomizedOrder() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__randomizedOrder();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get__transforms() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get__transforms();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr float_t const& __cordl_internal_get_elementDelay() const;

  constexpr float_t& __cordl_internal_get_elementDelay();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endLocalPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_endLocalPos();

  constexpr bool const& __cordl_internal_get_endXRelativeToSelfRotation() const;

  constexpr bool& __cordl_internal_get_endXRelativeToSelfRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startLocalPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_startLocalPos();

  constexpr bool const& __cordl_internal_get_startLocationCurrentPosition() const;

  constexpr bool& __cordl_internal_get_startLocationCurrentPosition();

  constexpr void __cordl_internal_set__duration(float_t value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__lockX(bool value);

  constexpr void __cordl_internal_set__lockY(bool value);

  constexpr void __cordl_internal_set__lockZ(bool value);

  constexpr void __cordl_internal_set__originalLocalPos(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__perItemDuration(float_t value);

  constexpr void __cordl_internal_set__randomizeOrder(bool value);

  constexpr void __cordl_internal_set__randomizedDuration(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__randomizedMinDurationMultiplier(float_t value);

  constexpr void __cordl_internal_set__randomizedOrder(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_elementDelay(float_t value);

  constexpr void __cordl_internal_set_endLocalPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_endXRelativeToSelfRotation(bool value);

  constexpr void __cordl_internal_set_startLocalPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_startLocationCurrentPosition(bool value);

  /// @brief Method .ctor, addr 0x3b2fca8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomTweenBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomTweenBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomTweenBehaviour(CustomTweenBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomTweenBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomTweenBehaviour(CustomTweenBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5202 };

  /// @brief Field _transforms, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ____transforms;

  /// @brief Field startLocationCurrentPosition, offset: 0x18, size: 0x1, def value: None
  bool ___startLocationCurrentPosition;

  /// @brief Field startLocalPos, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___startLocalPos;

  /// @brief Field endLocalPos, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___endLocalPos;

  /// @brief Field easeType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  /// @brief Field endXRelativeToSelfRotation, offset: 0x38, size: 0x1, def value: None
  bool ___endXRelativeToSelfRotation;

  /// @brief Field elementDelay, offset: 0x3c, size: 0x4, def value: None
  float_t ___elementDelay;

  /// @brief Field _lockX, offset: 0x40, size: 0x1, def value: None
  bool ____lockX;

  /// @brief Field _lockY, offset: 0x41, size: 0x1, def value: None
  bool ____lockY;

  /// @brief Field _lockZ, offset: 0x42, size: 0x1, def value: None
  bool ____lockZ;

  /// @brief Field _randomizeOrder, offset: 0x43, size: 0x1, def value: None
  bool ____randomizeOrder;

  /// @brief Field _randomizedMinDurationMultiplier, offset: 0x44, size: 0x4, def value: None
  float_t ____randomizedMinDurationMultiplier;

  /// @brief Field _duration, offset: 0x48, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _perItemDuration, offset: 0x4c, size: 0x4, def value: None
  float_t ____perItemDuration;

  /// @brief Field _originalLocalPos, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____originalLocalPos;

  /// @brief Field _initialized, offset: 0x58, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _randomizedOrder, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____randomizedOrder;

  /// @brief Field _randomizedDuration, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____randomizedDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ____transforms) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ___startLocationCurrentPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ___startLocalPos) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ___endLocalPos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ___easeType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ___endXRelativeToSelfRotation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ___elementDelay) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ____lockX) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ____lockY) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ____lockZ) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ____randomizeOrder) == 0x43, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ____randomizedMinDurationMultiplier) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ____duration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ____perItemDuration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ____originalLocalPos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ____initialized) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ____randomizedOrder) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomTweenBehaviour, ____randomizedDuration) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomTweenBehaviour, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomTweenBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomTweenBehaviour*, "", "CustomTweenBehaviour");
NEED_NO_BOX(::GlobalNamespace::CustomTweenBehaviour___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomTweenBehaviour___c*, "", "CustomTweenBehaviour/<>c");
