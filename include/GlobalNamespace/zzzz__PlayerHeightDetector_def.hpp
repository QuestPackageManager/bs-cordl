#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerHeightDetector)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class __PlayerHeightDetector__InitData;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHeightDetector;
}
namespace GlobalNamespace {
class __PlayerHeightDetector__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerHeightDetector);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerHeightDetector__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerHeightDetector::InitData*
class CORDL_TYPE __PlayerHeightDetector__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field headPosToPlayerHeightOffset, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_headPosToPlayerHeightOffset, put = __cordl_internal_set_headPosToPlayerHeightOffset)) float_t headPosToPlayerHeightOffset;

  /// @brief Field startPlayerHeight, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_startPlayerHeight, put = __cordl_internal_set_startPlayerHeight)) float_t startPlayerHeight;

  static inline ::GlobalNamespace::__PlayerHeightDetector__InitData* New_ctor(float_t headPosToPlayerHeightOffset, float_t startPlayerHeight);

  constexpr float_t const& __cordl_internal_get_headPosToPlayerHeightOffset() const;

  constexpr float_t& __cordl_internal_get_headPosToPlayerHeightOffset();

  constexpr float_t const& __cordl_internal_get_startPlayerHeight() const;

  constexpr float_t& __cordl_internal_get_startPlayerHeight();

  constexpr void __cordl_internal_set_headPosToPlayerHeightOffset(float_t value);

  constexpr void __cordl_internal_set_startPlayerHeight(float_t value);

  /// @brief Method .ctor, addr 0x261c480, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(float_t headPosToPlayerHeightOffset, float_t startPlayerHeight);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerHeightDetector__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerHeightDetector__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerHeightDetector__InitData(__PlayerHeightDetector__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerHeightDetector__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerHeightDetector__InitData(__PlayerHeightDetector__InitData const&) = delete;

  /// @brief Field headPosToPlayerHeightOffset, offset: 0x10, size: 0x4, def value: None
  float_t ___headPosToPlayerHeightOffset;

  /// @brief Field startPlayerHeight, offset: 0x14, size: 0x4, def value: None
  float_t ___startPlayerHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerHeightDetector__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerHeightDetector__InitData, ___headPosToPlayerHeightOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerHeightDetector__InitData, ___startPlayerHeight) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerHeightDetector
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerHeightDetector*
class CORDL_TYPE PlayerHeightDetector : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__PlayerHeightDetector__InitData;

  /// @brief Field _audioTimeSyncController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController))::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field _beatmapCallbacksController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapObjectCallbackWrapper, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectCallbackWrapper,
                      put = __cordl_internal_set__beatmapObjectCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapObjectCallbackWrapper;

  /// @brief Field _changeWeight, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__changeWeight, put = __cordl_internal_set__changeWeight)) float_t _changeWeight;

  /// @brief Field _computedPlayerHeight, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__computedPlayerHeight, put = __cordl_internal_set__computedPlayerHeight)) float_t _computedPlayerHeight;

  /// @brief Field _initData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__PlayerHeightDetector__InitData* _initData;

  /// @brief Field _lastReportedHeight, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__lastReportedHeight, put = __cordl_internal_set__lastReportedHeight)) float_t _lastReportedHeight;

  /// @brief Field _noTopObstaclesStartTime, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__noTopObstaclesStartTime, put = __cordl_internal_set__noTopObstaclesStartTime)) float_t _noTopObstaclesStartTime;

  /// @brief Field _playerTransforms, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms))::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  __declspec(property(get = get_playerHeight)) float_t playerHeight;

  /// @brief Field playerHeightDidChangeEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playerHeightDidChangeEvent, put = __cordl_internal_set_playerHeightDidChangeEvent))::System::Action_1<float_t>* playerHeightDidChangeEvent;

  /// @brief Method BeatmapObjectSpawnCallback, addr 0x261c434, size 0x44, virtual false, abstract: false, final false
  inline void BeatmapObjectSpawnCallback(::GlobalNamespace::ObstacleData* obstacleData);

  /// @brief Method LateUpdate, addr 0x261c268, size 0x1cc, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::PlayerHeightDetector* New_ctor();

  /// @brief Method OnDestroy, addr 0x261c24c, size 0x1c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x261c168, size 0xe4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapObjectCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __cordl_internal_get__beatmapObjectCallbackWrapper() const;

  constexpr float_t const& __cordl_internal_get__changeWeight() const;

  constexpr float_t& __cordl_internal_get__changeWeight();

  constexpr float_t const& __cordl_internal_get__computedPlayerHeight() const;

  constexpr float_t& __cordl_internal_get__computedPlayerHeight();

  constexpr ::GlobalNamespace::__PlayerHeightDetector__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerHeightDetector__InitData*> const& __cordl_internal_get__initData() const;

  constexpr float_t const& __cordl_internal_get__lastReportedHeight() const;

  constexpr float_t& __cordl_internal_get__lastReportedHeight();

  constexpr float_t const& __cordl_internal_get__noTopObstaclesStartTime() const;

  constexpr float_t& __cordl_internal_get__noTopObstaclesStartTime();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_playerHeightDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __cordl_internal_get_playerHeightDidChangeEvent() const;

  constexpr void __cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapObjectCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__changeWeight(float_t value);

  constexpr void __cordl_internal_set__computedPlayerHeight(float_t value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__PlayerHeightDetector__InitData* value);

  constexpr void __cordl_internal_set__lastReportedHeight(float_t value);

  constexpr void __cordl_internal_set__noTopObstaclesStartTime(float_t value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set_playerHeightDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method .ctor, addr 0x261c478, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_playerHeightDidChangeEvent, addr 0x261c000, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerHeightDidChangeEvent(::System::Action_1<float_t>* value);

  /// @brief Method get_playerHeight, addr 0x261c160, size 0x8, virtual false, abstract: false, final false
  inline float_t get_playerHeight();

  /// @brief Method remove_playerHeightDidChangeEvent, addr 0x261c0b0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerHeightDidChangeEvent(::System::Action_1<float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerHeightDetector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeightDetector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerHeightDetector(PlayerHeightDetector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeightDetector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerHeightDetector(PlayerHeightDetector const&) = delete;

  /// @brief Field _playerTransforms, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field _beatmapCallbacksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _audioTimeSyncController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSyncController;

  /// @brief Field _initData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerHeightDetector__InitData* ____initData;

  /// @brief Field playerHeightDidChangeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___playerHeightDidChangeEvent;

  /// @brief Field _beatmapObjectCallbackWrapper, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapObjectCallbackWrapper;

  /// @brief Field _noTopObstaclesStartTime, offset: 0x48, size: 0x4, def value: None
  float_t ____noTopObstaclesStartTime;

  /// @brief Field _computedPlayerHeight, offset: 0x4c, size: 0x4, def value: None
  float_t ____computedPlayerHeight;

  /// @brief Field _changeWeight, offset: 0x50, size: 0x4, def value: None
  float_t ____changeWeight;

  /// @brief Field _lastReportedHeight, offset: 0x54, size: 0x4, def value: None
  float_t ____lastReportedHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerHeightDetector, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightDetector, ____playerTransforms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightDetector, ____beatmapCallbacksController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightDetector, ____audioTimeSyncController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightDetector, ____initData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightDetector, ___playerHeightDidChangeEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightDetector, ____beatmapObjectCallbackWrapper) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightDetector, ____noTopObstaclesStartTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightDetector, ____computedPlayerHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightDetector, ____changeWeight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeightDetector, ____lastReportedHeight) == 0x54, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerHeightDetector);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeightDetector*, "", "PlayerHeightDetector");
NEED_NO_BOX(::GlobalNamespace::__PlayerHeightDetector__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerHeightDetector__InitData*, "", "PlayerHeightDetector/InitData");
