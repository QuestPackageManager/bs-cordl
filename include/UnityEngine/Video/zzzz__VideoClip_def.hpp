#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoClip.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoClip)
// Forward declare root types
namespace UnityEngine::Video {
class VideoClip;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Video::VideoClip);
// Dependencies UnityEngine.Object
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoClip
class CORDL_TYPE VideoClip : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_audioTrackCount)) uint16_t audioTrackCount;

  __declspec(property(get = get_frameCount)) uint64_t frameCount;

  __declspec(property(get = get_frameRate)) double_t frameRate;

  __declspec(property(get = get_height)) uint32_t height;

  __declspec(property(get = get_length)) double_t length;

  __declspec(property(get = get_originalPath)) ::StringW originalPath;

  __declspec(property(get = get_pixelAspectRatioDenominator)) uint32_t pixelAspectRatioDenominator;

  __declspec(property(get = get_pixelAspectRatioNumerator)) uint32_t pixelAspectRatioNumerator;

  __declspec(property(get = get_sRGB)) bool sRGB;

  __declspec(property(get = get_width)) uint32_t width;

  /// @brief Method GetAudioChannelCount, addr 0x4ae5594, size 0x44, virtual false, abstract: false, final false
  inline uint16_t GetAudioChannelCount(uint16_t audioTrackIdx);

  /// @brief Method GetAudioLanguage, addr 0x4ae561c, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetAudioLanguage(uint16_t audioTrackIdx);

  /// @brief Method GetAudioSampleRate, addr 0x4ae55d8, size 0x44, virtual false, abstract: false, final false
  inline uint32_t GetAudioSampleRate(uint16_t audioTrackIdx);

  static inline ::UnityEngine::Video::VideoClip* New_ctor();

  /// @brief Method .ctor, addr 0x4ae52e4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_audioTrackCount, addr 0x4ae5558, size 0x3c, virtual false, abstract: false, final false
  inline uint16_t get_audioTrackCount();

  /// @brief Method get_frameCount, addr 0x4ae5378, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t get_frameCount();

  /// @brief Method get_frameRate, addr 0x4ae53b4, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_frameRate();

  /// @brief Method get_height, addr 0x4ae5468, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_height();

  /// @brief Method get_length, addr 0x4ae53f0, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_length();

  /// @brief Method get_originalPath, addr 0x4ae533c, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_originalPath();

  /// @brief Method get_pixelAspectRatioDenominator, addr 0x4ae54e0, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioDenominator();

  /// @brief Method get_pixelAspectRatioNumerator, addr 0x4ae54a4, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioNumerator();

  /// @brief Method get_sRGB, addr 0x4ae551c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_sRGB();

  /// @brief Method get_width, addr 0x4ae542c, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_width();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoClip();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VideoClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoClip(VideoClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoClip(VideoClip const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18519 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoClip, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Video
NEED_NO_BOX(::UnityEngine::Video::VideoClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoClip*, "UnityEngine.Video", "VideoClip");
