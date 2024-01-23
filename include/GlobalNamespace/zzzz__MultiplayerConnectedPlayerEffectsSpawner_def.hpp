#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerEffectsSpawner)
namespace GlobalNamespace {
class BombExplosionEffect;
}
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteDebrisSpawner;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerEffectsSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner);
// Type: ::MultiplayerConnectedPlayerEffectsSpawner
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5120))
// CS Name: ::MultiplayerConnectedPlayerEffectsSpawner*
class CORDL_TYPE MultiplayerConnectedPlayerEffectsSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _noteDebrisSpawner, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__noteDebrisSpawner, put = __cordl_internal_set__noteDebrisSpawner))::UnityW<::GlobalNamespace::NoteDebrisSpawner> _noteDebrisSpawner;

  /// @brief Field _bombExplosionEffect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bombExplosionEffect, put = __cordl_internal_set__bombExplosionEffect))::UnityW<::GlobalNamespace::BombExplosionEffect> _bombExplosionEffect;

  /// @brief Field _beatmapObjectEventManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectEventManager,
                      put = __cordl_internal_set__beatmapObjectEventManager))::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* _beatmapObjectEventManager;

  constexpr ::UnityW<::GlobalNamespace::NoteDebrisSpawner>& __cordl_internal_get__noteDebrisSpawner();

  constexpr ::UnityW<::GlobalNamespace::NoteDebrisSpawner> const& __cordl_internal_get__noteDebrisSpawner() const;

  constexpr void __cordl_internal_set__noteDebrisSpawner(::UnityW<::GlobalNamespace::NoteDebrisSpawner> value);

  constexpr ::UnityW<::GlobalNamespace::BombExplosionEffect>& __cordl_internal_get__bombExplosionEffect();

  constexpr ::UnityW<::GlobalNamespace::BombExplosionEffect> const& __cordl_internal_get__bombExplosionEffect() const;

  constexpr void __cordl_internal_set__bombExplosionEffect(::UnityW<::GlobalNamespace::BombExplosionEffect> value);

  constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*& __cordl_internal_get__beatmapObjectEventManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*> const& __cordl_internal_get__beatmapObjectEventManager() const;

  constexpr void __cordl_internal_set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* value);

  /// @brief Method Start, addr 0x23d4748, size 0xf0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23d4838, size 0x108, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut, addr 0x23d4940, size 0x1f8, virtual false, abstract: false, final false
  inline void HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut(::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner* New_ctor();

  /// @brief Method .ctor, addr 0x23d4b38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerEffectsSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerEffectsSpawner(MultiplayerConnectedPlayerEffectsSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerEffectsSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerEffectsSpawner(MultiplayerConnectedPlayerEffectsSpawner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerEffectsSpawner();

public:
  /// @brief Field _noteDebrisSpawner, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteDebrisSpawner> ____noteDebrisSpawner;

  /// @brief Field _bombExplosionEffect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BombExplosionEffect> ____bombExplosionEffect;

  /// @brief Field _beatmapObjectEventManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* ____beatmapObjectEventManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner, ____noteDebrisSpawner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner, ____bombExplosionEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner, ____beatmapObjectEventManager) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*, "", "MultiplayerConnectedPlayerEffectsSpawner");
