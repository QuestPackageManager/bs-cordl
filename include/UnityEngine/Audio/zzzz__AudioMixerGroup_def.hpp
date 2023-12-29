#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioMixerGroup)
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioMixerGroup);
// Type: UnityEngine.Audio::AudioMixerGroup
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15621))
// CS Name: ::UnityEngine.Audio::AudioMixerGroup*
class CORDL_TYPE AudioMixerGroup : public ::UnityEngine::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "AudioMixerGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioMixerGroup(AudioMixerGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioMixerGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioMixerGroup(AudioMixerGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioMixerGroup();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioMixerGroup, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioMixerGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixerGroup*, "UnityEngine.Audio", "AudioMixerGroup");
