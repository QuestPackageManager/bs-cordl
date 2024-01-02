#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EffectPoolsManualInstaller)
namespace GlobalNamespace {
class BeatEffect;
}
namespace GlobalNamespace {
class NoteCutSoundEffect;
}
namespace GlobalNamespace {
class FlyingSpriteEffect;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class FlyingTextEffect;
}
namespace GlobalNamespace {
class FlyingScoreEffect;
}
namespace GlobalNamespace {
class BombCutSoundEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class EffectPoolsManualInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EffectPoolsManualInstaller);
// Type: ::EffectPoolsManualInstaller
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5390))
// CS Name: ::EffectPoolsManualInstaller*
class CORDL_TYPE EffectPoolsManualInstaller : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _flyingTextEffectPrefab, offset 0x18, size 0x8
  __declspec(property(get = __get__flyingTextEffectPrefab, put = __set__flyingTextEffectPrefab))::GlobalNamespace::FlyingTextEffect* _flyingTextEffectPrefab;

  /// @brief Field _flyingScoreEffectPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__flyingScoreEffectPrefab, put = __set__flyingScoreEffectPrefab))::GlobalNamespace::FlyingScoreEffect* _flyingScoreEffectPrefab;

  /// @brief Field _beatEffectPrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__beatEffectPrefab, put = __set__beatEffectPrefab))::GlobalNamespace::BeatEffect* _beatEffectPrefab;

  /// @brief Field _shortBeatEffectPrefab, offset 0x30, size 0x8
  __declspec(property(get = __get__shortBeatEffectPrefab, put = __set__shortBeatEffectPrefab))::GlobalNamespace::BeatEffect* _shortBeatEffectPrefab;

  /// @brief Field _noteCutSoundEffectPrefab, offset 0x38, size 0x8
  __declspec(property(get = __get__noteCutSoundEffectPrefab, put = __set__noteCutSoundEffectPrefab))::GlobalNamespace::NoteCutSoundEffect* _noteCutSoundEffectPrefab;

  /// @brief Field _bombCutSoundEffectPrefab, offset 0x40, size 0x8
  __declspec(property(get = __get__bombCutSoundEffectPrefab, put = __set__bombCutSoundEffectPrefab))::GlobalNamespace::BombCutSoundEffect* _bombCutSoundEffectPrefab;

  /// @brief Field _flyingSpriteEffectPrefab, offset 0x48, size 0x8
  __declspec(property(get = __get__flyingSpriteEffectPrefab, put = __set__flyingSpriteEffectPrefab))::GlobalNamespace::FlyingSpriteEffect* _flyingSpriteEffectPrefab;

  constexpr ::GlobalNamespace::FlyingTextEffect*& __get__flyingTextEffectPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlyingTextEffect*> const& __get__flyingTextEffectPrefab() const;

  constexpr void __set__flyingTextEffectPrefab(::GlobalNamespace::FlyingTextEffect* value);

  constexpr ::GlobalNamespace::FlyingScoreEffect*& __get__flyingScoreEffectPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlyingScoreEffect*> const& __get__flyingScoreEffectPrefab() const;

  constexpr void __set__flyingScoreEffectPrefab(::GlobalNamespace::FlyingScoreEffect* value);

  constexpr ::GlobalNamespace::BeatEffect*& __get__beatEffectPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatEffect*> const& __get__beatEffectPrefab() const;

  constexpr void __set__beatEffectPrefab(::GlobalNamespace::BeatEffect* value);

  constexpr ::GlobalNamespace::BeatEffect*& __get__shortBeatEffectPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatEffect*> const& __get__shortBeatEffectPrefab() const;

  constexpr void __set__shortBeatEffectPrefab(::GlobalNamespace::BeatEffect* value);

  constexpr ::GlobalNamespace::NoteCutSoundEffect*& __get__noteCutSoundEffectPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutSoundEffect*> const& __get__noteCutSoundEffectPrefab() const;

  constexpr void __set__noteCutSoundEffectPrefab(::GlobalNamespace::NoteCutSoundEffect* value);

  constexpr ::GlobalNamespace::BombCutSoundEffect*& __get__bombCutSoundEffectPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BombCutSoundEffect*> const& __get__bombCutSoundEffectPrefab() const;

  constexpr void __set__bombCutSoundEffectPrefab(::GlobalNamespace::BombCutSoundEffect* value);

  constexpr ::GlobalNamespace::FlyingSpriteEffect*& __get__flyingSpriteEffectPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlyingSpriteEffect*> const& __get__flyingSpriteEffectPrefab() const;

  constexpr void __set__flyingSpriteEffectPrefab(::GlobalNamespace::FlyingSpriteEffect* value);

  /// @brief Method ManualInstallBindings, addr 0x226f65c, size 0x248, virtual false, abstract: false, final false
  inline void ManualInstallBindings(::Zenject::DiContainer* container, bool shortBeatEffect);

  static inline ::GlobalNamespace::EffectPoolsManualInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x226f8a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EffectPoolsManualInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EffectPoolsManualInstaller(EffectPoolsManualInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EffectPoolsManualInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EffectPoolsManualInstaller(EffectPoolsManualInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EffectPoolsManualInstaller();

public:
  /// @brief Field _flyingTextEffectPrefab, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::FlyingTextEffect* ____flyingTextEffectPrefab;

  /// @brief Field _flyingScoreEffectPrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::FlyingScoreEffect* ____flyingScoreEffectPrefab;

  /// @brief Field _beatEffectPrefab, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatEffect* ____beatEffectPrefab;

  /// @brief Field _shortBeatEffectPrefab, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatEffect* ____shortBeatEffectPrefab;

  /// @brief Field _noteCutSoundEffectPrefab, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::NoteCutSoundEffect* ____noteCutSoundEffectPrefab;

  /// @brief Field _bombCutSoundEffectPrefab, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BombCutSoundEffect* ____bombCutSoundEffectPrefab;

  /// @brief Field _flyingSpriteEffectPrefab, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::FlyingSpriteEffect* ____flyingSpriteEffectPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EffectPoolsManualInstaller, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____flyingTextEffectPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____flyingScoreEffectPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____beatEffectPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____shortBeatEffectPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____noteCutSoundEffectPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____bombCutSoundEffectPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EffectPoolsManualInstaller, ____flyingSpriteEffectPrefab) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EffectPoolsManualInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EffectPoolsManualInstaller*, "", "EffectPoolsManualInstaller");
