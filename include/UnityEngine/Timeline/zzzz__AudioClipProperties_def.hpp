#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AudioClipProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioClipProperties)
// Forward declare root types
namespace UnityEngine::Timeline {
class AudioClipProperties;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::AudioClipProperties);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.AudioClipProperties
class CORDL_TYPE AudioClipProperties : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field volume, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_volume, put = __cordl_internal_set_volume)) float_t volume;

  static inline ::UnityEngine::Timeline::AudioClipProperties* New_ctor();

  constexpr float_t const& __cordl_internal_get_volume() const;

  constexpr float_t& __cordl_internal_get_volume();

  constexpr void __cordl_internal_set_volume(float_t value);

  /// @brief Method .ctor, addr 0x482c448, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioClipProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClipProperties(AudioClipProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClipProperties(AudioClipProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15832 };

  /// @brief Field volume, offset: 0x10, size: 0x4, def value: None
  float_t ___volume;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::AudioClipProperties, ___volume) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AudioClipProperties, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AudioClipProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AudioClipProperties*, "UnityEngine.Timeline", "AudioClipProperties");
