#pragma once
// IWYU pragma private; include "UnityEngine/AudioClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioResource_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioClip)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct AudioClipLoadType;
}
namespace UnityEngine {
class AudioClip_PCMReaderCallback;
}
namespace UnityEngine {
class AudioClip_PCMSetPositionCallback;
}
namespace UnityEngine {
struct AudioDataLoadState;
}
// Forward declare root types
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioClip_PCMReaderCallback;
}
namespace UnityEngine {
class AudioClip_PCMSetPositionCallback;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioClip*);
MARK_REF_T(::UnityEngine::AudioClip_PCMReaderCallback*);
MARK_REF_T(::UnityEngine::AudioClip_PCMSetPositionCallback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioClip*, "UnityEngine", "AudioClip");
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioClip_PCMReaderCallback*, "UnityEngine", "AudioClip/PCMReaderCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioClip_PCMSetPositionCallback*, "UnityEngine", "AudioClip/PCMSetPositionCallback");
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioClip/PCMReaderCallback
class CORDL_TYPE AudioClip_PCMReaderCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6a490b8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<float_t> data);

  static inline ::UnityEngine::AudioClip_PCMReaderCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6a4903c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClip_PCMReaderCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioClip_PCMReaderCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClip_PCMReaderCallback(AudioClip_PCMReaderCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClip_PCMReaderCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClip_PCMReaderCallback(AudioClip_PCMReaderCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21019 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioClip_PCMReaderCallback) == 0x80, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioClip/PCMSetPositionCallback
class CORDL_TYPE AudioClip_PCMSetPositionCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6a49138, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t position);

  static inline ::UnityEngine::AudioClip_PCMSetPositionCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6a490cc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClip_PCMSetPositionCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioClip_PCMSetPositionCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClip_PCMSetPositionCallback(AudioClip_PCMSetPositionCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClip_PCMSetPositionCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClip_PCMSetPositionCallback(AudioClip_PCMSetPositionCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21020 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioClip_PCMSetPositionCallback) == 0x80, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Audio.AudioResource
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioClip
class CORDL_TYPE AudioClip : public ::UnityEngine::Audio::AudioResource {
public:
  // Declarations
  using PCMReaderCallback = ::UnityEngine::AudioClip_PCMReaderCallback;

  using PCMSetPositionCallback = ::UnityEngine::AudioClip_PCMSetPositionCallback;

  __declspec(property(get = get_ambisonic)) bool ambisonic;

  __declspec(property(get = get_channels)) int32_t channels;

  __declspec(property(get = get_frequency)) int32_t frequency;

  __declspec(property(get = get_isReadyToPlay)) bool isReadyToPlay;

  __declspec(property(get = get_length)) float_t length;

  __declspec(property(get = get_loadInBackground)) bool loadInBackground;

  __declspec(property(get = get_loadState)) ::UnityEngine::AudioDataLoadState loadState;

  __declspec(property(get = get_loadType)) ::UnityEngine::AudioClipLoadType loadType;

  /// @brief Field m_PCMReaderCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PCMReaderCallback, put = __cordl_internal_set_m_PCMReaderCallback)) ::UnityEngine::AudioClip_PCMReaderCallback* m_PCMReaderCallback;

  /// @brief Field m_PCMSetPositionCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PCMSetPositionCallback,
                      put = __cordl_internal_set_m_PCMSetPositionCallback)) ::UnityEngine::AudioClip_PCMSetPositionCallback* m_PCMSetPositionCallback;

  __declspec(property(get = get_preloadAudioData)) bool preloadAudioData;

  __declspec(property(get = get_samples)) int32_t samples;

  /// @brief Method Construct_Internal, addr 0x6a47850, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Construct_Internal();

  /// @brief Method Construct_Internal_Injected, addr 0x6a47964, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr Construct_Internal_Injected();

  /// @brief Method Create, addr 0x6a48ba8, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream);

  /// @brief Method Create, addr 0x6a48bc4, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream,
                                                          ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback);

  /// @brief Method Create, addr 0x6a48d3c, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream,
                                                          ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback, ::UnityEngine::AudioClip_PCMSetPositionCallback* pcmsetpositioncallback);

  /// @brief Method Create, addr 0x6a48bb8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream);

  /// @brief Method Create, addr 0x6a48d4c, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream,
                                                          ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback);

  /// @brief Method Create, addr 0x6a48bd4, size 0x168, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream,
                                                          ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback, ::UnityEngine::AudioClip_PCMSetPositionCallback* pcmsetpositioncallback);

  /// @brief Method CreateUserSound, addr 0x6a47b04, size 0x19c, virtual false, abstract: false, final false
  inline void CreateUserSound(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream);

  /// @brief Method CreateUserSound_Injected, addr 0x6a47ca0, size 0x74, virtual false, abstract: false, final false
  static inline void CreateUserSound_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, int32_t lengthSamples, int32_t channels, int32_t frequency,
                                              bool stream);

  /// @brief Method GetData, addr 0x6a47580, size 0x114, virtual false, abstract: false, final false
  static inline bool GetData(::UnityEngine::AudioClip* clip, ::System::Span_1<float_t> data, int32_t samplesOffset);

  /// @brief Method GetData, addr 0x6a486f0, size 0x138, virtual false, abstract: false, final false
  inline bool GetData(::ArrayW<float_t> data, int32_t offsetSamples);

  /// @brief Method GetData, addr 0x6a485e4, size 0x10c, virtual false, abstract: false, final false
  inline bool GetData(::System::Span_1<float_t> data, int32_t offsetSamples);

  /// @brief Method GetData_Injected, addr 0x6a47694, size 0x54, virtual false, abstract: false, final false
  static inline bool GetData_Injected(::System::IntPtr clip, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> data, int32_t samplesOffset);

  /// @brief Method GetName, addr 0x6a4798c, size 0x134, virtual false, abstract: false, final false
  inline ::StringW GetName();

  /// @brief Method GetName_Injected, addr 0x6a47ac0, size 0x44, virtual false, abstract: false, final false
  static inline void GetName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method InvokePCMReaderCallback_Internal, addr 0x6a49004, size 0x1c, virtual false, abstract: false, final false
  inline void InvokePCMReaderCallback_Internal(::ArrayW<float_t> data);

  /// @brief Method InvokePCMSetPositionCallback_Internal, addr 0x6a49020, size 0x1c, virtual false, abstract: false, final false
  inline void InvokePCMSetPositionCallback_Internal(int32_t position);

  /// @brief Method LoadAudioData, addr 0x6a4817c, size 0x80, virtual false, abstract: false, final false
  inline bool LoadAudioData();

  /// @brief Method LoadAudioData_Injected, addr 0x6a481fc, size 0x3c, virtual false, abstract: false, final false
  static inline bool LoadAudioData_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::AudioClip* New_ctor();

  /// @brief Method SetData, addr 0x6a476e8, size 0x114, virtual false, abstract: false, final false
  static inline bool SetData(::UnityEngine::AudioClip* clip, ::System::ReadOnlySpan_1<float_t> data, int32_t samplesOffset);

  /// @brief Method SetData, addr 0x6a48828, size 0x1e0, virtual false, abstract: false, final false
  inline bool SetData(::ArrayW<float_t> data, int32_t offsetSamples);

  /// @brief Method SetData, addr 0x6a48a08, size 0x1a0, virtual false, abstract: false, final false
  inline bool SetData(::System::ReadOnlySpan_1<float_t> data, int32_t offsetSamples);

  /// @brief Method SetData_Injected, addr 0x6a477fc, size 0x54, virtual false, abstract: false, final false
  static inline bool SetData_Injected(::System::IntPtr clip, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> data, int32_t samplesOffset);

  /// @brief Method UnloadAudioData, addr 0x6a48238, size 0x80, virtual false, abstract: false, final false
  inline bool UnloadAudioData();

  /// @brief Method UnloadAudioData_Injected, addr 0x6a482b8, size 0x3c, virtual false, abstract: false, final false
  static inline bool UnloadAudioData_Injected(::System::IntPtr _unity_self);

  constexpr ::UnityEngine::AudioClip_PCMReaderCallback* const& __cordl_internal_get_m_PCMReaderCallback() const;

  constexpr ::UnityEngine::AudioClip_PCMReaderCallback*& __cordl_internal_get_m_PCMReaderCallback();

  constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback* const& __cordl_internal_get_m_PCMSetPositionCallback() const;

  constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback*& __cordl_internal_get_m_PCMSetPositionCallback();

  constexpr void __cordl_internal_set_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback* value);

  constexpr void __cordl_internal_set_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback* value);

  /// @brief Method .ctor, addr 0x6a47520, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_m_PCMReaderCallback, addr 0x6a48d54, size 0xac, virtual false, abstract: false, final false
  inline void add_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback* value);

  /// @brief Method add_m_PCMSetPositionCallback, addr 0x6a48e00, size 0xac, virtual false, abstract: false, final false
  inline void add_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback* value);

  /// @brief Method get_ambisonic, addr 0x6a483b0, size 0x80, virtual false, abstract: false, final false
  inline bool get_ambisonic();

  /// @brief Method get_ambisonic_Injected, addr 0x6a48430, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_ambisonic_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_channels, addr 0x6a47e8c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_channels();

  /// @brief Method get_channels_Injected, addr 0x6a47f0c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_channels_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_frequency, addr 0x6a47f48, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_frequency();

  /// @brief Method get_frequency_Injected, addr 0x6a47fc8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_frequency_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isReadyToPlay, addr 0x6a48004, size 0x80, virtual false, abstract: false, final false
  inline bool get_isReadyToPlay();

  /// @brief Method get_isReadyToPlay_Injected, addr 0x6a48084, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadyToPlay_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_length, addr 0x6a47d14, size 0x80, virtual false, abstract: false, final false
  inline float_t get_length();

  /// @brief Method get_length_Injected, addr 0x6a47d94, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_length_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loadInBackground, addr 0x6a4846c, size 0x80, virtual false, abstract: false, final false
  inline bool get_loadInBackground();

  /// @brief Method get_loadInBackground_Injected, addr 0x6a484ec, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loadInBackground_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loadState, addr 0x6a48528, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioDataLoadState get_loadState();

  /// @brief Method get_loadState_Injected, addr 0x6a485a8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioDataLoadState get_loadState_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loadType, addr 0x6a480c0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioClipLoadType get_loadType();

  /// @brief Method get_loadType_Injected, addr 0x6a48140, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioClipLoadType get_loadType_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_preloadAudioData, addr 0x6a482f4, size 0x80, virtual false, abstract: false, final false
  inline bool get_preloadAudioData();

  /// @brief Method get_preloadAudioData_Injected, addr 0x6a48374, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_preloadAudioData_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_samples, addr 0x6a47dd0, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_samples();

  /// @brief Method get_samples_Injected, addr 0x6a47e50, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_samples_Injected(::System::IntPtr _unity_self);

  /// @brief Method remove_m_PCMReaderCallback, addr 0x6a48eac, size 0xac, virtual false, abstract: false, final false
  inline void remove_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback* value);

  /// @brief Method remove_m_PCMSetPositionCallback, addr 0x6a48f58, size 0xac, virtual false, abstract: false, final false
  inline void remove_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClip();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClip(AudioClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClip(AudioClip const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21021 };

  /// @brief Field m_PCMReaderCallback, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AudioClip_PCMReaderCallback* ___m_PCMReaderCallback;

  /// @brief Field m_PCMSetPositionCallback, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AudioClip_PCMSetPositionCallback* ___m_PCMSetPositionCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AudioClip, ___m_PCMReaderCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AudioClip, ___m_PCMSetPositionCallback) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AudioClip) == 0x28, "Size mismatch!");

} // namespace UnityEngine
