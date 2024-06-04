#pragma once
// IWYU pragma private; include "UnityEngine/AudioClip.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace UnityEngine {
struct AudioClipLoadType;
}
namespace UnityEngine {
struct AudioDataLoadState;
}
namespace UnityEngine {
class __AudioClip__PCMReaderCallback;
}
namespace UnityEngine {
class __AudioClip__PCMSetPositionCallback;
}
// Forward declare root types
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class __AudioClip__PCMReaderCallback;
}
namespace UnityEngine {
class __AudioClip__PCMSetPositionCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioClip);
MARK_REF_PTR_T(::UnityEngine::__AudioClip__PCMReaderCallback);
MARK_REF_PTR_T(::UnityEngine::__AudioClip__PCMSetPositionCallback);
// Type: ::PCMReaderCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::AudioClip::PCMReaderCallback*
class CORDL_TYPE __AudioClip__PCMReaderCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x33f9078, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<float_t, ::Array<float_t>*> data);

  static inline ::UnityEngine::__AudioClip__PCMReaderCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x33f8fa4, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioClip__PCMReaderCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AudioClip__PCMReaderCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioClip__PCMReaderCallback(__AudioClip__PCMReaderCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClip__PCMReaderCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioClip__PCMReaderCallback(__AudioClip__PCMReaderCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__AudioClip__PCMReaderCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: ::PCMSetPositionCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::AudioClip::PCMSetPositionCallback*
class CORDL_TYPE __AudioClip__PCMSetPositionCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x33f9150, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t position);

  static inline ::UnityEngine::__AudioClip__PCMSetPositionCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x33f908c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioClip__PCMSetPositionCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AudioClip__PCMSetPositionCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioClip__PCMSetPositionCallback(__AudioClip__PCMSetPositionCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClip__PCMSetPositionCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioClip__PCMSetPositionCallback(__AudioClip__PCMSetPositionCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__AudioClip__PCMSetPositionCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::AudioClip
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AudioClip*
class CORDL_TYPE AudioClip : public ::UnityEngine::Object {
public:
  // Declarations
  using PCMReaderCallback = ::UnityEngine::__AudioClip__PCMReaderCallback;

  using PCMSetPositionCallback = ::UnityEngine::__AudioClip__PCMSetPositionCallback;

  __declspec(property(get = get_ambisonic)) bool ambisonic;

  __declspec(property(get = get_channels)) int32_t channels;

  __declspec(property(get = get_frequency)) int32_t frequency;

  __declspec(property(get = get_isReadyToPlay)) bool isReadyToPlay;

  __declspec(property(get = get_length)) float_t length;

  __declspec(property(get = get_loadInBackground)) bool loadInBackground;

  __declspec(property(get = get_loadState))::UnityEngine::AudioDataLoadState loadState;

  __declspec(property(get = get_loadType))::UnityEngine::AudioClipLoadType loadType;

  /// @brief Field m_PCMReaderCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PCMReaderCallback, put = __cordl_internal_set_m_PCMReaderCallback))::UnityEngine::__AudioClip__PCMReaderCallback* m_PCMReaderCallback;

  /// @brief Field m_PCMSetPositionCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PCMSetPositionCallback,
                      put = __cordl_internal_set_m_PCMSetPositionCallback))::UnityEngine::__AudioClip__PCMSetPositionCallback* m_PCMSetPositionCallback;

  __declspec(property(get = get_preloadAudioData)) bool preloadAudioData;

  __declspec(property(get = get_samples)) int32_t samples;

  /// @brief Method Construct_Internal, addr 0x33f8398, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Construct_Internal();

  /// @brief Method Create, addr 0x33f8af4, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream);

  /// @brief Method Create, addr 0x33f8b14, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream,
                                                          ::UnityEngine::__AudioClip__PCMReaderCallback* pcmreadercallback);

  /// @brief Method Create, addr 0x33f8ce0, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream,
                                                          ::UnityEngine::__AudioClip__PCMReaderCallback* pcmreadercallback, ::UnityEngine::__AudioClip__PCMSetPositionCallback* pcmsetpositioncallback);

  /// @brief Method Create, addr 0x33f8b04, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream);

  /// @brief Method Create, addr 0x33f8cf0, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream,
                                                          ::UnityEngine::__AudioClip__PCMReaderCallback* pcmreadercallback);

  /// @brief Method Create, addr 0x33f8b24, size 0x1bc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream,
                                                          ::UnityEngine::__AudioClip__PCMReaderCallback* pcmreadercallback, ::UnityEngine::__AudioClip__PCMSetPositionCallback* pcmsetpositioncallback);

  /// @brief Method CreateUserSound, addr 0x33f83fc, size 0x74, virtual false, abstract: false, final false
  inline void CreateUserSound(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream);

  /// @brief Method GetData, addr 0x33f82e0, size 0x5c, virtual false, abstract: false, final false
  static inline bool GetData(::UnityEngine::AudioClip* clip, ByRef<::ArrayW<float_t, ::Array<float_t>*>> data, int32_t numSamples, int32_t samplesOffset);

  /// @brief Method GetData, addr 0x33f8740, size 0x188, virtual false, abstract: false, final false
  inline bool GetData(::ArrayW<float_t, ::Array<float_t>*> data, int32_t offsetSamples);

  /// @brief Method GetName, addr 0x33f83c0, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetName();

  /// @brief Method InvokePCMReaderCallback_Internal, addr 0x33f8f6c, size 0x1c, virtual false, abstract: false, final false
  inline void InvokePCMReaderCallback_Internal(::ArrayW<float_t, ::Array<float_t>*> data);

  /// @brief Method InvokePCMSetPositionCallback_Internal, addr 0x33f8f88, size 0x1c, virtual false, abstract: false, final false
  inline void InvokePCMSetPositionCallback_Internal(int32_t position);

  /// @brief Method LoadAudioData, addr 0x33f85d8, size 0x3c, virtual false, abstract: false, final false
  inline bool LoadAudioData();

  static inline ::UnityEngine::AudioClip* New_ctor();

  /// @brief Method SetData, addr 0x33f833c, size 0x5c, virtual false, abstract: false, final false
  static inline bool SetData(::UnityEngine::AudioClip* clip, ::ArrayW<float_t, ::Array<float_t>*> data, int32_t numsamples, int32_t samplesOffset);

  /// @brief Method SetData, addr 0x33f88c8, size 0x22c, virtual false, abstract: false, final false
  inline bool SetData(::ArrayW<float_t, ::Array<float_t>*> data, int32_t offsetSamples);

  /// @brief Method UnloadAudioData, addr 0x33f8614, size 0x3c, virtual false, abstract: false, final false
  inline bool UnloadAudioData();

  constexpr ::UnityEngine::__AudioClip__PCMReaderCallback*& __cordl_internal_get_m_PCMReaderCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__AudioClip__PCMReaderCallback*> const& __cordl_internal_get_m_PCMReaderCallback() const;

  constexpr ::UnityEngine::__AudioClip__PCMSetPositionCallback*& __cordl_internal_get_m_PCMSetPositionCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__AudioClip__PCMSetPositionCallback*> const& __cordl_internal_get_m_PCMSetPositionCallback() const;

  constexpr void __cordl_internal_set_m_PCMReaderCallback(::UnityEngine::__AudioClip__PCMReaderCallback* value);

  constexpr void __cordl_internal_set_m_PCMSetPositionCallback(::UnityEngine::__AudioClip__PCMSetPositionCallback* value);

  /// @brief Method .ctor, addr 0x33f8284, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_m_PCMReaderCallback, addr 0x33f8cfc, size 0x9c, virtual false, abstract: false, final false
  inline void add_m_PCMReaderCallback(::UnityEngine::__AudioClip__PCMReaderCallback* value);

  /// @brief Method add_m_PCMSetPositionCallback, addr 0x33f8d98, size 0x9c, virtual false, abstract: false, final false
  inline void add_m_PCMSetPositionCallback(::UnityEngine::__AudioClip__PCMSetPositionCallback* value);

  /// @brief Method get_ambisonic, addr 0x33f868c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_ambisonic();

  /// @brief Method get_channels, addr 0x33f84e8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_channels();

  /// @brief Method get_frequency, addr 0x33f8524, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_frequency();

  /// @brief Method get_isReadyToPlay, addr 0x33f8560, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isReadyToPlay();

  /// @brief Method get_length, addr 0x33f8470, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_length();

  /// @brief Method get_loadInBackground, addr 0x33f86c8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_loadInBackground();

  /// @brief Method get_loadState, addr 0x33f8704, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioDataLoadState get_loadState();

  /// @brief Method get_loadType, addr 0x33f859c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AudioClipLoadType get_loadType();

  /// @brief Method get_preloadAudioData, addr 0x33f8650, size 0x3c, virtual false, abstract: false, final false
  inline bool get_preloadAudioData();

  /// @brief Method get_samples, addr 0x33f84ac, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_samples();

  /// @brief Method remove_m_PCMReaderCallback, addr 0x33f8e34, size 0x9c, virtual false, abstract: false, final false
  inline void remove_m_PCMReaderCallback(::UnityEngine::__AudioClip__PCMReaderCallback* value);

  /// @brief Method remove_m_PCMSetPositionCallback, addr 0x33f8ed0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_m_PCMSetPositionCallback(::UnityEngine::__AudioClip__PCMSetPositionCallback* value);

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

  /// @brief Field m_PCMReaderCallback, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::__AudioClip__PCMReaderCallback* ___m_PCMReaderCallback;

  /// @brief Field m_PCMSetPositionCallback, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::__AudioClip__PCMSetPositionCallback* ___m_PCMSetPositionCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioClip, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AudioClip, ___m_PCMReaderCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AudioClip, ___m_PCMSetPositionCallback) == 0x20, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AudioClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioClip*, "UnityEngine", "AudioClip");
NEED_NO_BOX(::UnityEngine::__AudioClip__PCMReaderCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__AudioClip__PCMReaderCallback*, "UnityEngine", "AudioClip/PCMReaderCallback");
NEED_NO_BOX(::UnityEngine::__AudioClip__PCMSetPositionCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__AudioClip__PCMSetPositionCallback*, "UnityEngine", "AudioClip/PCMSetPositionCallback");
