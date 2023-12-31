#pragma once
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
// Type: ::AudioPlayerBase
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4050))
// CS Name: ::AudioPlayerBase*
class CORDL_TYPE AudioPlayerBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_activeAudioClip))::UnityEngine::AudioClip* activeAudioClip;

  /// @brief Method get_activeAudioClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::AudioClip* get_activeAudioClip();

  /// @brief Method FadeOut, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void FadeOut(float_t duration);

  /// @brief Method PauseCurrentChannel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PauseCurrentChannel();

  /// @brief Method UnPauseCurrentChannel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnPauseCurrentChannel();

  static inline ::GlobalNamespace::AudioPlayerBase* New_ctor();

  /// @brief Method .ctor, addr 0x222b67c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AudioPlayerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioPlayerBase(AudioPlayerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioPlayerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioPlayerBase(AudioPlayerBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioPlayerBase();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioPlayerBase, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioPlayerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioPlayerBase*, "", "AudioPlayerBase");
