#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnRotationChevronManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
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
class IVariableMovementDataProvider;
}
namespace GlobalNamespace {
class SpawnRotationChevronManager_DirectionData;
}
namespace GlobalNamespace {
struct SpawnRotationChevronManager_QueuedDirectionData;
}
namespace GlobalNamespace {
class SpawnRotationChevron_Pool;
}
namespace GlobalNamespace {
class SpawnRotationChevron;
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
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnRotationChevronManager;
}
namespace GlobalNamespace {
class SpawnRotationChevronManager_DirectionData;
}
namespace GlobalNamespace {
struct SpawnRotationChevronManager_QueuedDirectionData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpawnRotationChevronManager);
MARK_REF_PTR_T(::GlobalNamespace::SpawnRotationChevronManager_DirectionData);
MARK_VAL_T(::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpawnRotationChevronManager/DirectionData
class CORDL_TYPE SpawnRotationChevronManager_DirectionData : public ::System::Object {
public:
  // Declarations
  /// @brief Field chevron, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_chevron, put = __cordl_internal_set_chevron)) ::UnityW<::GlobalNamespace::SpawnRotationChevron> chevron;

  /// @brief Field fadeInEndTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeInEndTime, put = __cordl_internal_set_fadeInEndTime)) float_t fadeInEndTime;

  /// @brief Field fadeOutStartTime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_fadeOutStartTime, put = __cordl_internal_set_fadeOutStartTime)) float_t fadeOutStartTime;

  /// @brief Field fullyLit, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_fullyLit, put = __cordl_internal_set_fullyLit)) bool fullyLit;

  static inline ::GlobalNamespace::SpawnRotationChevronManager_DirectionData* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron> const& __cordl_internal_get_chevron() const;

  constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron>& __cordl_internal_get_chevron();

  constexpr float_t const& __cordl_internal_get_fadeInEndTime() const;

  constexpr float_t& __cordl_internal_get_fadeInEndTime();

  constexpr float_t const& __cordl_internal_get_fadeOutStartTime() const;

  constexpr float_t& __cordl_internal_get_fadeOutStartTime();

  constexpr bool const& __cordl_internal_get_fullyLit() const;

  constexpr bool& __cordl_internal_get_fullyLit();

  constexpr void __cordl_internal_set_chevron(::UnityW<::GlobalNamespace::SpawnRotationChevron> value);

  constexpr void __cordl_internal_set_fadeInEndTime(float_t value);

  constexpr void __cordl_internal_set_fadeOutStartTime(float_t value);

  constexpr void __cordl_internal_set_fullyLit(bool value);

  /// @brief Method .ctor, addr 0x57f3688, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnRotationChevronManager_DirectionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevronManager_DirectionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnRotationChevronManager_DirectionData(SpawnRotationChevronManager_DirectionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevronManager_DirectionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnRotationChevronManager_DirectionData(SpawnRotationChevronManager_DirectionData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5954 };

  /// @brief Field chevron, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SpawnRotationChevron> ___chevron;

  /// @brief Field fullyLit, offset: 0x18, size: 0x1, def value: None
  bool ___fullyLit;

  /// @brief Field fadeOutStartTime, offset: 0x1c, size: 0x4, def value: None
  float_t ___fadeOutStartTime;

  /// @brief Field fadeInEndTime, offset: 0x20, size: 0x4, def value: None
  float_t ___fadeInEndTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager_DirectionData, ___chevron) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager_DirectionData, ___fullyLit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager_DirectionData, ___fadeOutStartTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager_DirectionData, ___fadeInEndTime) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnRotationChevronManager_DirectionData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SpawnRotationChevronManager/QueuedDirectionData
struct CORDL_TYPE SpawnRotationChevronManager_QueuedDirectionData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x57f367c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t time, float_t duration, int32_t rotation);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnRotationChevronManager_QueuedDirectionData();

  // Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "rotation", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SpawnRotationChevronManager_QueuedDirectionData(float_t time, float_t duration, int32_t rotation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5955 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field time, offset: 0x0, size: 0x4, def value: None
  float_t time;

  /// @brief Field duration, offset: 0x4, size: 0x4, def value: None
  float_t duration;

  /// @brief Field rotation, offset: 0x8, size: 0x4, def value: None
  int32_t rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData, duration) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData, rotation) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData, 0xc>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpawnRotationChevronManager
class CORDL_TYPE SpawnRotationChevronManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using DirectionData = ::GlobalNamespace::SpawnRotationChevronManager_DirectionData;

  using QueuedDirectionData = ::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData;

  /// @brief Field _activeDirections, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__activeDirections, put = __cordl_internal_set__activeDirections)) ::System::Collections::Generic::HashSet_1<int32_t>* _activeDirections;

  /// @brief Field _audioTimeSyncController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field _beatmapCallbacksController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapObjectDataCallbackWrapper, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapObjectDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapObjectDataCallbackWrapper;

  /// @brief Field _beatmapObjectSpawnController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnController, put = __cordl_internal_set__beatmapObjectSpawnController)) ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController>
      _beatmapObjectSpawnController;

  /// @brief Field _chevronPool, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__chevronPool, put = __cordl_internal_set__chevronPool)) ::GlobalNamespace::SpawnRotationChevron_Pool* _chevronPool;

  /// @brief Field _currentSpawnRotation, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__currentSpawnRotation, put = __cordl_internal_set__currentSpawnRotation)) float_t _currentSpawnRotation;

  /// @brief Field _cutOffsetTime, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__cutOffsetTime, put = __cordl_internal_set__cutOffsetTime)) float_t _cutOffsetTime;

  /// @brief Field _directionToDataDictionary, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__directionToDataDictionary,
                      put = __cordl_internal_set__directionToDataDictionary)) ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::SpawnRotationChevronManager_DirectionData*>*
      _directionToDataDictionary;

  /// @brief Field _fadeInLightAmountCurve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInLightAmountCurve, put = __cordl_internal_set__fadeInLightAmountCurve)) ::UnityEngine::AnimationCurve* _fadeInLightAmountCurve;

  /// @brief Field _fadeInTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeInTime, put = __cordl_internal_set__fadeInTime)) float_t _fadeInTime;

  /// @brief Field _fadeOutLightAmountCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutLightAmountCurve, put = __cordl_internal_set__fadeOutLightAmountCurve)) ::UnityEngine::AnimationCurve* _fadeOutLightAmountCurve;

  /// @brief Field _fadeOutTime, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeOutTime, put = __cordl_internal_set__fadeOutTime)) float_t _fadeOutTime;

  /// @brief Field _jumpStartOffsetTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpStartOffsetTime, put = __cordl_internal_set__jumpStartOffsetTime)) float_t _jumpStartOffsetTime;

  /// @brief Field _queuedDirectionData, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__queuedDirectionData,
                      put =
                          __cordl_internal_set__queuedDirectionData)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData>* _queuedDirectionData;

  /// @brief Field _reusableDirectionsList, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__reusableDirectionsList, put = __cordl_internal_set__reusableDirectionsList)) ::System::Collections::Generic::List_1<int32_t>* _reusableDirectionsList;

  /// @brief Field _spawnRotationDataCallbackWrapper, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnRotationDataCallbackWrapper,
                      put = __cordl_internal_set__spawnRotationDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _spawnRotationDataCallbackWrapper;

  /// @brief Field _variableMovementDataProvider, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::IVariableMovementDataProvider* _variableMovementDataProvider;

  /// @brief Method HandleBeatmapObjectCallback, addr 0x57f35b8, size 0xc4, virtual false, abstract: false, final false
  inline void HandleBeatmapObjectCallback(::GlobalNamespace::BeatmapObjectData* beatmapObjectData);

  /// @brief Method HandleBeatmapObjectSpawnControllerDidInit, addr 0x57f27e4, size 0x150, virtual false, abstract: false, final false
  inline void HandleBeatmapObjectSpawnControllerDidInit();

  static inline ::GlobalNamespace::SpawnRotationChevronManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x57f3480, size 0x138, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SpawnDirectionData, addr 0x57f30d4, size 0x3ac, virtual false, abstract: false, final false
  inline void SpawnDirectionData(float_t time, float_t duration, int32_t rotation);

  /// @brief Method Start, addr 0x57f2708, size 0xdc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x57f2934, size 0x7a0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__activeDirections() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__activeDirections();

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__beatmapObjectDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapObjectDataCallbackWrapper();

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> const& __cordl_internal_get__beatmapObjectSpawnController() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController>& __cordl_internal_get__beatmapObjectSpawnController();

  constexpr ::GlobalNamespace::SpawnRotationChevron_Pool* const& __cordl_internal_get__chevronPool() const;

  constexpr ::GlobalNamespace::SpawnRotationChevron_Pool*& __cordl_internal_get__chevronPool();

  constexpr float_t const& __cordl_internal_get__currentSpawnRotation() const;

  constexpr float_t& __cordl_internal_get__currentSpawnRotation();

  constexpr float_t const& __cordl_internal_get__cutOffsetTime() const;

  constexpr float_t& __cordl_internal_get__cutOffsetTime();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::SpawnRotationChevronManager_DirectionData*>* const& __cordl_internal_get__directionToDataDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::SpawnRotationChevronManager_DirectionData*>*& __cordl_internal_get__directionToDataDictionary();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__fadeInLightAmountCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__fadeInLightAmountCurve();

  constexpr float_t const& __cordl_internal_get__fadeInTime() const;

  constexpr float_t& __cordl_internal_get__fadeInTime();

  constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__fadeOutLightAmountCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__fadeOutLightAmountCurve();

  constexpr float_t const& __cordl_internal_get__fadeOutTime() const;

  constexpr float_t& __cordl_internal_get__fadeOutTime();

  constexpr float_t const& __cordl_internal_get__jumpStartOffsetTime() const;

  constexpr float_t& __cordl_internal_get__jumpStartOffsetTime();

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData>* const& __cordl_internal_get__queuedDirectionData() const;

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData>*& __cordl_internal_get__queuedDirectionData();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__reusableDirectionsList() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__reusableDirectionsList();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__spawnRotationDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__spawnRotationDataCallbackWrapper();

  constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::IVariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr void __cordl_internal_set__activeDirections(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapObjectDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__beatmapObjectSpawnController(::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> value);

  constexpr void __cordl_internal_set__chevronPool(::GlobalNamespace::SpawnRotationChevron_Pool* value);

  constexpr void __cordl_internal_set__currentSpawnRotation(float_t value);

  constexpr void __cordl_internal_set__cutOffsetTime(float_t value);

  constexpr void __cordl_internal_set__directionToDataDictionary(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::SpawnRotationChevronManager_DirectionData*>* value);

  constexpr void __cordl_internal_set__fadeInLightAmountCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__fadeInTime(float_t value);

  constexpr void __cordl_internal_set__fadeOutLightAmountCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__fadeOutTime(float_t value);

  constexpr void __cordl_internal_set__jumpStartOffsetTime(float_t value);

  constexpr void __cordl_internal_set__queuedDirectionData(::System::Collections::Generic::Queue_1<::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData>* value);

  constexpr void __cordl_internal_set__reusableDirectionsList(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set__spawnRotationDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value);

  /// @brief Method .ctor, addr 0x57f368c, size 0x180, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5956 };

  /// @brief Field _fadeInTime, offset: 0x20, size: 0x4, def value: None
  float_t ____fadeInTime;

  /// @brief Field _fadeOutTime, offset: 0x24, size: 0x4, def value: None
  float_t ____fadeOutTime;

  /// @brief Field _jumpStartOffsetTime, offset: 0x28, size: 0x4, def value: None
  float_t ____jumpStartOffsetTime;

  /// @brief Field _cutOffsetTime, offset: 0x2c, size: 0x4, def value: None
  float_t ____cutOffsetTime;

  /// @brief Field _fadeInLightAmountCurve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____fadeInLightAmountCurve;

  /// @brief Field _fadeOutLightAmountCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____fadeOutLightAmountCurve;

  /// @brief Field _chevronPool, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SpawnRotationChevron_Pool* ____chevronPool;

  /// @brief Field _audioTimeSyncController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSyncController;

  /// @brief Field _beatmapObjectSpawnController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> ____beatmapObjectSpawnController;

  /// @brief Field _beatmapCallbacksController, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _variableMovementDataProvider, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IVariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field _spawnRotationDataCallbackWrapper, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____spawnRotationDataCallbackWrapper;

  /// @brief Field _beatmapObjectDataCallbackWrapper, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapObjectDataCallbackWrapper;

  /// @brief Field _directionToDataDictionary, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::SpawnRotationChevronManager_DirectionData*>* ____directionToDataDictionary;

  /// @brief Field _activeDirections, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ____activeDirections;

  /// @brief Field _reusableDirectionsList, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____reusableDirectionsList;

  /// @brief Field _queuedDirectionData, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData>* ____queuedDirectionData;

  /// @brief Field _currentSpawnRotation, offset: 0x98, size: 0x4, def value: None
  float_t ____currentSpawnRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____fadeInTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____fadeOutTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____jumpStartOffsetTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____cutOffsetTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____fadeInLightAmountCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____fadeOutLightAmountCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____chevronPool) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____audioTimeSyncController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____beatmapObjectSpawnController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____beatmapCallbacksController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____variableMovementDataProvider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____spawnRotationDataCallbackWrapper) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____beatmapObjectDataCallbackWrapper) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____directionToDataDictionary) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____activeDirections) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____reusableDirectionsList) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____queuedDirectionData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationChevronManager, ____currentSpawnRotation) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnRotationChevronManager, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevronManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevronManager*, "", "SpawnRotationChevronManager");
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevronManager_DirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevronManager_DirectionData*, "", "SpawnRotationChevronManager/DirectionData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevronManager_QueuedDirectionData, "", "SpawnRotationChevronManager/QueuedDirectionData");
