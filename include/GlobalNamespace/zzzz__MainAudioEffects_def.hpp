#pragma once
// IWYU pragma private; include "GlobalNamespace/MainAudioEffects.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MainAudioEffects)
namespace UnityEngine {
class AudioLowPassFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class MainAudioEffects;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainAudioEffects);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainAudioEffects
class CORDL_TYPE MainAudioEffects : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioLowPassFilter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioLowPassFilter, put = __cordl_internal_set__audioLowPassFilter)) ::UnityW<::UnityEngine::AudioLowPassFilter> _audioLowPassFilter;

  /// @brief Field _smooth, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__smooth, put = __cordl_internal_set__smooth)) float_t _smooth;

  /// @brief Field _targetFrequency, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__targetFrequency, put = __cordl_internal_set__targetFrequency)) float_t _targetFrequency;

  /// @brief Method LateUpdate, addr 0x3ad1a70, size 0xbc, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MainAudioEffects* New_ctor();

  /// @brief Method ResumeNormalSound, addr 0x3ad1b2c, size 0x28, virtual false, abstract: false, final false
  inline void ResumeNormalSound();

  /// @brief Method Start, addr 0x3ad1a3c, size 0x34, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TriggerLowPass, addr 0x3ad1b54, size 0x3c, virtual false, abstract: false, final false
  inline void TriggerLowPass();

  constexpr ::UnityW<::UnityEngine::AudioLowPassFilter> const& __cordl_internal_get__audioLowPassFilter() const;

  constexpr ::UnityW<::UnityEngine::AudioLowPassFilter>& __cordl_internal_get__audioLowPassFilter();

  constexpr float_t const& __cordl_internal_get__smooth() const;

  constexpr float_t& __cordl_internal_get__smooth();

  constexpr float_t const& __cordl_internal_get__targetFrequency() const;

  constexpr float_t& __cordl_internal_get__targetFrequency();

  constexpr void __cordl_internal_set__audioLowPassFilter(::UnityW<::UnityEngine::AudioLowPassFilter> value);

  constexpr void __cordl_internal_set__smooth(float_t value);

  constexpr void __cordl_internal_set__targetFrequency(float_t value);

  /// @brief Method .ctor, addr 0x3ad1b90, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainAudioEffects();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainAudioEffects", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainAudioEffects(MainAudioEffects&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainAudioEffects", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainAudioEffects(MainAudioEffects const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4013 };

  /// @brief Field kDefaultCutoffFrequency offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultCutoffFrequency{ static_cast<int32_t>(0x55f0) };

  /// @brief Field kLowPassCutoffFrequency offset 0xffffffff size 0x4
  static constexpr int32_t kLowPassCutoffFrequency{ static_cast<int32_t>(0x96) };

  /// @brief Field _audioLowPassFilter, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioLowPassFilter> ____audioLowPassFilter;

  /// @brief Field _smooth, offset: 0x28, size: 0x4, def value: None
  float_t ____smooth;

  /// @brief Field _targetFrequency, offset: 0x2c, size: 0x4, def value: None
  float_t ____targetFrequency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainAudioEffects, ____audioLowPassFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainAudioEffects, ____smooth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainAudioEffects, ____targetFrequency) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainAudioEffects, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainAudioEffects);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainAudioEffects*, "", "MainAudioEffects");
