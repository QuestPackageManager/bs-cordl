#pragma once
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
// Type: ::SimpleAudioPlayer
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 53, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4050))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4077))
// CS Name: ::SimpleAudioPlayer*
class CORDL_TYPE SimpleAudioPlayer : public ::GlobalNamespace::AudioPlayerBase {
public:
  // Declarations
  /// @brief Field _audioClip, offset 0x18, size 0x8
  __declspec(property(get = __get__audioClip, put = __set__audioClip))::UnityEngine::AudioClip* _audioClip;

  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::UnityEngine::AudioSource* _audioSource;

  /// @brief Field _targetVolume, offset 0x28, size 0x4
  __declspec(property(get = __get__targetVolume, put = __set__targetVolume)) float_t _targetVolume;

  /// @brief Field _loop, offset 0x2c, size 0x1
  __declspec(property(get = __get__loop, put = __set__loop)) bool _loop;

  /// @brief Field _fadeSpeed, offset 0x30, size 0x4
  __declspec(property(get = __get__fadeSpeed, put = __set__fadeSpeed)) float_t _fadeSpeed;

  /// @brief Field _fadingIn, offset 0x34, size 0x1
  __declspec(property(get = __get__fadingIn, put = __set__fadingIn)) bool _fadingIn;

  __declspec(property(get = get_activeAudioClip))::UnityEngine::AudioClip* activeAudioClip;

  constexpr ::UnityEngine::AudioClip*& __get__audioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__audioClip() const;

  constexpr void __set__audioClip(::UnityEngine::AudioClip* value);

  constexpr ::UnityEngine::AudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::UnityEngine::AudioSource* value);

  constexpr float_t& __get__targetVolume();

  constexpr float_t const& __get__targetVolume() const;

  constexpr void __set__targetVolume(float_t value);

  constexpr bool& __get__loop();

  constexpr bool const& __get__loop() const;

  constexpr void __set__loop(bool value);

  constexpr float_t& __get__fadeSpeed();

  constexpr float_t const& __get__fadeSpeed() const;

  constexpr void __set__fadeSpeed(float_t value);

  constexpr bool& __get__fadingIn();

  constexpr bool const& __get__fadingIn() const;

  constexpr void __set__fadingIn(bool value);

  /// @brief Method get_activeAudioClip, addr 0x2230134, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::AudioClip* get_activeAudioClip();

  /// @brief Method Start, addr 0x223013c, size 0x80, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x22301f8, size 0x100, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method FadeIn, addr 0x22301bc, size 0x3c, virtual false, abstract: false, final false
  inline void FadeIn(float_t duration);

  /// @brief Method FadeOut, addr 0x22302f8, size 0x38, virtual true, abstract: false, final false
  inline void FadeOut(float_t duration);

  /// @brief Method PauseCurrentChannel, addr 0x2230330, size 0x1c, virtual true, abstract: false, final false
  inline void PauseCurrentChannel();

  /// @brief Method UnPauseCurrentChannel, addr 0x223034c, size 0x1c, virtual true, abstract: false, final false
  inline void UnPauseCurrentChannel();

  static inline ::GlobalNamespace::SimpleAudioPlayer* New_ctor();

  /// @brief Method .ctor, addr 0x2230368, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SimpleAudioPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleAudioPlayer(SimpleAudioPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleAudioPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleAudioPlayer(SimpleAudioPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleAudioPlayer();

public:
  /// @brief Field _audioClip, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____audioClip;

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource;

  /// @brief Field _targetVolume, offset: 0x28, size: 0x4, def value: None
  float_t ____targetVolume;

  /// @brief Field _loop, offset: 0x2c, size: 0x1, def value: None
  bool ____loop;

  /// @brief Field _fadeSpeed, offset: 0x30, size: 0x4, def value: None
  float_t ____fadeSpeed;

  /// @brief Field _fadingIn, offset: 0x34, size: 0x1, def value: None
  bool ____fadingIn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleAudioPlayer, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleAudioPlayer, ____audioClip) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleAudioPlayer, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleAudioPlayer, ____targetVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleAudioPlayer, ____loop) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleAudioPlayer, ____fadeSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleAudioPlayer, ____fadingIn) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleAudioPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleAudioPlayer*, "", "SimpleAudioPlayer");
