#pragma once
// IWYU pragma private; include "GlobalNamespace/PlaybackScreenshotRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlaybackScreenshotRecorder)
namespace GlobalNamespace {
class PlaybackRenderer;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class PlaybackScreenshotRecorder;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlaybackScreenshotRecorder);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlaybackScreenshotRecorder
class CORDL_TYPE PlaybackScreenshotRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _directory, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__directory, put = __cordl_internal_set__directory)) ::StringW _directory;

  /// @brief Field _frameNumber, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__frameNumber, put = __cordl_internal_set__frameNumber)) int32_t _frameNumber;

  /// @brief Field _playbackRenderer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__playbackRenderer, put = __cordl_internal_set__playbackRenderer)) ::UnityW<::GlobalNamespace::PlaybackRenderer> _playbackRenderer;

  __declspec(property(get = get_directory)) ::StringW directory;

  /// @brief Method ConvertRenderTexture, addr 0x3b28d98, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> ConvertRenderTexture(::UnityEngine::RenderTexture* renderTexture);

  /// @brief Method HandleTexturesReady, addr 0x3b28be8, size 0x7c, virtual false, abstract: false, final false
  inline void HandleTexturesReady();

  /// @brief Method Init, addr 0x3b27398, size 0xf4, virtual false, abstract: false, final false
  inline void Init(::StringW directory, int32_t framerate, ::GlobalNamespace::PlaybackRenderer* playbackRenderer);

  static inline ::GlobalNamespace::PlaybackScreenshotRecorder* New_ctor();

  /// @brief Method OnDisable, addr 0x3b28b5c, size 0x8c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3b28ad0, size 0x8c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SaveScreenshot, addr 0x3b28c64, size 0x134, virtual false, abstract: false, final false
  inline void SaveScreenshot(::UnityEngine::RenderTexture* renderTexture, ::StringW directory);

  constexpr ::StringW const& __cordl_internal_get__directory() const;

  constexpr ::StringW& __cordl_internal_get__directory();

  constexpr int32_t const& __cordl_internal_get__frameNumber() const;

  constexpr int32_t& __cordl_internal_get__frameNumber();

  constexpr ::UnityW<::GlobalNamespace::PlaybackRenderer> const& __cordl_internal_get__playbackRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::PlaybackRenderer>& __cordl_internal_get__playbackRenderer();

  constexpr void __cordl_internal_set__directory(::StringW value);

  constexpr void __cordl_internal_set__frameNumber(int32_t value);

  constexpr void __cordl_internal_set__playbackRenderer(::UnityW<::GlobalNamespace::PlaybackRenderer> value);

  /// @brief Method .ctor, addr 0x3b28e94, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_directory, addr 0x3b28ac8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_directory();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackScreenshotRecorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlaybackScreenshotRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlaybackScreenshotRecorder(PlaybackScreenshotRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlaybackScreenshotRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlaybackScreenshotRecorder(PlaybackScreenshotRecorder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5094 };

  /// @brief Field _directory, offset: 0x20, size: 0x8, def value: None
  ::StringW ____directory;

  /// @brief Field _playbackRenderer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlaybackRenderer> ____playbackRenderer;

  /// @brief Field _frameNumber, offset: 0x30, size: 0x4, def value: None
  int32_t ____frameNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlaybackScreenshotRecorder, ____directory) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackScreenshotRecorder, ____playbackRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackScreenshotRecorder, ____frameNumber) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlaybackScreenshotRecorder, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlaybackScreenshotRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackScreenshotRecorder*, "", "PlaybackScreenshotRecorder");
