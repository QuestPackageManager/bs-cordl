#pragma once
// IWYU pragma private; include "UnityEngine/AudioLowPassFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioLowPassFilter)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace UnityEngine {
class AudioLowPassFilter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioLowPassFilter);
// Type: UnityEngine::AudioLowPassFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AudioLowPassFilter*
class CORDL_TYPE AudioLowPassFilter : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_customCutoffCurve, put = set_customCutoffCurve)) ::UnityEngine::AnimationCurve* customCutoffCurve;

  __declspec(property(get = get_cutoffFrequency, put = set_cutoffFrequency)) float_t cutoffFrequency;

  __declspec(property(get = get_lowpassResonanceQ, put = set_lowpassResonanceQ)) float_t lowpassResonanceQ;

  /// @brief Method GetCustomLowpassLevelCurveCopy, addr 0x47f9828, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* GetCustomLowpassLevelCurveCopy();

  static inline ::UnityEngine::AudioLowPassFilter* New_ctor();

  /// @brief Method SetCustomLowpassLevelCurveHelper, addr 0x47f9864, size 0x44, virtual false, abstract: false, final false
  static inline void SetCustomLowpassLevelCurveHelper(::UnityEngine::AudioLowPassFilter* source, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method .ctor, addr 0x47f9a38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_customCutoffCurve, addr 0x47f98a8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_customCutoffCurve();

  /// @brief Method get_cutoffFrequency, addr 0x47f9928, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_cutoffFrequency();

  /// @brief Method get_lowpassResonanceQ, addr 0x47f99b0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_lowpassResonanceQ();

  /// @brief Method set_customCutoffCurve, addr 0x47f98e4, size 0x44, virtual false, abstract: false, final false
  inline void set_customCutoffCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method set_cutoffFrequency, addr 0x47f9964, size 0x4c, virtual false, abstract: false, final false
  inline void set_cutoffFrequency(float_t value);

  /// @brief Method set_lowpassResonanceQ, addr 0x47f99ec, size 0x4c, virtual false, abstract: false, final false
  inline void set_lowpassResonanceQ(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioLowPassFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioLowPassFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioLowPassFilter(AudioLowPassFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioLowPassFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioLowPassFilter(AudioLowPassFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17783 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioLowPassFilter, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AudioLowPassFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioLowPassFilter*, "UnityEngine", "AudioLowPassFilter");
