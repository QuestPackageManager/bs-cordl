#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObjectsMovementRecorder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace GlobalNamespace {
struct __ObjectsMovementRecorder__CameraView;
}
namespace GlobalNamespace {
class __ObjectsMovementRecorder__InitData;
}
namespace GlobalNamespace {
struct __ObjectsMovementRecorder__Mode;
}
namespace GlobalNamespace {
class __PlaybackRenderer__PlaybackScreenshot;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ObjectsMovementRecorder__CameraView;
}
namespace GlobalNamespace {
struct __ObjectsMovementRecorder__Mode;
}
namespace GlobalNamespace {
class ObjectsMovementRecorder;
}
namespace GlobalNamespace {
class __ObjectsMovementRecorder__InitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ObjectsMovementRecorder__CameraView);
MARK_VAL_T(::GlobalNamespace::__ObjectsMovementRecorder__Mode);
MARK_REF_PTR_T(::GlobalNamespace::ObjectsMovementRecorder);
MARK_REF_PTR_T(::GlobalNamespace::__ObjectsMovementRecorder__InitData);
// Type: ::Mode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ObjectsMovementRecorder::Mode
struct CORDL_TYPE __ObjectsMovementRecorder__Mode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ObjectsMovementRecorder__Mode_Unwrapped
  enum struct ____ObjectsMovementRecorder__Mode_Unwrapped : int32_t {
    __E_Record = static_cast<int32_t>(0x0),
    __E_Playback = static_cast<int32_t>(0x1),
    __E_Off = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ObjectsMovementRecorder__Mode_Unwrapped() const noexcept {
    return static_cast<____ObjectsMovementRecorder__Mode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectsMovementRecorder__Mode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ObjectsMovementRecorder__Mode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Off value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ObjectsMovementRecorder__Mode const Off;

  /// @brief Field Playback value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ObjectsMovementRecorder__Mode const Playback;

  /// @brief Field Record value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ObjectsMovementRecorder__Mode const Record;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ObjectsMovementRecorder__Mode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__Mode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CameraView
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ObjectsMovementRecorder::CameraView
struct CORDL_TYPE __ObjectsMovementRecorder__CameraView {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ObjectsMovementRecorder__CameraView_Unwrapped
  enum struct ____ObjectsMovementRecorder__CameraView_Unwrapped : int32_t {
    __E_FirstPerson = static_cast<int32_t>(0x0),
    __E_ThirdPerson = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ObjectsMovementRecorder__CameraView_Unwrapped() const noexcept {
    return static_cast<____ObjectsMovementRecorder__CameraView_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectsMovementRecorder__CameraView();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ObjectsMovementRecorder__CameraView(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FirstPerson value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const FirstPerson;

  /// @brief Field ThirdPerson value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const ThirdPerson;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ObjectsMovementRecorder__CameraView, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__CameraView, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InitData
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObjectsMovementRecorder::InitData*
class CORDL_TYPE __ObjectsMovementRecorder__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field addDateTimeSuffixToRecordingName, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_addDateTimeSuffixToRecordingName, put = __cordl_internal_set_addDateTimeSuffixToRecordingName)) bool addDateTimeSuffixToRecordingName;

  /// @brief Field cameraView, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_cameraView, put = __cordl_internal_set_cameraView))::GlobalNamespace::__ObjectsMovementRecorder__CameraView cameraView;

  /// @brief Field framerate, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_framerate, put = __cordl_internal_set_framerate)) int32_t framerate;

  /// @brief Field logger, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger))::GlobalNamespace::IBeatSaberLogger* logger;

  /// @brief Field mode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode))::GlobalNamespace::__ObjectsMovementRecorder__Mode mode;

  /// @brief Field playbackScreenshots, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playbackScreenshots,
                      put = __cordl_internal_set_playbackScreenshots))::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,
                                                                               ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> playbackScreenshots;

  /// @brief Field posesSerializer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_posesSerializer, put = __cordl_internal_set_posesSerializer))::GlobalNamespace::IPosesSerializer* posesSerializer;

  /// @brief Field recordingPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_recordingPath, put = __cordl_internal_set_recordingPath))::StringW recordingPath;

  /// @brief Field saveToOldFormat, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_saveToOldFormat, put = __cordl_internal_set_saveToOldFormat)) bool saveToOldFormat;

  /// @brief Field screenshotHeight, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_screenshotHeight, put = __cordl_internal_set_screenshotHeight)) int32_t screenshotHeight;

  /// @brief Field screenshotRecording, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_screenshotRecording, put = __cordl_internal_set_screenshotRecording)) bool screenshotRecording;

  /// @brief Field screenshotWidth, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_screenshotWidth, put = __cordl_internal_set_screenshotWidth)) int32_t screenshotWidth;

  static inline ::GlobalNamespace::__ObjectsMovementRecorder__InitData*
  New_ctor(::GlobalNamespace::__ObjectsMovementRecorder__Mode mode, ::StringW recordingPath, ::GlobalNamespace::__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName,
           bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate,
           ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> playbackScreenshots, bool saveToOldFormat,
           ::GlobalNamespace::IBeatSaberLogger* logger, ::GlobalNamespace::IPosesSerializer* posesSerializer);

  constexpr bool const& __cordl_internal_get_addDateTimeSuffixToRecordingName() const;

  constexpr bool& __cordl_internal_get_addDateTimeSuffixToRecordingName();

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const& __cordl_internal_get_cameraView() const;

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView& __cordl_internal_get_cameraView();

  constexpr int32_t const& __cordl_internal_get_framerate() const;

  constexpr int32_t& __cordl_internal_get_framerate();

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __cordl_internal_get_logger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& __cordl_internal_get_logger() const;

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode const& __cordl_internal_get_mode() const;

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode& __cordl_internal_get_mode();

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const&
  __cordl_internal_get_playbackScreenshots() const;

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>& __cordl_internal_get_playbackScreenshots();

  constexpr ::GlobalNamespace::IPosesSerializer*& __cordl_internal_get_posesSerializer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> const& __cordl_internal_get_posesSerializer() const;

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

  constexpr void __cordl_internal_set_cameraView(::GlobalNamespace::__ObjectsMovementRecorder__CameraView value);

  constexpr void __cordl_internal_set_framerate(int32_t value);

  constexpr void __cordl_internal_set_logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr void __cordl_internal_set_mode(::GlobalNamespace::__ObjectsMovementRecorder__Mode value);

  constexpr void
  __cordl_internal_set_playbackScreenshots(::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> value);

  constexpr void __cordl_internal_set_posesSerializer(::GlobalNamespace::IPosesSerializer* value);

  constexpr void __cordl_internal_set_recordingPath(::StringW value);

  constexpr void __cordl_internal_set_saveToOldFormat(bool value);

  constexpr void __cordl_internal_set_screenshotHeight(int32_t value);

  constexpr void __cordl_internal_set_screenshotRecording(bool value);

  constexpr void __cordl_internal_set_screenshotWidth(int32_t value);

  /// @brief Method .ctor, addr 0x258c354, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__ObjectsMovementRecorder__Mode mode, ::StringW recordingPath, ::GlobalNamespace::__ObjectsMovementRecorder__CameraView cameraView,
                    bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate,
                    ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> playbackScreenshots,
                    bool saveToOldFormat, ::GlobalNamespace::IBeatSaberLogger* logger, ::GlobalNamespace::IPosesSerializer* posesSerializer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectsMovementRecorder__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ObjectsMovementRecorder__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ObjectsMovementRecorder__InitData(__ObjectsMovementRecorder__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ObjectsMovementRecorder__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ObjectsMovementRecorder__InitData(__ObjectsMovementRecorder__InitData const&) = delete;

  /// @brief Field mode, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__ObjectsMovementRecorder__Mode ___mode;

  /// @brief Field recordingPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___recordingPath;

  /// @brief Field cameraView, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__ObjectsMovementRecorder__CameraView ___cameraView;

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
  ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> ___playbackScreenshots;

  /// @brief Field saveToOldFormat, offset: 0x40, size: 0x1, def value: None
  bool ___saveToOldFormat;

  /// @brief Field posesSerializer, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IPosesSerializer* ___posesSerializer;

  /// @brief Field logger, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ___logger;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ObjectsMovementRecorder__InitData, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__InitData, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__InitData, ___recordingPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__InitData, ___cameraView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__InitData, ___addDateTimeSuffixToRecordingName) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__InitData, ___screenshotRecording) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__InitData, ___screenshotWidth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__InitData, ___screenshotHeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__InitData, ___framerate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__InitData, ___playbackScreenshots) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__InitData, ___saveToOldFormat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__InitData, ___posesSerializer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObjectsMovementRecorder__InitData, ___logger) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ObjectsMovementRecorder
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObjectsMovementRecorder*
class CORDL_TYPE ObjectsMovementRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CameraView = ::GlobalNamespace::__ObjectsMovementRecorder__CameraView;

  using InitData = ::GlobalNamespace::__ObjectsMovementRecorder__InitData;

  using Mode = ::GlobalNamespace::__ObjectsMovementRecorder__Mode;

  /// @brief Field _audioTimeSyncController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController,
                      put = __cordl_internal_set__audioTimeSyncController))::UnityW<::GlobalNamespace::AudioTimeSyncController> _audioTimeSyncController;

  /// @brief Field _cameraView, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__cameraView, put = __cordl_internal_set__cameraView))::GlobalNamespace::__ObjectsMovementRecorder__CameraView _cameraView;

  /// @brief Field _externalCamera, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__externalCamera, put = __cordl_internal_set__externalCamera))::UnityW<::UnityEngine::Camera> _externalCamera;

  /// @brief Field _externalCameraPrefab, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__externalCameraPrefab, put = __cordl_internal_set__externalCameraPrefab))::UnityW<::UnityEngine::Camera> _externalCameraPrefab;

  /// @brief Field _hmdCamera, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__hmdCamera, put = __cordl_internal_set__hmdCamera))::UnityW<::UnityEngine::Camera> _hmdCamera;

  /// @brief Field _initData, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__ObjectsMovementRecorder__InitData* _initData;

  /// @brief Field _livPoseObjectId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__livPoseObjectId, put = __cordl_internal_set__livPoseObjectId))::UnityW<::GlobalNamespace::PoseObjectIdSO> _livPoseObjectId;

  /// @brief Field _logger, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__logger, put = __cordl_internal_set__logger))::GlobalNamespace::IBeatSaberLogger* _logger;

  /// @brief Field _mode, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__mode, put = __cordl_internal_set__mode))::GlobalNamespace::__ObjectsMovementRecorder__Mode _mode;

  /// @brief Field _playback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__playback, put = __cordl_internal_set__playback))::UnityW<::GlobalNamespace::PosesPlayback> _playback;

  /// @brief Field _playbackRender, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__playbackRender, put = __cordl_internal_set__playbackRender))::UnityW<::GlobalNamespace::PlaybackRenderer> _playbackRender;

  /// @brief Field _playbackScreenshotRecorder, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playbackScreenshotRecorder,
                      put = __cordl_internal_set__playbackScreenshotRecorder))::UnityW<::GlobalNamespace::PlaybackScreenshotRecorder> _playbackScreenshotRecorder;

  /// @brief Field _playbackScreenshots, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__playbackScreenshots,
                      put = __cordl_internal_set__playbackScreenshots))::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*,
                                                                                ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> _playbackScreenshots;

  /// @brief Field _poseObjects, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__poseObjects, put = __cordl_internal_set__poseObjects))::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> _poseObjects;

  /// @brief Field _posesSerializer, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__posesSerializer, put = __cordl_internal_set__posesSerializer))::GlobalNamespace::IPosesSerializer* _posesSerializer;

  /// @brief Field _recorder, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__recorder, put = __cordl_internal_set__recorder))::UnityW<::GlobalNamespace::PosesRecorder> _recorder;

  /// @brief Field _recordingPath, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingPath, put = __cordl_internal_set__recordingPath))::StringW _recordingPath;

  /// @brief Method HandleGameStateChanged, addr 0x258c1e0, size 0x70, virtual false, abstract: false, final false
  inline void HandleGameStateChanged();

  /// @brief Method Init, addr 0x258b198, size 0x704, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::ObjectsMovementRecorder* New_ctor();

  /// @brief Method OnDestroy, addr 0x258bfa0, size 0x228, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const& __cordl_internal_get__cameraView() const;

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView& __cordl_internal_get__cameraView();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__externalCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__externalCamera();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__externalCameraPrefab() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__externalCameraPrefab();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__hmdCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__hmdCamera();

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ObjectsMovementRecorder__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::UnityW<::GlobalNamespace::PoseObjectIdSO> const& __cordl_internal_get__livPoseObjectId() const;

  constexpr ::UnityW<::GlobalNamespace::PoseObjectIdSO>& __cordl_internal_get__livPoseObjectId();

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __cordl_internal_get__logger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& __cordl_internal_get__logger() const;

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode const& __cordl_internal_get__mode() const;

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode& __cordl_internal_get__mode();

  constexpr ::UnityW<::GlobalNamespace::PosesPlayback> const& __cordl_internal_get__playback() const;

  constexpr ::UnityW<::GlobalNamespace::PosesPlayback>& __cordl_internal_get__playback();

  constexpr ::UnityW<::GlobalNamespace::PlaybackRenderer> const& __cordl_internal_get__playbackRender() const;

  constexpr ::UnityW<::GlobalNamespace::PlaybackRenderer>& __cordl_internal_get__playbackRender();

  constexpr ::UnityW<::GlobalNamespace::PlaybackScreenshotRecorder> const& __cordl_internal_get__playbackScreenshotRecorder() const;

  constexpr ::UnityW<::GlobalNamespace::PlaybackScreenshotRecorder>& __cordl_internal_get__playbackScreenshotRecorder();

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const&
  __cordl_internal_get__playbackScreenshots() const;

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>& __cordl_internal_get__playbackScreenshots();

  constexpr ::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> const& __cordl_internal_get__poseObjects() const;

  constexpr ::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*>& __cordl_internal_get__poseObjects();

  constexpr ::GlobalNamespace::IPosesSerializer*& __cordl_internal_get__posesSerializer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> const& __cordl_internal_get__posesSerializer() const;

  constexpr ::UnityW<::GlobalNamespace::PosesRecorder> const& __cordl_internal_get__recorder() const;

  constexpr ::UnityW<::GlobalNamespace::PosesRecorder>& __cordl_internal_get__recorder();

  constexpr ::StringW const& __cordl_internal_get__recordingPath() const;

  constexpr ::StringW& __cordl_internal_get__recordingPath();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__cameraView(::GlobalNamespace::__ObjectsMovementRecorder__CameraView value);

  constexpr void __cordl_internal_set__externalCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__externalCameraPrefab(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__hmdCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__ObjectsMovementRecorder__InitData* value);

  constexpr void __cordl_internal_set__livPoseObjectId(::UnityW<::GlobalNamespace::PoseObjectIdSO> value);

  constexpr void __cordl_internal_set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr void __cordl_internal_set__mode(::GlobalNamespace::__ObjectsMovementRecorder__Mode value);

  constexpr void __cordl_internal_set__playback(::UnityW<::GlobalNamespace::PosesPlayback> value);

  constexpr void __cordl_internal_set__playbackRender(::UnityW<::GlobalNamespace::PlaybackRenderer> value);

  constexpr void __cordl_internal_set__playbackScreenshotRecorder(::UnityW<::GlobalNamespace::PlaybackScreenshotRecorder> value);

  constexpr void
  __cordl_internal_set__playbackScreenshots(::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> value);

  constexpr void __cordl_internal_set__poseObjects(::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> value);

  constexpr void __cordl_internal_set__posesSerializer(::GlobalNamespace::IPosesSerializer* value);

  constexpr void __cordl_internal_set__recorder(::UnityW<::GlobalNamespace::PosesRecorder> value);

  constexpr void __cordl_internal_set__recordingPath(::StringW value);

  /// @brief Method .ctor, addr 0x258c344, size 0x10, virtual false, abstract: false, final false
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

  /// @brief Field _poseObjects, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> ____poseObjects;

  /// @brief Field _livPoseObjectId, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PoseObjectIdSO> ____livPoseObjectId;

  /// @brief Field _recorder, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PosesRecorder> ____recorder;

  /// @brief Field _playback, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PosesPlayback> ____playback;

  /// @brief Field _playbackScreenshotRecorder, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlaybackScreenshotRecorder> ____playbackScreenshotRecorder;

  /// @brief Field _playbackRender, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlaybackRenderer> ____playbackRender;

  /// @brief Field _externalCameraPrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____externalCameraPrefab;

  /// @brief Field _audioTimeSyncController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _hmdCamera, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____hmdCamera;

  /// @brief Field _initData, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::__ObjectsMovementRecorder__InitData* ____initData;

  /// @brief Field _mode, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::__ObjectsMovementRecorder__Mode ____mode;

  /// @brief Field _recordingPath, offset: 0x70, size: 0x8, def value: None
  ::StringW ____recordingPath;

  /// @brief Field _cameraView, offset: 0x78, size: 0x4, def value: None
  ::GlobalNamespace::__ObjectsMovementRecorder__CameraView ____cameraView;

  /// @brief Field _externalCamera, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____externalCamera;

  /// @brief Field _playbackScreenshots, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> ____playbackScreenshots;

  /// @brief Field _logger, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ____logger;

  /// @brief Field _posesSerializer, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::IPosesSerializer* ____posesSerializer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectsMovementRecorder, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____poseObjects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____livPoseObjectId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____recorder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____playback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____playbackScreenshotRecorder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____playbackRender) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____externalCameraPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____audioTimeSyncController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____hmdCamera) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____initData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____mode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____recordingPath) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____cameraView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____externalCamera) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____playbackScreenshots) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____logger) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectsMovementRecorder, ____posesSerializer) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ObjectsMovementRecorder__CameraView, "", "ObjectsMovementRecorder/CameraView");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ObjectsMovementRecorder__Mode, "", "ObjectsMovementRecorder/Mode");
NEED_NO_BOX(::GlobalNamespace::ObjectsMovementRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectsMovementRecorder*, "", "ObjectsMovementRecorder");
NEED_NO_BOX(::GlobalNamespace::__ObjectsMovementRecorder__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ObjectsMovementRecorder__InitData*, "", "ObjectsMovementRecorder/InitData");
