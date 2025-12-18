#pragma once
// IWYU pragma private; include "UnityEngine/AudioClip.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioResource_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::AudioClip);
MARK_REF_PTR_T(::UnityEngine::AudioClip_PCMReaderCallback);
MARK_REF_PTR_T(::UnityEngine::AudioClip_PCMSetPositionCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioClip/PCMReaderCallback
class CORDL_TYPE AudioClip_PCMReaderCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x687e024, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<float_t, ::Array<float_t>*> data);

  static inline ::UnityEngine::AudioClip_PCMReaderCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x687dfa8, size 0x7c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20574 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioClip_PCMReaderCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioClip/PCMSetPositionCallback
class CORDL_TYPE AudioClip_PCMSetPositionCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x687e0a4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t position);

  static inline ::UnityEngine::AudioClip_PCMSetPositionCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x687e038, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20575 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioClip_PCMSetPositionCallback, 0x80>, "Size mismatch!");

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

  /// @brief Method Construct_Internal, addr 0x687c7bc, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Construct_Internal();

  /// @brief Method Construct_Internal_Injected, addr 0x687c8d0, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr Construct_Internal_Injected();

  /// @brief Method Create, addr 0x687db14, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream);

  /// @brief Method Create, addr 0x687db30, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream,
                                                          ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback);

  /// @brief Method Create, addr 0x687dca8, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream,
                                                          ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback, ::UnityEngine::AudioClip_PCMSetPositionCallback* pcmsetpositioncallback);

  /// @brief Method Create, addr 0x687db24, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream);

  /// @brief Method Create, addr 0x687dcb8, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream,
                                                          ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback);

  /// @brief Method Create, addr 0x687db40, size 0x168, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream,
                                                          ::UnityEngine::AudioClip_PCMReaderCallback* pcmreadercallback, ::UnityEngine::AudioClip_PCMSetPositionCallback* pcmsetpositioncallback);

  /// @brief Method CreateUserSound, addr 0x687ca70, size 0x19c, virtual false, abstract: false, final false
  inline void CreateUserSound(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream);

  /// @brief Method CreateUserSound_Injected, addr 0x687cc0c, size 0x74, virtual false, abstract: false, final false
  static inline void CreateUserSound_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name, int32_t lengthSamples, int32_t channels, int32_t frequency,
                                              bool stream);

  /// @brief Method GetData, addr 0x687c4ec, size 0x114, virtual false, abstract: false, final false
  static inline bool GetData(::UnityEngine::AudioClip* clip, ::System::Span_1<float_t> data, int32_t samplesOffset);

  /// @brief Method GetData, addr 0x687d65c, size 0x138, virtual false, abstract: false, final false
  inline bool GetData(::ArrayW<float_t, ::Array<float_t>*> data, int32_t offsetSamples);

  /// @brief Method GetData, addr 0x687d550, size 0x10c, virtual false, abstract: false, final false
  inline bool GetData(::System::Span_1<float_t> data, int32_t offsetSamples);

  /// @brief Method GetData_Injected, addr 0x687c600, size 0x54, virtual false, abstract: false, final false
  static inline bool GetData_Injected(::System::IntPtr clip, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> data, int32_t samplesOffset);

  /// @brief Method GetName, addr 0x687c8f8, size 0x134, virtual false, abstract: false, final false
  inline ::StringW GetName();

  /// @brief Method GetName_Injected, addr 0x687ca2c, size 0x44, virtual false, abstract: false, final false
  static inline void GetName_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method InvokePCMReaderCallback_Internal, addr 0x687df70, size 0x1c, virtual false, abstract: false, final false
  inline void InvokePCMReaderCallback_Internal(::ArrayW<float_t, ::Array<float_t>*> data);

  /// @brief Method InvokePCMSetPositionCallback_Internal, addr 0x687df8c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokePCMSetPositionCallback_Internal(int32_t position);

  /// @brief Method LoadAudioData, addr 0x687d0e8, size 0x80, virtual false, abstract: false, final false
  inline bool LoadAudioData();

  /// @brief Method LoadAudioData_Injected, addr 0x687d168, size 0x3c, virtual false, abstract: false, final false
  static inline bool LoadAudioData_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::AudioClip* New_ctor();

  /// @brief Method SetData, addr 0x687c654, size 0x114, virtual false, abstract: false, final false
  static inline bool SetData(::UnityEngine::AudioClip* clip, ::System::ReadOnlySpan_1<float_t> data, int32_t samplesOffset);

  /// @brief Method SetData, addr 0x687d794, size 0x1e0, virtual false, abstract: false, final false
  inline bool SetData(::ArrayW<float_t, ::Array<float_t>*> data, int32_t offsetSamples);

  /// @brief Method SetData, addr 0x687d974, size 0x1a0, virtual false, abstract: false, final false
  inline bool SetData(::System::ReadOnlySpan_1<float_t> data, int32_t offsetSamples);

  /// @brief Method SetData_Injected, addr 0x687c768, size 0x54, virtual false, abstract: false, final false
  static inline bool SetData_Injected(::System::IntPtr clip, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> data, int32_t samplesOffset);

  /// @brief Method UnloadAudioData, addr 0x687d1a4, size 0x80, virtual false, abstract: false, final false
  inline bool UnloadAudioData();

  /// @brief Method UnloadAudioData_Injected, addr 0x687d224, size 0x3c, virtual false, abstract: false, final false
  static inline bool UnloadAudioData_Injected(::System::IntPtr _unity_self);

  constexpr ::UnityEngine::AudioClip_PCMReaderCallback* const& __cordl_internal_get_m_PCMReaderCallback() const;

  constexpr ::UnityEngine::AudioClip_PCMReaderCallback*& __cordl_internal_get_m_PCMReaderCallback();

  constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback* const& __cordl_internal_get_m_PCMSetPositionCallback() const;

  constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback*& __cordl_internal_get_m_PCMSetPositionCallback();

  constexpr void __cordl_internal_set_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback* value);

  constexpr void __cordl_internal_set_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback* value);

  /// @brief Method .ctor, addr 0x687c48c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_m_PCMReaderCallback, addr 0x687dcc0, size 0xac, virtual false, abstract: false, final false
  inline void add_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback* value);

  /// @brief Method add_m_PCMSetPositionCallback, addr 0x687dd6c, size 0xac, virtual false, abstract: false, final false
  inline void add_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback* value);

  /// @brief Method get_ambisonic, addr 0x687d31c, size 0x80, virtual false, abstract: false, final false
  inline bool get_ambisonic();

  /// @brief Method get_ambisonic_Injected, addr 0x687d39c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_ambisonic_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_channels, addr 0x687cdf8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_channels();

  /// @brief Method get_channels_Injected, addr 0x687ce78, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_channels_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_frequency, addr 0x687ceb4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_frequency();

  /// @brief Method get_frequency_Injected, addr 0x687cf34, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_frequency_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isReadyToPlay, addr 0x687cf70, size 0x80, virtual false, abstract: false, final false
  inline bool get_isReadyToPlay();

  /// @brief Method get_isReadyToPlay_Injected, addr 0x687cff0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadyToPlay_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_length, addr 0x687cc80, size 0x80, virtual false, abstract: false, final false
  inline float_t get_length();

  /// @brief Method get_length_Injected, addr 0x687cd00, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_length_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loadInBackground, addr 0x687d3d8, size 0x80, virtual false, abstract: false, final false
  inline bool get_loadInBackground();

  /// @brief Method get_loadInBackground_Injected, addr 0x687d458, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loadInBackground_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loadState, addr 0x687d494, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioDataLoadState get_loadState();

  /// @brief Method get_loadState_Injected, addr 0x687d514, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioDataLoadState get_loadState_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loadType, addr 0x687d02c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioClipLoadType get_loadType();

  /// @brief Method get_loadType_Injected, addr 0x687d0ac, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AudioClipLoadType get_loadType_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_preloadAudioData, addr 0x687d260, size 0x80, virtual false, abstract: false, final false
  inline bool get_preloadAudioData();

  /// @brief Method get_preloadAudioData_Injected, addr 0x687d2e0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_preloadAudioData_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_samples, addr 0x687cd3c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_samples();

  /// @brief Method get_samples_Injected, addr 0x687cdbc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_samples_Injected(::System::IntPtr _unity_self);

  /// @brief Method remove_m_PCMReaderCallback, addr 0x687de18, size 0xac, virtual false, abstract: false, final false
  inline void remove_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback* value);

  /// @brief Method remove_m_PCMSetPositionCallback, addr 0x687dec4, size 0xac, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20576 };

  /// @brief Field m_PCMReaderCallback, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AudioClip_PCMReaderCallback* ___m_PCMReaderCallback;

  /// @brief Field m_PCMSetPositionCallback, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AudioClip_PCMSetPositionCallback* ___m_PCMSetPositionCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AudioClip, ___m_PCMReaderCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AudioClip, ___m_PCMSetPositionCallback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioClip, 0x28>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AudioClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioClip*, "UnityEngine", "AudioClip");
NEED_NO_BOX(::UnityEngine::AudioClip_PCMReaderCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioClip_PCMReaderCallback*, "UnityEngine", "AudioClip/PCMReaderCallback");
NEED_NO_BOX(::UnityEngine::AudioClip_PCMSetPositionCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioClip_PCMSetPositionCallback*, "UnityEngine", "AudioClip/PCMSetPositionCallback");
