#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioMixer)
namespace UnityEngine::Audio {
struct AudioMixerUpdateMode;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioMixer);
// Type: UnityEngine.Audio::AudioMixer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15604))
// CS Name: ::UnityEngine.Audio::AudioMixer*
class CORDL_TYPE AudioMixer : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(put = set_updateMode))::UnityEngine::Audio::AudioMixerUpdateMode updateMode;

  /// @brief Method set_updateMode addr 0x2c9c5b0 size 0x44 virtual false final false
  inline void set_updateMode(::UnityEngine::Audio::AudioMixerUpdateMode value);

  /// @brief Method SetFloat addr 0x2c9c5f4 size 0x54 virtual false final false
  inline bool SetFloat(::StringW name, float_t value);

  /// @brief Method GetFloat addr 0x2c9c648 size 0x54 virtual false final false
  inline bool GetFloat(::StringW name, ByRef<float_t> value);

  // Ctor Parameters [CppParam { name: "", ty: "AudioMixer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioMixer(AudioMixer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioMixer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioMixer(AudioMixer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioMixer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioMixer, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioMixer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixer*, "UnityEngine.Audio", "AudioMixer");
