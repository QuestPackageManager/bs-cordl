#pragma once
// IWYU pragma private; include "GlobalNamespace/OffsetByBeatmapObjectSpawnCenter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OffsetByBeatmapObjectSpawnCenter)
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
// Forward declare root types
namespace GlobalNamespace {
class OffsetByBeatmapObjectSpawnCenter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OffsetByBeatmapObjectSpawnCenter
class CORDL_TYPE OffsetByBeatmapObjectSpawnCenter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _spawnCenter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnCenter, put = __cordl_internal_set__spawnCenter)) ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> _spawnCenter;

  /// @brief Method HandleSpawnCenterDistanceWasFound, addr 0x3ad846c, size 0x68, virtual false, abstract: false, final false
  inline void HandleSpawnCenterDistanceWasFound(float_t distance);

  static inline ::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter* New_ctor();

  /// @brief Method Start, addr 0x3ad83c8, size 0xa4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> const& __cordl_internal_get__spawnCenter() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter>& __cordl_internal_get__spawnCenter();

  constexpr void __cordl_internal_set__spawnCenter(::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> value);

  /// @brief Method .ctor, addr 0x3ad84d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OffsetByBeatmapObjectSpawnCenter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OffsetByBeatmapObjectSpawnCenter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OffsetByBeatmapObjectSpawnCenter(OffsetByBeatmapObjectSpawnCenter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OffsetByBeatmapObjectSpawnCenter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OffsetByBeatmapObjectSpawnCenter(OffsetByBeatmapObjectSpawnCenter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4051 };

  /// @brief Field _spawnCenter, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> ____spawnCenter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter, ____spawnCenter) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*, "", "OffsetByBeatmapObjectSpawnCenter");
