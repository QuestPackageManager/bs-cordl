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
namespace System {
template <typename T> struct Nullable_1;
}
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::Audio {
class AudioContainerElement;
}
namespace UnityEngine::Audio {
struct AudioFormat;
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
namespace UnityEngine::Audio {
struct ControlContext;
}
namespace UnityEngine::Audio {
class GeneratorInstance_ICapabilities;
}
namespace UnityEngine::Audio {
struct GeneratorInstance;
}
namespace UnityEngine::Audio {
class IAudioGenerator;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_CreationParameters;
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr AudioRandomContainer_ChangeEventType(int32_t value__) noexcept;

  /// @brief Field List value: I32(2)
  static ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType const List;

  /// @brief Field Pitch value: I32(1)
  static ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType const Pitch;

  /// @brief Field Volume value: I32(0)
  static ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType const Volume;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20332 };

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
// [NativeHeader("Modules/Audio/Public/AudioRandomContainer.h")]
// [HelpURL("AudioRandomContainer-UI")]
// [ExcludeFromPreset]
// Dependencies UnityEngine.Audio.AudioResource
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioRandomContainer
class CORDL_TYPE AudioRandomContainer : public ::UnityEngine::Audio::AudioResource {
public:
  // Declarations
  using ChangeEventType = ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType;

  __declspec(property(get = UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isFinite)) bool UnityEngine_Audio_GeneratorInstance_ICapabilities_isFinite;

  __declspec(property(get = UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isRealtime)) bool UnityEngine_Audio_GeneratorInstance_ICapabilities_isRealtime;

  __declspec(property(get = UnityEngine_Audio_GeneratorInstance_ICapabilities_get_length)) ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime>
      UnityEngine_Audio_GeneratorInstance_ICapabilities_length;

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

  /// @brief Convert operator to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
  constexpr operator ::UnityEngine::Audio::GeneratorInstance_ICapabilities*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Audio::IAudioGenerator"
  constexpr operator ::UnityEngine::Audio::IAudioGenerator*() noexcept;

  /// @brief Method Internal_Create, addr 0x6ea8660, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Audio::AudioRandomContainer* self);

  static inline ::UnityEngine::Audio::AudioRandomContainer* New_ctor();

  /// @brief Method NotifyObservers, addr 0x6eaa364, size 0x90, virtual false, abstract: false, final false
  inline void NotifyObservers(::UnityEngine::Audio::AudioRandomContainer_ChangeEventType eventType);

  /// @brief Method NotifyObservers_Injected, addr 0x6eaa3f4, size 0x44, virtual false, abstract: false, final false
  static inline void NotifyObservers_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType eventType);

  /// @brief Method UnityEngine.Audio.GeneratorInstance.ICapabilities.get_isFinite, addr 0x6eaa438, size 0x38, virtual true, abstract: false, final true
  inline bool UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isFinite();

  /// @brief Method UnityEngine.Audio.GeneratorInstance.ICapabilities.get_isRealtime, addr 0x6eaa470, size 0x38, virtual true, abstract: false, final true
  inline bool UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isRealtime();

  /// @brief Method UnityEngine.Audio.GeneratorInstance.ICapabilities.get_length, addr 0x6eaa4a8, size 0x38, virtual true, abstract: false, final true
  inline ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> UnityEngine_Audio_GeneratorInstance_ICapabilities_get_length();

  /// @brief Method UnityEngine.Audio.IAudioGenerator.CreateInstance, addr 0x6eaa4e0, size 0x38, virtual true, abstract: false, final true
  inline ::UnityEngine::Audio::GeneratorInstance UnityEngine_Audio_IAudioGenerator_CreateInstance(::UnityEngine::Audio::ControlContext context,
                                                                                                  ::System::Nullable_1<::UnityEngine::Audio::AudioFormat> nestedFormat,
                                                                                                  ::UnityEngine::Audio::ProcessorInstance_CreationParameters creationParameters);

  /// @brief Method .ctor, addr 0x6ea8620, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_automaticTriggerMode, addr 0x6ea9694, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode get_automaticTriggerMode();

  /// @brief Method get_automaticTriggerMode_Injected, addr 0x6ea9714, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode get_automaticTriggerMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_automaticTriggerTime, addr 0x6ea9824, size 0x80, virtual false, abstract: false, final false
  inline float_t get_automaticTriggerTime();

  /// @brief Method get_automaticTriggerTimeRandomizationEnabled, addr 0x6ea9b70, size 0x80, virtual false, abstract: false, final false
  inline bool get_automaticTriggerTimeRandomizationEnabled();

  /// @brief Method get_automaticTriggerTimeRandomizationEnabled_Injected, addr 0x6ea9bf0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_automaticTriggerTimeRandomizationEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_automaticTriggerTimeRandomizationRange, addr 0x6ea99bc, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_automaticTriggerTimeRandomizationRange();

  /// @brief Method get_automaticTriggerTimeRandomizationRange_Injected, addr 0x6ea9a54, size 0x44, virtual false, abstract: false, final false
  static inline void get_automaticTriggerTimeRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_automaticTriggerTime_Injected, addr 0x6ea98a4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_automaticTriggerTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_avoidRepeatingLast, addr 0x6ea9504, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_avoidRepeatingLast();

  /// @brief Method get_avoidRepeatingLast_Injected, addr 0x6ea9584, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_avoidRepeatingLast_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_elements, addr 0x6ea9054, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>> get_elements();

  /// @brief Method get_elements_Injected, addr 0x6ea90d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>> get_elements_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loopCount, addr 0x6ea9e90, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_loopCount();

  /// @brief Method get_loopCountRandomizationEnabled, addr 0x6eaa1d4, size 0x80, virtual false, abstract: false, final false
  inline bool get_loopCountRandomizationEnabled();

  /// @brief Method get_loopCountRandomizationEnabled_Injected, addr 0x6eaa254, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loopCountRandomizationEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loopCountRandomizationRange, addr 0x6eaa020, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_loopCountRandomizationRange();

  /// @brief Method get_loopCountRandomizationRange_Injected, addr 0x6eaa0b8, size 0x44, virtual false, abstract: false, final false
  static inline void get_loopCountRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_loopCount_Injected, addr 0x6ea9f10, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_loopCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loopMode, addr 0x6ea9d00, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AudioRandomContainerLoopMode get_loopMode();

  /// @brief Method get_loopMode_Injected, addr 0x6ea9d80, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioRandomContainerLoopMode get_loopMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pitch, addr 0x6ea8b78, size 0x80, virtual false, abstract: false, final false
  inline float_t get_pitch();

  /// @brief Method get_pitchRandomizationEnabled, addr 0x6ea8ec4, size 0x80, virtual false, abstract: false, final false
  inline bool get_pitchRandomizationEnabled();

  /// @brief Method get_pitchRandomizationEnabled_Injected, addr 0x6ea8f44, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_pitchRandomizationEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pitchRandomizationRange, addr 0x6ea8d10, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pitchRandomizationRange();

  /// @brief Method get_pitchRandomizationRange_Injected, addr 0x6ea8da8, size 0x44, virtual false, abstract: false, final false
  static inline void get_pitchRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_pitch_Injected, addr 0x6ea8bf8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_pitch_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_playbackMode, addr 0x6ea9374, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AudioRandomContainerPlaybackMode get_playbackMode();

  /// @brief Method get_playbackMode_Injected, addr 0x6ea93f4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioRandomContainerPlaybackMode get_playbackMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_triggerMode, addr 0x6ea91e4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AudioRandomContainerTriggerMode get_triggerMode();

  /// @brief Method get_triggerMode_Injected, addr 0x6ea9264, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioRandomContainerTriggerMode get_triggerMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volume, addr 0x6ea869c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_volume();

  /// @brief Method get_volumeRandomizationEnabled, addr 0x6ea89e8, size 0x80, virtual false, abstract: false, final false
  inline bool get_volumeRandomizationEnabled();

  /// @brief Method get_volumeRandomizationEnabled_Injected, addr 0x6ea8a68, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_volumeRandomizationEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volumeRandomizationRange, addr 0x6ea8834, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_volumeRandomizationRange();

  /// @brief Method get_volumeRandomizationRange_Injected, addr 0x6ea88cc, size 0x44, virtual false, abstract: false, final false
  static inline void get_volumeRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_volume_Injected, addr 0x6ea871c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_volume_Injected(::System::IntPtr _unity_self);

  /// @brief Convert to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
  constexpr ::UnityEngine::Audio::GeneratorInstance_ICapabilities* i___UnityEngine__Audio__GeneratorInstance_ICapabilities() noexcept;

  /// @brief Convert to "::UnityEngine::Audio::IAudioGenerator"
  constexpr ::UnityEngine::Audio::IAudioGenerator* i___UnityEngine__Audio__IAudioGenerator() noexcept;

  /// @brief Method set_automaticTriggerMode, addr 0x6ea9750, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticTriggerMode(::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode value);

  /// @brief Method set_automaticTriggerMode_Injected, addr 0x6ea97e0, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticTriggerMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode value);

  /// @brief Method set_automaticTriggerTime, addr 0x6ea98e0, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticTriggerTime(float_t value);

  /// @brief Method set_automaticTriggerTimeRandomizationEnabled, addr 0x6ea9c2c, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticTriggerTimeRandomizationEnabled(bool value);

  /// @brief Method set_automaticTriggerTimeRandomizationEnabled_Injected, addr 0x6ea9cbc, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticTriggerTimeRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_automaticTriggerTimeRandomizationRange, addr 0x6ea9a98, size 0x94, virtual false, abstract: false, final false
  inline void set_automaticTriggerTimeRandomizationRange(::UnityEngine::Vector2 value);

  /// @brief Method set_automaticTriggerTimeRandomizationRange_Injected, addr 0x6ea9b2c, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticTriggerTimeRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value);

  /// @brief Method set_automaticTriggerTime_Injected, addr 0x6ea9970, size 0x4c, virtual false, abstract: false, final false
  static inline void set_automaticTriggerTime_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_avoidRepeatingLast, addr 0x6ea95c0, size 0x90, virtual false, abstract: false, final false
  inline void set_avoidRepeatingLast(int32_t value);

  /// @brief Method set_avoidRepeatingLast_Injected, addr 0x6ea9650, size 0x44, virtual false, abstract: false, final false
  static inline void set_avoidRepeatingLast_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_elements, addr 0x6ea9110, size 0x90, virtual false, abstract: false, final false
  inline void set_elements(::ArrayW<::UnityEngine::Audio::AudioContainerElement*> value);

  /// @brief Method set_elements_Injected, addr 0x6ea91a0, size 0x44, virtual false, abstract: false, final false
  static inline void set_elements_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Audio::AudioContainerElement*> value);

  /// @brief Method set_loopCount, addr 0x6ea9f4c, size 0x90, virtual false, abstract: false, final false
  inline void set_loopCount(int32_t value);

  /// @brief Method set_loopCountRandomizationEnabled, addr 0x6eaa290, size 0x90, virtual false, abstract: false, final false
  inline void set_loopCountRandomizationEnabled(bool value);

  /// @brief Method set_loopCountRandomizationEnabled_Injected, addr 0x6eaa320, size 0x44, virtual false, abstract: false, final false
  static inline void set_loopCountRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_loopCountRandomizationRange, addr 0x6eaa0fc, size 0x94, virtual false, abstract: false, final false
  inline void set_loopCountRandomizationRange(::UnityEngine::Vector2 value);

  /// @brief Method set_loopCountRandomizationRange_Injected, addr 0x6eaa190, size 0x44, virtual false, abstract: false, final false
  static inline void set_loopCountRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value);

  /// @brief Method set_loopCount_Injected, addr 0x6ea9fdc, size 0x44, virtual false, abstract: false, final false
  static inline void set_loopCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_loopMode, addr 0x6ea9dbc, size 0x90, virtual false, abstract: false, final false
  inline void set_loopMode(::UnityEngine::Audio::AudioRandomContainerLoopMode value);

  /// @brief Method set_loopMode_Injected, addr 0x6ea9e4c, size 0x44, virtual false, abstract: false, final false
  static inline void set_loopMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerLoopMode value);

  /// @brief Method set_pitch, addr 0x6ea8c34, size 0x90, virtual false, abstract: false, final false
  inline void set_pitch(float_t value);

  /// @brief Method set_pitchRandomizationEnabled, addr 0x6ea8f80, size 0x90, virtual false, abstract: false, final false
  inline void set_pitchRandomizationEnabled(bool value);

  /// @brief Method set_pitchRandomizationEnabled_Injected, addr 0x6ea9010, size 0x44, virtual false, abstract: false, final false
  static inline void set_pitchRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_pitchRandomizationRange, addr 0x6ea8dec, size 0x94, virtual false, abstract: false, final false
  inline void set_pitchRandomizationRange(::UnityEngine::Vector2 value);

  /// @brief Method set_pitchRandomizationRange_Injected, addr 0x6ea8e80, size 0x44, virtual false, abstract: false, final false
  static inline void set_pitchRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value);

  /// @brief Method set_pitch_Injected, addr 0x6ea8cc4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_pitch_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_playbackMode, addr 0x6ea9430, size 0x90, virtual false, abstract: false, final false
  inline void set_playbackMode(::UnityEngine::Audio::AudioRandomContainerPlaybackMode value);

  /// @brief Method set_playbackMode_Injected, addr 0x6ea94c0, size 0x44, virtual false, abstract: false, final false
  static inline void set_playbackMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerPlaybackMode value);

  /// @brief Method set_triggerMode, addr 0x6ea92a0, size 0x90, virtual false, abstract: false, final false
  inline void set_triggerMode(::UnityEngine::Audio::AudioRandomContainerTriggerMode value);

  /// @brief Method set_triggerMode_Injected, addr 0x6ea9330, size 0x44, virtual false, abstract: false, final false
  static inline void set_triggerMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerTriggerMode value);

  /// @brief Method set_volume, addr 0x6ea8758, size 0x90, virtual false, abstract: false, final false
  inline void set_volume(float_t value);

  /// @brief Method set_volumeRandomizationEnabled, addr 0x6ea8aa4, size 0x90, virtual false, abstract: false, final false
  inline void set_volumeRandomizationEnabled(bool value);

  /// @brief Method set_volumeRandomizationEnabled_Injected, addr 0x6ea8b34, size 0x44, virtual false, abstract: false, final false
  static inline void set_volumeRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_volumeRandomizationRange, addr 0x6ea8910, size 0x94, virtual false, abstract: false, final false
  inline void set_volumeRandomizationRange(::UnityEngine::Vector2 value);

  /// @brief Method set_volumeRandomizationRange_Injected, addr 0x6ea89a4, size 0x44, virtual false, abstract: false, final false
  static inline void set_volumeRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value);

  /// @brief Method set_volume_Injected, addr 0x6ea87e8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_volume_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioRandomContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioRandomContainer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioRandomContainer(AudioRandomContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioRandomContainer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioRandomContainer(AudioRandomContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20333 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::AudioRandomContainer) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
