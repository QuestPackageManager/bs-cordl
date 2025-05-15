#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteTrailEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteTrailEffect)
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
class NoteTrailParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteTrailEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteTrailEffect);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteTrailEffect
class CORDL_TYPE NoteTrailEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _maxSpawnDistance, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__maxSpawnDistance, put = __cordl_internal_set__maxSpawnDistance)) float_t _maxSpawnDistance;

  /// @brief Field _noteMovement, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__noteMovement, put = __cordl_internal_set__noteMovement)) ::UnityW<::GlobalNamespace::NoteMovement> _noteMovement;

  /// @brief Field _noteTrailParticleSystem, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__noteTrailParticleSystem, put = __cordl_internal_set__noteTrailParticleSystem)) ::UnityW<::GlobalNamespace::NoteTrailParticleSystem>
      _noteTrailParticleSystem;

  /// @brief Field _particlesPerFrame, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__particlesPerFrame, put = __cordl_internal_set__particlesPerFrame)) int32_t _particlesPerFrame;

  /// @brief Method Awake, addr 0x3b96b5c, size 0xf8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleNoteDidStartJump, addr 0x3b96de8, size 0xc, virtual false, abstract: false, final false
  inline void HandleNoteDidStartJump();

  /// @brief Method HandleNoteMovementDidInit, addr 0x3b96ddc, size 0xc, virtual false, abstract: false, final false
  inline void HandleNoteMovementDidInit();

  static inline ::GlobalNamespace::NoteTrailEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b96c54, size 0x124, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x3b96d78, size 0x64, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__maxSpawnDistance() const;

  constexpr float_t& __cordl_internal_get__maxSpawnDistance();

  constexpr ::UnityW<::GlobalNamespace::NoteMovement> const& __cordl_internal_get__noteMovement() const;

  constexpr ::UnityW<::GlobalNamespace::NoteMovement>& __cordl_internal_get__noteMovement();

  constexpr ::UnityW<::GlobalNamespace::NoteTrailParticleSystem> const& __cordl_internal_get__noteTrailParticleSystem() const;

  constexpr ::UnityW<::GlobalNamespace::NoteTrailParticleSystem>& __cordl_internal_get__noteTrailParticleSystem();

  constexpr int32_t const& __cordl_internal_get__particlesPerFrame() const;

  constexpr int32_t& __cordl_internal_get__particlesPerFrame();

  constexpr void __cordl_internal_set__maxSpawnDistance(float_t value);

  constexpr void __cordl_internal_set__noteMovement(::UnityW<::GlobalNamespace::NoteMovement> value);

  constexpr void __cordl_internal_set__noteTrailParticleSystem(::UnityW<::GlobalNamespace::NoteTrailParticleSystem> value);

  constexpr void __cordl_internal_set__particlesPerFrame(int32_t value);

  /// @brief Method .ctor, addr 0x3b96df4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteTrailEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteTrailEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteTrailEffect(NoteTrailEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteTrailEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteTrailEffect(NoteTrailEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4325 };

  /// @brief Field _particlesPerFrame, offset: 0x20, size: 0x4, def value: None
  int32_t ____particlesPerFrame;

  /// @brief Field _maxSpawnDistance, offset: 0x24, size: 0x4, def value: None
  float_t ____maxSpawnDistance;

  /// @brief Field _noteMovement, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteMovement> ____noteMovement;

  /// @brief Field _noteTrailParticleSystem, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoteTrailParticleSystem> ____noteTrailParticleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteTrailEffect, ____particlesPerFrame) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteTrailEffect, ____maxSpawnDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteTrailEffect, ____noteMovement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteTrailEffect, ____noteTrailParticleSystem) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteTrailEffect, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteTrailEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteTrailEffect*, "", "NoteTrailEffect");
