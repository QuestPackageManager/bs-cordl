#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BTSStarTextEventEffect)
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class __BTSStarTextEventEffect__StarTextSprite;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class __BTSStarTextEventEffect__StartTextPosition;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEventEffect;
}
namespace GlobalNamespace {
class __BTSStarTextEventEffect__StarTextSprite;
}
namespace GlobalNamespace {
class __BTSStarTextEventEffect__StartTextPosition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSStarTextEventEffect);
MARK_REF_PTR_T(::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite);
MARK_REF_PTR_T(::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition);
// Type: ::StarTextSprite
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3969))
// CS Name: ::BTSStarTextEventEffect::StarTextSprite*
class CORDL_TYPE __BTSStarTextEventEffect__StarTextSprite : public ::System::Object {
public:
  // Declarations
  /// @brief Field _id, offset 0x10, size 0x4
  __declspec(property(get = __get__id, put = __set__id)) int32_t _id;

  /// @brief Field _starTextSprite, offset 0x18, size 0x8
  __declspec(property(get = __get__starTextSprite, put = __set__starTextSprite))::UnityEngine::Sprite* _starTextSprite;

  /// @brief Field _animationLength, offset 0x20, size 0x4
  __declspec(property(get = __get__animationLength, put = __set__animationLength)) float_t _animationLength;

  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_starTextSprite))::UnityEngine::Sprite* starTextSprite;

  __declspec(property(get = get_animationLength)) float_t animationLength;

  constexpr int32_t& __get__id();

  constexpr int32_t const& __get__id() const;

  constexpr void __set__id(int32_t value);

  constexpr ::UnityEngine::Sprite*& __get__starTextSprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__starTextSprite() const;

  constexpr void __set__starTextSprite(::UnityEngine::Sprite* value);

  constexpr float_t& __get__animationLength();

  constexpr float_t const& __get__animationLength() const;

  constexpr void __set__animationLength(float_t value);

  /// @brief Method get_id addr 0x20bcc7c size 0x8 virtual false final false
  inline int32_t get_id();

  /// @brief Method get_starTextSprite addr 0x20bcc84 size 0x8 virtual false final false
  inline ::UnityEngine::Sprite* get_starTextSprite();

  /// @brief Method get_animationLength addr 0x20bcc8c size 0x8 virtual false final false
  inline float_t get_animationLength();

  static inline ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite* New_ctor();

  /// @brief Method .ctor addr 0x20bcc94 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEventEffect__StarTextSprite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BTSStarTextEventEffect__StarTextSprite(__BTSStarTextEventEffect__StarTextSprite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEventEffect__StarTextSprite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BTSStarTextEventEffect__StarTextSprite(__BTSStarTextEventEffect__StarTextSprite const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BTSStarTextEventEffect__StarTextSprite();

public:
  /// @brief Field _id, offset: 0x10, size: 0x4, def value: None
  int32_t ____id;

  /// @brief Field _starTextSprite, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____starTextSprite;

  /// @brief Field _animationLength, offset: 0x20, size: 0x4, def value: None
  float_t ____animationLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite, ____starTextSprite) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite, ____animationLength) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StartTextPosition
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3970))
// CS Name: ::BTSStarTextEventEffect::StartTextPosition*
class CORDL_TYPE __BTSStarTextEventEffect__StartTextPosition : public ::System::Object {
public:
  // Declarations
  /// @brief Field _id, offset 0x10, size 0x4
  __declspec(property(get = __get__id, put = __set__id)) int32_t _id;

  /// @brief Field _transform, offset 0x18, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_transform))::UnityEngine::Transform* transform;

  constexpr int32_t& __get__id();

  constexpr int32_t const& __get__id() const;

  constexpr void __set__id(int32_t value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  /// @brief Method get_id addr 0x20bcc9c size 0x8 virtual false final false
  inline int32_t get_id();

  /// @brief Method get_transform addr 0x20bcca4 size 0x8 virtual false final false
  inline ::UnityEngine::Transform* get_transform();

  static inline ::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition* New_ctor();

  /// @brief Method .ctor addr 0x20bccac size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEventEffect__StartTextPosition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BTSStarTextEventEffect__StartTextPosition(__BTSStarTextEventEffect__StartTextPosition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEventEffect__StartTextPosition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BTSStarTextEventEffect__StartTextPosition(__BTSStarTextEventEffect__StartTextPosition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BTSStarTextEventEffect__StartTextPosition();

public:
  /// @brief Field _id, offset: 0x10, size: 0x4, def value: None
  int32_t ____id;

  /// @brief Field _transform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition, ____transform) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BTSStarTextEventEffect
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14941)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3971))
// CS Name: ::BTSStarTextEventEffect*
class CORDL_TYPE BTSStarTextEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using StartTextPosition = ::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition;

  using StarTextSprite = ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite;

  /// @brief Field _starTextSprites, offset 0x18, size 0x8
  __declspec(property(
      get = __get__starTextSprites,
      put = __set__starTextSprites))::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*> _starTextSprites;

  /// @brief Field _startTextPositions, offset 0x20, size 0x8
  __declspec(property(get = __get__startTextPositions, put = __set__startTextPositions))::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*,
                                                                                                 ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>*> _startTextPositions;

  /// @brief Field _beatmapCallbacksController, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _audioTimeSource, offset 0x30, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field startStarTextAnimationEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_startStarTextAnimationEvent,
                      put = __set_startStarTextAnimationEvent))::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>* startStarTextAnimationEvent;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x40, size 0x8
  __declspec(property(get = __get__beatmapDataCallbackWrapper, put = __set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _idsToStarTextSpriteDictionary, offset 0x48, size 0x8
  __declspec(property(
      get = __get__idsToStarTextSpriteDictionary,
      put = __set__idsToStarTextSpriteDictionary))::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>* _idsToStarTextSpriteDictionary;

  /// @brief Field _idsToStarTextPositionDictionary, offset 0x50, size 0x8
  __declspec(property(get = __get__idsToStarTextPositionDictionary,
                      put = __set__idsToStarTextPositionDictionary))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Transform*>* _idsToStarTextPositionDictionary;

  constexpr ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*>& __get__starTextSprites();

  constexpr ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*> const& __get__starTextSprites() const;

  constexpr void __set__starTextSprites(::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>*>& __get__startTextPositions();

  constexpr ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>*> const&
  __get__startTextPositions() const;

  constexpr void __set__startTextPositions(::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>*> value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>*& __get_startStarTextAnimationEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>*> const& __get_startStarTextAnimationEvent() const;

  constexpr void __set_startStarTextAnimationEvent(::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__beatmapDataCallbackWrapper() const;

  constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*& __get__idsToStarTextSpriteDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*> const&
  __get__idsToStarTextSpriteDictionary() const;

  constexpr void __set__idsToStarTextSpriteDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Transform*>*& __get__idsToStarTextPositionDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Transform*>*> const& __get__idsToStarTextPositionDictionary() const;

  constexpr void __set__idsToStarTextPositionDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Transform*>* value);

  /// @brief Method add_startStarTextAnimationEvent addr 0x20bc378 size 0xb0 virtual false final false
  inline void add_startStarTextAnimationEvent(::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>* value);

  /// @brief Method remove_startStarTextAnimationEvent addr 0x20bc4b0 size 0xb0 virtual false final false
  inline void remove_startStarTextAnimationEvent(::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>* value);

  /// @brief Method Start addr 0x20bc7dc size 0x1ec virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x20bc9c8 size 0x1c virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleBeatmapEvent addr 0x20bc9e4 size 0x1d8 virtual false final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::BTSStarTextEventEffect* New_ctor();

  /// @brief Method .ctor addr 0x20bcbbc size 0xc0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSStarTextEventEffect(BTSStarTextEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSStarTextEventEffect(BTSStarTextEventEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSStarTextEventEffect();

public:
  /// @brief Field _starTextSprites, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>*> ____starTextSprites;

  /// @brief Field _startTextPositions, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*, ::Array<::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*>*> ____startTextPositions;

  /// @brief Field _beatmapCallbacksController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _audioTimeSource, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field startStarTextAnimationEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_3<::UnityEngine::Sprite*, ::UnityEngine::Transform*, float_t>* ___startStarTextAnimationEvent;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  /// @brief Field _idsToStarTextSpriteDictionary, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*>* ____idsToStarTextSpriteDictionary;

  /// @brief Field _idsToStarTextPositionDictionary, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Transform*>* ____idsToStarTextPositionDictionary;

  /// @brief Field kStarTextAppearEventType value: static_cast<int32_t>(0x29)
  static ::GlobalNamespace::BasicBeatmapEventType const kStarTextAppearEventType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSStarTextEventEffect, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEventEffect, ____starTextSprites) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEventEffect, ____startTextPositions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEventEffect, ____beatmapCallbacksController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEventEffect, ____audioTimeSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEventEffect, ___startStarTextAnimationEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEventEffect, ____beatmapDataCallbackWrapper) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEventEffect, ____idsToStarTextSpriteDictionary) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEventEffect, ____idsToStarTextPositionDictionary) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEventEffect*, "", "BTSStarTextEventEffect");
NEED_NO_BOX(::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSStarTextEventEffect__StarTextSprite*, "", "BTSStarTextEventEffect/StarTextSprite");
NEED_NO_BOX(::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSStarTextEventEffect__StartTextPosition*, "", "BTSStarTextEventEffect/StartTextPosition");
