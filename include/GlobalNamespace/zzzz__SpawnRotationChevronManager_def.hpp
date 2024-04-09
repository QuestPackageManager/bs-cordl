#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpawnRotationChevronManager)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
namespace GlobalNamespace {
class SpawnRotationChevron;
}
namespace GlobalNamespace {
class __SpawnRotationChevronManager__DirectionData;
}
namespace GlobalNamespace {
class __SpawnRotationChevron__Pool;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnRotationChevronManager;
}
namespace GlobalNamespace {
class __SpawnRotationChevronManager__DirectionData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpawnRotationChevronManager);
MARK_REF_PTR_T(::GlobalNamespace::__SpawnRotationChevronManager__DirectionData);
// Type: ::DirectionData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SpawnRotationChevronManager::DirectionData*
class CORDL_TYPE __SpawnRotationChevronManager__DirectionData : public ::System::Object {
public:
  // Declarations
  /// @brief Field chevron, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_chevron, put = __cordl_internal_set_chevron))::UnityW<::GlobalNamespace::SpawnRotationChevron> chevron;

  /// @brief Field fadeInEndTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeInEndTime, put = __cordl_internal_set_fadeInEndTime)) float_t fadeInEndTime;

  /// @brief Field fadeOutStartTime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeOutStartTime, put = __cordl_internal_set_fadeOutStartTime)) float_t fadeOutStartTime;

  /// @brief Field fullyLid, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_fullyLid, put = __cordl_internal_set_fullyLid)) bool fullyLid;

  static inline ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron> const& __cordl_internal_get_chevron() const;

  constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron>& __cordl_internal_get_chevron();

  constexpr float_t const& __cordl_internal_get_fadeInEndTime() const;

  constexpr float_t& __cordl_internal_get_fadeInEndTime();

  constexpr float_t const& __cordl_internal_get_fadeOutStartTime() const;

  constexpr float_t& __cordl_internal_get_fadeOutStartTime();

  constexpr bool const& __cordl_internal_get_fullyLid() const;

  constexpr bool& __cordl_internal_get_fullyLid();

  constexpr void __cordl_internal_set_chevron(::UnityW<::GlobalNamespace::SpawnRotationChevron> value);

  constexpr void __cordl_internal_set_fadeInEndTime(float_t value);

  constexpr void __cordl_internal_set_fadeOutStartTime(float_t value);

  constexpr void __cordl_internal_set_fullyLid(bool value);

  /// @brief Method .ctor, addr 0x25d0b1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SpawnRotationChevronManager__DirectionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SpawnRotationChevronManager__DirectionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SpawnRotationChevronManager__DirectionData(__SpawnRotationChevronManager__DirectionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SpawnRotationChevronManager__DirectionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SpawnRotationChevronManager__DirectionData(__SpawnRotationChevronManager__DirectionData const&) = delete;

  /// @brief Field chevron, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SpawnRotationChevron> ___chevron;

  /// @brief Field fullyLid, offset: 0x18, size: 0x1, def value: None
  bool ___fullyLid;

  /// @brief Field fadeOutStartTime, offset: 0x1c, size: 0x4, def value: None
  float_t ___fadeOutStartTime;

  /// @brief Field fadeInEndTime, offset: 0x20, size: 0x4, def value: None
  float_t ___fadeInEndTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SpawnRotationChevronManager__DirectionData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpawnRotationChevronManager__DirectionData, ___chevron) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpawnRotationChevronManager__DirectionData, ___fullyLid) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpawnRotationChevronManager__DirectionData, ___fadeOutStartTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpawnRotationChevronManager__DirectionData, ___fadeInEndTime) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SpawnRotationChevronManager
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SpawnRotationChevronManager*
class CORDL_TYPE SpawnRotationChevronManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using DirectionData = ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData;

  /// @brief Field _activeDirections, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__activeDirections, put = __cordl_internal_set__activeDirections))::System::Collections::Generic::HashSet_1<int32_t>* _activeDirections;

  /// @brief Field _audioTimeSyncController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController))::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field _beatmapCallbacksController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapObjectDataCallbackWrapper, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapObjectDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapObjectDataCallbackWrapper;

  /// @brief Field _beatmapObjectSpawnController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnController,
                      put = __cordl_internal_set__beatmapObjectSpawnController))::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> _beatmapObjectSpawnController;

  /// @brief Field _chevronPool, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__chevronPool, put = __cordl_internal_set__chevronPool))::GlobalNamespace::__SpawnRotationChevron__Pool* _chevronPool;

  /// @brief Field _currentSpawnRotation, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__currentSpawnRotation, put = __cordl_internal_set__currentSpawnRotation)) float_t _currentSpawnRotation;

  /// @brief Field _cutOffsetTime, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__cutOffsetTime, put = __cordl_internal_set__cutOffsetTime)) float_t _cutOffsetTime;

  /// @brief Field _directionToDataDictionary, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__directionToDataDictionary, put = __cordl_internal_set__directionToDataDictionary))::System::Collections::Generic::Dictionary_2<
      int32_t, ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>* _directionToDataDictionary;

  /// @brief Field _fadeInLightAmountCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInLightAmountCurve, put = __cordl_internal_set__fadeInLightAmountCurve))::UnityEngine::AnimationCurve* _fadeInLightAmountCurve;

  /// @brief Field _fadeInTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeInTime, put = __cordl_internal_set__fadeInTime)) float_t _fadeInTime;

  /// @brief Field _fadeOutLightAmountCurve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutLightAmountCurve, put = __cordl_internal_set__fadeOutLightAmountCurve))::UnityEngine::AnimationCurve* _fadeOutLightAmountCurve;

  /// @brief Field _fadeOutTime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeOutTime, put = __cordl_internal_set__fadeOutTime)) float_t _fadeOutTime;

  /// @brief Field _halfJumpDuration, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__halfJumpDuration, put = __cordl_internal_set__halfJumpDuration)) float_t _halfJumpDuration;

  /// @brief Field _jumpStartOffsetTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpStartOffsetTime, put = __cordl_internal_set__jumpStartOffsetTime)) float_t _jumpStartOffsetTime;

  /// @brief Field _moveDuration, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__moveDuration, put = __cordl_internal_set__moveDuration)) float_t _moveDuration;

  /// @brief Field _reusableDirectionsList, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableDirectionsList, put = __cordl_internal_set__reusableDirectionsList))::System::Collections::Generic::List_1<int32_t>* _reusableDirectionsList;

  /// @brief Field _spawnRotationDataCallbackWrapper, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnRotationDataCallbackWrapper,
                      put = __cordl_internal_set__spawnRotationDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _spawnRotationDataCallbackWrapper;

  /// @brief Method ComputeAheadTime, addr 0x25d0b40, size 0x5c, virtual false, abstract: false, final false
  inline float_t ComputeAheadTime();

  /// @brief Method HandleBeatmapObjectCallback, addr 0x25d07c0, size 0x35c, virtual false, abstract: false, final false
  inline void HandleBeatmapObjectCallback(::GlobalNamespace::BeatmapObjectData* beatmapObjectData);

  /// @brief Method HandleBeatmapObjectSpawnControllerDidInit, addr 0x25cfb1c, size 0x144, virtual false, abstract: false, final false
  inline void HandleBeatmapObjectSpawnControllerDidInit();

  /// @brief Method HandleSpawnRotationBeatmapEvent, addr 0x25d0b24, size 0x1c, virtual false, abstract: false, final false
  inline void HandleSpawnRotationBeatmapEvent(::GlobalNamespace::SpawnRotationBeatmapEventData* beatmapEventData);

  static inline ::GlobalNamespace::SpawnRotationChevronManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x25d06c4, size 0xfc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x25cf9ac, size 0x170, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x25cfc60, size 0xa64, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__activeDirections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __cordl_internal_get__activeDirections() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapObjectDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__beatmapObjectDataCallbackWrapper() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> const& __cordl_internal_get__beatmapObjectSpawnController() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController>& __cordl_internal_get__beatmapObjectSpawnController();

  constexpr ::GlobalNamespace::__SpawnRotationChevron__Pool*& __cordl_internal_get__chevronPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SpawnRotationChevron__Pool*> const& __cordl_internal_get__chevronPool() const;

  constexpr float_t const& __cordl_internal_get__currentSpawnRotation() const;

  constexpr float_t& __cordl_internal_get__currentSpawnRotation();

  constexpr float_t const& __cordl_internal_get__cutOffsetTime() const;

  constexpr float_t& __cordl_internal_get__cutOffsetTime();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>*& __cordl_internal_get__directionToDataDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>*> const&
  __cordl_internal_get__directionToDataDictionary() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__fadeInLightAmountCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__fadeInLightAmountCurve() const;

  constexpr float_t const& __cordl_internal_get__fadeInTime() const;

  constexpr float_t& __cordl_internal_get__fadeInTime();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__fadeOutLightAmountCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__fadeOutLightAmountCurve() const;

  constexpr float_t const& __cordl_internal_get__fadeOutTime() const;

  constexpr float_t& __cordl_internal_get__fadeOutTime();

  constexpr float_t const& __cordl_internal_get__halfJumpDuration() const;

  constexpr float_t& __cordl_internal_get__halfJumpDuration();

  constexpr float_t const& __cordl_internal_get__jumpStartOffsetTime() const;

  constexpr float_t& __cordl_internal_get__jumpStartOffsetTime();

  constexpr float_t const& __cordl_internal_get__moveDuration() const;

  constexpr float_t& __cordl_internal_get__moveDuration();

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__reusableDirectionsList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get__reusableDirectionsList() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__spawnRotationDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__spawnRotationDataCallbackWrapper() const;

  constexpr void __cordl_internal_set__activeDirections(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapObjectDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__beatmapObjectSpawnController(::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> value);

  constexpr void __cordl_internal_set__chevronPool(::GlobalNamespace::__SpawnRotationChevron__Pool* value);

  constexpr void __cordl_internal_set__currentSpawnRotation(float_t value);

  constexpr void __cordl_internal_set__cutOffsetTime(float_t value);

  constexpr void __cordl_internal_set__directionToDataDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>* value);

  constexpr void __cordl_internal_set__fadeInLightAmountCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__fadeInTime(float_t value);

  constexpr void __cordl_internal_set__fadeOutLightAmountCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__fadeOutTime(float_t value);

  constexpr void __cordl_internal_set__halfJumpDuration(float_t value);

  constexpr void __cordl_internal_set__jumpStartOffsetTime(float_t value);

  constexpr void __cordl_internal_set__moveDuration(float_t value);

  constexpr void __cordl_internal_set__reusableDirectionsList(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set__spawnRotationDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  /// @brief Method .ctor, addr 0x25d0b9c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnRotationChevronManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevronManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnRotationChevronManager(SpawnRotationChevronManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevronManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnRotationChevronManager(SpawnRotationChevronManager const&) = delete;

  /// @brief Field _fadeInTime, offset: 0x18, size: 0x4, def value: None
  float_t ____fadeInTime;

  /// @brief Field _fadeOutTime, offset: 0x1c, size: 0x4, def value: None
  float_t ____fadeOutTime;

  /// @brief Field _jumpStartOffsetTime, offset: 0x20, size: 0x4, def value: None
  float_t ____jumpStartOffsetTime;

  /// @brief Field _cutOffsetTime, offset: 0x24, size: 0x4, def value: None
  float_t ____cutOffsetTime;

  /// @brief Field _fadeInLightAmountCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____fadeInLightAmountCurve;

  /// @brief Field _fadeOutLightAmountCurve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____fadeOutLightAmountCurve;

  /// @brief Field _chevronPool, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__SpawnRotationChevron__Pool* ____chevronPool;

  /// @brief Field _audioTimeSyncController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSyncController;

  /// @brief Field _beatmapObjectSpawnController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> ____beatmapObjectSpawnController;

  /// @brief Field _beatmapCallbacksController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _spawnRotationDataCallbackWrapper, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____spawnRotationDataCallbackWrapper;

  /// @brief Field _beatmapObjectDataCallbackWrapper, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapObjectDataCallbackWrapper;

  /// @brief Field _directionToDataDictionary, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>* ____directionToDataDictionary;

  /// @brief Field _activeDirections, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ____activeDirections;

  /// @brief Field _reusableDirectionsList, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____reusableDirectionsList;

  /// @brief Field _moveDuration, offset: 0x80, size: 0x4, def value: None
  float_t ____moveDuration;

  /// @brief Field _halfJumpDuration, offset: 0x84, size: 0x4, def value: None
  float_t ____halfJumpDuration;

  /// @brief Field _currentSpawnRotation, offset: 0x88, size: 0x4, def value: None
  float_t ____currentSpawnRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnRotationChevronManager, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____fadeInTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____fadeOutTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____jumpStartOffsetTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____cutOffsetTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____fadeInLightAmountCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____fadeOutLightAmountCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____chevronPool) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____audioTimeSyncController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____beatmapObjectSpawnController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____beatmapCallbacksController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____spawnRotationDataCallbackWrapper) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____beatmapObjectDataCallbackWrapper) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____directionToDataDictionary) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____activeDirections) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____reusableDirectionsList) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____moveDuration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____halfJumpDuration) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____currentSpawnRotation) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevronManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevronManager*, "", "SpawnRotationChevronManager");
NEED_NO_BOX(::GlobalNamespace::__SpawnRotationChevronManager__DirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*, "", "SpawnRotationChevronManager/DirectionData");
