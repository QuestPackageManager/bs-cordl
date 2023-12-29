#pragma once
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
namespace UnityEngine {
class __AudioClip__PCMReaderCallback;
}
namespace UnityEngine {
struct AudioDataLoadState;
}
namespace UnityEngine {
class __AudioClip__PCMSetPositionCallback;
}
namespace System {
class Object;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15612))
// CS Name: ::AudioClip::PCMReaderCallback*
class CORDL_TYPE __AudioClip__PCMReaderCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::__AudioClip__PCMReaderCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2b364cc size 0xd4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2b365a0 size 0x14 virtual true final false
  inline void Invoke(::ArrayW<float_t, ::Array<float_t>*> data);

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClip__PCMReaderCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioClip__PCMReaderCallback(__AudioClip__PCMReaderCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClip__PCMReaderCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioClip__PCMReaderCallback(__AudioClip__PCMReaderCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioClip__PCMReaderCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__AudioClip__PCMReaderCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: ::PCMSetPositionCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15613))
// CS Name: ::AudioClip::PCMSetPositionCallback*
class CORDL_TYPE __AudioClip__PCMSetPositionCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::__AudioClip__PCMSetPositionCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2b365b4 size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2b36678 size 0x14 virtual true final false
  inline void Invoke(int32_t position);

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClip__PCMSetPositionCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioClip__PCMSetPositionCallback(__AudioClip__PCMSetPositionCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClip__PCMSetPositionCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioClip__PCMSetPositionCallback(__AudioClip__PCMSetPositionCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioClip__PCMSetPositionCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__AudioClip__PCMSetPositionCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::AudioClip
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15614))
// CS Name: ::UnityEngine::AudioClip*
class CORDL_TYPE AudioClip : public ::UnityEngine::Object {
public:
  // Declarations
  using PCMSetPositionCallback = ::UnityEngine::__AudioClip__PCMSetPositionCallback;

  using PCMReaderCallback = ::UnityEngine::__AudioClip__PCMReaderCallback;

  /// @brief Field m_PCMReaderCallback, offset 0x18, size 0x8
  __declspec(property(get = __get_m_PCMReaderCallback, put = __set_m_PCMReaderCallback))::UnityEngine::__AudioClip__PCMReaderCallback* m_PCMReaderCallback;

  /// @brief Field m_PCMSetPositionCallback, offset 0x20, size 0x8
  __declspec(property(get = __get_m_PCMSetPositionCallback, put = __set_m_PCMSetPositionCallback))::UnityEngine::__AudioClip__PCMSetPositionCallback* m_PCMSetPositionCallback;

  __declspec(property(get = get_length)) float_t length;

  __declspec(property(get = get_samples)) int32_t samples;

  __declspec(property(get = get_channels)) int32_t channels;

  __declspec(property(get = get_frequency)) int32_t frequency;

  __declspec(property(get = get_loadState))::UnityEngine::AudioDataLoadState loadState;

  constexpr ::UnityEngine::__AudioClip__PCMReaderCallback*& __get_m_PCMReaderCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__AudioClip__PCMReaderCallback*> const& __get_m_PCMReaderCallback() const;

  constexpr void __set_m_PCMReaderCallback(::UnityEngine::__AudioClip__PCMReaderCallback* value);

  constexpr ::UnityEngine::__AudioClip__PCMSetPositionCallback*& __get_m_PCMSetPositionCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__AudioClip__PCMSetPositionCallback*> const& __get_m_PCMSetPositionCallback() const;

  constexpr void __set_m_PCMSetPositionCallback(::UnityEngine::__AudioClip__PCMSetPositionCallback* value);

  static inline ::UnityEngine::AudioClip* New_ctor();

  /// @brief Method .ctor addr 0x2b35914 size 0x5c virtual false final false
  inline void _ctor();

  /// @brief Method GetData addr 0x2b35970 size 0x5c virtual false final false
  static inline bool GetData(::UnityEngine::AudioClip* clip, ByRef<::ArrayW<float_t, ::Array<float_t>*>> data, int32_t numSamples, int32_t samplesOffset);

  /// @brief Method SetData addr 0x2b359cc size 0x5c virtual false final false
  static inline bool SetData(::UnityEngine::AudioClip* clip, ::ArrayW<float_t, ::Array<float_t>*> data, int32_t numsamples, int32_t samplesOffset);

  /// @brief Method Construct_Internal addr 0x2b35a28 size 0x28 virtual false final false
  static inline ::UnityEngine::AudioClip* Construct_Internal();

  /// @brief Method GetName addr 0x2b35a50 size 0x3c virtual false final false
  inline ::StringW GetName();

  /// @brief Method CreateUserSound addr 0x2b35a8c size 0x74 virtual false final false
  inline void CreateUserSound(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream);

  /// @brief Method get_length addr 0x2b35b00 size 0x3c virtual false final false
  inline float_t get_length();

  /// @brief Method get_samples addr 0x2b35b3c size 0x3c virtual false final false
  inline int32_t get_samples();

  /// @brief Method get_channels addr 0x2b35b78 size 0x3c virtual false final false
  inline int32_t get_channels();

  /// @brief Method get_frequency addr 0x2b35bb4 size 0x3c virtual false final false
  inline int32_t get_frequency();

  /// @brief Method LoadAudioData addr 0x2b35bf0 size 0x3c virtual false final false
  inline bool LoadAudioData();

  /// @brief Method UnloadAudioData addr 0x2b35c2c size 0x3c virtual false final false
  inline bool UnloadAudioData();

  /// @brief Method get_loadState addr 0x2b35c68 size 0x3c virtual false final false
  inline ::UnityEngine::AudioDataLoadState get_loadState();

  /// @brief Method GetData addr 0x2b35ca4 size 0x188 virtual false final false
  inline bool GetData(::ArrayW<float_t, ::Array<float_t>*> data, int32_t offsetSamples);

  /// @brief Method SetData addr 0x2b35e2c size 0x22c virtual false final false
  inline bool SetData(::ArrayW<float_t, ::Array<float_t>*> data, int32_t offsetSamples);

  /// @brief Method Create addr 0x2b36058 size 0x10 virtual false final false
  static inline ::UnityEngine::AudioClip* Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream);

  /// @brief Method Create addr 0x2b36068 size 0x1bc virtual false final false
  static inline ::UnityEngine::AudioClip* Create(::StringW name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream,
                                                 ::UnityEngine::__AudioClip__PCMReaderCallback* pcmreadercallback, ::UnityEngine::__AudioClip__PCMSetPositionCallback* pcmsetpositioncallback);

  /// @brief Method add_m_PCMReaderCallback addr 0x2b36224 size 0x9c virtual false final false
  inline void add_m_PCMReaderCallback(::UnityEngine::__AudioClip__PCMReaderCallback* value);

  /// @brief Method remove_m_PCMReaderCallback addr 0x2b3635c size 0x9c virtual false final false
  inline void remove_m_PCMReaderCallback(::UnityEngine::__AudioClip__PCMReaderCallback* value);

  /// @brief Method add_m_PCMSetPositionCallback addr 0x2b362c0 size 0x9c virtual false final false
  inline void add_m_PCMSetPositionCallback(::UnityEngine::__AudioClip__PCMSetPositionCallback* value);

  /// @brief Method remove_m_PCMSetPositionCallback addr 0x2b363f8 size 0x9c virtual false final false
  inline void remove_m_PCMSetPositionCallback(::UnityEngine::__AudioClip__PCMSetPositionCallback* value);

  /// @brief Method InvokePCMReaderCallback_Internal addr 0x2b36494 size 0x1c virtual false final false
  inline void InvokePCMReaderCallback_Internal(::ArrayW<float_t, ::Array<float_t>*> data);

  /// @brief Method InvokePCMSetPositionCallback_Internal addr 0x2b364b0 size 0x1c virtual false final false
  inline void InvokePCMSetPositionCallback_Internal(int32_t position);

  // Ctor Parameters [CppParam { name: "", ty: "AudioClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClip(AudioClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClip(AudioClip const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClip();

public:
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
