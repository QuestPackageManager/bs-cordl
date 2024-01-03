#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomTweenBehaviour)
namespace GlobalNamespace {
class __CustomTweenBehaviour____c;
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
class __CustomTweenBehaviour____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomTweenBehaviour);
MARK_REF_PTR_T(::GlobalNamespace::__CustomTweenBehaviour____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6011))
// CS Name: ::CustomTweenBehaviour::<>c*
class CORDL_TYPE __CustomTweenBehaviour____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__CustomTweenBehaviour____c* __9;

  /// @brief Field <>9__21_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__21_0, put = setStaticF___9__21_0))::System::Func_2<int32_t, float_t>* __9__21_0;

  static inline void setStaticF___9(::GlobalNamespace::__CustomTweenBehaviour____c* value);

  static inline ::GlobalNamespace::__CustomTweenBehaviour____c* getStaticF___9();

  static inline void setStaticF___9__21_0(::System::Func_2<int32_t, float_t>* value);

  static inline ::System::Func_2<int32_t, float_t>* getStaticF___9__21_0();

  static inline ::GlobalNamespace::__CustomTweenBehaviour____c* New_ctor();

  /// @brief Method .ctor, addr 0x2316224, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <OnBehaviourPlay>b__21_0, addr 0x231622c, size 0x8, virtual false, abstract: false, final false
  inline float_t _OnBehaviourPlay_b__21_0(int32_t i);

  // Ctor Parameters [CppParam { name: "", ty: "__CustomTweenBehaviour____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CustomTweenBehaviour____c(__CustomTweenBehaviour____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CustomTweenBehaviour____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CustomTweenBehaviour____c(__CustomTweenBehaviour____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CustomTweenBehaviour____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CustomTweenBehaviour____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CustomTweenBehaviour
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(16090))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6012))
// CS Name: ::CustomTweenBehaviour*
class CORDL_TYPE CustomTweenBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__CustomTweenBehaviour____c;

  /// @brief Field _transforms, offset 0x10, size 0x8
  __declspec(property(get = __get__transforms, put = __set__transforms))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> _transforms;

  /// @brief Field startLocationCurrentPosition, offset 0x18, size 0x1
  __declspec(property(get = __get_startLocationCurrentPosition, put = __set_startLocationCurrentPosition)) bool startLocationCurrentPosition;

  /// @brief Field startLocalPos, offset 0x1c, size 0xc
  __declspec(property(get = __get_startLocalPos, put = __set_startLocalPos))::UnityEngine::Vector3 startLocalPos;

  /// @brief Field endLocalPos, offset 0x28, size 0xc
  __declspec(property(get = __get_endLocalPos, put = __set_endLocalPos))::UnityEngine::Vector3 endLocalPos;

  /// @brief Field easeType, offset 0x34, size 0x4
  __declspec(property(get = __get_easeType, put = __set_easeType))::GlobalNamespace::EaseType easeType;

  /// @brief Field endXRelativeToSelfRotation, offset 0x38, size 0x1
  __declspec(property(get = __get_endXRelativeToSelfRotation, put = __set_endXRelativeToSelfRotation)) bool endXRelativeToSelfRotation;

  /// @brief Field elementDelay, offset 0x3c, size 0x4
  __declspec(property(get = __get_elementDelay, put = __set_elementDelay)) float_t elementDelay;

  /// @brief Field _lockX, offset 0x40, size 0x1
  __declspec(property(get = __get__lockX, put = __set__lockX)) bool _lockX;

  /// @brief Field _lockY, offset 0x41, size 0x1
  __declspec(property(get = __get__lockY, put = __set__lockY)) bool _lockY;

  /// @brief Field _lockZ, offset 0x42, size 0x1
  __declspec(property(get = __get__lockZ, put = __set__lockZ)) bool _lockZ;

  /// @brief Field _randomizeOrder, offset 0x43, size 0x1
  __declspec(property(get = __get__randomizeOrder, put = __set__randomizeOrder)) bool _randomizeOrder;

  /// @brief Field _randomizedMinDurationMultiplier, offset 0x44, size 0x4
  __declspec(property(get = __get__randomizedMinDurationMultiplier, put = __set__randomizedMinDurationMultiplier)) float_t _randomizedMinDurationMultiplier;

  /// @brief Field _duration, offset 0x48, size 0x4
  __declspec(property(get = __get__duration, put = __set__duration)) float_t _duration;

  /// @brief Field _perItemDuration, offset 0x4c, size 0x4
  __declspec(property(get = __get__perItemDuration, put = __set__perItemDuration)) float_t _perItemDuration;

  /// @brief Field _originalLocalPos, offset 0x50, size 0x8
  __declspec(property(get = __get__originalLocalPos, put = __set__originalLocalPos))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _originalLocalPos;

  /// @brief Field _initialized, offset 0x58, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  /// @brief Field _randomizedOrder, offset 0x60, size 0x8
  __declspec(property(get = __get__randomizedOrder, put = __set__randomizedOrder))::ArrayW<int32_t, ::Array<int32_t>*> _randomizedOrder;

  /// @brief Field _randomizedDuration, offset 0x68, size 0x8
  __declspec(property(get = __get__randomizedDuration, put = __set__randomizedDuration))::ArrayW<float_t, ::Array<float_t>*> _randomizedDuration;

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get__transforms();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get__transforms() const;

  constexpr void __set__transforms(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr bool& __get_startLocationCurrentPosition();

  constexpr bool const& __get_startLocationCurrentPosition() const;

  constexpr void __set_startLocationCurrentPosition(bool value);

  constexpr ::UnityEngine::Vector3& __get_startLocalPos();

  constexpr ::UnityEngine::Vector3 const& __get_startLocalPos() const;

  constexpr void __set_startLocalPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_endLocalPos();

  constexpr ::UnityEngine::Vector3 const& __get_endLocalPos() const;

  constexpr void __set_endLocalPos(::UnityEngine::Vector3 value);

  constexpr ::GlobalNamespace::EaseType& __get_easeType();

  constexpr ::GlobalNamespace::EaseType const& __get_easeType() const;

  constexpr void __set_easeType(::GlobalNamespace::EaseType value);

  constexpr bool& __get_endXRelativeToSelfRotation();

  constexpr bool const& __get_endXRelativeToSelfRotation() const;

  constexpr void __set_endXRelativeToSelfRotation(bool value);

  constexpr float_t& __get_elementDelay();

  constexpr float_t const& __get_elementDelay() const;

  constexpr void __set_elementDelay(float_t value);

  constexpr bool& __get__lockX();

  constexpr bool const& __get__lockX() const;

  constexpr void __set__lockX(bool value);

  constexpr bool& __get__lockY();

  constexpr bool const& __get__lockY() const;

  constexpr void __set__lockY(bool value);

  constexpr bool& __get__lockZ();

  constexpr bool const& __get__lockZ() const;

  constexpr void __set__lockZ(bool value);

  constexpr bool& __get__randomizeOrder();

  constexpr bool const& __get__randomizeOrder() const;

  constexpr void __set__randomizeOrder(bool value);

  constexpr float_t& __get__randomizedMinDurationMultiplier();

  constexpr float_t const& __get__randomizedMinDurationMultiplier() const;

  constexpr void __set__randomizedMinDurationMultiplier(float_t value);

  constexpr float_t& __get__duration();

  constexpr float_t const& __get__duration() const;

  constexpr void __set__duration(float_t value);

  constexpr float_t& __get__perItemDuration();

  constexpr float_t const& __get__perItemDuration() const;

  constexpr void __set__perItemDuration(float_t value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get__originalLocalPos();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get__originalLocalPos() const;

  constexpr void __set__originalLocalPos(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__randomizedOrder();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__randomizedOrder() const;

  constexpr void __set__randomizedOrder(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__randomizedDuration();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__randomizedDuration() const;

  constexpr void __set__randomizedDuration(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method OnGraphStart, addr 0x231599c, size 0x13c, virtual true, abstract: false, final false
  inline void OnGraphStart(::UnityEngine::Playables::Playable playable);

  /// @brief Method ProcessFrame, addr 0x2315ad8, size 0x3e0, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  /// @brief Method OnPlayableDestroy, addr 0x2315eb8, size 0x104, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnBehaviourPlay, addr 0x2315fbc, size 0x1ec, virtual true, abstract: false, final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  static inline ::GlobalNamespace::CustomTweenBehaviour* New_ctor();

  /// @brief Method .ctor, addr 0x23161a8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CustomTweenBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomTweenBehaviour(CustomTweenBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomTweenBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomTweenBehaviour(CustomTweenBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomTweenBehaviour();

public:
  /// @brief Field _transforms, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ____transforms;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomTweenBehaviour, 0x70>, "Size mismatch!");

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomTweenBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomTweenBehaviour*, "", "CustomTweenBehaviour");
NEED_NO_BOX(::GlobalNamespace::__CustomTweenBehaviour____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CustomTweenBehaviour____c*, "", "CustomTweenBehaviour/<>c");
