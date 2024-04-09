#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObstacleSaberSoundEffect)
namespace GlobalNamespace {
class ObstacleSaberSparkleEffectManager;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleSaberSoundEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleSaberSoundEffect);
// Type: ::ObstacleSaberSoundEffect
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObstacleSaberSoundEffect*
class CORDL_TYPE ObstacleSaberSoundEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource))::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _obstacleSaberSparkleEffectManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleSaberSparkleEffectManager,
                      put = __cordl_internal_set__obstacleSaberSparkleEffectManager))::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager> _obstacleSaberSparkleEffectManager;

  /// @brief Field _saberType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__saberType, put = __cordl_internal_set__saberType))::GlobalNamespace::SaberType _saberType;

  /// @brief Field _targetVolume, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__targetVolume, put = __cordl_internal_set__targetVolume)) float_t _targetVolume;

  /// @brief Field _volume, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__volume, put = __cordl_internal_set__volume)) float_t _volume;

  /// @brief Method Awake, addr 0x250a9e8, size 0x104, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleSparkleEffecDidEnd, addr 0x250ade4, size 0x14, virtual false, abstract: false, final false
  inline void HandleSparkleEffecDidEnd(::GlobalNamespace::SaberType saberType);

  /// @brief Method HandleSparkleEffectDidStart, addr 0x250ad1c, size 0xc8, virtual false, abstract: false, final false
  inline void HandleSparkleEffectDidStart(::GlobalNamespace::SaberType saberType);

  /// @brief Method LateUpdate, addr 0x250ac18, size 0x104, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::ObstacleSaberSoundEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x250aaec, size 0x12c, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager> const& __cordl_internal_get__obstacleSaberSparkleEffectManager() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager>& __cordl_internal_get__obstacleSaberSparkleEffectManager();

  constexpr ::GlobalNamespace::SaberType const& __cordl_internal_get__saberType() const;

  constexpr ::GlobalNamespace::SaberType& __cordl_internal_get__saberType();

  constexpr float_t const& __cordl_internal_get__targetVolume() const;

  constexpr float_t& __cordl_internal_get__targetVolume();

  constexpr float_t const& __cordl_internal_get__volume() const;

  constexpr float_t& __cordl_internal_get__volume();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__obstacleSaberSparkleEffectManager(::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager> value);

  constexpr void __cordl_internal_set__saberType(::GlobalNamespace::SaberType value);

  constexpr void __cordl_internal_set__targetVolume(float_t value);

  constexpr void __cordl_internal_set__volume(float_t value);

  /// @brief Method .ctor, addr 0x250adf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleSaberSoundEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSoundEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleSaberSoundEffect(ObstacleSaberSoundEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSoundEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleSaberSoundEffect(ObstacleSaberSoundEffect const&) = delete;

  /// @brief Field _obstacleSaberSparkleEffectManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffectManager> ____obstacleSaberSparkleEffectManager;

  /// @brief Field _saberType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::SaberType ____saberType;

  /// @brief Field _audioSource, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _volume, offset: 0x30, size: 0x4, def value: None
  float_t ____volume;

  /// @brief Field _targetVolume, offset: 0x34, size: 0x4, def value: None
  float_t ____targetVolume;

  /// @brief Field kSmooth offset 0xffffffff size 0x4
  static constexpr float_t kSmooth{ 8.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleSaberSoundEffect, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSoundEffect, ____obstacleSaberSparkleEffectManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSoundEffect, ____saberType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSoundEffect, ____audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSoundEffect, ____volume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleSaberSoundEffect, ____targetVolume) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleSaberSoundEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSaberSoundEffect*, "", "ObstacleSaberSoundEffect");
