#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedAudioStream)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BufferedAudioStream;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BufferedAudioStream);
// Type: ::BufferedAudioStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13220))
// CS Name: ::BufferedAudioStream*
class CORDL_TYPE BufferedAudioStream : public ::System::Object {
public:
  // Declarations
  /// @brief Field audio, offset 0x10, size 0x8
  __declspec(property(get = __get_audio, put = __set_audio))::UnityEngine::AudioSource* audio;

  /// @brief Field audioBuffer, offset 0x18, size 0x8
  __declspec(property(get = __get_audioBuffer, put = __set_audioBuffer))::ArrayW<float_t, ::Array<float_t>*> audioBuffer;

  /// @brief Field writePos, offset 0x20, size 0x4
  __declspec(property(get = __get_writePos, put = __set_writePos)) int32_t writePos;

  /// @brief Field playbackDelayRemaining, offset 0x24, size 0x4
  __declspec(property(get = __get_playbackDelayRemaining, put = __set_playbackDelayRemaining)) float_t playbackDelayRemaining;

  /// @brief Field remainingBufferTime, offset 0x28, size 0x4
  __declspec(property(get = __get_remainingBufferTime, put = __set_remainingBufferTime)) float_t remainingBufferTime;

  constexpr ::UnityEngine::AudioSource*& __get_audio();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get_audio() const;

  constexpr void __set_audio(::UnityEngine::AudioSource* value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get_audioBuffer();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get_audioBuffer() const;

  constexpr void __set_audioBuffer(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr int32_t& __get_writePos();

  constexpr int32_t const& __get_writePos() const;

  constexpr void __set_writePos(int32_t value);

  constexpr float_t& __get_playbackDelayRemaining();

  constexpr float_t const& __get_playbackDelayRemaining() const;

  constexpr void __set_playbackDelayRemaining(float_t value);

  constexpr float_t& __get_remainingBufferTime();

  constexpr float_t const& __get_remainingBufferTime() const;

  constexpr void __set_remainingBufferTime(float_t value);

  static inline ::GlobalNamespace::BufferedAudioStream* New_ctor(::UnityEngine::AudioSource* audio);

  /// @brief Method .ctor, addr 0x26cd350, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AudioSource* audio);

  /// @brief Method Update, addr 0x26cd458, size 0x1d0, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method Stop, addr 0x26cd414, size 0x44, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method AddData, addr 0x26cd628, size 0x11c, virtual false, abstract: false, final false
  inline void AddData(::ArrayW<float_t, ::Array<float_t>*> samples);

  // Ctor Parameters [CppParam { name: "", ty: "BufferedAudioStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedAudioStream(BufferedAudioStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedAudioStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedAudioStream(BufferedAudioStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedAudioStream();

public:
  /// @brief Field audio, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ___audio;

  /// @brief Field audioBuffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___audioBuffer;

  /// @brief Field writePos, offset: 0x20, size: 0x4, def value: None
  int32_t ___writePos;

  /// @brief Field playbackDelayRemaining, offset: 0x24, size: 0x4, def value: None
  float_t ___playbackDelayRemaining;

  /// @brief Field remainingBufferTime, offset: 0x28, size: 0x4, def value: None
  float_t ___remainingBufferTime;

  /// @brief Field VerboseLogging offset 0xffffffff size 0x1
  static constexpr bool VerboseLogging{ false };

  /// @brief Field bufferLengthSeconds offset 0xffffffff size 0x4
  static constexpr float_t bufferLengthSeconds{ 0.25 };

  /// @brief Field sampleRate offset 0xffffffff size 0x4
  static constexpr int32_t sampleRate{ static_cast<int32_t>(0xbb80) };

  /// @brief Field bufferSize offset 0xffffffff size 0x4
  static constexpr int32_t bufferSize{ static_cast<int32_t>(0x2ee0) };

  /// @brief Field playbackDelayTimeSeconds offset 0xffffffff size 0x4
  static constexpr float_t playbackDelayTimeSeconds{ 0.05 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BufferedAudioStream, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedAudioStream, ___audio) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedAudioStream, ___audioBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedAudioStream, ___writePos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedAudioStream, ___playbackDelayRemaining) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedAudioStream, ___remainingBufferTime) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BufferedAudioStream);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BufferedAudioStream*, "", "BufferedAudioStream");
