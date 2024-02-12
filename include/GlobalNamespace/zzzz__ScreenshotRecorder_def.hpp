#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScreenshotRecorder_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenshotRecorder)
namespace GlobalNamespace {
struct __ScreenshotRecorder__RecordingType;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ScreenshotRecorder__RecordingType;
}
namespace GlobalNamespace {
class ScreenshotRecorder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ScreenshotRecorder__RecordingType);
MARK_REF_PTR_T(::GlobalNamespace::ScreenshotRecorder);
// Type: ::RecordingType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14533))
// CS Name: ::ScreenshotRecorder::RecordingType
struct CORDL_TYPE __ScreenshotRecorder__RecordingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScreenshotRecorder__RecordingType_Unwrapped
  enum struct ____ScreenshotRecorder__RecordingType_Unwrapped : int32_t {
    __E_Sequence = static_cast<int32_t>(0x0),
    __E_Stereo360Sequence = static_cast<int32_t>(0x1),
    __E_Mono360Sequence = static_cast<int32_t>(0x2),
    __E_F10ForScreenshot = static_cast<int32_t>(0x3),
    __E_Interval = static_cast<int32_t>(0x4),
    __E_ScreenshotOnPause = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScreenshotRecorder__RecordingType_Unwrapped() const noexcept {
    return static_cast<____ScreenshotRecorder__RecordingType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScreenshotRecorder__RecordingType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScreenshotRecorder__RecordingType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Sequence value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ScreenshotRecorder__RecordingType const Sequence;

  /// @brief Field Stereo360Sequence value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ScreenshotRecorder__RecordingType const Stereo360Sequence;

  /// @brief Field Mono360Sequence value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ScreenshotRecorder__RecordingType const Mono360Sequence;

  /// @brief Field F10ForScreenshot value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__ScreenshotRecorder__RecordingType const F10ForScreenshot;

  /// @brief Field Interval value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__ScreenshotRecorder__RecordingType const Interval;

  /// @brief Field ScreenshotOnPause value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__ScreenshotRecorder__RecordingType const ScreenshotOnPause;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScreenshotRecorder__RecordingType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScreenshotRecorder__RecordingType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScreenshotRecorder
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(14533))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14534))
// CS Name: ::ScreenshotRecorder*
class CORDL_TYPE ScreenshotRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RecordingType = ::GlobalNamespace::__ScreenshotRecorder__RecordingType;

  /// @brief Field _directory, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__directory, put = __cordl_internal_set__directory))::StringW _directory;

  /// @brief Field _camera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera))::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _frameRate, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__frameRate, put = __cordl_internal_set__frameRate)) int32_t _frameRate;

  /// @brief Field _forceFixedFramerate, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__forceFixedFramerate, put = __cordl_internal_set__forceFixedFramerate)) bool _forceFixedFramerate;

  /// @brief Field _interval, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__interval, put = __cordl_internal_set__interval)) int32_t _interval;

  /// @brief Field _recordingType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__recordingType, put = __cordl_internal_set__recordingType))::GlobalNamespace::__ScreenshotRecorder__RecordingType _recordingType;

  /// @brief Field _pauseWithPButton, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__pauseWithPButton, put = __cordl_internal_set__pauseWithPButton)) bool _pauseWithPButton;

  /// @brief Field _antiAlias, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__antiAlias, put = __cordl_internal_set__antiAlias)) int32_t _antiAlias;

  /// @brief Field _screenshotWidth, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__screenshotWidth, put = __cordl_internal_set__screenshotWidth)) int32_t _screenshotWidth;

  /// @brief Field _screenshotHeight, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__screenshotHeight, put = __cordl_internal_set__screenshotHeight)) int32_t _screenshotHeight;

  /// @brief Field _counter, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__counter, put = __cordl_internal_set__counter)) int32_t _counter;

  /// @brief Field _originalTimeScale, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__originalTimeScale, put = __cordl_internal_set__originalTimeScale)) float_t _originalTimeScale;

  /// @brief Field _paused, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__paused, put = __cordl_internal_set__paused)) bool _paused;

  /// @brief Field _frameNum, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__frameNum, put = __cordl_internal_set__frameNum)) int32_t _frameNum;

  /// @brief Field _cubemapLeftEye, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__cubemapLeftEye, put = __cordl_internal_set__cubemapLeftEye))::UnityW<::UnityEngine::RenderTexture> _cubemapLeftEye;

  /// @brief Field _cubemapRighEye, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__cubemapRighEye, put = __cordl_internal_set__cubemapRighEye))::UnityW<::UnityEngine::RenderTexture> _cubemapRighEye;

  /// @brief Field _equirectTexture, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__equirectTexture, put = __cordl_internal_set__equirectTexture))::UnityW<::UnityEngine::RenderTexture> _equirectTexture;

  /// @brief Field _cameraRenderTexture, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraRenderTexture, put = __cordl_internal_set__cameraRenderTexture))::UnityW<::UnityEngine::RenderTexture> _cameraRenderTexture;

  __declspec(property(get = get_directory, put = set_directory))::StringW directory;

  constexpr ::StringW& __cordl_internal_get__directory();

  constexpr ::StringW const& __cordl_internal_get__directory() const;

  constexpr void __cordl_internal_set__directory(::StringW value);

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr int32_t& __cordl_internal_get__frameRate();

  constexpr int32_t const& __cordl_internal_get__frameRate() const;

  constexpr void __cordl_internal_set__frameRate(int32_t value);

  constexpr bool& __cordl_internal_get__forceFixedFramerate();

  constexpr bool const& __cordl_internal_get__forceFixedFramerate() const;

  constexpr void __cordl_internal_set__forceFixedFramerate(bool value);

  constexpr int32_t& __cordl_internal_get__interval();

  constexpr int32_t const& __cordl_internal_get__interval() const;

  constexpr void __cordl_internal_set__interval(int32_t value);

  constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType& __cordl_internal_get__recordingType();

  constexpr ::GlobalNamespace::__ScreenshotRecorder__RecordingType const& __cordl_internal_get__recordingType() const;

  constexpr void __cordl_internal_set__recordingType(::GlobalNamespace::__ScreenshotRecorder__RecordingType value);

  constexpr bool& __cordl_internal_get__pauseWithPButton();

  constexpr bool const& __cordl_internal_get__pauseWithPButton() const;

  constexpr void __cordl_internal_set__pauseWithPButton(bool value);

  constexpr int32_t& __cordl_internal_get__antiAlias();

  constexpr int32_t const& __cordl_internal_get__antiAlias() const;

  constexpr void __cordl_internal_set__antiAlias(int32_t value);

  constexpr int32_t& __cordl_internal_get__screenshotWidth();

  constexpr int32_t const& __cordl_internal_get__screenshotWidth() const;

  constexpr void __cordl_internal_set__screenshotWidth(int32_t value);

  constexpr int32_t& __cordl_internal_get__screenshotHeight();

  constexpr int32_t const& __cordl_internal_get__screenshotHeight() const;

  constexpr void __cordl_internal_set__screenshotHeight(int32_t value);

  constexpr int32_t& __cordl_internal_get__counter();

  constexpr int32_t const& __cordl_internal_get__counter() const;

  constexpr void __cordl_internal_set__counter(int32_t value);

  constexpr float_t& __cordl_internal_get__originalTimeScale();

  constexpr float_t const& __cordl_internal_get__originalTimeScale() const;

  constexpr void __cordl_internal_set__originalTimeScale(float_t value);

  constexpr bool& __cordl_internal_get__paused();

  constexpr bool const& __cordl_internal_get__paused() const;

  constexpr void __cordl_internal_set__paused(bool value);

  constexpr int32_t& __cordl_internal_get__frameNum();

  constexpr int32_t const& __cordl_internal_get__frameNum() const;

  constexpr void __cordl_internal_set__frameNum(int32_t value);

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__cubemapLeftEye();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__cubemapLeftEye() const;

  constexpr void __cordl_internal_set__cubemapLeftEye(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__cubemapRighEye();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__cubemapRighEye() const;

  constexpr void __cordl_internal_set__cubemapRighEye(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__equirectTexture();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__equirectTexture() const;

  constexpr void __cordl_internal_set__equirectTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__cameraRenderTexture();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__cameraRenderTexture() const;

  constexpr void __cordl_internal_set__cameraRenderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  /// @brief Method get_directory, addr 0x21884b0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_directory();

  /// @brief Method set_directory, addr 0x21884b8, size 0x8, virtual false, abstract: false, final false
  inline void set_directory(::StringW value);

  /// @brief Method OnEnable, addr 0x21884c0, size 0x178, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2188638, size 0xc4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method LateUpdate, addr 0x21886fc, size 0xc0, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method OnApplicationFocus, addr 0x2188840, size 0x18, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method SaveCameraScreenshot, addr 0x21887bc, size 0x84, virtual false, abstract: false, final false
  inline void SaveCameraScreenshot();

  /// @brief Method SaveTextureScreenshot, addr 0x2188974, size 0x140, virtual false, abstract: false, final false
  inline void SaveTextureScreenshot(::UnityEngine::Texture2D* tex);

  /// @brief Method ConvertRenderTexture, addr 0x2188858, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> ConvertRenderTexture(::UnityEngine::RenderTexture* renderTexture);

  static inline ::GlobalNamespace::ScreenshotRecorder* New_ctor();

  /// @brief Method .ctor, addr 0x2188ab4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ScreenshotRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenshotRecorder(ScreenshotRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenshotRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenshotRecorder(ScreenshotRecorder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenshotRecorder();

public:
  /// @brief Field _directory, offset: 0x18, size: 0x8, def value: None
  ::StringW ____directory;

  /// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _frameRate, offset: 0x28, size: 0x4, def value: None
  int32_t ____frameRate;

  /// @brief Field _forceFixedFramerate, offset: 0x2c, size: 0x1, def value: None
  bool ____forceFixedFramerate;

  /// @brief Field _interval, offset: 0x30, size: 0x4, def value: None
  int32_t ____interval;

  /// @brief Field _recordingType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__ScreenshotRecorder__RecordingType ____recordingType;

  /// @brief Field _pauseWithPButton, offset: 0x38, size: 0x1, def value: None
  bool ____pauseWithPButton;

  /// @brief Field _antiAlias, offset: 0x3c, size: 0x4, def value: None
  int32_t ____antiAlias;

  /// @brief Field _screenshotWidth, offset: 0x40, size: 0x4, def value: None
  int32_t ____screenshotWidth;

  /// @brief Field _screenshotHeight, offset: 0x44, size: 0x4, def value: None
  int32_t ____screenshotHeight;

  /// @brief Field _counter, offset: 0x48, size: 0x4, def value: None
  int32_t ____counter;

  /// @brief Field _originalTimeScale, offset: 0x4c, size: 0x4, def value: None
  float_t ____originalTimeScale;

  /// @brief Field _paused, offset: 0x50, size: 0x1, def value: None
  bool ____paused;

  /// @brief Field _frameNum, offset: 0x54, size: 0x4, def value: None
  int32_t ____frameNum;

  /// @brief Field _cubemapLeftEye, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____cubemapLeftEye;

  /// @brief Field _cubemapRighEye, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____cubemapRighEye;

  /// @brief Field _equirectTexture, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____equirectTexture;

  /// @brief Field _cameraRenderTexture, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____cameraRenderTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenshotRecorder, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____directory) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____frameRate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____forceFixedFramerate) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____interval) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____recordingType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____pauseWithPButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____antiAlias) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____screenshotWidth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____screenshotHeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____counter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____originalTimeScale) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____paused) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____frameNum) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____cubemapLeftEye) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____cubemapRighEye) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____equirectTexture) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenshotRecorder, ____cameraRenderTexture) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScreenshotRecorder__RecordingType, "", "ScreenshotRecorder/RecordingType");
NEED_NO_BOX(::GlobalNamespace::ScreenshotRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenshotRecorder*, "", "ScreenshotRecorder");
