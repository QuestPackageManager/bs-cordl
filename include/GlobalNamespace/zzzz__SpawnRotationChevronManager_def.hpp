#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpawnRotationChevronManager)
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class __SpawnRotationChevron__Pool;
}
namespace GlobalNamespace {
class __SpawnRotationChevronManager__DirectionData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapObjectData;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
namespace GlobalNamespace {
class SpawnRotationChevron;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4996))
// CS Name: ::SpawnRotationChevronManager::DirectionData*
class CORDL_TYPE __SpawnRotationChevronManager__DirectionData : public ::System::Object {
public:
  // Declarations
  /// @brief Field chevron, offset 0x10, size 0x8
  __declspec(property(get = __get_chevron, put = __set_chevron))::GlobalNamespace::SpawnRotationChevron* chevron;

  /// @brief Field fullyLid, offset 0x18, size 0x1
  __declspec(property(get = __get_fullyLid, put = __set_fullyLid)) bool fullyLid;

  /// @brief Field fadeOutStartTime, offset 0x1c, size 0x4
  __declspec(property(get = __get_fadeOutStartTime, put = __set_fadeOutStartTime)) float_t fadeOutStartTime;

  /// @brief Field fadeInEndTime, offset 0x20, size 0x4
  __declspec(property(get = __get_fadeInEndTime, put = __set_fadeInEndTime)) float_t fadeInEndTime;

  constexpr ::GlobalNamespace::SpawnRotationChevron*& __get_chevron();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SpawnRotationChevron*> const& __get_chevron() const;

  constexpr void __set_chevron(::GlobalNamespace::SpawnRotationChevron* value);

  constexpr bool& __get_fullyLid();

  constexpr bool const& __get_fullyLid() const;

  constexpr void __set_fullyLid(bool value);

  constexpr float_t& __get_fadeOutStartTime();

  constexpr float_t const& __get_fadeOutStartTime() const;

  constexpr void __set_fadeOutStartTime(float_t value);

  constexpr float_t& __get_fadeInEndTime();

  constexpr float_t const& __get_fadeInEndTime() const;

  constexpr void __set_fadeInEndTime(float_t value);

  static inline ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData* New_ctor();

  /// @brief Method .ctor addr 0x23b6894 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SpawnRotationChevronManager__DirectionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SpawnRotationChevronManager__DirectionData(__SpawnRotationChevronManager__DirectionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SpawnRotationChevronManager__DirectionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SpawnRotationChevronManager__DirectionData(__SpawnRotationChevronManager__DirectionData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SpawnRotationChevronManager__DirectionData();

public:
  /// @brief Field chevron, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::SpawnRotationChevron* ___chevron;

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

} // namespace GlobalNamespace
// Type: ::SpawnRotationChevronManager
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4997))
// CS Name: ::SpawnRotationChevronManager*
class CORDL_TYPE SpawnRotationChevronManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using DirectionData = ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData;

  /// @brief Field _fadeInTime, offset 0x18, size 0x4
  __declspec(property(get = __get__fadeInTime, put = __set__fadeInTime)) float_t _fadeInTime;

  /// @brief Field _fadeOutTime, offset 0x1c, size 0x4
  __declspec(property(get = __get__fadeOutTime, put = __set__fadeOutTime)) float_t _fadeOutTime;

  /// @brief Field _jumpStartOffsetTime, offset 0x20, size 0x4
  __declspec(property(get = __get__jumpStartOffsetTime, put = __set__jumpStartOffsetTime)) float_t _jumpStartOffsetTime;

  /// @brief Field _cutOffsetTime, offset 0x24, size 0x4
  __declspec(property(get = __get__cutOffsetTime, put = __set__cutOffsetTime)) float_t _cutOffsetTime;

  /// @brief Field _fadeInLightAmountCurve, offset 0x28, size 0x8
  __declspec(property(get = __get__fadeInLightAmountCurve, put = __set__fadeInLightAmountCurve))::UnityEngine::AnimationCurve* _fadeInLightAmountCurve;

  /// @brief Field _fadeOutLightAmountCurve, offset 0x30, size 0x8
  __declspec(property(get = __get__fadeOutLightAmountCurve, put = __set__fadeOutLightAmountCurve))::UnityEngine::AnimationCurve* _fadeOutLightAmountCurve;

  /// @brief Field _chevronPool, offset 0x38, size 0x8
  __declspec(property(get = __get__chevronPool, put = __set__chevronPool))::GlobalNamespace::__SpawnRotationChevron__Pool* _chevronPool;

  /// @brief Field _audioTimeSyncController, offset 0x40, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field _beatmapObjectSpawnController, offset 0x48, size 0x8
  __declspec(property(get = __get__beatmapObjectSpawnController, put = __set__beatmapObjectSpawnController))::GlobalNamespace::BeatmapObjectSpawnController* _beatmapObjectSpawnController;

  /// @brief Field _beatmapCallbacksController, offset 0x50, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _spawnRotationDataCallbackWrapper, offset 0x58, size 0x8
  __declspec(property(get = __get__spawnRotationDataCallbackWrapper, put = __set__spawnRotationDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _spawnRotationDataCallbackWrapper;

  /// @brief Field _beatmapObjectDataCallbackWrapper, offset 0x60, size 0x8
  __declspec(property(get = __get__beatmapObjectDataCallbackWrapper, put = __set__beatmapObjectDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapObjectDataCallbackWrapper;

  /// @brief Field _directionToDataDictionary, offset 0x68, size 0x8
  __declspec(property(
      get = __get__directionToDataDictionary,
      put = __set__directionToDataDictionary))::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>* _directionToDataDictionary;

  /// @brief Field _activeDirections, offset 0x70, size 0x8
  __declspec(property(get = __get__activeDirections, put = __set__activeDirections))::System::Collections::Generic::HashSet_1<int32_t>* _activeDirections;

  /// @brief Field _reusableDirectionsList, offset 0x78, size 0x8
  __declspec(property(get = __get__reusableDirectionsList, put = __set__reusableDirectionsList))::System::Collections::Generic::List_1<int32_t>* _reusableDirectionsList;

  /// @brief Field _moveDuration, offset 0x80, size 0x4
  __declspec(property(get = __get__moveDuration, put = __set__moveDuration)) float_t _moveDuration;

  /// @brief Field _halfJumpDuration, offset 0x84, size 0x4
  __declspec(property(get = __get__halfJumpDuration, put = __set__halfJumpDuration)) float_t _halfJumpDuration;

  /// @brief Field _currentSpawnRotation, offset 0x88, size 0x4
  __declspec(property(get = __get__currentSpawnRotation, put = __set__currentSpawnRotation)) float_t _currentSpawnRotation;

  constexpr float_t& __get__fadeInTime();

  constexpr float_t const& __get__fadeInTime() const;

  constexpr void __set__fadeInTime(float_t value);

  constexpr float_t& __get__fadeOutTime();

  constexpr float_t const& __get__fadeOutTime() const;

  constexpr void __set__fadeOutTime(float_t value);

  constexpr float_t& __get__jumpStartOffsetTime();

  constexpr float_t const& __get__jumpStartOffsetTime() const;

  constexpr void __set__jumpStartOffsetTime(float_t value);

  constexpr float_t& __get__cutOffsetTime();

  constexpr float_t const& __get__cutOffsetTime() const;

  constexpr void __set__cutOffsetTime(float_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get__fadeInLightAmountCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__fadeInLightAmountCurve() const;

  constexpr void __set__fadeInLightAmountCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get__fadeOutLightAmountCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get__fadeOutLightAmountCurve() const;

  constexpr void __set__fadeOutLightAmountCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::GlobalNamespace::__SpawnRotationChevron__Pool*& __get__chevronPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SpawnRotationChevron__Pool*> const& __get__chevronPool() const;

  constexpr void __set__chevronPool(::GlobalNamespace::__SpawnRotationChevron__Pool* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::GlobalNamespace::BeatmapObjectSpawnController*& __get__beatmapObjectSpawnController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnController*> const& __get__beatmapObjectSpawnController() const;

  constexpr void __set__beatmapObjectSpawnController(::GlobalNamespace::BeatmapObjectSpawnController* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__spawnRotationDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__spawnRotationDataCallbackWrapper() const;

  constexpr void __set__spawnRotationDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__beatmapObjectDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__beatmapObjectDataCallbackWrapper() const;

  constexpr void __set__beatmapObjectDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>*& __get__directionToDataDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>*> const&
  __get__directionToDataDictionary() const;

  constexpr void __set__directionToDataDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __get__activeDirections();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __get__activeDirections() const;

  constexpr void __set__activeDirections(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get__reusableDirectionsList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get__reusableDirectionsList() const;

  constexpr void __set__reusableDirectionsList(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr float_t& __get__moveDuration();

  constexpr float_t const& __get__moveDuration() const;

  constexpr void __set__moveDuration(float_t value);

  constexpr float_t& __get__halfJumpDuration();

  constexpr float_t const& __get__halfJumpDuration() const;

  constexpr void __set__halfJumpDuration(float_t value);

  constexpr float_t& __get__currentSpawnRotation();

  constexpr float_t const& __get__currentSpawnRotation() const;

  constexpr void __set__currentSpawnRotation(float_t value);

  /// @brief Method Start addr 0x23b5724 size 0x170 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x23b59d8 size 0xa64 virtual false final false
  inline void Update();

  /// @brief Method OnDestroy addr 0x23b643c size 0xfc virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleBeatmapObjectCallback addr 0x23b6538 size 0x35c virtual false final false
  inline void HandleBeatmapObjectCallback(::GlobalNamespace::BeatmapObjectData* beatmapObjectData);

  /// @brief Method HandleSpawnRotationBeatmapEvent addr 0x23b689c size 0x1c virtual false final false
  inline void HandleSpawnRotationBeatmapEvent(::GlobalNamespace::SpawnRotationBeatmapEventData* beatmapEventData);

  /// @brief Method HandleBeatmapObjectSpawnControllerDidInit addr 0x23b5894 size 0x144 virtual false final false
  inline void HandleBeatmapObjectSpawnControllerDidInit();

  /// @brief Method ComputeAheadTime addr 0x23b68b8 size 0x5c virtual false final false
  inline float_t ComputeAheadTime();

  static inline ::GlobalNamespace::SpawnRotationChevronManager* New_ctor();

  /// @brief Method .ctor addr 0x23b6914 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevronManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnRotationChevronManager(SpawnRotationChevronManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevronManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnRotationChevronManager(SpawnRotationChevronManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnRotationChevronManager();

public:
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
  ::GlobalNamespace::BeatmapObjectSpawnController* ____beatmapObjectSpawnController;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevronManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevronManager*, "", "SpawnRotationChevronManager");
NEED_NO_BOX(::GlobalNamespace::__SpawnRotationChevronManager__DirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SpawnRotationChevronManager__DirectionData*, "", "SpawnRotationChevronManager/DirectionData");
