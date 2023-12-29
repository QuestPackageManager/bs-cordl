#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioLowPassFilter)
// Forward declare root types
namespace UnityEngine {
class AudioLowPassFilter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioLowPassFilter);
// Type: UnityEngine::AudioLowPassFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10115))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15619))
// CS Name: ::UnityEngine::AudioLowPassFilter*
class CORDL_TYPE AudioLowPassFilter : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_cutoffFrequency, put = set_cutoffFrequency)) float_t cutoffFrequency;

  /// @brief Method get_cutoffFrequency addr 0x2b372bc size 0x3c virtual false final false
  inline float_t get_cutoffFrequency();

  /// @brief Method set_cutoffFrequency addr 0x2b372f8 size 0x4c virtual false final false
  inline void set_cutoffFrequency(float_t value);

  // Ctor Parameters [CppParam { name: "", ty: "AudioLowPassFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioLowPassFilter(AudioLowPassFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioLowPassFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioLowPassFilter(AudioLowPassFilter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioLowPassFilter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioLowPassFilter, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AudioLowPassFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioLowPassFilter*, "UnityEngine", "AudioLowPassFilter");
