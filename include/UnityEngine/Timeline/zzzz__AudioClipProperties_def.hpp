#pragma once
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
// Type: UnityEngine.Timeline::AudioClipProperties
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13865))
// CS Name: ::UnityEngine.Timeline::AudioClipProperties*
class CORDL_TYPE AudioClipProperties : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field volume, offset 0x10, size 0x4
  __declspec(property(get = __get_volume, put = __set_volume)) float_t volume;

  constexpr float_t& __get_volume();

  constexpr float_t const& __get_volume() const;

  constexpr void __set_volume(float_t value);

  static inline ::UnityEngine::Timeline::AudioClipProperties* New_ctor();

  /// @brief Method .ctor, addr 0x2c61ac0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClipProperties(AudioClipProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClipProperties(AudioClipProperties const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipProperties();

public:
  /// @brief Field volume, offset: 0x10, size: 0x4, def value: None
  float_t ___volume;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::AudioClipProperties, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::AudioClipProperties, ___volume) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::AudioClipProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AudioClipProperties*, "UnityEngine.Timeline", "AudioClipProperties");
