#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioListener)
namespace UnityEngine {
struct FFTWindow;
}
// Forward declare root types
namespace UnityEngine {
class AudioListener;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioListener);
// Type: UnityEngine::AudioListener
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15595))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15596))
// CS Name: ::UnityEngine::AudioListener*
class CORDL_TYPE AudioListener : public ::UnityEngine::AudioBehaviour {
public:
  // Declarations
  /// @brief Method GetOutputDataHelper, addr 0x2c9b368, size 0x44, virtual false, abstract: false, final false
  static inline void GetOutputDataHelper(ByRef<::ArrayW<float_t, ::Array<float_t>*>> samples, int32_t channel);

  /// @brief Method GetSpectrumDataHelper, addr 0x2c9b3ac, size 0x54, virtual false, abstract: false, final false
  static inline void GetSpectrumDataHelper(ByRef<::ArrayW<float_t, ::Array<float_t>*>> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  /// @brief Method get_pause, addr 0x2c9b400, size 0x28, virtual false, abstract: false, final false
  static inline bool get_pause();

  /// @brief Method set_pause, addr 0x2c9b428, size 0x3c, virtual false, abstract: false, final false
  static inline void set_pause(bool value);

  /// @brief Method GetOutputData, addr 0x2c9b464, size 0x44, virtual false, abstract: false, final false
  static inline void GetOutputData(::ArrayW<float_t, ::Array<float_t>*> samples, int32_t channel);

  /// @brief Method GetSpectrumData, addr 0x2c9b4a8, size 0x54, virtual false, abstract: false, final false
  static inline void GetSpectrumData(::ArrayW<float_t, ::Array<float_t>*> samples, int32_t channel, ::UnityEngine::FFTWindow window);

  // Ctor Parameters [CppParam { name: "", ty: "AudioListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioListener(AudioListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioListener(AudioListener const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioListener();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioListener, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AudioListener);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioListener*, "UnityEngine", "AudioListener");
