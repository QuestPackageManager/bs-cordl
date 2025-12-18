#pragma once
// IWYU pragma private; include "Ice/NoteCutFloorLightStreakTileEffectSpawnerLightWithId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoteCutFloorLightStreakTileEffectSpawnerLightWithId)
namespace Ice {
class NoteCutFloorLightStreakTileEffectSpawner;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Ice {
class NoteCutFloorLightStreakTileEffectSpawnerLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId);
// Dependencies LightWithIdMonoBehaviour
namespace Ice {
// Is value type: false
// CS Name: Ice.NoteCutFloorLightStreakTileEffectSpawnerLightWithId
class CORDL_TYPE NoteCutFloorLightStreakTileEffectSpawnerLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _noteCutFloorLightStreakTileEffectSpawner, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__noteCutFloorLightStreakTileEffectSpawner,
                      put = __cordl_internal_set__noteCutFloorLightStreakTileEffectSpawner)) ::UnityW<::Ice::NoteCutFloorLightStreakTileEffectSpawner>
      _noteCutFloorLightStreakTileEffectSpawner;

  /// @brief Method ColorWasSet, addr 0x31bd27c, size 0x1c, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId* New_ctor();

  constexpr ::UnityW<::Ice::NoteCutFloorLightStreakTileEffectSpawner> const& __cordl_internal_get__noteCutFloorLightStreakTileEffectSpawner() const;

  constexpr ::UnityW<::Ice::NoteCutFloorLightStreakTileEffectSpawner>& __cordl_internal_get__noteCutFloorLightStreakTileEffectSpawner();

  constexpr void __cordl_internal_set__noteCutFloorLightStreakTileEffectSpawner(::UnityW<::Ice::NoteCutFloorLightStreakTileEffectSpawner> value);

  /// @brief Method .ctor, addr 0x31bd298, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutFloorLightStreakTileEffectSpawnerLightWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawnerLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutFloorLightStreakTileEffectSpawnerLightWithId(NoteCutFloorLightStreakTileEffectSpawnerLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawnerLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutFloorLightStreakTileEffectSpawnerLightWithId(NoteCutFloorLightStreakTileEffectSpawnerLightWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22858 };

  /// @brief Field _noteCutFloorLightStreakTileEffectSpawner, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Ice::NoteCutFloorLightStreakTileEffectSpawner> ____noteCutFloorLightStreakTileEffectSpawner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId, ____noteCutFloorLightStreakTileEffectSpawner) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId, 0x40>, "Size mismatch!");

} // namespace Ice
NEED_NO_BOX(::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*, "Ice", "NoteCutFloorLightStreakTileEffectSpawnerLightWithId");
