#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleAudioPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioPlayerBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimpleAudioPlayer)
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleAudioPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleAudioPlayer);
// Dependencies AudioPlayerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleAudioPlayer
class CORDL_TYPE SimpleAudioPlayer : public ::GlobalNamespace::AudioPlayerBase {
public:
  // Declarations
  /// @brief Field _audioClip, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClip, put = __cordl_internal_set__audioClip)) ::UnityW<::UnityEngine::AudioClip> _audioClip;

  /// @brief Field _audioSource, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _fadeSpeed, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeSpeed, put = __cordl_internal_set__fadeSpeed)) float_t _fadeSpeed;

  /// @brief Field _fadingIn, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get__fadingIn, put = __cordl_internal_set__fadingIn)) bool _fadingIn;

  /// @brief Field _loop, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__loop, put = __cordl_internal_set__loop)) bool _loop;

  /// @brief Field _targetVolume, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__targetVolume, put = __cordl_internal_set__targetVolume)) float_t _targetVolume;

  __declspec(property(get = get_activeAudioClip)) ::UnityW<::UnityEngine::AudioClip> activeAudioClip;

  /// @brief Method FadeIn, addr 0x3ad391c, size 0x3c, virtual false, abstract: false, final false
  inline void FadeIn(float_t duration);

  /// @brief Method FadeOut, addr 0x3ad3a58, size 0x38, virtual true, abstract: false, final false
  inline void FadeOut(float_t duration);

  static inline ::GlobalNamespace::SimpleAudioPlayer* New_ctor();

  /// @brief Method PauseCurrentChannel, addr 0x3ad3a90, size 0x1c, virtual true, abstract: false, final false
  inline void PauseCurrentChannel();

  /// @brief Method Start, addr 0x3ad389c, size 0x80, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UnPauseCurrentChannel, addr 0x3ad3aac, size 0x1c, virtual true, abstract: false, final false
  inline void UnPauseCurrentChannel();

  /// @brief Method Update, addr 0x3ad3958, size 0x100, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__audioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__audioClip();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr float_t const& __cordl_internal_get__fadeSpeed() const;

  constexpr float_t& __cordl_internal_get__fadeSpeed();

  constexpr bool const& __cordl_internal_get__fadingIn() const;

  constexpr bool& __cordl_internal_get__fadingIn();

  constexpr bool const& __cordl_internal_get__loop() const;

  constexpr bool& __cordl_internal_get__loop();

  constexpr float_t const& __cordl_internal_get__targetVolume() const;

  constexpr float_t& __cordl_internal_get__targetVolume();

  constexpr void __cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__fadeSpeed(float_t value);

  constexpr void __cordl_internal_set__fadingIn(bool value);

  constexpr void __cordl_internal_set__loop(bool value);

  constexpr void __cordl_internal_set__targetVolume(float_t value);

  /// @brief Method .ctor, addr 0x3ad3ac8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeAudioClip, addr 0x3ad3894, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_activeAudioClip();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleAudioPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleAudioPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleAudioPlayer(SimpleAudioPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleAudioPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleAudioPlayer(SimpleAudioPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4024 };

  /// @brief Field _audioClip, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____audioClip;

  /// @brief Field _audioSource, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _targetVolume, offset: 0x30, size: 0x4, def value: None
  float_t ____targetVolume;

  /// @brief Field _loop, offset: 0x34, size: 0x1, def value: None
  bool ____loop;

  /// @brief Field _fadeSpeed, offset: 0x38, size: 0x4, def value: None
  float_t ____fadeSpeed;

  /// @brief Field _fadingIn, offset: 0x3c, size: 0x1, def value: None
  bool ____fadingIn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleAudioPlayer, ____audioClip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleAudioPlayer, ____audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleAudioPlayer, ____targetVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleAudioPlayer, ____loop) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleAudioPlayer, ____fadeSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleAudioPlayer, ____fadingIn) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleAudioPlayer, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleAudioPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleAudioPlayer*, "", "SimpleAudioPlayer");
