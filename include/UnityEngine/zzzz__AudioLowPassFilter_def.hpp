#pragma once
// IWYU pragma private; include "UnityEngine/AudioLowPassFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioLowPassFilter)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace UnityEngine {
class AudioLowPassFilter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioLowPassFilter);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioLowPassFilter
class CORDL_TYPE AudioLowPassFilter : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_customCutoffCurve, put = set_customCutoffCurve)) ::UnityEngine::AnimationCurve* customCutoffCurve;

  __declspec(property(get = get_cutoffFrequency, put = set_cutoffFrequency)) float_t cutoffFrequency;

  __declspec(property(get = get_lowpassResonanceQ, put = set_lowpassResonanceQ)) float_t lowpassResonanceQ;

  /// @brief Method GetCustomLowpassLevelCurveCopy, addr 0x681cdec, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* GetCustomLowpassLevelCurveCopy();

  /// @brief Method GetCustomLowpassLevelCurveCopy_Injected, addr 0x681ce84, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetCustomLowpassLevelCurveCopy_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::AudioLowPassFilter* New_ctor();

  /// @brief Method SetCustomLowpassLevelCurveHelper, addr 0x681cec0, size 0xbc, virtual false, abstract: false, final false
  static inline void SetCustomLowpassLevelCurveHelper(::UnityEngine::AudioLowPassFilter* source, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method SetCustomLowpassLevelCurveHelper_Injected, addr 0x681cf7c, size 0x44, virtual false, abstract: false, final false
  static inline void SetCustomLowpassLevelCurveHelper_Injected(::System::IntPtr source, ::System::IntPtr curve);

  /// @brief Method .ctor, addr 0x681d2f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_customCutoffCurve, addr 0x681cfc0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_customCutoffCurve();

  /// @brief Method get_cutoffFrequency, addr 0x681cfc8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_cutoffFrequency();

  /// @brief Method get_cutoffFrequency_Injected, addr 0x681d048, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_cutoffFrequency_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_lowpassResonanceQ, addr 0x681d160, size 0x80, virtual false, abstract: false, final false
  inline float_t get_lowpassResonanceQ();

  /// @brief Method get_lowpassResonanceQ_Injected, addr 0x681d1e0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_lowpassResonanceQ_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_customCutoffCurve, addr 0x681cfc4, size 0x4, virtual false, abstract: false, final false
  inline void set_customCutoffCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method set_cutoffFrequency, addr 0x681d084, size 0x90, virtual false, abstract: false, final false
  inline void set_cutoffFrequency(float_t value);

  /// @brief Method set_cutoffFrequency_Injected, addr 0x681d114, size 0x4c, virtual false, abstract: false, final false
  static inline void set_cutoffFrequency_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_lowpassResonanceQ, addr 0x681d21c, size 0x90, virtual false, abstract: false, final false
  inline void set_lowpassResonanceQ(float_t value);

  /// @brief Method set_lowpassResonanceQ_Injected, addr 0x681d2ac, size 0x4c, virtual false, abstract: false, final false
  static inline void set_lowpassResonanceQ_Injected(::System::IntPtr _unity_self, float_t value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20556 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioLowPassFilter, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AudioLowPassFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioLowPassFilter*, "UnityEngine", "AudioLowPassFilter");
