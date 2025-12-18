#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioRandomContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Audio/zzzz__AudioResource_def.hpp"
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
MARK_REF_PTR_T(::UnityEngine::Audio::AudioRandomContainer);
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20600 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::AudioRandomContainer_ChangeEventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioRandomContainer_ChangeEventType, 0x4>, "Size mismatch!");

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

  __declspec(property(get = get_elements, put = set_elements)) ::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>, ::Array<::UnityW<::UnityEngine::Audio::AudioContainerElement>>*>
      elements;

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

  /// @brief Method Internal_Create, addr 0x6888f34, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::Audio::AudioRandomContainer* self);

  static inline ::UnityEngine::Audio::AudioRandomContainer* New_ctor();

  /// @brief Method NotifyObservers, addr 0x688ac38, size 0x90, virtual false, abstract: false, final false
  inline void NotifyObservers(::UnityEngine::Audio::AudioRandomContainer_ChangeEventType eventType);

  /// @brief Method NotifyObservers_Injected, addr 0x688acc8, size 0x1b0, virtual false, abstract: false, final false
  static inline void NotifyObservers_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType eventType);

  /// @brief Method .ctor, addr 0x6888ef4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_automaticTriggerMode, addr 0x6889f68, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode get_automaticTriggerMode();

  /// @brief Method get_automaticTriggerMode_Injected, addr 0x6889fe8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode get_automaticTriggerMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_automaticTriggerTime, addr 0x688a0f8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_automaticTriggerTime();

  /// @brief Method get_automaticTriggerTimeRandomizationEnabled, addr 0x688a444, size 0x80, virtual false, abstract: false, final false
  inline bool get_automaticTriggerTimeRandomizationEnabled();

  /// @brief Method get_automaticTriggerTimeRandomizationEnabled_Injected, addr 0x688a4c4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_automaticTriggerTimeRandomizationEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_automaticTriggerTimeRandomizationRange, addr 0x688a290, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_automaticTriggerTimeRandomizationRange();

  /// @brief Method get_automaticTriggerTimeRandomizationRange_Injected, addr 0x688a328, size 0x44, virtual false, abstract: false, final false
  static inline void get_automaticTriggerTimeRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_automaticTriggerTime_Injected, addr 0x688a178, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_automaticTriggerTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_avoidRepeatingLast, addr 0x6889dd8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_avoidRepeatingLast();

  /// @brief Method get_avoidRepeatingLast_Injected, addr 0x6889e58, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_avoidRepeatingLast_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_elements, addr 0x6889928, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>, ::Array<::UnityW<::UnityEngine::Audio::AudioContainerElement>>*> get_elements();

  /// @brief Method get_elements_Injected, addr 0x68899a8, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>, ::Array<::UnityW<::UnityEngine::Audio::AudioContainerElement>>*> get_elements_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loopCount, addr 0x688a764, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_loopCount();

  /// @brief Method get_loopCountRandomizationEnabled, addr 0x688aaa8, size 0x80, virtual false, abstract: false, final false
  inline bool get_loopCountRandomizationEnabled();

  /// @brief Method get_loopCountRandomizationEnabled_Injected, addr 0x688ab28, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loopCountRandomizationEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loopCountRandomizationRange, addr 0x688a8f4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_loopCountRandomizationRange();

  /// @brief Method get_loopCountRandomizationRange_Injected, addr 0x688a98c, size 0x44, virtual false, abstract: false, final false
  static inline void get_loopCountRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_loopCount_Injected, addr 0x688a7e4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_loopCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loopMode, addr 0x688a5d4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AudioRandomContainerLoopMode get_loopMode();

  /// @brief Method get_loopMode_Injected, addr 0x688a654, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioRandomContainerLoopMode get_loopMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pitch, addr 0x688944c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_pitch();

  /// @brief Method get_pitchRandomizationEnabled, addr 0x6889798, size 0x80, virtual false, abstract: false, final false
  inline bool get_pitchRandomizationEnabled();

  /// @brief Method get_pitchRandomizationEnabled_Injected, addr 0x6889818, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_pitchRandomizationEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pitchRandomizationRange, addr 0x68895e4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pitchRandomizationRange();

  /// @brief Method get_pitchRandomizationRange_Injected, addr 0x688967c, size 0x44, virtual false, abstract: false, final false
  static inline void get_pitchRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_pitch_Injected, addr 0x68894cc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_pitch_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_playbackMode, addr 0x6889c48, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AudioRandomContainerPlaybackMode get_playbackMode();

  /// @brief Method get_playbackMode_Injected, addr 0x6889cc8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioRandomContainerPlaybackMode get_playbackMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_triggerMode, addr 0x6889ab8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AudioRandomContainerTriggerMode get_triggerMode();

  /// @brief Method get_triggerMode_Injected, addr 0x6889b38, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioRandomContainerTriggerMode get_triggerMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volume, addr 0x6888f70, size 0x80, virtual false, abstract: false, final false
  inline float_t get_volume();

  /// @brief Method get_volumeRandomizationEnabled, addr 0x68892bc, size 0x80, virtual false, abstract: false, final false
  inline bool get_volumeRandomizationEnabled();

  /// @brief Method get_volumeRandomizationEnabled_Injected, addr 0x688933c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_volumeRandomizationEnabled_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volumeRandomizationRange, addr 0x6889108, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_volumeRandomizationRange();

  /// @brief Method get_volumeRandomizationRange_Injected, addr 0x68891a0, size 0x44, virtual false, abstract: false, final false
  static inline void get_volumeRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_volume_Injected, addr 0x6888ff0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_volume_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_automaticTriggerMode, addr 0x688a024, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticTriggerMode(::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode value);

  /// @brief Method set_automaticTriggerMode_Injected, addr 0x688a0b4, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticTriggerMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode value);

  /// @brief Method set_automaticTriggerTime, addr 0x688a1b4, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticTriggerTime(float_t value);

  /// @brief Method set_automaticTriggerTimeRandomizationEnabled, addr 0x688a500, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticTriggerTimeRandomizationEnabled(bool value);

  /// @brief Method set_automaticTriggerTimeRandomizationEnabled_Injected, addr 0x688a590, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticTriggerTimeRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_automaticTriggerTimeRandomizationRange, addr 0x688a36c, size 0x94, virtual false, abstract: false, final false
  inline void set_automaticTriggerTimeRandomizationRange(::UnityEngine::Vector2 value);

  /// @brief Method set_automaticTriggerTimeRandomizationRange_Injected, addr 0x688a400, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticTriggerTimeRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_automaticTriggerTime_Injected, addr 0x688a244, size 0x4c, virtual false, abstract: false, final false
  static inline void set_automaticTriggerTime_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_avoidRepeatingLast, addr 0x6889e94, size 0x90, virtual false, abstract: false, final false
  inline void set_avoidRepeatingLast(int32_t value);

  /// @brief Method set_avoidRepeatingLast_Injected, addr 0x6889f24, size 0x44, virtual false, abstract: false, final false
  static inline void set_avoidRepeatingLast_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_elements, addr 0x68899e4, size 0x90, virtual false, abstract: false, final false
  inline void set_elements(::ArrayW<::UnityEngine::Audio::AudioContainerElement*, ::Array<::UnityEngine::Audio::AudioContainerElement*>*> value);

  /// @brief Method set_elements_Injected, addr 0x6889a74, size 0x44, virtual false, abstract: false, final false
  static inline void set_elements_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Audio::AudioContainerElement*, ::Array<::UnityEngine::Audio::AudioContainerElement*>*> value);

  /// @brief Method set_loopCount, addr 0x688a820, size 0x90, virtual false, abstract: false, final false
  inline void set_loopCount(int32_t value);

  /// @brief Method set_loopCountRandomizationEnabled, addr 0x688ab64, size 0x90, virtual false, abstract: false, final false
  inline void set_loopCountRandomizationEnabled(bool value);

  /// @brief Method set_loopCountRandomizationEnabled_Injected, addr 0x688abf4, size 0x44, virtual false, abstract: false, final false
  static inline void set_loopCountRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_loopCountRandomizationRange, addr 0x688a9d0, size 0x94, virtual false, abstract: false, final false
  inline void set_loopCountRandomizationRange(::UnityEngine::Vector2 value);

  /// @brief Method set_loopCountRandomizationRange_Injected, addr 0x688aa64, size 0x44, virtual false, abstract: false, final false
  static inline void set_loopCountRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_loopCount_Injected, addr 0x688a8b0, size 0x44, virtual false, abstract: false, final false
  static inline void set_loopCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_loopMode, addr 0x688a690, size 0x90, virtual false, abstract: false, final false
  inline void set_loopMode(::UnityEngine::Audio::AudioRandomContainerLoopMode value);

  /// @brief Method set_loopMode_Injected, addr 0x688a720, size 0x44, virtual false, abstract: false, final false
  static inline void set_loopMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerLoopMode value);

  /// @brief Method set_pitch, addr 0x6889508, size 0x90, virtual false, abstract: false, final false
  inline void set_pitch(float_t value);

  /// @brief Method set_pitchRandomizationEnabled, addr 0x6889854, size 0x90, virtual false, abstract: false, final false
  inline void set_pitchRandomizationEnabled(bool value);

  /// @brief Method set_pitchRandomizationEnabled_Injected, addr 0x68898e4, size 0x44, virtual false, abstract: false, final false
  static inline void set_pitchRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_pitchRandomizationRange, addr 0x68896c0, size 0x94, virtual false, abstract: false, final false
  inline void set_pitchRandomizationRange(::UnityEngine::Vector2 value);

  /// @brief Method set_pitchRandomizationRange_Injected, addr 0x6889754, size 0x44, virtual false, abstract: false, final false
  static inline void set_pitchRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_pitch_Injected, addr 0x6889598, size 0x4c, virtual false, abstract: false, final false
  static inline void set_pitch_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_playbackMode, addr 0x6889d04, size 0x90, virtual false, abstract: false, final false
  inline void set_playbackMode(::UnityEngine::Audio::AudioRandomContainerPlaybackMode value);

  /// @brief Method set_playbackMode_Injected, addr 0x6889d94, size 0x44, virtual false, abstract: false, final false
  static inline void set_playbackMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerPlaybackMode value);

  /// @brief Method set_triggerMode, addr 0x6889b74, size 0x90, virtual false, abstract: false, final false
  inline void set_triggerMode(::UnityEngine::Audio::AudioRandomContainerTriggerMode value);

  /// @brief Method set_triggerMode_Injected, addr 0x6889c04, size 0x44, virtual false, abstract: false, final false
  static inline void set_triggerMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerTriggerMode value);

  /// @brief Method set_volume, addr 0x688902c, size 0x90, virtual false, abstract: false, final false
  inline void set_volume(float_t value);

  /// @brief Method set_volumeRandomizationEnabled, addr 0x6889378, size 0x90, virtual false, abstract: false, final false
  inline void set_volumeRandomizationEnabled(bool value);

  /// @brief Method set_volumeRandomizationEnabled_Injected, addr 0x6889408, size 0x44, virtual false, abstract: false, final false
  static inline void set_volumeRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_volumeRandomizationRange, addr 0x68891e4, size 0x94, virtual false, abstract: false, final false
  inline void set_volumeRandomizationRange(::UnityEngine::Vector2 value);

  /// @brief Method set_volumeRandomizationRange_Injected, addr 0x6889278, size 0x44, virtual false, abstract: false, final false
  static inline void set_volumeRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_volume_Injected, addr 0x68890bc, size 0x4c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20601 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioRandomContainer, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioRandomContainer_ChangeEventType, "UnityEngine.Audio", "AudioRandomContainer/ChangeEventType");
NEED_NO_BOX(::UnityEngine::Audio::AudioRandomContainer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioRandomContainer*, "UnityEngine.Audio", "AudioRandomContainer");
