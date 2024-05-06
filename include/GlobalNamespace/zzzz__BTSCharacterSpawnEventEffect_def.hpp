#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BTSCharacterSpawnEventEffect)
namespace GlobalNamespace {
class BTSCharacterDataModel;
}
namespace GlobalNamespace {
class BTSCharacter;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterSpawnEventEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterSpawnEventEffect);
// Type: ::BTSCharacterSpawnEventEffect
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BTSCharacterSpawnEventEffect*
class CORDL_TYPE BTSCharacterSpawnEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animationStartAheadTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__animationStartAheadTime, put = __cordl_internal_set__animationStartAheadTime)) float_t _animationStartAheadTime;

  /// @brief Field _asyncOperationHandles, offset 0x80, size 0x8
  __declspec(property(
      get = __cordl_internal_get__asyncOperationHandles,
      put = __cordl_internal_set__asyncOperationHandles))::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* _asyncOperationHandles;

  /// @brief Field _audioTimeSource, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _beatmapCallbacksController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapData, put = __cordl_internal_set__beatmapData))::GlobalNamespace::IReadonlyBeatmapData* _beatmapData;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _btsCharacterDataModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__btsCharacterDataModel, put = __cordl_internal_set__btsCharacterDataModel))::UnityW<::GlobalNamespace::BTSCharacterDataModel> _btsCharacterDataModel;

  /// @brief Field _characterWrapper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__characterWrapper, put = __cordl_internal_set__characterWrapper))::UnityW<::UnityEngine::Transform> _characterWrapper;

  /// @brief Field _gameplayModifiers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _idsToAnimationClipsDictionary, offset 0x68, size 0x8
  __declspec(
      property(get = __cordl_internal_get__idsToAnimationClipsDictionary,
               put = __cordl_internal_set__idsToAnimationClipsDictionary))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AnimationClip>>* _idsToAnimationClipsDictionary;

  /// @brief Field _idsToCharacterPrefabsDictionary, offset 0x58, size 0x8
  __declspec(property(
      get = __cordl_internal_get__idsToCharacterPrefabsDictionary,
      put = __cordl_internal_set__idsToCharacterPrefabsDictionary))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>* _idsToCharacterPrefabsDictionary;

  /// @brief Field _idsToCharactersDictionary, offset 0x60, size 0x8
  __declspec(
      property(get = __cordl_internal_get__idsToCharactersDictionary,
               put = __cordl_internal_set__idsToCharactersDictionary))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>* _idsToCharactersDictionary;

  /// @brief Field _isInitialized, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  /// @brief Field startCharacterAnimationEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_startCharacterAnimationEvent,
                      put = __cordl_internal_set_startCharacterAnimationEvent))::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>* startCharacterAnimationEvent;

  /// @brief Method CleanupAddressables, addr 0x1055ab8, size 0x154, virtual false, abstract: false, final false
  inline void CleanupAddressables();

  /// @brief Method GetCharacterWithAnimationClip, addr 0x1055948, size 0x170, virtual false, abstract: false, final false
  static inline ::System::Tuple_2<::UnityW<::GlobalNamespace::BTSCharacter>, ::UnityW<::UnityEngine::AnimationClip>>*
  GetCharacterWithAnimationClip(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>* charDictionary,
                                ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AnimationClip>>* animDictionary, int32_t prefabId, int32_t animationId);

  /// @brief Method HandleBeatmapEvent, addr 0x1055c34, size 0x144, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method LoadAddressables, addr 0x10550cc, size 0x86c, virtual false, abstract: false, final false
  inline void LoadAddressables();

  static inline ::GlobalNamespace::BTSCharacterSpawnEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x1055c0c, size 0x28, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x1054b10, size 0x5bc, virtual false, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get__animationStartAheadTime() const;

  constexpr float_t& __cordl_internal_get__animationStartAheadTime();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get__asyncOperationHandles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
  __cordl_internal_get__asyncOperationHandles() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get__beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __cordl_internal_get__beatmapData() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterDataModel> const& __cordl_internal_get__btsCharacterDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterDataModel>& __cordl_internal_get__btsCharacterDataModel();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__characterWrapper() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__characterWrapper();

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AnimationClip>>*& __cordl_internal_get__idsToAnimationClipsDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AnimationClip>>*> const&
  __cordl_internal_get__idsToAnimationClipsDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>*& __cordl_internal_get__idsToCharacterPrefabsDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>*> const&
  __cordl_internal_get__idsToCharacterPrefabsDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>*& __cordl_internal_get__idsToCharactersDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>*> const&
  __cordl_internal_get__idsToCharactersDictionary() const;

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>*& __cordl_internal_get_startCharacterAnimationEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>*> const& __cordl_internal_get_startCharacterAnimationEvent() const;

  constexpr void __cordl_internal_set__animationStartAheadTime(float_t value);

  constexpr void __cordl_internal_set__asyncOperationHandles(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value);

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__btsCharacterDataModel(::UnityW<::GlobalNamespace::BTSCharacterDataModel> value);

  constexpr void __cordl_internal_set__characterWrapper(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__idsToAnimationClipsDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AnimationClip>>* value);

  constexpr void __cordl_internal_set__idsToCharacterPrefabsDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>* value);

  constexpr void __cordl_internal_set__idsToCharactersDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>* value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set_startCharacterAnimationEvent(::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>* value);

  /// @brief Method .ctor, addr 0x1055d80, size 0x130, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_startCharacterAnimationEvent, addr 0x1054424, size 0xb0, virtual false, abstract: false, final false
  inline void add_startCharacterAnimationEvent(::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>* value);

  /// @brief Method get_isInitialized, addr 0x1054b08, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method remove_startCharacterAnimationEvent, addr 0x10548cc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_startCharacterAnimationEvent(::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterSpawnEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterSpawnEventEffect(BTSCharacterSpawnEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterSpawnEventEffect(BTSCharacterSpawnEventEffect const&) = delete;

  /// @brief Field _animationStartAheadTime, offset: 0x18, size: 0x4, def value: None
  float_t ____animationStartAheadTime;

  /// @brief Field _btsCharacterDataModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BTSCharacterDataModel> ____btsCharacterDataModel;

  /// @brief Field _characterWrapper, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____characterWrapper;

  /// @brief Field _beatmapCallbacksController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____beatmapData;

  /// @brief Field _audioTimeSource, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _gameplayModifiers, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field startCharacterAnimationEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>* ___startCharacterAnimationEvent;

  /// @brief Field _idsToCharacterPrefabsDictionary, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>* ____idsToCharacterPrefabsDictionary;

  /// @brief Field _idsToCharactersDictionary, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>* ____idsToCharactersDictionary;

  /// @brief Field _idsToAnimationClipsDictionary, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AnimationClip>>* ____idsToAnimationClipsDictionary;

  /// @brief Field _isInitialized, offset: 0x70, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  /// @brief Field _asyncOperationHandles, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* ____asyncOperationHandles;

  /// @brief Field kCharacterDisplayEventType value: static_cast<int32_t>(0x28)
  static ::GlobalNamespace::BasicBeatmapEventType const kCharacterDisplayEventType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterSpawnEventEffect, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ____animationStartAheadTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ____btsCharacterDataModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ____characterWrapper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ____beatmapCallbacksController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ____beatmapData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ____audioTimeSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ____gameplayModifiers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ___startCharacterAnimationEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ____idsToCharacterPrefabsDictionary) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ____idsToCharactersDictionary) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ____idsToAnimationClipsDictionary) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ____isInitialized) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ____beatmapDataCallbackWrapper) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnEventEffect, ____asyncOperationHandles) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterSpawnEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterSpawnEventEffect*, "", "BTSCharacterSpawnEventEffect");
