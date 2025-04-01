#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectsMovementRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectsMovementRecorder)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
struct ObjectsMovementRecorder_CameraView;
}
namespace GlobalNamespace {
class ObjectsMovementRecorder_InitData;
}
namespace GlobalNamespace {
struct ObjectsMovementRecorder_Mode;
}
namespace GlobalNamespace {
class PlaybackRenderer_PlaybackScreenshot;
}
namespace GlobalNamespace {
class PlaybackRenderer;
}
namespace GlobalNamespace {
class PlaybackScreenshotRecorder;
}
namespace GlobalNamespace {
class PoseObjectIdSO;
}
namespace GlobalNamespace {
class PoseObject;
}
namespace GlobalNamespace {
class PosesPlayback;
}
namespace GlobalNamespace {
class PosesRecorder;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
struct ObjectsMovementRecorder_CameraView;
}
namespace GlobalNamespace {
struct ObjectsMovementRecorder_Mode;
}
namespace GlobalNamespace {
class ObjectsMovementRecorder;
}
namespace GlobalNamespace {
class ObjectsMovementRecorder_InitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ObjectsMovementRecorder_CameraView);
MARK_VAL_T(::GlobalNamespace::ObjectsMovementRecorder_Mode);
MARK_REF_PTR_T(::GlobalNamespace::ObjectsMovementRecorder);
MARK_REF_PTR_T(::GlobalNamespace::ObjectsMovementRecorder_InitData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ObjectsMovementRecorder/Mode
struct CORDL_TYPE ObjectsMovementRecorder_Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ObjectsMovementRecorder_Mode_Unwrapped
  enum struct __ObjectsMovementRecorder_Mode_Unwrapped : int32_t {
    __E_Record = static_cast<int32_t>(0x0),
    __E_Playback = static_cast<int32_t>(0x1),
    __E_Off = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ObjectsMovementRecorder_Mode_Unwrapped() const noexcept {
    return static_cast<__ObjectsMovementRecorder_Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectsMovementRecorder_Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ObjectsMovementRecorder_Mode(int32_t value__) noexcept;

  /// @brief Field Off value: I32(2)
  static ::GlobalNamespace::ObjectsMovementRecorder_Mode const Off;

  /// @brief Field Playback value: I32(1)
  static ::GlobalNamespace::ObjectsMovementRecorder_Mode const Playback;

  /// @brief Field Record value: I32(0)
  static ::GlobalNamespace::ObjectsMovementRecorder_Mode const Record;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5085 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectsMovementRecorder_Mode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ObjectsMovementRecorder/CameraView
struct CORDL_TYPE ObjectsMovementRecorder_CameraView {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ObjectsMovementRecorder_CameraView_Unwrapped
  enum struct __ObjectsMovementRecorder_CameraView_Unwrapped : int32_t {
    __E_FirstPerson = static_cast<int32_t>(0x0),
    __E_ThirdPerson = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ObjectsMovementRecorder_CameraView_Unwrapped() const noexcept {
    return static_cast<__ObjectsMovementRecorder_CameraView_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectsMovementRecorder_CameraView();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ObjectsMovementRecorder_CameraView(int32_t value__) noexcept;

  /// @brief Field FirstPerson value: I32(0)
  static ::GlobalNamespace::ObjectsMovementRecorder_CameraView const FirstPerson;

  /// @brief Field ThirdPerson value: I32(1)
  static ::GlobalNamespace::ObjectsMovementRecorder_CameraView const ThirdPerson;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5086 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_CameraView, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectsMovementRecorder_CameraView, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ObjectsMovementRecorder::CameraView, ObjectsMovementRecorder::Mode, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObjectsMovementRecorder/InitData
class CORDL_TYPE ObjectsMovementRecorder_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field addDateTimeSuffixToRecordingName, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_addDateTimeSuffixToRecordingName, put = __cordl_internal_set_addDateTimeSuffixToRecordingName)) bool addDateTimeSuffixToRecordingName;

  /// @brief Field cameraView, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_cameraView, put = __cordl_internal_set_cameraView)) ::GlobalNamespace::ObjectsMovementRecorder_CameraView cameraView;

  /// @brief Field framerate, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_framerate, put = __cordl_internal_set_framerate)) int32_t framerate;

  /// @brief Field logger, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger)) ::GlobalNamespace::IBeatSaberLogger* logger;

  /// @brief Field mode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::GlobalNamespace::ObjectsMovementRecorder_Mode mode;

  /// @brief Field playbackScreenshots, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get_playbackScreenshots,
      put = __cordl_internal_set_playbackScreenshots)) ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*>
      playbackScreenshots;

  /// @brief Field posesSerializer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_posesSerializer, put = __cordl_internal_set_posesSerializer)) ::GlobalNamespace::IPosesSerializer* posesSerializer;

  /// @brief Field recordingPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_recordingPath, put = __cordl_internal_set_recordingPath)) ::StringW recordingPath;

  /// @brief Field saveToOldFormat, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_saveToOldFormat, put = __cordl_internal_set_saveToOldFormat)) bool saveToOldFormat;

  /// @brief Field screenshotHeight, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_screenshotHeight, put = __cordl_internal_set_screenshotHeight)) int32_t screenshotHeight;

  /// @brief Field screenshotRecording, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_screenshotRecording, put = __cordl_internal_set_screenshotRecording)) bool screenshotRecording;

  /// @brief Field screenshotWidth, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_screenshotWidth, put = __cordl_internal_set_screenshotWidth)) int32_t screenshotWidth;

  static inline ::GlobalNamespace::ObjectsMovementRecorder_InitData*
  New_ctor(::GlobalNamespace::ObjectsMovementRecorder_Mode mode, ::StringW recordingPath, ::GlobalNamespace::ObjectsMovementRecorder_CameraView cameraView, bool addDateTimeSuffixToRecordingName,
           bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate,
           ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> playbackScreenshots, bool saveToOldFormat,
           ::GlobalNamespace::IBeatSaberLogger* logger, ::GlobalNamespace::IPosesSerializer* posesSerializer);

  constexpr bool const& __cordl_internal_get_addDateTimeSuffixToRecordingName() const;

  constexpr bool& __cordl_internal_get_addDateTimeSuffixToRecordingName();

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView const& __cordl_internal_get_cameraView() const;

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView& __cordl_internal_get_cameraView();

  constexpr int32_t const& __cordl_internal_get_framerate() const;

  constexpr int32_t& __cordl_internal_get_framerate();

  constexpr ::GlobalNamespace::IBeatSaberLogger* const& __cordl_internal_get_logger() const;

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __cordl_internal_get_logger();

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode const& __cordl_internal_get_mode() const;

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode& __cordl_internal_get_mode();

  constexpr ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> const&
  __cordl_internal_get_playbackScreenshots() const;

  constexpr ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*>& __cordl_internal_get_playbackScreenshots();

  constexpr ::GlobalNamespace::IPosesSerializer* const& __cordl_internal_get_posesSerializer() const;

  constexpr ::GlobalNamespace::IPosesSerializer*& __cordl_internal_get_posesSerializer();

  constexpr ::StringW const& __cordl_internal_get_recordingPath() const;

  constexpr ::StringW& __cordl_internal_get_recordingPath();

  constexpr bool const& __cordl_internal_get_saveToOldFormat() const;

  constexpr bool& __cordl_internal_get_saveToOldFormat();

  constexpr int32_t const& __cordl_internal_get_screenshotHeight() const;

  constexpr int32_t& __cordl_internal_get_screenshotHeight();

  constexpr bool const& __cordl_internal_get_screenshotRecording() const;

  constexpr bool& __cordl_internal_get_screenshotRecording();

  constexpr int32_t const& __cordl_internal_get_screenshotWidth() const;

  constexpr int32_t& __cordl_internal_get_screenshotWidth();

  constexpr void __cordl_internal_set_addDateTimeSuffixToRecordingName(bool value);

  constexpr void __cordl_internal_set_cameraView(::GlobalNamespace::ObjectsMovementRecorder_CameraView value);

  constexpr void __cordl_internal_set_framerate(int32_t value);

  constexpr void __cordl_internal_set_logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr void __cordl_internal_set_mode(::GlobalNamespace::ObjectsMovementRecorder_Mode value);

  constexpr void __cordl_internal_set_playbackScreenshots(::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> value);

  constexpr void __cordl_internal_set_posesSerializer(::GlobalNamespace::IPosesSerializer* value);

  constexpr void __cordl_internal_set_recordingPath(::StringW value);

  constexpr void __cordl_internal_set_saveToOldFormat(bool value);

  constexpr void __cordl_internal_set_screenshotHeight(int32_t value);

  constexpr void __cordl_internal_set_screenshotRecording(bool value);

  constexpr void __cordl_internal_set_screenshotWidth(int32_t value);

  /// @brief Method .ctor, addr 0x3b14868, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ObjectsMovementRecorder_Mode mode, ::StringW recordingPath, ::GlobalNamespace::ObjectsMovementRecorder_CameraView cameraView,
                    bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate,
                    ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> playbackScreenshots, bool saveToOldFormat,
                    ::GlobalNamespace::IBeatSaberLogger* logger, ::GlobalNamespace::IPosesSerializer* posesSerializer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectsMovementRecorder_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorder_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectsMovementRecorder_InitData(ObjectsMovementRecorder_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorder_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectsMovementRecorder_InitData(ObjectsMovementRecorder_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5087 };

  /// @brief Field mode, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::ObjectsMovementRecorder_Mode ___mode;

  /// @brief Field recordingPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___recordingPath;

  /// @brief Field cameraView, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::ObjectsMovementRecorder_CameraView ___cameraView;

  /// @brief Field addDateTimeSuffixToRecordingName, offset: 0x24, size: 0x1, def value: None
  bool ___addDateTimeSuffixToRecordingName;

  /// @brief Field screenshotRecording, offset: 0x25, size: 0x1, def value: None
  bool ___screenshotRecording;

  /// @brief Field screenshotWidth, offset: 0x28, size: 0x4, def value: None
  int32_t ___screenshotWidth;

  /// @brief Field screenshotHeight, offset: 0x2c, size: 0x4, def value: None
  int32_t ___screenshotHeight;

  /// @brief Field framerate, offset: 0x30, size: 0x4, def value: None
  int32_t ___framerate;

  /// @brief Field playbackScreenshots, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> ___playbackScreenshots;

  /// @brief Field saveToOldFormat, offset: 0x40, size: 0x1, def value: None
  bool ___saveToOldFormat;

  /// @brief Field posesSerializer, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IPosesSerializer* ___posesSerializer;

  /// @brief Field logger, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ___logger;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_InitData, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_InitData, ___recordingPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_InitData, ___cameraView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_InitData, ___addDateTimeSuffixToRecordingName) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_InitData, ___screenshotRecording) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_InitData, ___screenshotWidth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_InitData, ___screenshotHeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_InitData, ___framerate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_InitData, ___playbackScreenshots) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_InitData, ___saveToOldFormat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_InitData, ___posesSerializer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder_InitData, ___logger) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectsMovementRecorder_InitData, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ObjectsMovementRecorder::CameraView, ObjectsMovementRecorder::Mode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObjectsMovementRecorder
class CORDL_TYPE ObjectsMovementRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CameraView = ::GlobalNamespace::ObjectsMovementRecorder_CameraView;

  using InitData = ::GlobalNamespace::ObjectsMovementRecorder_InitData;

  using Mode = ::GlobalNamespace::ObjectsMovementRecorder_Mode;

  /// @brief Field _audioTimeSyncController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _cameraView, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__cameraView, put = __cordl_internal_set__cameraView)) ::GlobalNamespace::ObjectsMovementRecorder_CameraView _cameraView;

  /// @brief Field _externalCamera, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__externalCamera, put = __cordl_internal_set__externalCamera)) ::UnityW<::UnityEngine::Camera> _externalCamera;

  /// @brief Field _externalCameraPrefab, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__externalCameraPrefab, put = __cordl_internal_set__externalCameraPrefab)) ::UnityW<::UnityEngine::Camera> _externalCameraPrefab;

  /// @brief Field _hmdCamera, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__hmdCamera, put = __cordl_internal_set__hmdCamera)) ::UnityW<::UnityEngine::Camera> _hmdCamera;

  /// @brief Field _initData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::ObjectsMovementRecorder_InitData* _initData;

  /// @brief Field _livPoseObjectId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__livPoseObjectId, put = __cordl_internal_set__livPoseObjectId)) ::UnityW<::GlobalNamespace::PoseObjectIdSO> _livPoseObjectId;

  /// @brief Field _logger, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger)) ::GlobalNamespace::IBeatSaberLogger* _logger;

  /// @brief Field _mode, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__mode, put = __cordl_internal_set__mode)) ::GlobalNamespace::ObjectsMovementRecorder_Mode _mode;

  /// @brief Field _playback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playback, put = __cordl_internal_set__playback)) ::UnityW<::GlobalNamespace::PosesPlayback> _playback;

  /// @brief Field _playbackRender, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__playbackRender, put = __cordl_internal_set__playbackRender)) ::UnityW<::GlobalNamespace::PlaybackRenderer> _playbackRender;

  /// @brief Field _playbackScreenshotRecorder, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__playbackScreenshotRecorder, put = __cordl_internal_set__playbackScreenshotRecorder)) ::UnityW<::GlobalNamespace::PlaybackScreenshotRecorder>
      _playbackScreenshotRecorder;

  /// @brief Field _playbackScreenshots, offset 0x90, size 0x8
  __declspec(property(
      get = __cordl_internal_get__playbackScreenshots,
      put = __cordl_internal_set__playbackScreenshots)) ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*>
      _playbackScreenshots;

  /// @brief Field _poseObjects, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__poseObjects, put = __cordl_internal_set__poseObjects)) ::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*>
      _poseObjects;

  /// @brief Field _posesSerializer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__posesSerializer, put = __cordl_internal_set__posesSerializer)) ::GlobalNamespace::IPosesSerializer* _posesSerializer;

  /// @brief Field _recorder, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__recorder, put = __cordl_internal_set__recorder)) ::UnityW<::GlobalNamespace::PosesRecorder> _recorder;

  /// @brief Field _recordingPath, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingPath, put = __cordl_internal_set__recordingPath)) ::StringW _recordingPath;

  /// @brief Method HandleGameStateChanged, addr 0x3b146f4, size 0x70, virtual false, abstract: false, final false
  inline void HandleGameStateChanged();

  /// @brief Method Init, addr 0x3b136b8, size 0x704, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::ObjectsMovementRecorder* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b144b8, size 0x224, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView const& __cordl_internal_get__cameraView() const;

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_CameraView& __cordl_internal_get__cameraView();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__externalCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__externalCamera();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__externalCameraPrefab() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__externalCameraPrefab();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__hmdCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__hmdCamera();

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_InitData*& __cordl_internal_get__initData();

  constexpr ::UnityW<::GlobalNamespace::PoseObjectIdSO> const& __cordl_internal_get__livPoseObjectId() const;

  constexpr ::UnityW<::GlobalNamespace::PoseObjectIdSO>& __cordl_internal_get__livPoseObjectId();

  constexpr ::GlobalNamespace::IBeatSaberLogger* const& __cordl_internal_get__logger() const;

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __cordl_internal_get__logger();

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode const& __cordl_internal_get__mode() const;

  constexpr ::GlobalNamespace::ObjectsMovementRecorder_Mode& __cordl_internal_get__mode();

  constexpr ::UnityW<::GlobalNamespace::PosesPlayback> const& __cordl_internal_get__playback() const;

  constexpr ::UnityW<::GlobalNamespace::PosesPlayback>& __cordl_internal_get__playback();

  constexpr ::UnityW<::GlobalNamespace::PlaybackRenderer> const& __cordl_internal_get__playbackRender() const;

  constexpr ::UnityW<::GlobalNamespace::PlaybackRenderer>& __cordl_internal_get__playbackRender();

  constexpr ::UnityW<::GlobalNamespace::PlaybackScreenshotRecorder> const& __cordl_internal_get__playbackScreenshotRecorder() const;

  constexpr ::UnityW<::GlobalNamespace::PlaybackScreenshotRecorder>& __cordl_internal_get__playbackScreenshotRecorder();

  constexpr ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> const&
  __cordl_internal_get__playbackScreenshots() const;

  constexpr ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*>& __cordl_internal_get__playbackScreenshots();

  constexpr ::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> const& __cordl_internal_get__poseObjects() const;

  constexpr ::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*>& __cordl_internal_get__poseObjects();

  constexpr ::GlobalNamespace::IPosesSerializer* const& __cordl_internal_get__posesSerializer() const;

  constexpr ::GlobalNamespace::IPosesSerializer*& __cordl_internal_get__posesSerializer();

  constexpr ::UnityW<::GlobalNamespace::PosesRecorder> const& __cordl_internal_get__recorder() const;

  constexpr ::UnityW<::GlobalNamespace::PosesRecorder>& __cordl_internal_get__recorder();

  constexpr ::StringW const& __cordl_internal_get__recordingPath() const;

  constexpr ::StringW& __cordl_internal_get__recordingPath();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__cameraView(::GlobalNamespace::ObjectsMovementRecorder_CameraView value);

  constexpr void __cordl_internal_set__externalCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__externalCameraPrefab(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__hmdCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::ObjectsMovementRecorder_InitData* value);

  constexpr void __cordl_internal_set__livPoseObjectId(::UnityW<::GlobalNamespace::PoseObjectIdSO> value);

  constexpr void __cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr void __cordl_internal_set__mode(::GlobalNamespace::ObjectsMovementRecorder_Mode value);

  constexpr void __cordl_internal_set__playback(::UnityW<::GlobalNamespace::PosesPlayback> value);

  constexpr void __cordl_internal_set__playbackRender(::UnityW<::GlobalNamespace::PlaybackRenderer> value);

  constexpr void __cordl_internal_set__playbackScreenshotRecorder(::UnityW<::GlobalNamespace::PlaybackScreenshotRecorder> value);

  constexpr void __cordl_internal_set__playbackScreenshots(::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> value);

  constexpr void __cordl_internal_set__poseObjects(::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> value);

  constexpr void __cordl_internal_set__posesSerializer(::GlobalNamespace::IPosesSerializer* value);

  constexpr void __cordl_internal_set__recorder(::UnityW<::GlobalNamespace::PosesRecorder> value);

  constexpr void __cordl_internal_set__recordingPath(::StringW value);

  /// @brief Method .ctor, addr 0x3b14858, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectsMovementRecorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectsMovementRecorder(ObjectsMovementRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectsMovementRecorder(ObjectsMovementRecorder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5088 };

  /// @brief Field _poseObjects, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> ____poseObjects;

  /// @brief Field _livPoseObjectId, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PoseObjectIdSO> ____livPoseObjectId;

  /// @brief Field _recorder, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PosesRecorder> ____recorder;

  /// @brief Field _playback, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PosesPlayback> ____playback;

  /// @brief Field _playbackScreenshotRecorder, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlaybackScreenshotRecorder> ____playbackScreenshotRecorder;

  /// @brief Field _playbackRender, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlaybackRenderer> ____playbackRender;

  /// @brief Field _externalCameraPrefab, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____externalCameraPrefab;

  /// @brief Field _audioTimeSyncController, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _hmdCamera, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____hmdCamera;

  /// @brief Field _initData, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::ObjectsMovementRecorder_InitData* ____initData;

  /// @brief Field _mode, offset: 0x70, size: 0x4, def value: None
  ::GlobalNamespace::ObjectsMovementRecorder_Mode ____mode;

  /// @brief Field _recordingPath, offset: 0x78, size: 0x8, def value: None
  ::StringW ____recordingPath;

  /// @brief Field _cameraView, offset: 0x80, size: 0x4, def value: None
  ::GlobalNamespace::ObjectsMovementRecorder_CameraView ____cameraView;

  /// @brief Field _externalCamera, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____externalCamera;

  /// @brief Field _playbackScreenshots, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*, ::Array<::GlobalNamespace::PlaybackRenderer_PlaybackScreenshot*>*> ____playbackScreenshots;

  /// @brief Field _logger, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ____logger;

  /// @brief Field _posesSerializer, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::IPosesSerializer* ____posesSerializer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____poseObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____livPoseObjectId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____recorder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____playback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____playbackScreenshotRecorder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____playbackRender) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____externalCameraPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____audioTimeSyncController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____hmdCamera) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____initData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____mode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____recordingPath) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____cameraView) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____externalCamera) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____playbackScreenshots) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____logger) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____posesSerializer) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectsMovementRecorder, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectsMovementRecorder_CameraView, "", "ObjectsMovementRecorder/CameraView");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectsMovementRecorder_Mode, "", "ObjectsMovementRecorder/Mode");
NEED_NO_BOX(::GlobalNamespace::ObjectsMovementRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectsMovementRecorder*, "", "ObjectsMovementRecorder");
NEED_NO_BOX(::GlobalNamespace::ObjectsMovementRecorder_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectsMovementRecorder_InitData*, "", "ObjectsMovementRecorder/InitData");
