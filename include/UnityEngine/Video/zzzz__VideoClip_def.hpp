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
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
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

  /// @brief Method GetAudioChannelCount, addr 0x6c61950, size 0x90, virtual false, abstract: false, final false
  inline uint16_t GetAudioChannelCount(uint16_t audioTrackIdx);

  /// @brief Method GetAudioChannelCount_Injected, addr 0x6c619e0, size 0x44, virtual false, abstract: false, final false
  static inline uint16_t GetAudioChannelCount_Injected(::System::IntPtr _unity_self, uint16_t audioTrackIdx);

  /// @brief Method GetAudioLanguage, addr 0x6c61af8, size 0x140, virtual false, abstract: false, final false
  inline ::StringW GetAudioLanguage(uint16_t audioTrackIdx);

  /// @brief Method GetAudioLanguage_Injected, addr 0x6c61c38, size 0x54, virtual false, abstract: false, final false
  static inline void GetAudioLanguage_Injected(::System::IntPtr _unity_self, uint16_t audioTrackIdx, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetAudioSampleRate, addr 0x6c61a24, size 0x90, virtual false, abstract: false, final false
  inline uint32_t GetAudioSampleRate(uint16_t audioTrackIdx);

  /// @brief Method GetAudioSampleRate_Injected, addr 0x6c61ab4, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetAudioSampleRate_Injected(::System::IntPtr _unity_self, uint16_t audioTrackIdx);

  static inline ::UnityEngine::Video::VideoClip* New_ctor();

  /// @brief Method .ctor, addr 0x6c610e4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_audioTrackCount, addr 0x6c61894, size 0x80, virtual false, abstract: false, final false
  inline uint16_t get_audioTrackCount();

  /// @brief Method get_audioTrackCount_Injected, addr 0x6c61914, size 0x3c, virtual false, abstract: false, final false
  static inline uint16_t get_audioTrackCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_frameCount, addr 0x6c612b4, size 0x80, virtual false, abstract: false, final false
  inline uint64_t get_frameCount();

  /// @brief Method get_frameCount_Injected, addr 0x6c61334, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t get_frameCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_frameRate, addr 0x6c61370, size 0x80, virtual false, abstract: false, final false
  inline double_t get_frameRate();

  /// @brief Method get_frameRate_Injected, addr 0x6c613f0, size 0x3c, virtual false, abstract: false, final false
  static inline double_t get_frameRate_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_height, addr 0x6c615a4, size 0x80, virtual false, abstract: false, final false
  inline uint32_t get_height();

  /// @brief Method get_height_Injected, addr 0x6c61624, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_height_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_length, addr 0x6c6142c, size 0x80, virtual false, abstract: false, final false
  inline double_t get_length();

  /// @brief Method get_length_Injected, addr 0x6c614ac, size 0x3c, virtual false, abstract: false, final false
  static inline double_t get_length_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_originalPath, addr 0x6c6113c, size 0x134, virtual false, abstract: false, final false
  inline ::StringW get_originalPath();

  /// @brief Method get_originalPath_Injected, addr 0x6c61270, size 0x44, virtual false, abstract: false, final false
  static inline void get_originalPath_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_pixelAspectRatioDenominator, addr 0x6c6171c, size 0x80, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioDenominator();

  /// @brief Method get_pixelAspectRatioDenominator_Injected, addr 0x6c6179c, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_pixelAspectRatioDenominator_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pixelAspectRatioNumerator, addr 0x6c61660, size 0x80, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioNumerator();

  /// @brief Method get_pixelAspectRatioNumerator_Injected, addr 0x6c616e0, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_pixelAspectRatioNumerator_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sRGB, addr 0x6c617d8, size 0x80, virtual false, abstract: false, final false
  inline bool get_sRGB();

  /// @brief Method get_sRGB_Injected, addr 0x6c61858, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_sRGB_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_width, addr 0x6c614e8, size 0x80, virtual false, abstract: false, final false
  inline uint32_t get_width();

  /// @brief Method get_width_Injected, addr 0x6c61568, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_width_Injected(::System::IntPtr _unity_self);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22043 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoClip, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Video
NEED_NO_BOX(::UnityEngine::Video::VideoClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoClip*, "UnityEngine.Video", "VideoClip");
