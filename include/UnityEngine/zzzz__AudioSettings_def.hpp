#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSettings)
namespace UnityEngine {
class __AudioSettings__AudioConfigurationChangeHandler;
}
namespace UnityEngine {
struct AudioConfiguration;
}
namespace UnityEngine {
class __AudioSettings__Mobile;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace UnityEngine {
class AudioSettings;
}
namespace UnityEngine {
class __AudioSettings__AudioConfigurationChangeHandler;
}
namespace UnityEngine {
class __AudioSettings__Mobile;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioSettings);
MARK_REF_PTR_T(::UnityEngine::__AudioSettings__AudioConfigurationChangeHandler);
MARK_REF_PTR_T(::UnityEngine::__AudioSettings__Mobile);
// Type: ::AudioConfigurationChangeHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15589))
// CS Name: ::AudioSettings::AudioConfigurationChangeHandler*
class CORDL_TYPE __AudioSettings__AudioConfigurationChangeHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::__AudioSettings__AudioConfigurationChangeHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c9a224, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2c9a2e8, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool deviceWasChanged);

  // Ctor Parameters [CppParam { name: "", ty: "__AudioSettings__AudioConfigurationChangeHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioSettings__AudioConfigurationChangeHandler(__AudioSettings__AudioConfigurationChangeHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioSettings__AudioConfigurationChangeHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioSettings__AudioConfigurationChangeHandler(__AudioSettings__AudioConfigurationChangeHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioSettings__AudioConfigurationChangeHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__AudioSettings__AudioConfigurationChangeHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: ::Mobile
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15590))
// CS Name: ::AudioSettings::Mobile*
class CORDL_TYPE __AudioSettings__Mobile : public ::System::Object {
public:
  // Declarations
  /// @brief Field <muteState>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__muteState_k__BackingField, put = setStaticF__muteState_k__BackingField)) bool _muteState_k__BackingField;

  /// @brief Field _stopAudioOutputOnMute, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__stopAudioOutputOnMute, put = setStaticF__stopAudioOutputOnMute)) bool _stopAudioOutputOnMute;

  /// @brief Field OnMuteStateChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OnMuteStateChanged, put = setStaticF_OnMuteStateChanged))::System::Action_1<bool>* OnMuteStateChanged;

  static inline void setStaticF__muteState_k__BackingField(bool value);

  static inline bool getStaticF__muteState_k__BackingField();

  static inline void setStaticF__stopAudioOutputOnMute(bool value);

  static inline bool getStaticF__stopAudioOutputOnMute();

  static inline void setStaticF_OnMuteStateChanged(::System::Action_1<bool>* value);

  static inline ::System::Action_1<bool>* getStaticF_OnMuteStateChanged();

  /// @brief Method get_muteState, addr 0x2c9a300, size 0x48, virtual false, abstract: false, final false
  static inline bool get_muteState();

  /// @brief Method set_muteState, addr 0x2c9a348, size 0x4c, virtual false, abstract: false, final false
  static inline void set_muteState(bool value);

  /// @brief Method get_stopAudioOutputOnMute, addr 0x2c9a394, size 0x48, virtual false, abstract: false, final false
  static inline bool get_stopAudioOutputOnMute();

  /// @brief Method InvokeOnMuteStateChanged, addr 0x2c9a3dc, size 0x17c, virtual false, abstract: false, final false
  static inline void InvokeOnMuteStateChanged(bool mute);

  /// @brief Method InvokeIsStopAudioOutputOnMuteEnabled, addr 0x2c9a5a8, size 0x48, virtual false, abstract: false, final false
  static inline bool InvokeIsStopAudioOutputOnMuteEnabled();

  /// @brief Method StartAudioOutput, addr 0x2c9a580, size 0x28, virtual false, abstract: false, final false
  static inline void StartAudioOutput();

  /// @brief Method StopAudioOutput, addr 0x2c9a558, size 0x28, virtual false, abstract: false, final false
  static inline void StopAudioOutput();

  // Ctor Parameters [CppParam { name: "", ty: "__AudioSettings__Mobile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioSettings__Mobile(__AudioSettings__Mobile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioSettings__Mobile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioSettings__Mobile(__AudioSettings__Mobile const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioSettings__Mobile();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__AudioSettings__Mobile, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::AudioSettings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15591))
// CS Name: ::UnityEngine::AudioSettings*
class CORDL_TYPE AudioSettings : public ::System::Object {
public:
  // Declarations
  using Mobile = ::UnityEngine::__AudioSettings__Mobile;

  using AudioConfigurationChangeHandler = ::UnityEngine::__AudioSettings__AudioConfigurationChangeHandler;

  /// @brief Field OnAudioConfigurationChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OnAudioConfigurationChanged,
                             put = setStaticF_OnAudioConfigurationChanged))::UnityEngine::__AudioSettings__AudioConfigurationChangeHandler* OnAudioConfigurationChanged;

  /// @brief Field OnAudioSystemShuttingDown, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OnAudioSystemShuttingDown, put = setStaticF_OnAudioSystemShuttingDown))::System::Action* OnAudioSystemShuttingDown;

  /// @brief Field OnAudioSystemStartedUp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OnAudioSystemStartedUp, put = setStaticF_OnAudioSystemStartedUp))::System::Action* OnAudioSystemStartedUp;

  static inline void setStaticF_OnAudioConfigurationChanged(::UnityEngine::__AudioSettings__AudioConfigurationChangeHandler* value);

  static inline ::UnityEngine::__AudioSettings__AudioConfigurationChangeHandler* getStaticF_OnAudioConfigurationChanged();

  static inline void setStaticF_OnAudioSystemShuttingDown(::System::Action* value);

  static inline ::System::Action* getStaticF_OnAudioSystemShuttingDown();

  static inline void setStaticF_OnAudioSystemStartedUp(::System::Action* value);

  static inline ::System::Action* getStaticF_OnAudioSystemStartedUp();

  /// @brief Method GetSampleRate, addr 0x2c99f64, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetSampleRate();

  /// @brief Method get_dspTime, addr 0x2c99f8c, size 0x28, virtual false, abstract: false, final false
  static inline double_t get_dspTime();

  /// @brief Method get_outputSampleRate, addr 0x2c99fb4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_outputSampleRate();

  /// @brief Method GetSpatializerPluginName, addr 0x2c99fdc, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW GetSpatializerPluginName();

  /// @brief Method GetConfiguration, addr 0x2c9a004, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioConfiguration GetConfiguration();

  /// @brief Method InvokeOnAudioConfigurationChanged, addr 0x2c9a0a0, size 0x6c, virtual false, abstract: false, final false
  static inline void InvokeOnAudioConfigurationChanged(bool deviceWasChanged);

  /// @brief Method InvokeOnAudioSystemShuttingDown, addr 0x2c9a10c, size 0x64, virtual false, abstract: false, final false
  static inline void InvokeOnAudioSystemShuttingDown();

  /// @brief Method InvokeOnAudioSystemStartedUp, addr 0x2c9a170, size 0x64, virtual false, abstract: false, final false
  static inline void InvokeOnAudioSystemStartedUp();

  /// @brief Method StartAudioOutput, addr 0x2c9a1d4, size 0x28, virtual false, abstract: false, final false
  static inline bool StartAudioOutput();

  /// @brief Method StopAudioOutput, addr 0x2c9a1fc, size 0x28, virtual false, abstract: false, final false
  static inline bool StopAudioOutput();

  /// @brief Method GetConfiguration_Injected, addr 0x2c9a064, size 0x3c, virtual false, abstract: false, final false
  static inline void GetConfiguration_Injected(ByRef<::UnityEngine::AudioConfiguration> ret);

  // Ctor Parameters [CppParam { name: "", ty: "AudioSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioSettings(AudioSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioSettings(AudioSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioSettings();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioSettings, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AudioSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioSettings*, "UnityEngine", "AudioSettings");
NEED_NO_BOX(::UnityEngine::__AudioSettings__AudioConfigurationChangeHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__AudioSettings__AudioConfigurationChangeHandler*, "UnityEngine", "AudioSettings/AudioConfigurationChangeHandler");
NEED_NO_BOX(::UnityEngine::__AudioSettings__Mobile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__AudioSettings__Mobile*, "UnityEngine", "AudioSettings/Mobile");
