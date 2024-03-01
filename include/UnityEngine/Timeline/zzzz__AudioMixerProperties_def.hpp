#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioMixerProperties)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AudioMixerProperties;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AudioMixerProperties);
// Type: UnityEngine.Timeline::AudioMixerProperties
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::AudioMixerProperties*
class CORDL_TYPE AudioMixerProperties : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field spatialBlend, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_spatialBlend, put = __cordl_internal_set_spatialBlend)) float_t spatialBlend;

  /// @brief Field stereoPan, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_stereoPan, put = __cordl_internal_set_stereoPan)) float_t stereoPan;

  /// @brief Field volume, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_volume, put = __cordl_internal_set_volume)) float_t volume;

  static inline ::UnityEngine::Timeline::AudioMixerProperties* New_ctor();

  /// @brief Method PrepareFrame, addr 0x2d49710, size 0x234, virtual true, abstract: false, final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  constexpr float_t const& __cordl_internal_get_spatialBlend() const;

  constexpr float_t& __cordl_internal_get_spatialBlend();

  constexpr float_t const& __cordl_internal_get_stereoPan() const;

  constexpr float_t& __cordl_internal_get_stereoPan();

  constexpr float_t const& __cordl_internal_get_volume() const;

  constexpr float_t& __cordl_internal_get_volume();

  constexpr void __cordl_internal_set_spatialBlend(float_t value);

  constexpr void __cordl_internal_set_stereoPan(float_t value);

  constexpr void __cordl_internal_set_volume(float_t value);

  /// @brief Method .ctor, addr 0x2d49944, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioMixerProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioMixerProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioMixerProperties(AudioMixerProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioMixerProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioMixerProperties(AudioMixerProperties const&) = delete;

  /// @brief Field volume, offset: 0x10, size: 0x4, def value: None
  float_t ___volume;

  /// @brief Field stereoPan, offset: 0x14, size: 0x4, def value: None
  float_t ___stereoPan;

  /// @brief Field spatialBlend, offset: 0x18, size: 0x4, def value: None
  float_t ___spatialBlend;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AudioMixerProperties, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AudioMixerProperties, ___volume) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AudioMixerProperties, ___stereoPan) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AudioMixerProperties, ___spatialBlend) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AudioMixerProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AudioMixerProperties*, "UnityEngine.Timeline", "AudioMixerProperties");
