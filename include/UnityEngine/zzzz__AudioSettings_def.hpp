#pragma once
// IWYU pragma private; include "UnityEngine/AudioSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSettings)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct AudioConfiguration;
}
namespace UnityEngine {
class AudioSettings_AudioConfigurationChangeHandler;
}
namespace UnityEngine {
class AudioSettings_Mobile;
}
// Forward declare root types
namespace UnityEngine {
class AudioSettings;
}
namespace UnityEngine {
class AudioSettings_AudioConfigurationChangeHandler;
}
namespace UnityEngine {
class AudioSettings_Mobile;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioSettings);
MARK_REF_PTR_T(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler);
MARK_REF_PTR_T(::UnityEngine::AudioSettings_Mobile);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioSettings/AudioConfigurationChangeHandler
class CORDL_TYPE AudioSettings_AudioConfigurationChangeHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4858628, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool deviceWasChanged);

  static inline ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x485859c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioSettings_AudioConfigurationChangeHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioSettings_AudioConfigurationChangeHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioSettings_AudioConfigurationChangeHandler(AudioSettings_AudioConfigurationChangeHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioSettings_AudioConfigurationChangeHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioSettings_AudioConfigurationChangeHandler(AudioSettings_AudioConfigurationChangeHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17918 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioSettings/Mobile
class CORDL_TYPE AudioSettings_Mobile : public ::System::Object {
public:
  // Declarations
  /// @brief Field OnMuteStateChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnMuteStateChanged, put = setStaticF_OnMuteStateChanged)) ::System::Action_1<bool>* OnMuteStateChanged;

  /// @brief Field <muteState>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__muteState_k__BackingField, put = setStaticF__muteState_k__BackingField)) bool _muteState_k__BackingField;

  /// @brief Field _stopAudioOutputOnMute, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__stopAudioOutputOnMute, put = setStaticF__stopAudioOutputOnMute)) bool _stopAudioOutputOnMute;

  /// @brief Method InvokeIsStopAudioOutputOnMuteEnabled, addr 0x48588f0, size 0x48, virtual false, abstract: false, final false
  static inline bool InvokeIsStopAudioOutputOnMuteEnabled();

  /// @brief Method InvokeOnMuteStateChanged, addr 0x4858720, size 0x180, virtual false, abstract: false, final false
  static inline void InvokeOnMuteStateChanged(bool mute);

  /// @brief Method StartAudioOutput, addr 0x48588c8, size 0x28, virtual false, abstract: false, final false
  static inline void StartAudioOutput();

  /// @brief Method StopAudioOutput, addr 0x48588a0, size 0x28, virtual false, abstract: false, final false
  static inline void StopAudioOutput();

  static inline ::System::Action_1<bool>* getStaticF_OnMuteStateChanged();

  static inline bool getStaticF__muteState_k__BackingField();

  static inline bool getStaticF__stopAudioOutputOnMute();

  /// @brief Method get_muteState, addr 0x4858640, size 0x48, virtual false, abstract: false, final false
  static inline bool get_muteState();

  /// @brief Method get_stopAudioOutputOnMute, addr 0x48586d8, size 0x48, virtual false, abstract: false, final false
  static inline bool get_stopAudioOutputOnMute();

  static inline void setStaticF_OnMuteStateChanged(::System::Action_1<bool>* value);

  static inline void setStaticF__muteState_k__BackingField(bool value);

  static inline void setStaticF__stopAudioOutputOnMute(bool value);

  /// @brief Method set_muteState, addr 0x4858688, size 0x50, virtual false, abstract: false, final false
  static inline void set_muteState(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioSettings_Mobile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioSettings_Mobile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioSettings_Mobile(AudioSettings_Mobile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioSettings_Mobile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioSettings_Mobile(AudioSettings_Mobile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17919 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioSettings_Mobile, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioSettings
class CORDL_TYPE AudioSettings : public ::System::Object {
public:
  // Declarations
  using AudioConfigurationChangeHandler = ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler;

  using Mobile = ::UnityEngine::AudioSettings_Mobile;

  /// @brief Field OnAudioConfigurationChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnAudioConfigurationChanged,
                      put = setStaticF_OnAudioConfigurationChanged)) ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* OnAudioConfigurationChanged;

  /// @brief Field OnAudioSystemShuttingDown, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnAudioSystemShuttingDown, put = setStaticF_OnAudioSystemShuttingDown)) ::System::Action* OnAudioSystemShuttingDown;

  /// @brief Field OnAudioSystemStartedUp, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnAudioSystemStartedUp, put = setStaticF_OnAudioSystemStartedUp)) ::System::Action* OnAudioSystemStartedUp;

  /// @brief Method GetConfiguration, addr 0x485820c, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioConfiguration GetConfiguration();

  /// @brief Method GetConfiguration_Injected, addr 0x485826c, size 0x3c, virtual false, abstract: false, final false
  static inline void GetConfiguration_Injected(::ByRef<::UnityEngine::AudioConfiguration> ret);

  /// @brief Method GetSampleRate, addr 0x485816c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetSampleRate();

  /// @brief Method GetSpatializerPluginName, addr 0x48581e4, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetSpatializerPluginName();

  /// @brief Method InvokeOnAudioConfigurationChanged, addr 0x4858418, size 0x6c, virtual false, abstract: false, final false
  static inline void InvokeOnAudioConfigurationChanged(bool deviceWasChanged);

  /// @brief Method InvokeOnAudioSystemShuttingDown, addr 0x4858484, size 0x64, virtual false, abstract: false, final false
  static inline void InvokeOnAudioSystemShuttingDown();

  /// @brief Method InvokeOnAudioSystemStartedUp, addr 0x48584e8, size 0x64, virtual false, abstract: false, final false
  static inline void InvokeOnAudioSystemStartedUp();

  /// @brief Method StartAudioOutput, addr 0x485854c, size 0x28, virtual false, abstract: false, final false
  static inline bool StartAudioOutput();

  /// @brief Method StopAudioOutput, addr 0x4858574, size 0x28, virtual false, abstract: false, final false
  static inline bool StopAudioOutput();

  /// @brief Method add_OnAudioConfigurationChanged, addr 0x48582a8, size 0xb8, virtual false, abstract: false, final false
  static inline void add_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* value);

  static inline ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* getStaticF_OnAudioConfigurationChanged();

  static inline ::System::Action* getStaticF_OnAudioSystemShuttingDown();

  static inline ::System::Action* getStaticF_OnAudioSystemStartedUp();

  /// @brief Method get_dspTime, addr 0x4858194, size 0x28, virtual false, abstract: false, final false
  static inline double_t get_dspTime();

  /// @brief Method get_outputSampleRate, addr 0x48581bc, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_outputSampleRate();

  /// @brief Method remove_OnAudioConfigurationChanged, addr 0x4858360, size 0xb8, virtual false, abstract: false, final false
  static inline void remove_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* value);

  static inline void setStaticF_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* value);

  static inline void setStaticF_OnAudioSystemShuttingDown(::System::Action* value);

  static inline void setStaticF_OnAudioSystemStartedUp(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioSettings(AudioSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioSettings(AudioSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17920 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioSettings, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AudioSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioSettings*, "UnityEngine", "AudioSettings");
NEED_NO_BOX(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*, "UnityEngine", "AudioSettings/AudioConfigurationChangeHandler");
NEED_NO_BOX(::UnityEngine::AudioSettings_Mobile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioSettings_Mobile*, "UnityEngine", "AudioSettings/Mobile");
