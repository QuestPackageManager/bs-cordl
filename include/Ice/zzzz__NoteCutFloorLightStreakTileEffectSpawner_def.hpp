#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(NoteCutFloorLightStreakTileEffectSpawner)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace Ice {
class FloorLightStreakTileEffect;
}
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace Ice {
class NoteCutFloorLightStreakTileEffectSpawner;
}
// Write type traits
MARK_REF_PTR_T(::Ice::NoteCutFloorLightStreakTileEffectSpawner);
// Type: Ice::NoteCutFloorLightStreakTileEffectSpawner
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16171))
// CS Name: ::Ice::NoteCutFloorLightStreakTileEffectSpawner*
class CORDL_TYPE NoteCutFloorLightStreakTileEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _floorLightStreakTileEffect, offset 0x18, size 0x8
  __declspec(property(get = __get__floorLightStreakTileEffect, put = __set__floorLightStreakTileEffect))::Ice::FloorLightStreakTileEffect* _floorLightStreakTileEffect;

  /// @brief Field _beatmapObjectManager, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _colorManager, offset 0x28, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _spawnColor, offset 0x30, size 0x10
  __declspec(property(get = __get__spawnColor, put = __set__spawnColor))::UnityEngine::Color _spawnColor;

  __declspec(property(get = get_spawnColor, put = set_spawnColor))::UnityEngine::Color spawnColor;

  constexpr ::Ice::FloorLightStreakTileEffect*& __get__floorLightStreakTileEffect();

  constexpr ::cordl_internals::to_const_pointer<::Ice::FloorLightStreakTileEffect*> const& __get__floorLightStreakTileEffect() const;

  constexpr void __set__floorLightStreakTileEffect(::Ice::FloorLightStreakTileEffect* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::UnityEngine::Color& __get__spawnColor();

  constexpr ::UnityEngine::Color const& __get__spawnColor() const;

  constexpr void __set__spawnColor(::UnityEngine::Color value);

  /// @brief Method set_spawnColor, addr 0x129fea4, size 0xc, virtual false, abstract: false, final false
  inline void set_spawnColor(::UnityEngine::Color value);

  /// @brief Method get_spawnColor, addr 0x129feb0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_spawnColor();

  /// @brief Method Start, addr 0x129febc, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x129ff48, size 0x98, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleNoteWasCut, addr 0x129ffe0, size 0x64, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  static inline ::Ice::NoteCutFloorLightStreakTileEffectSpawner* New_ctor();

  /// @brief Method .ctor, addr 0x12a0044, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutFloorLightStreakTileEffectSpawner(NoteCutFloorLightStreakTileEffectSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutFloorLightStreakTileEffectSpawner(NoteCutFloorLightStreakTileEffectSpawner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutFloorLightStreakTileEffectSpawner();

public:
  /// @brief Field _floorLightStreakTileEffect, offset: 0x18, size: 0x8, def value: None
  ::Ice::FloorLightStreakTileEffect* ____floorLightStreakTileEffect;

  /// @brief Field _beatmapObjectManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _colorManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _spawnColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____spawnColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::NoteCutFloorLightStreakTileEffectSpawner, 0x40>, "Size mismatch!");

static_assert(offsetof(::Ice::NoteCutFloorLightStreakTileEffectSpawner, ____floorLightStreakTileEffect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Ice::NoteCutFloorLightStreakTileEffectSpawner, ____beatmapObjectManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Ice::NoteCutFloorLightStreakTileEffectSpawner, ____colorManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ice::NoteCutFloorLightStreakTileEffectSpawner, ____spawnColor) == 0x30, "Offset mismatch!");

} // namespace Ice
NEED_NO_BOX(::Ice::NoteCutFloorLightStreakTileEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::Ice::NoteCutFloorLightStreakTileEffectSpawner*, "Ice", "NoteCutFloorLightStreakTileEffectSpawner");
