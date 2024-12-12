#pragma once
// IWYU pragma private; include "GlobalNamespace/EffectPoolsManualInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EffectPoolsManualInstaller)
namespace GlobalNamespace {
class BeatEffect;
}
namespace GlobalNamespace {
class BombCutSoundEffect;
}
namespace GlobalNamespace {
class FlyingScoreEffect;
}
namespace GlobalNamespace {
class FlyingSpriteEffect;
}
namespace GlobalNamespace {
class FlyingTextEffect;
}
namespace GlobalNamespace {
class NoteCutSoundEffect;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class EffectPoolsManualInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EffectPoolsManualInstaller);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EffectPoolsManualInstaller
class CORDL_TYPE EffectPoolsManualInstaller : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatEffectPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatEffectPrefab, put = __cordl_internal_set__beatEffectPrefab)) ::UnityW<::GlobalNamespace::BeatEffect> _beatEffectPrefab;

  /// @brief Field _bombCutSoundEffectPrefab, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__bombCutSoundEffectPrefab, put = __cordl_internal_set__bombCutSoundEffectPrefab)) ::UnityW<::GlobalNamespace::BombCutSoundEffect>
      _bombCutSoundEffectPrefab;

  /// @brief Field _flyingScoreEffectPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__flyingScoreEffectPrefab, put = __cordl_internal_set__flyingScoreEffectPrefab)) ::UnityW<::GlobalNamespace::FlyingScoreEffect>
      _flyingScoreEffectPrefab;

  /// @brief Field _flyingSpriteEffectPrefab, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__flyingSpriteEffectPrefab, put = __cordl_internal_set__flyingSpriteEffectPrefab)) ::UnityW<::GlobalNamespace::FlyingSpriteEffect>
      _flyingSpriteEffectPrefab;

  /// @brief Field _flyingTextEffectPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__flyingTextEffectPrefab, put = __cordl_internal_set__flyingTextEffectPrefab)) ::UnityW<::GlobalNamespace::FlyingTextEffect> _flyingTextEffectPrefab;

  /// @brief Field _noteCutSoundEffectPrefab, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__noteCutSoundEffectPrefab, put = __cordl_internal_set__noteCutSoundEffectPrefab)) ::UnityW<::GlobalNamespace::NoteCutSoundEffect>
      _noteCutSoundEffectPrefab;

  /// @brief Field _shortBeatEffectPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__shortBeatEffectPrefab, put = __cordl_internal_set__shortBeatEffectPrefab)) ::UnityW<::GlobalNamespace::BeatEffect> _shortBeatEffectPrefab;

  /// @brief Method ManualInstallBindings, addr 0x3bef930, size 0x248, virtual false, abstract: false, final false
  inline void ManualInstallBindings(::Zenject::DiContainer* container, bool shortBeatEffect);

  static inline ::GlobalNamespace::EffectPoolsManualInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BeatEffect> const& __cordl_internal_get__beatEffectPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BeatEffect>& __cordl_internal_get__beatEffectPrefab();

  constexpr ::UnityW<::GlobalNamespace::BombCutSoundEffect> const& __cordl_internal_get__bombCutSoundEffectPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BombCutSoundEffect>& __cordl_internal_get__bombCutSoundEffectPrefab();

  constexpr ::UnityW<::GlobalNamespace::FlyingScoreEffect> const& __cordl_internal_get__flyingScoreEffectPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::FlyingScoreEffect>& __cordl_internal_get__flyingScoreEffectPrefab();

  constexpr ::UnityW<::GlobalNamespace::FlyingSpriteEffect> const& __cordl_internal_get__flyingSpriteEffectPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::FlyingSpriteEffect>& __cordl_internal_get__flyingSpriteEffectPrefab();

  constexpr ::UnityW<::GlobalNamespace::FlyingTextEffect> const& __cordl_internal_get__flyingTextEffectPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::FlyingTextEffect>& __cordl_internal_get__flyingTextEffectPrefab();

  constexpr ::UnityW<::GlobalNamespace::NoteCutSoundEffect> const& __cordl_internal_get__noteCutSoundEffectPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NoteCutSoundEffect>& __cordl_internal_get__noteCutSoundEffectPrefab();

  constexpr ::UnityW<::GlobalNamespace::BeatEffect> const& __cordl_internal_get__shortBeatEffectPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::BeatEffect>& __cordl_internal_get__shortBeatEffectPrefab();

  constexpr void __cordl_internal_set__beatEffectPrefab(::UnityW<::GlobalNamespace::BeatEffect> value);

  constexpr void __cordl_internal_set__bombCutSoundEffectPrefab(::UnityW<::GlobalNamespace::BombCutSoundEffect> value);

  constexpr void __cordl_internal_set__flyingScoreEffectPrefab(::UnityW<::GlobalNamespace::FlyingScoreEffect> value);

  constexpr void __cordl_internal_set__flyingSpriteEffectPrefab(::UnityW<::GlobalNamespace::FlyingSpriteEffect> value);

  constexpr void __cordl_internal_set__flyingTextEffectPrefab(::UnityW<::GlobalNamespace::FlyingTextEffect> value);

  constexpr void __cordl_internal_set__noteCutSoundEffectPrefab(::UnityW<::GlobalNamespace::NoteCutSoundEffect> value);

  constexpr void __cordl_internal_set__shortBeatEffectPrefab(::UnityW<::GlobalNamespace::BeatEffect> value);

  /// @brief Method .ctor, addr 0x3befb78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EffectPoolsManualInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EffectPoolsManualInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EffectPoolsManualInstaller(EffectPoolsManualInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EffectPoolsManualInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EffectPoolsManualInstaller(EffectPoolsManualInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4716 };

  /// @brief Field _flyingTextEffectPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FlyingTextEffect> ____flyingTextEffectPrefab;

  /// @brief Field _flyingScoreEffectPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FlyingScoreEffect> ____flyingScoreEffectPrefab;

  /// @brief Field _beatEffectPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatEffect> ____beatEffectPrefab;

  /// @brief Field _shortBeatEffectPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatEffect> ____shortBeatEffectPrefab;

  /// @brief Field _noteCutSoundEffectPrefab, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteCutSoundEffect> ____noteCutSoundEffectPrefab;

  /// @brief Field _bombCutSoundEffectPrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BombCutSoundEffect> ____bombCutSoundEffectPrefab;

  /// @brief Field _flyingSpriteEffectPrefab, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FlyingSpriteEffect> ____flyingSpriteEffectPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____flyingTextEffectPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____flyingScoreEffectPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____beatEffectPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____shortBeatEffectPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____noteCutSoundEffectPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____bombCutSoundEffectPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____flyingSpriteEffectPrefab) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EffectPoolsManualInstaller, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EffectPoolsManualInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EffectPoolsManualInstaller*, "", "EffectPoolsManualInstaller");
