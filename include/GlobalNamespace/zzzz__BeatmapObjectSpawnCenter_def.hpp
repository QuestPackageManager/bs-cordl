#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectSpawnCenter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectSpawnCenter)
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter_PlayerCountToDistance;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter_PlayerCountToDistance;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectSpawnCenter);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectSpawnCenter/PlayerCountToDistance
class CORDL_TYPE BeatmapObjectSpawnCenter_PlayerCountToDistance : public ::System::Object {
public:
  // Declarations
  /// @brief Field _distance, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__distance, put = __cordl_internal_set__distance)) float_t _distance;

  /// @brief Field _playerCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__playerCount, put = __cordl_internal_set__playerCount)) int32_t _playerCount;

  __declspec(property(get = get_distance)) float_t distance;

  __declspec(property(get = get_playerCount)) int32_t playerCount;

  static inline ::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance* New_ctor();

  constexpr float_t const& __cordl_internal_get__distance() const;

  constexpr float_t& __cordl_internal_get__distance();

  constexpr int32_t const& __cordl_internal_get__playerCount() const;

  constexpr int32_t& __cordl_internal_get__playerCount();

  constexpr void __cordl_internal_set__distance(float_t value);

  constexpr void __cordl_internal_set__playerCount(int32_t value);

  /// @brief Method .ctor, addr 0x571e0a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_distance, addr 0x571e09c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// @brief Method get_playerCount, addr 0x571e094, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_playerCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectSpawnCenter_PlayerCountToDistance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnCenter_PlayerCountToDistance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectSpawnCenter_PlayerCountToDistance(BeatmapObjectSpawnCenter_PlayerCountToDistance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnCenter_PlayerCountToDistance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectSpawnCenter_PlayerCountToDistance(BeatmapObjectSpawnCenter_PlayerCountToDistance const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5633 };

  /// @brief Field _playerCount, offset: 0x10, size: 0x4, def value: None
  int32_t ____playerCount;

  /// @brief Field _distance, offset: 0x14, size: 0x4, def value: None
  float_t ____distance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance, ____playerCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance, ____distance) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectSpawnCenter
class CORDL_TYPE BeatmapObjectSpawnCenter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PlayerCountToDistance = ::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance;

  /// @brief Field _defaultDistnace, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultDistnace, put = __cordl_internal_set__defaultDistnace)) float_t _defaultDistnace;

  /// @brief Field _distances, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__distances,
      put = __cordl_internal_set__distances)) ::ArrayW<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*, ::Array<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*>*>
      _distances;

  /// @brief Field _spawnCenterDistance, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__spawnCenterDistance, put = __cordl_internal_set__spawnCenterDistance)) float_t _spawnCenterDistance;

  /// @brief Field _spawnCenterDistanceWasFound, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__spawnCenterDistanceWasFound, put = __cordl_internal_set__spawnCenterDistanceWasFound)) bool _spawnCenterDistanceWasFound;

  __declspec(property(get = get_spawnCenterDistance)) float_t spawnCenterDistance;

  __declspec(property(get = get_spawnCenterDistanceWasFound)) bool spawnCenterDistanceWasFound;

  /// @brief Field spawnCenterDistanceWasFoundEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_spawnCenterDistanceWasFoundEvent,
                      put = __cordl_internal_set_spawnCenterDistanceWasFoundEvent)) ::System::Action_1<float_t>* spawnCenterDistanceWasFoundEvent;

  /// @brief Method CalculateSpawnCenterPosition, addr 0x571dee4, size 0x17c, virtual false, abstract: false, final false
  inline float_t CalculateSpawnCenterPosition(int32_t numberOfPlayers);

  static inline ::GlobalNamespace::BeatmapObjectSpawnCenter* New_ctor();

  /// @brief Method ReportAndSaveSpawnCenterDistance, addr 0x571e060, size 0x28, virtual false, abstract: false, final false
  inline void ReportAndSaveSpawnCenterDistance(float_t distance);

  constexpr float_t const& __cordl_internal_get__defaultDistnace() const;

  constexpr float_t& __cordl_internal_get__defaultDistnace();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*, ::Array<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*>*> const&
  __cordl_internal_get__distances() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*, ::Array<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*>*>&
  __cordl_internal_get__distances();

  constexpr float_t const& __cordl_internal_get__spawnCenterDistance() const;

  constexpr float_t& __cordl_internal_get__spawnCenterDistance();

  constexpr bool const& __cordl_internal_get__spawnCenterDistanceWasFound() const;

  constexpr bool& __cordl_internal_get__spawnCenterDistanceWasFound();

  constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_spawnCenterDistanceWasFoundEvent() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_spawnCenterDistanceWasFoundEvent();

  constexpr void __cordl_internal_set__defaultDistnace(float_t value);

  constexpr void
  __cordl_internal_set__distances(::ArrayW<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*, ::Array<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*>*> value);

  constexpr void __cordl_internal_set__spawnCenterDistance(float_t value);

  constexpr void __cordl_internal_set__spawnCenterDistanceWasFound(bool value);

  constexpr void __cordl_internal_set_spawnCenterDistanceWasFoundEvent(::System::Action_1<float_t>* value);

  /// @brief Method .ctor, addr 0x571e088, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_spawnCenterDistanceWasFoundEvent, addr 0x571dd64, size 0xc0, virtual false, abstract: false, final false
  inline void add_spawnCenterDistanceWasFoundEvent(::System::Action_1<float_t>* value);

  /// @brief Method get_spawnCenterDistance, addr 0x571dd54, size 0x8, virtual false, abstract: false, final false
  inline float_t get_spawnCenterDistance();

  /// @brief Method get_spawnCenterDistanceWasFound, addr 0x571dd5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_spawnCenterDistanceWasFound();

  /// @brief Method remove_spawnCenterDistanceWasFoundEvent, addr 0x571de24, size 0xc0, virtual false, abstract: false, final false
  inline void remove_spawnCenterDistanceWasFoundEvent(::System::Action_1<float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectSpawnCenter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnCenter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectSpawnCenter(BeatmapObjectSpawnCenter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnCenter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectSpawnCenter(BeatmapObjectSpawnCenter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5634 };

  /// @brief Field _distances, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*, ::Array<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*>*> ____distances;

  /// @brief Field _defaultDistnace, offset: 0x28, size: 0x4, def value: None
  float_t ____defaultDistnace;

  /// @brief Field spawnCenterDistanceWasFoundEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___spawnCenterDistanceWasFoundEvent;

  /// @brief Field _spawnCenterDistanceWasFound, offset: 0x38, size: 0x1, def value: None
  bool ____spawnCenterDistanceWasFound;

  /// @brief Field _spawnCenterDistance, offset: 0x3c, size: 0x4, def value: None
  float_t ____spawnCenterDistance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnCenter, ____distances) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnCenter, ____defaultDistnace) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnCenter, ___spawnCenterDistanceWasFoundEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnCenter, ____spawnCenterDistanceWasFound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnCenter, ____spawnCenterDistance) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectSpawnCenter, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectSpawnCenter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnCenter*, "", "BeatmapObjectSpawnCenter");
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*, "", "BeatmapObjectSpawnCenter/PlayerCountToDistance");
