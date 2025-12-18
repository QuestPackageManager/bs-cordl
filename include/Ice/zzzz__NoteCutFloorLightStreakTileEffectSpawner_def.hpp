#pragma once
// IWYU pragma private; include "Ice/NoteCutFloorLightStreakTileEffectSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoteCutFloorLightStreakTileEffectSpawner)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace Ice {
class FloorLightStreakTileEffect;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Ice {
class NoteCutFloorLightStreakTileEffectSpawner;
}
// Write type traits
MARK_REF_PTR_T(::Ice::NoteCutFloorLightStreakTileEffectSpawner);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Ice {
// Is value type: false
// CS Name: Ice.NoteCutFloorLightStreakTileEffectSpawner
class CORDL_TYPE NoteCutFloorLightStreakTileEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _colorManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _floorLightStreakTileEffect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__floorLightStreakTileEffect, put = __cordl_internal_set__floorLightStreakTileEffect)) ::UnityW<::Ice::FloorLightStreakTileEffect>
      _floorLightStreakTileEffect;

  /// @brief Field _spawnColor, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__spawnColor, put = __cordl_internal_set__spawnColor)) ::UnityEngine::Color _spawnColor;

  __declspec(property(get = get_spawnColor, put = set_spawnColor)) ::UnityEngine::Color spawnColor;

  /// @brief Method HandleNoteWasCut, addr 0x31bd210, size 0x64, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  static inline ::Ice::NoteCutFloorLightStreakTileEffectSpawner* New_ctor();

  /// @brief Method OnDestroy, addr 0x31bd178, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x31bd0e8, size 0x90, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::GlobalNamespace::ColorManager* const& __cordl_internal_get__colorManager() const;

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::UnityW<::Ice::FloorLightStreakTileEffect> const& __cordl_internal_get__floorLightStreakTileEffect() const;

  constexpr ::UnityW<::Ice::FloorLightStreakTileEffect>& __cordl_internal_get__floorLightStreakTileEffect();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__spawnColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__spawnColor();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__floorLightStreakTileEffect(::UnityW<::Ice::FloorLightStreakTileEffect> value);

  constexpr void __cordl_internal_set__spawnColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x31bd274, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_spawnColor, addr 0x31bd0dc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_spawnColor();

  /// @brief Method set_spawnColor, addr 0x31bd0d0, size 0xc, virtual false, abstract: false, final false
  inline void set_spawnColor(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutFloorLightStreakTileEffectSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutFloorLightStreakTileEffectSpawner(NoteCutFloorLightStreakTileEffectSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutFloorLightStreakTileEffectSpawner(NoteCutFloorLightStreakTileEffectSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22857 };

  /// @brief Field _floorLightStreakTileEffect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Ice::FloorLightStreakTileEffect> ____floorLightStreakTileEffect;

  /// @brief Field _beatmapObjectManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _colorManager, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _spawnColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____spawnColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Ice::NoteCutFloorLightStreakTileEffectSpawner, ____floorLightStreakTileEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Ice::NoteCutFloorLightStreakTileEffectSpawner, ____beatmapObjectManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ice::NoteCutFloorLightStreakTileEffectSpawner, ____colorManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Ice::NoteCutFloorLightStreakTileEffectSpawner, ____spawnColor) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Ice::NoteCutFloorLightStreakTileEffectSpawner, 0x48>, "Size mismatch!");

} // namespace Ice
NEED_NO_BOX(::Ice::NoteCutFloorLightStreakTileEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::Ice::NoteCutFloorLightStreakTileEffectSpawner*, "Ice", "NoteCutFloorLightStreakTileEffectSpawner");
