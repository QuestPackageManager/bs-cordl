#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioFading.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioFading)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioFading;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioFading);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioFading
class CORDL_TYPE AudioFading : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _fadeInOnStart, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__fadeInOnStart, put = __cordl_internal_set__fadeInOnStart)) bool _fadeInOnStart;

  /// @brief Field _smooth, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__smooth, put = __cordl_internal_set__smooth)) float_t _smooth;

  /// @brief Field _targetVolume, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__targetVolume, put = __cordl_internal_set__targetVolume)) float_t _targetVolume;

  /// @brief Method FadeIn, addr 0x3ac9648, size 0x24, virtual false, abstract: false, final false
  inline void FadeIn();

  /// @brief Method FadeOut, addr 0x3ac973c, size 0x20, virtual false, abstract: false, final false
  inline void FadeOut();

  static inline ::GlobalNamespace::AudioFading* New_ctor();

  /// @brief Method Start, addr 0x3ac95ec, size 0x5c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3ac966c, size 0xd0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr bool const& __cordl_internal_get__fadeInOnStart() const;

  constexpr bool& __cordl_internal_get__fadeInOnStart();

  constexpr float_t const& __cordl_internal_get__smooth() const;

  constexpr float_t& __cordl_internal_get__smooth();

  constexpr float_t const& __cordl_internal_get__targetVolume() const;

  constexpr float_t& __cordl_internal_get__targetVolume();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__fadeInOnStart(bool value);

  constexpr void __cordl_internal_set__smooth(float_t value);

  constexpr void __cordl_internal_set__targetVolume(float_t value);

  /// @brief Method .ctor, addr 0x3ac975c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioFading();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioFading", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioFading(AudioFading&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioFading", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioFading(AudioFading const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3991 };

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _smooth, offset: 0x28, size: 0x4, def value: None
  float_t ____smooth;

  /// @brief Field _fadeInOnStart, offset: 0x2c, size: 0x1, def value: None
  bool ____fadeInOnStart;

  /// @brief Field _targetVolume, offset: 0x30, size: 0x4, def value: None
  float_t ____targetVolume;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioFading, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFading, ____smooth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFading, ____fadeInOnStart) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFading, ____targetVolume) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioFading, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioFading);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioFading*, "", "AudioFading");
