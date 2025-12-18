#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioMixer)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine::Audio {
class AudioMixerSnapshot;
}
namespace UnityEngine::Audio {
struct AudioMixerUpdateMode;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioMixer);
// Dependencies UnityEngine.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioMixer
class CORDL_TYPE AudioMixer : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_outputAudioMixerGroup, put = set_outputAudioMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup> outputAudioMixerGroup;

  __declspec(property(get = get_updateMode, put = set_updateMode)) ::UnityEngine::Audio::AudioMixerUpdateMode updateMode;

  /// @brief Method ClearFloat, addr 0x6887540, size 0x178, virtual false, abstract: false, final false
  inline bool ClearFloat(::StringW name);

  /// @brief Method ClearFloat_Injected, addr 0x68876b8, size 0x44, virtual false, abstract: false, final false
  static inline bool ClearFloat_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method FindMatchingGroups, addr 0x6886a2c, size 0x174, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixerGroup>, ::Array<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>*> FindMatchingGroups(::StringW subPath);

  /// @brief Method FindMatchingGroups_Injected, addr 0x6886ba0, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixerGroup>, ::Array<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>*>
  FindMatchingGroups_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> subPath);

  /// @brief Method FindSnapshot, addr 0x6886750, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> FindSnapshot(::StringW name);

  /// @brief Method FindSnapshot_Injected, addr 0x68869e8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindSnapshot_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetAbsoluteAudibilityFromGroup, addr 0x68878d0, size 0xc0, virtual false, abstract: false, final false
  inline float_t GetAbsoluteAudibilityFromGroup(::UnityEngine::Audio::AudioMixerGroup* group);

  /// @brief Method GetAbsoluteAudibilityFromGroup_Injected, addr 0x6887990, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetAbsoluteAudibilityFromGroup_Injected(::System::IntPtr _unity_self, ::System::IntPtr group);

  /// @brief Method GetFloat, addr 0x68876fc, size 0x180, virtual false, abstract: false, final false
  inline bool GetFloat(::StringW name, ::ByRef<float_t> value);

  /// @brief Method GetFloat_Injected, addr 0x688787c, size 0x54, virtual false, abstract: false, final false
  static inline bool GetFloat_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::ByRef<float_t> value);

  static inline ::UnityEngine::Audio::AudioMixer* New_ctor();

  /// @brief Method SetFloat, addr 0x6887364, size 0x188, virtual false, abstract: false, final false
  inline bool SetFloat(::StringW name, float_t value);

  /// @brief Method SetFloat_Injected, addr 0x68874ec, size 0x54, virtual false, abstract: false, final false
  static inline bool SetFloat_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name, float_t value);

  /// @brief Method TransitionToSnapshot, addr 0x6886be4, size 0x1fc, virtual false, abstract: false, final false
  inline void TransitionToSnapshot(::UnityEngine::Audio::AudioMixerSnapshot* snapshot, float_t timeToReach);

  /// @brief Method TransitionToSnapshotInternal, addr 0x6886f30, size 0xd0, virtual false, abstract: false, final false
  inline void TransitionToSnapshotInternal(::UnityEngine::Audio::AudioMixerSnapshot* snapshot, float_t timeToReach);

  /// @brief Method TransitionToSnapshotInternal_Injected, addr 0x6887000, size 0x54, virtual false, abstract: false, final false
  static inline void TransitionToSnapshotInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr snapshot, float_t timeToReach);

  /// @brief Method TransitionToSnapshots, addr 0x6887054, size 0x11c, virtual false, abstract: false, final false
  inline void TransitionToSnapshots(::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*, ::Array<::UnityEngine::Audio::AudioMixerSnapshot*>*> snapshots, ::ArrayW<float_t, ::Array<float_t>*> weights,
                                    float_t timeToReach);

  /// @brief Method TransitionToSnapshots_Injected, addr 0x6887170, size 0x64, virtual false, abstract: false, final false
  static inline void TransitionToSnapshots_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*, ::Array<::UnityEngine::Audio::AudioMixerSnapshot*>*> snapshots,
                                                    ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> weights, float_t timeToReach);

  /// @brief Method .ctor, addr 0x6886468, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_outputAudioMixerGroup, addr 0x68864c0, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Audio::AudioMixerGroup> get_outputAudioMixerGroup();

  /// @brief Method get_outputAudioMixerGroup_Injected, addr 0x6886610, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_outputAudioMixerGroup_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_updateMode, addr 0x68871d4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Audio::AudioMixerUpdateMode get_updateMode();

  /// @brief Method get_updateMode_Injected, addr 0x6887254, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioMixerUpdateMode get_updateMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_outputAudioMixerGroup, addr 0x688664c, size 0xc0, virtual false, abstract: false, final false
  inline void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup* value);

  /// @brief Method set_outputAudioMixerGroup_Injected, addr 0x688670c, size 0x44, virtual false, abstract: false, final false
  static inline void set_outputAudioMixerGroup_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_updateMode, addr 0x6887290, size 0x90, virtual false, abstract: false, final false
  inline void set_updateMode(::UnityEngine::Audio::AudioMixerUpdateMode value);

  /// @brief Method set_updateMode_Injected, addr 0x6887320, size 0x44, virtual false, abstract: false, final false
  static inline void set_updateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioMixerUpdateMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioMixer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioMixer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioMixer(AudioMixer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioMixer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioMixer(AudioMixer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20588 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioMixer, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioMixer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixer*, "UnityEngine.Audio", "AudioMixer");
