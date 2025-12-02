#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioPlayerBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioPlayerBase)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioPlayerBase;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioPlayerBase);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioPlayerBase
class CORDL_TYPE AudioPlayerBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_activeAudioClip)) ::UnityW<::UnityEngine::AudioClip> activeAudioClip;

  /// @brief Method FadeOut, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void FadeOut(float_t duration);

  static inline ::GlobalNamespace::AudioPlayerBase* New_ctor();

  /// @brief Method PauseCurrentChannel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PauseCurrentChannel();

  /// @brief Method UnPauseCurrentChannel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnPauseCurrentChannel();

  /// @brief Method .ctor, addr 0x56a8cd8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeAudioClip, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_activeAudioClip();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioPlayerBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioPlayerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioPlayerBase(AudioPlayerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioPlayerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioPlayerBase(AudioPlayerBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5559 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioPlayerBase, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioPlayerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioPlayerBase*, "", "AudioPlayerBase");
