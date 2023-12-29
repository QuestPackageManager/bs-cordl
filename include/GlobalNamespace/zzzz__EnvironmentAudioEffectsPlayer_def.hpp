#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnvironmentAudioEffectsPlayer)
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentAudioEffectsPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentAudioEffectsPlayer);
// Type: ::EnvironmentAudioEffectsPlayer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4050))
// CS Name: ::EnvironmentAudioEffectsPlayer*
class CORDL_TYPE EnvironmentAudioEffectsPlayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioSource, offset 0x18, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::UnityEngine::AudioSource* _audioSource;

  __declspec(property(get = get_audioSource))::UnityEngine::AudioSource* audioSource;

  constexpr ::UnityEngine::AudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::UnityEngine::AudioSource* value);

  /// @brief Method get_audioSource addr 0x20cd85c size 0x8 virtual false final false
  inline ::UnityEngine::AudioSource* get_audioSource();

  /// @brief Method PlayEffect addr 0x20cd864 size 0x64 virtual false final false
  inline void PlayEffect(::UnityEngine::AudioClip* clip, float_t volume);

  static inline ::GlobalNamespace::EnvironmentAudioEffectsPlayer* New_ctor();

  /// @brief Method .ctor addr 0x20cd8c8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentAudioEffectsPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentAudioEffectsPlayer(EnvironmentAudioEffectsPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentAudioEffectsPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentAudioEffectsPlayer(EnvironmentAudioEffectsPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentAudioEffectsPlayer();

public:
  /// @brief Field _audioSource, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentAudioEffectsPlayer, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentAudioEffectsPlayer, ____audioSource) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentAudioEffectsPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentAudioEffectsPlayer*, "", "EnvironmentAudioEffectsPlayer");
