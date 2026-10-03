#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ChannelBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Span_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelBuffer)
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct ChannelBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::ChannelBuffer);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ChannelBuffer, "UnityEngine.Audio", "ChannelBuffer");
// [DefaultMember("Item")]
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies System.Span`1<T>
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ChannelBuffer
struct CORDL_TYPE ChannelBuffer {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_channelCount)) int32_t channelCount;

  __declspec(property(get = get_frameCount)) int32_t frameCount;

  /// @brief Method Clear, addr 0x6eaa5d0, size 0x50, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method .ctor, addr 0x6eaa620, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Span_1<float_t> buffer, int32_t channels);

  /// @brief Method get_Item, addr 0x6eaa580, size 0x28, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t channel, int32_t frame);

  /// @brief Method get_channelCount, addr 0x6eaa570, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_channelCount();

  /// @brief Method get_frameCount, addr 0x6eaa578, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_frameCount();

  /// @brief Method set_Item, addr 0x6eaa5a8, size 0x28, virtual false, abstract: false, final false
  inline void set_Item(int32_t channel, int32_t frame, float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ChannelBuffer();

  // Ctor Parameters [CppParam { name: "Buffer", ty: "::System::Span_1<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ChannelCount", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_FrameCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ChannelBuffer(::System::Span_1<float_t> Buffer, int32_t m_ChannelCount, int32_t m_FrameCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20335 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Buffer, offset: 0x0, size: 0x10, def value: None
  ::System::Span_1<float_t> Buffer;

  /// @brief Field m_ChannelCount, offset: 0x10, size: 0x4, def value: None
  int32_t m_ChannelCount;

  /// @brief Field m_FrameCount, offset: 0x14, size: 0x4, def value: None
  int32_t m_FrameCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ChannelBuffer, Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ChannelBuffer, m_ChannelCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ChannelBuffer, m_FrameCount) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ChannelBuffer) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
