#pragma once
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
// Type: UnityEngine.Video::VideoClip
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// CS Name: ::UnityEngine.Video::VideoClip*
class CORDL_TYPE VideoClip : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_audioTrackCount)) uint16_t audioTrackCount;

  __declspec(property(get = get_frameCount)) uint64_t frameCount;

  __declspec(property(get = get_frameRate)) double_t frameRate;

  __declspec(property(get = get_height)) uint32_t height;

  __declspec(property(get = get_length)) double_t length;

  __declspec(property(get = get_originalPath))::StringW originalPath;

  __declspec(property(get = get_pixelAspectRatioDenominator)) uint32_t pixelAspectRatioDenominator;

  __declspec(property(get = get_pixelAspectRatioNumerator)) uint32_t pixelAspectRatioNumerator;

  __declspec(property(get = get_sRGB)) bool sRGB;

  __declspec(property(get = get_width)) uint32_t width;

  /// @brief Method GetAudioChannelCount, addr 0x30175b0, size 0x44, virtual false, abstract: false, final false
  inline uint16_t GetAudioChannelCount(uint16_t audioTrackIdx);

  /// @brief Method GetAudioLanguage, addr 0x3017638, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetAudioLanguage(uint16_t audioTrackIdx);

  /// @brief Method GetAudioSampleRate, addr 0x30175f4, size 0x44, virtual false, abstract: false, final false
  inline uint32_t GetAudioSampleRate(uint16_t audioTrackIdx);

  static inline ::UnityEngine::Video::VideoClip* New_ctor();

  /// @brief Method .ctor, addr 0x3017300, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_audioTrackCount, addr 0x3017574, size 0x3c, virtual false, abstract: false, final false
  inline uint16_t get_audioTrackCount();

  /// @brief Method get_frameCount, addr 0x3017394, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t get_frameCount();

  /// @brief Method get_frameRate, addr 0x30173d0, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_frameRate();

  /// @brief Method get_height, addr 0x3017484, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_height();

  /// @brief Method get_length, addr 0x301740c, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_length();

  /// @brief Method get_originalPath, addr 0x3017358, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_originalPath();

  /// @brief Method get_pixelAspectRatioDenominator, addr 0x30174fc, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioDenominator();

  /// @brief Method get_pixelAspectRatioNumerator, addr 0x30174c0, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioNumerator();

  /// @brief Method get_sRGB, addr 0x3017538, size 0x3c, virtual false, abstract: false, final false
  inline bool get_sRGB();

  /// @brief Method get_width, addr 0x3017448, size 0x3c, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoClip, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Video
NEED_NO_BOX(::UnityEngine::Video::VideoClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoClip*, "UnityEngine.Video", "VideoClip");
