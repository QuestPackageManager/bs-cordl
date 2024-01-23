#pragma once
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
// Type: ::PlaybackScreenshotRecorder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5926))
// CS Name: ::PlaybackScreenshotRecorder*
class CORDL_TYPE PlaybackScreenshotRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _directory, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__directory, put = __cordl_internal_set__directory))::StringW _directory;

  /// @brief Field _playbackRenderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playbackRenderer, put = __cordl_internal_set__playbackRenderer))::UnityW<::GlobalNamespace::PlaybackRenderer> _playbackRenderer;

  /// @brief Field _frameNumber, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__frameNumber, put = __cordl_internal_set__frameNumber)) int32_t _frameNumber;

  __declspec(property(get = get_directory))::StringW directory;

  constexpr ::StringW& __cordl_internal_get__directory();

  constexpr ::StringW const& __cordl_internal_get__directory() const;

  constexpr void __cordl_internal_set__directory(::StringW value);

  constexpr ::UnityW<::GlobalNamespace::PlaybackRenderer>& __cordl_internal_get__playbackRenderer();

  constexpr ::UnityW<::GlobalNamespace::PlaybackRenderer> const& __cordl_internal_get__playbackRenderer() const;

  constexpr void __cordl_internal_set__playbackRenderer(::UnityW<::GlobalNamespace::PlaybackRenderer> value);

  constexpr int32_t& __cordl_internal_get__frameNumber();

  constexpr int32_t const& __cordl_internal_get__frameNumber() const;

  constexpr void __cordl_internal_set__frameNumber(int32_t value);

  /// @brief Method get_directory, addr 0x2301358, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_directory();

  /// @brief Method OnEnable, addr 0x2301360, size 0x88, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x23013e8, size 0x88, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Init, addr 0x22ffc90, size 0xf4, virtual false, abstract: false, final false
  inline void Init(::StringW directory, int32_t framerate, ::GlobalNamespace::PlaybackRenderer* playbackRenderer);

  /// @brief Method HandleTexturesReady, addr 0x2301470, size 0x7c, virtual false, abstract: false, final false
  inline void HandleTexturesReady();

  /// @brief Method SaveScreenshot, addr 0x23014ec, size 0x134, virtual false, abstract: false, final false
  inline void SaveScreenshot(::UnityEngine::RenderTexture* renderTexture, ::StringW directory);

  /// @brief Method ConvertRenderTexture, addr 0x2301620, size 0x11c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> ConvertRenderTexture(::UnityEngine::RenderTexture* renderTexture);

  static inline ::GlobalNamespace::PlaybackScreenshotRecorder* New_ctor();

  /// @brief Method .ctor, addr 0x230173c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlaybackScreenshotRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlaybackScreenshotRecorder(PlaybackScreenshotRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlaybackScreenshotRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlaybackScreenshotRecorder(PlaybackScreenshotRecorder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaybackScreenshotRecorder();

public:
  /// @brief Field _directory, offset: 0x18, size: 0x8, def value: None
  ::StringW ____directory;

  /// @brief Field _playbackRenderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlaybackRenderer> ____playbackRenderer;

  /// @brief Field _frameNumber, offset: 0x28, size: 0x4, def value: None
  int32_t ____frameNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlaybackScreenshotRecorder, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackScreenshotRecorder, ____directory) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackScreenshotRecorder, ____playbackRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackScreenshotRecorder, ____frameNumber) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlaybackScreenshotRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackScreenshotRecorder*, "", "PlaybackScreenshotRecorder");
