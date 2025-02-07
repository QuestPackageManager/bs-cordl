#pragma once
// IWYU pragma private; include "GlobalNamespace/BufferedAudioStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BufferedAudioStream
class CORDL_TYPE BufferedAudioStream : public ::System::Object {
public:
  // Declarations
  /// @brief Field audio, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_audio, put = __cordl_internal_set_audio)) ::UnityW<::UnityEngine::AudioSource> audio;

  /// @brief Field audioBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_audioBuffer, put = __cordl_internal_set_audioBuffer)) ::ArrayW<float_t, ::Array<float_t>*> audioBuffer;

  /// @brief Field playbackDelayRemaining, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_playbackDelayRemaining, put = __cordl_internal_set_playbackDelayRemaining)) float_t playbackDelayRemaining;

  /// @brief Field remainingBufferTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_remainingBufferTime, put = __cordl_internal_set_remainingBufferTime)) float_t remainingBufferTime;

  /// @brief Field writePos, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_writePos, put = __cordl_internal_set_writePos)) int32_t writePos;

  /// @brief Method AddData, addr 0x3f5f19c, size 0x114, virtual false, abstract: false, final false
  inline void AddData(::ArrayW<float_t, ::Array<float_t>*> samples);

  static inline ::GlobalNamespace::BufferedAudioStream* New_ctor(::UnityEngine::AudioSource* audio);

  /// @brief Method Stop, addr 0x3f5ef7c, size 0x44, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Update, addr 0x3f5efc0, size 0x1dc, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audio() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audio();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_audioBuffer() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_audioBuffer();

  constexpr float_t const& __cordl_internal_get_playbackDelayRemaining() const;

  constexpr float_t& __cordl_internal_get_playbackDelayRemaining();

  constexpr float_t const& __cordl_internal_get_remainingBufferTime() const;

  constexpr float_t& __cordl_internal_get_remainingBufferTime();

  constexpr int32_t const& __cordl_internal_get_writePos() const;

  constexpr int32_t& __cordl_internal_get_writePos();

  constexpr void __cordl_internal_set_audio(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_audioBuffer(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_playbackDelayRemaining(float_t value);

  constexpr void __cordl_internal_set_remainingBufferTime(float_t value);

  constexpr void __cordl_internal_set_writePos(int32_t value);

  /// @brief Method .ctor, addr 0x3f5eeb8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AudioSource* audio);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferedAudioStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferedAudioStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferedAudioStream(BufferedAudioStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferedAudioStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferedAudioStream(BufferedAudioStream const&) = delete;

  /// @brief Field VerboseLogging offset 0xffffffff size 0x1
  static constexpr bool VerboseLogging{ false };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15304 };

  /// @brief Field bufferLengthSeconds offset 0xffffffff size 0x4
  static constexpr float_t bufferLengthSeconds{ static_cast<float_t>(0.25f) };

  /// @brief Field bufferSize offset 0xffffffff size 0x4
  static constexpr int32_t bufferSize{ static_cast<int32_t>(0x2ee0) };

  /// @brief Field playbackDelayTimeSeconds offset 0xffffffff size 0x4
  static constexpr float_t playbackDelayTimeSeconds{ static_cast<float_t>(0.05f) };

  /// @brief Field sampleRate offset 0xffffffff size 0x4
  static constexpr int32_t sampleRate{ static_cast<int32_t>(0xbb80) };

  /// @brief Field audio, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___audio;

  /// @brief Field audioBuffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___audioBuffer;

  /// @brief Field writePos, offset: 0x20, size: 0x4, def value: None
  int32_t ___writePos;

  /// @brief Field playbackDelayRemaining, offset: 0x24, size: 0x4, def value: None
  float_t ___playbackDelayRemaining;

  /// @brief Field remainingBufferTime, offset: 0x28, size: 0x4, def value: None
  float_t ___remainingBufferTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BufferedAudioStream, ___audio) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedAudioStream, ___audioBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedAudioStream, ___writePos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedAudioStream, ___playbackDelayRemaining) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedAudioStream, ___remainingBufferTime) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BufferedAudioStream, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BufferedAudioStream);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BufferedAudioStream*, "", "BufferedAudioStream");
