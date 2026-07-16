#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioRandomContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Audio/zzzz__AudioResource_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioRandomContainer)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Audio {
class AudioContainerElement;
}
namespace UnityEngine::Audio {
struct AudioRandomContainerAutomaticTriggerMode;
}
namespace UnityEngine::Audio {
struct AudioRandomContainerLoopMode;
}
namespace UnityEngine::Audio {
struct AudioRandomContainerPlaybackMode;
}
namespace UnityEngine::Audio {
struct AudioRandomContainerTriggerMode;
}
namespace UnityEngine::Audio {
struct AudioRandomContainer_ChangeEventType;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioRandomContainer_ChangeEventType;
}
namespace UnityEngine::Audio {
class AudioRandomContainer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioRandomContainer_ChangeEventType);
MARK_REF_T(::UnityEngine::Audio::AudioRandomContainer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioRandomContainer_ChangeEventType, "UnityEngine.Audio", "AudioRandomContainer/ChangeEventType");
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioRandomContainer*, "UnityEngine.Audio", "AudioRandomContainer");
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.AudioRandomContainer/ChangeEventType
struct CORDL_TYPE AudioRandomContainer_ChangeEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AudioRandomContainer_ChangeEventType_Unwrapped
  enum struct __AudioRandomContainer_ChangeEventType_Unwrapped : int32_t {
    __E_Volume = static_cast<int32_t>(0x0),
    __E_Pitch = static_cast<int32_t>(0x1),
    __E_List = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AudioRandomContainer_ChangeEventType_Unwrapped() const noexcept {
    return static_cast<__AudioRandomContainer_ChangeEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioRandomContainer_ChangeEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AudioRandomContainer_ChangeEventType(int32_t value__) noexcept;

  /// @brief Field List value: I32(2)
  static ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType const List;

  /// @brief Field Pitch value: I32(1)
  static ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType const Pitch;

  /// @brief Field Volume value: I32(0)
  static ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType const Volume;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21045 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::AudioRandomContainer_ChangeEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::AudioRandomContainer_ChangeEventType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Audio
// Dependencies UnityEngine.Audio.AudioResource
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioRandomContainer
class CORDL_TYPE AudioRandomContainer : public ::UnityEngine::Audio::AudioResource {
public:
  // Declarations
  using ChangeEventType = ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType;

  __declspec(property(get = get_automaticTriggerMode, put = set_automaticTriggerMode)) ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode automaticTriggerMode;

  __declspec(property(get = get_automaticTriggerTime, put = set_automaticTriggerTime)) float_t automaticTriggerTime;

  __declspec(property(get = get_automaticTriggerTimeRandomizationEnabled, put = set_automaticTriggerTimeRandomizationEnabled)) bool automaticTriggerTimeRandomizationEnabled;

  __declspec(property(get = get_automaticTriggerTimeRandomizationRange, put = set_automaticTriggerTimeRandomizationRange)) ::UnityEngine::Vector2 automaticTriggerTimeRandomizationRange;

  __declspec(property(get = get_avoidRepeatingLast, put = set_avoidRepeatingLast)) int32_t avoidRepeatingLast;

  __declspec(property(get = get_elements, put = set_elements)) ::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>> elements;

  __declspec(property(get = get_loopCount, put = set_loopCount)) int32_t loopCount;

  __declspec(property(get = get_loopCountRandomizationEnabled, put = set_loopCountRandomizationEnabled)) bool loopCountRandomizationEnabled;

  __declspec(property(get = get_loopCountRandomizationRange, put = set_loopCountRandomizationRange)) ::UnityEngine::Vector2 loopCountRandomizationRange;

  __declspec(property(get = get_loopMode, put = set_loopMode)) ::UnityEngine::Audio::AudioRandomContainerLoopMode loopMode;

  __declspec(property(get = get_pitch, put = set_pitch)) float_t pitch;

  __declspec(property(get = get_pitchRandomizationEnabled, put = set_pitchRandomizationEnabled)) bool pitchRandomizationEnabled;

  __declspec(property(get = get_pitchRandomizationRange, put = set_pitchRandomizationRange)) ::UnityEngine::Vector2 pitchRandomizationRange;

  __declspec(property(get = get_playbackMode, put = set_playbackMode)) ::UnityEngine::Audio::AudioRandomContainerPlaybackMode playbackMode;

  __declspec(property(get = get_triggerMode, put = set_triggerMode)) ::UnityEngine::Audio::AudioRandomContainerTriggerMode triggerMode;

  __declspec(property(get = get_volume, put = set_volume)) float_t volume;

  __declspec(property(get = get_volumeRandomizationEnabled, put = set_volumeRandomizationEnabled)) bool volumeRandomizationEnabled;

  __declspec(property(get = get_volumeRandomizationRange, put = set_volumeRandomizationRange)) ::UnityEngine::Vector2 volumeRandomizationRange;

  /// @brief Method Internal_Create, addr 0x6a53fc8, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Audio::AudioRandomContainer* self);

  static inline ::UnityEngine::Audio::AudioRandomContainer* New_ctor();

  /// @brief Method NotifyObservers, addr 0x6a55ccc, size 0x90, virtual false, abstract: false, final false
  inline void NotifyObservers(::UnityEngine::Audio::AudioRandomContainer_ChangeEventType eventType);

  /// @brief Method NotifyObservers_Injected, addr 0x6a55d5c, size 0x1b0, virtual false, abstract: false, final false
  static inline void NotifyObservers_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType eventType);

  /// @brief Method .ctor, addr 0x6a53f88, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_automaticTriggerMode, addr 0x6a54ffc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode get_automaticTriggerMode();

  /// @brief Method get_automaticTriggerMode_Injected, addr 0x6a5507c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode get_automaticTriggerMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_automaticTriggerTime, addr 0x6a5518c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_automaticTriggerTime();

  /// @brief Method get_automaticTriggerTimeRandomizationEnabled, addr 0x6a554d8, size 0x80, virtual false, abstract: false, final false
  inline bool get_automaticTriggerTimeRandomizationEnabled();

  /// @brief Method get_automaticTriggerTimeRandomizationEnabled_Injected, addr 0x6a55558, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_automaticTriggerTimeRandomizationEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_automaticTriggerTimeRandomizationRange, addr 0x6a55324, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_automaticTriggerTimeRandomizationRange();

  /// @brief Method get_automaticTriggerTimeRandomizationRange_Injected, addr 0x6a553bc, size 0x44, virtual false, abstract: false, final false
  static inline void get_automaticTriggerTimeRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_automaticTriggerTime_Injected, addr 0x6a5520c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_automaticTriggerTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_avoidRepeatingLast, addr 0x6a54e6c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_avoidRepeatingLast();

  /// @brief Method get_avoidRepeatingLast_Injected, addr 0x6a54eec, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_avoidRepeatingLast_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_elements, addr 0x6a549bc, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>> get_elements();

  /// @brief Method get_elements_Injected, addr 0x6a54a3c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>> get_elements_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loopCount, addr 0x6a557f8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_loopCount();

  /// @brief Method get_loopCountRandomizationEnabled, addr 0x6a55b3c, size 0x80, virtual false, abstract: false, final false
  inline bool get_loopCountRandomizationEnabled();

  /// @brief Method get_loopCountRandomizationEnabled_Injected, addr 0x6a55bbc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loopCountRandomizationEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loopCountRandomizationRange, addr 0x6a55988, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_loopCountRandomizationRange();

  /// @brief Method get_loopCountRandomizationRange_Injected, addr 0x6a55a20, size 0x44, virtual false, abstract: false, final false
  static inline void get_loopCountRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_loopCount_Injected, addr 0x6a55878, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_loopCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loopMode, addr 0x6a55668, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AudioRandomContainerLoopMode get_loopMode();

  /// @brief Method get_loopMode_Injected, addr 0x6a556e8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioRandomContainerLoopMode get_loopMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pitch, addr 0x6a544e0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_pitch();

  /// @brief Method get_pitchRandomizationEnabled, addr 0x6a5482c, size 0x80, virtual false, abstract: false, final false
  inline bool get_pitchRandomizationEnabled();

  /// @brief Method get_pitchRandomizationEnabled_Injected, addr 0x6a548ac, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_pitchRandomizationEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pitchRandomizationRange, addr 0x6a54678, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pitchRandomizationRange();

  /// @brief Method get_pitchRandomizationRange_Injected, addr 0x6a54710, size 0x44, virtual false, abstract: false, final false
  static inline void get_pitchRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_pitch_Injected, addr 0x6a54560, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_pitch_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_playbackMode, addr 0x6a54cdc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AudioRandomContainerPlaybackMode get_playbackMode();

  /// @brief Method get_playbackMode_Injected, addr 0x6a54d5c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioRandomContainerPlaybackMode get_playbackMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_triggerMode, addr 0x6a54b4c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AudioRandomContainerTriggerMode get_triggerMode();

  /// @brief Method get_triggerMode_Injected, addr 0x6a54bcc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioRandomContainerTriggerMode get_triggerMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volume, addr 0x6a54004, size 0x80, virtual false, abstract: false, final false
  inline float_t get_volume();

  /// @brief Method get_volumeRandomizationEnabled, addr 0x6a54350, size 0x80, virtual false, abstract: false, final false
  inline bool get_volumeRandomizationEnabled();

  /// @brief Method get_volumeRandomizationEnabled_Injected, addr 0x6a543d0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_volumeRandomizationEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volumeRandomizationRange, addr 0x6a5419c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_volumeRandomizationRange();

  /// @brief Method get_volumeRandomizationRange_Injected, addr 0x6a54234, size 0x44, virtual false, abstract: false, final false
  static inline void get_volumeRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_volume_Injected, addr 0x6a54084, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_volume_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_automaticTriggerMode, addr 0x6a550b8, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticTriggerMode(::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode value);

  /// @brief Method set_automaticTriggerMode_Injected, addr 0x6a55148, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticTriggerMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode value);

  /// @brief Method set_automaticTriggerTime, addr 0x6a55248, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticTriggerTime(float_t value);

  /// @brief Method set_automaticTriggerTimeRandomizationEnabled, addr 0x6a55594, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticTriggerTimeRandomizationEnabled(bool value);

  /// @brief Method set_automaticTriggerTimeRandomizationEnabled_Injected, addr 0x6a55624, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticTriggerTimeRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_automaticTriggerTimeRandomizationRange, addr 0x6a55400, size 0x94, virtual false, abstract: false, final false
  inline void set_automaticTriggerTimeRandomizationRange(::UnityEngine::Vector2 value);

  /// @brief Method set_automaticTriggerTimeRandomizationRange_Injected, addr 0x6a55494, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticTriggerTimeRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value);

  /// @brief Method set_automaticTriggerTime_Injected, addr 0x6a552d8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_automaticTriggerTime_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_avoidRepeatingLast, addr 0x6a54f28, size 0x90, virtual false, abstract: false, final false
  inline void set_avoidRepeatingLast(int32_t value);

  /// @brief Method set_avoidRepeatingLast_Injected, addr 0x6a54fb8, size 0x44, virtual false, abstract: false, final false
  static inline void set_avoidRepeatingLast_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_elements, addr 0x6a54a78, size 0x90, virtual false, abstract: false, final false
  inline void set_elements(::ArrayW<::UnityEngine::Audio::AudioContainerElement*> value);

  /// @brief Method set_elements_Injected, addr 0x6a54b08, size 0x44, virtual false, abstract: false, final false
  static inline void set_elements_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Audio::AudioContainerElement*> value);

  /// @brief Method set_loopCount, addr 0x6a558b4, size 0x90, virtual false, abstract: false, final false
  inline void set_loopCount(int32_t value);

  /// @brief Method set_loopCountRandomizationEnabled, addr 0x6a55bf8, size 0x90, virtual false, abstract: false, final false
  inline void set_loopCountRandomizationEnabled(bool value);

  /// @brief Method set_loopCountRandomizationEnabled_Injected, addr 0x6a55c88, size 0x44, virtual false, abstract: false, final false
  static inline void set_loopCountRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_loopCountRandomizationRange, addr 0x6a55a64, size 0x94, virtual false, abstract: false, final false
  inline void set_loopCountRandomizationRange(::UnityEngine::Vector2 value);

  /// @brief Method set_loopCountRandomizationRange_Injected, addr 0x6a55af8, size 0x44, virtual false, abstract: false, final false
  static inline void set_loopCountRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value);

  /// @brief Method set_loopCount_Injected, addr 0x6a55944, size 0x44, virtual false, abstract: false, final false
  static inline void set_loopCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_loopMode, addr 0x6a55724, size 0x90, virtual false, abstract: false, final false
  inline void set_loopMode(::UnityEngine::Audio::AudioRandomContainerLoopMode value);

  /// @brief Method set_loopMode_Injected, addr 0x6a557b4, size 0x44, virtual false, abstract: false, final false
  static inline void set_loopMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerLoopMode value);

  /// @brief Method set_pitch, addr 0x6a5459c, size 0x90, virtual false, abstract: false, final false
  inline void set_pitch(float_t value);

  /// @brief Method set_pitchRandomizationEnabled, addr 0x6a548e8, size 0x90, virtual false, abstract: false, final false
  inline void set_pitchRandomizationEnabled(bool value);

  /// @brief Method set_pitchRandomizationEnabled_Injected, addr 0x6a54978, size 0x44, virtual false, abstract: false, final false
  static inline void set_pitchRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_pitchRandomizationRange, addr 0x6a54754, size 0x94, virtual false, abstract: false, final false
  inline void set_pitchRandomizationRange(::UnityEngine::Vector2 value);

  /// @brief Method set_pitchRandomizationRange_Injected, addr 0x6a547e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_pitchRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value);

  /// @brief Method set_pitch_Injected, addr 0x6a5462c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_pitch_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_playbackMode, addr 0x6a54d98, size 0x90, virtual false, abstract: false, final false
  inline void set_playbackMode(::UnityEngine::Audio::AudioRandomContainerPlaybackMode value);

  /// @brief Method set_playbackMode_Injected, addr 0x6a54e28, size 0x44, virtual false, abstract: false, final false
  static inline void set_playbackMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerPlaybackMode value);

  /// @brief Method set_triggerMode, addr 0x6a54c08, size 0x90, virtual false, abstract: false, final false
  inline void set_triggerMode(::UnityEngine::Audio::AudioRandomContainerTriggerMode value);

  /// @brief Method set_triggerMode_Injected, addr 0x6a54c98, size 0x44, virtual false, abstract: false, final false
  static inline void set_triggerMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerTriggerMode value);

  /// @brief Method set_volume, addr 0x6a540c0, size 0x90, virtual false, abstract: false, final false
  inline void set_volume(float_t value);

  /// @brief Method set_volumeRandomizationEnabled, addr 0x6a5440c, size 0x90, virtual false, abstract: false, final false
  inline void set_volumeRandomizationEnabled(bool value);

  /// @brief Method set_volumeRandomizationEnabled_Injected, addr 0x6a5449c, size 0x44, virtual false, abstract: false, final false
  static inline void set_volumeRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_volumeRandomizationRange, addr 0x6a54278, size 0x94, virtual false, abstract: false, final false
  inline void set_volumeRandomizationRange(::UnityEngine::Vector2 value);

  /// @brief Method set_volumeRandomizationRange_Injected, addr 0x6a5430c, size 0x44, virtual false, abstract: false, final false
  static inline void set_volumeRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value);

  /// @brief Method set_volume_Injected, addr 0x6a54150, size 0x4c, virtual false, abstract: false, final false
  static inline void set_volume_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioRandomContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioRandomContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioRandomContainer(AudioRandomContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioRandomContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioRandomContainer(AudioRandomContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21046 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::AudioRandomContainer) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
