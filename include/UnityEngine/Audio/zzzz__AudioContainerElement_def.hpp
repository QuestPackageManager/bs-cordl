#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioContainerElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioContainerElement)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioContainerElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioContainerElement);
// Dependencies UnityEngine.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioContainerElement
class CORDL_TYPE AudioContainerElement : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_audioClip, put = set_audioClip)) ::UnityW<::UnityEngine::AudioClip> audioClip;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_volume, put = set_volume)) float_t volume;

  /// @brief Method Internal_Create, addr 0x6888900, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Audio::AudioContainerElement* self);

  static inline ::UnityEngine::Audio::AudioContainerElement* New_ctor();

  /// @brief Method .ctor, addr 0x6888888, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_audioClip, addr 0x688893c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClip();

  /// @brief Method get_audioClip_Injected, addr 0x6888a8c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_audioClip_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enabled, addr 0x6888d64, size 0x80, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_enabled_Injected, addr 0x6888de4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volume, addr 0x6888bcc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_volume();

  /// @brief Method get_volume_Injected, addr 0x6888c4c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_volume_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_audioClip, addr 0x6888ac8, size 0xc0, virtual false, abstract: false, final false
  inline void set_audioClip(::UnityEngine::AudioClip* value);

  /// @brief Method set_audioClip_Injected, addr 0x6888b88, size 0x44, virtual false, abstract: false, final false
  static inline void set_audioClip_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_enabled, addr 0x6888e20, size 0x90, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_enabled_Injected, addr 0x6888eb0, size 0x44, virtual false, abstract: false, final false
  static inline void set_enabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_volume, addr 0x6888c88, size 0x90, virtual false, abstract: false, final false
  inline void set_volume(float_t value);

  /// @brief Method set_volume_Injected, addr 0x6888d18, size 0x4c, virtual false, abstract: false, final false
  static inline void set_volume_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioContainerElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioContainerElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioContainerElement(AudioContainerElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioContainerElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioContainerElement(AudioContainerElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20599 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioContainerElement, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioContainerElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioContainerElement*, "UnityEngine.Audio", "AudioContainerElement");
