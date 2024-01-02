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
class __PlaybackRenderer__PlaybackScreenshot;
}
namespace GlobalNamespace {
struct __ObjectsMovementRecorder__Mode;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
struct __ObjectsMovementRecorder__CameraView;
}
namespace GlobalNamespace {
class PoseObject;
}
namespace GlobalNamespace {
class PoseObjectIdSO;
}
namespace GlobalNamespace {
class __ObjectsMovementRecorder__InitData;
}
namespace GlobalNamespace {
class PlaybackScreenshotRecorder;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
class PosesPlayback;
}
namespace GlobalNamespace {
class PosesRecorder;
}
namespace GlobalNamespace {
class PlaybackRenderer;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5917))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ObjectsMovementRecorder__Mode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectsMovementRecorder__Mode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Record value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ObjectsMovementRecorder__Mode const Record;

  /// @brief Field Playback value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ObjectsMovementRecorder__Mode const Playback;

  /// @brief Field Off value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ObjectsMovementRecorder__Mode const Off;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5918))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ObjectsMovementRecorder__CameraView(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectsMovementRecorder__CameraView();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FirstPerson value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const FirstPerson;

  /// @brief Field ThirdPerson value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const ThirdPerson;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5918)), TypeDefinitionIndex(TypeDefinitionIndex(5917))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5919))
// CS Name: ::ObjectsMovementRecorder::InitData*
class CORDL_TYPE __ObjectsMovementRecorder__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field mode, offset 0x10, size 0x4
  __declspec(property(get = __get_mode, put = __set_mode))::GlobalNamespace::__ObjectsMovementRecorder__Mode mode;

  /// @brief Field recordingPath, offset 0x18, size 0x8
  __declspec(property(get = __get_recordingPath, put = __set_recordingPath))::StringW recordingPath;

  /// @brief Field cameraView, offset 0x20, size 0x4
  __declspec(property(get = __get_cameraView, put = __set_cameraView))::GlobalNamespace::__ObjectsMovementRecorder__CameraView cameraView;

  /// @brief Field addDateTimeSuffixToRecordingName, offset 0x24, size 0x1
  __declspec(property(get = __get_addDateTimeSuffixToRecordingName, put = __set_addDateTimeSuffixToRecordingName)) bool addDateTimeSuffixToRecordingName;

  /// @brief Field screenshotRecording, offset 0x25, size 0x1
  __declspec(property(get = __get_screenshotRecording, put = __set_screenshotRecording)) bool screenshotRecording;

  /// @brief Field screenshotWidth, offset 0x28, size 0x4
  __declspec(property(get = __get_screenshotWidth, put = __set_screenshotWidth)) int32_t screenshotWidth;

  /// @brief Field screenshotHeight, offset 0x2c, size 0x4
  __declspec(property(get = __get_screenshotHeight, put = __set_screenshotHeight)) int32_t screenshotHeight;

  /// @brief Field framerate, offset 0x30, size 0x4
  __declspec(property(get = __get_framerate, put = __set_framerate)) int32_t framerate;

  /// @brief Field playbackScreenshots, offset 0x38, size 0x8
  __declspec(property(
      get = __get_playbackScreenshots,
      put = __set_playbackScreenshots))::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> playbackScreenshots;

  /// @brief Field saveToOldFormat, offset 0x40, size 0x1
  __declspec(property(get = __get_saveToOldFormat, put = __set_saveToOldFormat)) bool saveToOldFormat;

  /// @brief Field posesSerializer, offset 0x48, size 0x8
  __declspec(property(get = __get_posesSerializer, put = __set_posesSerializer))::GlobalNamespace::IPosesSerializer* posesSerializer;

  /// @brief Field logger, offset 0x50, size 0x8
  __declspec(property(get = __get_logger, put = __set_logger))::GlobalNamespace::IBeatSaberLogger* logger;

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode& __get_mode();

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode const& __get_mode() const;

  constexpr void __set_mode(::GlobalNamespace::__ObjectsMovementRecorder__Mode value);

  constexpr ::StringW& __get_recordingPath();

  constexpr ::StringW const& __get_recordingPath() const;

  constexpr void __set_recordingPath(::StringW value);

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView& __get_cameraView();

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const& __get_cameraView() const;

  constexpr void __set_cameraView(::GlobalNamespace::__ObjectsMovementRecorder__CameraView value);

  constexpr bool& __get_addDateTimeSuffixToRecordingName();

  constexpr bool const& __get_addDateTimeSuffixToRecordingName() const;

  constexpr void __set_addDateTimeSuffixToRecordingName(bool value);

  constexpr bool& __get_screenshotRecording();

  constexpr bool const& __get_screenshotRecording() const;

  constexpr void __set_screenshotRecording(bool value);

  constexpr int32_t& __get_screenshotWidth();

  constexpr int32_t const& __get_screenshotWidth() const;

  constexpr void __set_screenshotWidth(int32_t value);

  constexpr int32_t& __get_screenshotHeight();

  constexpr int32_t const& __get_screenshotHeight() const;

  constexpr void __set_screenshotHeight(int32_t value);

  constexpr int32_t& __get_framerate();

  constexpr int32_t const& __get_framerate() const;

  constexpr void __set_framerate(int32_t value);

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>& __get_playbackScreenshots();

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const& __get_playbackScreenshots() const;

  constexpr void __set_playbackScreenshots(::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> value);

  constexpr bool& __get_saveToOldFormat();

  constexpr bool const& __get_saveToOldFormat() const;

  constexpr void __set_saveToOldFormat(bool value);

  constexpr ::GlobalNamespace::IPosesSerializer*& __get_posesSerializer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> const& __get_posesSerializer() const;

  constexpr void __set_posesSerializer(::GlobalNamespace::IPosesSerializer* value);

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __get_logger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& __get_logger() const;

  constexpr void __set_logger(::GlobalNamespace::IBeatSaberLogger* value);

  static inline ::GlobalNamespace::__ObjectsMovementRecorder__InitData*
  New_ctor(::GlobalNamespace::__ObjectsMovementRecorder__Mode mode, ::StringW recordingPath, ::GlobalNamespace::__ObjectsMovementRecorder__CameraView cameraView, bool addDateTimeSuffixToRecordingName,
           bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate,
           ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> playbackScreenshots, bool saveToOldFormat,
           ::GlobalNamespace::IBeatSaberLogger* logger, ::GlobalNamespace::IPosesSerializer* posesSerializer);

  /// @brief Method .ctor, addr 0x2300138, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__ObjectsMovementRecorder__Mode mode, ::StringW recordingPath, ::GlobalNamespace::__ObjectsMovementRecorder__CameraView cameraView,
                    bool addDateTimeSuffixToRecordingName, bool screenshotRecording, int32_t screenshotWidth, int32_t screenshotHeight, int32_t framerate,
                    ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> playbackScreenshots,
                    bool saveToOldFormat, ::GlobalNamespace::IBeatSaberLogger* logger, ::GlobalNamespace::IPosesSerializer* posesSerializer);

  // Ctor Parameters [CppParam { name: "", ty: "__ObjectsMovementRecorder__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ObjectsMovementRecorder__InitData(__ObjectsMovementRecorder__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ObjectsMovementRecorder__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ObjectsMovementRecorder__InitData(__ObjectsMovementRecorder__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObjectsMovementRecorder__InitData();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5918)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(5917))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5920))
// CS Name: ::ObjectsMovementRecorder*
class CORDL_TYPE ObjectsMovementRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__ObjectsMovementRecorder__InitData;

  using CameraView = ::GlobalNamespace::__ObjectsMovementRecorder__CameraView;

  using Mode = ::GlobalNamespace::__ObjectsMovementRecorder__Mode;

  /// @brief Field _poseObjects, offset 0x18, size 0x8
  __declspec(property(get = __get__poseObjects, put = __set__poseObjects))::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> _poseObjects;

  /// @brief Field _livPoseObjectId, offset 0x20, size 0x8
  __declspec(property(get = __get__livPoseObjectId, put = __set__livPoseObjectId))::GlobalNamespace::PoseObjectIdSO* _livPoseObjectId;

  /// @brief Field _recorder, offset 0x28, size 0x8
  __declspec(property(get = __get__recorder, put = __set__recorder))::GlobalNamespace::PosesRecorder* _recorder;

  /// @brief Field _playback, offset 0x30, size 0x8
  __declspec(property(get = __get__playback, put = __set__playback))::GlobalNamespace::PosesPlayback* _playback;

  /// @brief Field _playbackScreenshotRecorder, offset 0x38, size 0x8
  __declspec(property(get = __get__playbackScreenshotRecorder, put = __set__playbackScreenshotRecorder))::GlobalNamespace::PlaybackScreenshotRecorder* _playbackScreenshotRecorder;

  /// @brief Field _playbackRender, offset 0x40, size 0x8
  __declspec(property(get = __get__playbackRender, put = __set__playbackRender))::GlobalNamespace::PlaybackRenderer* _playbackRender;

  /// @brief Field _externalCameraPrefab, offset 0x48, size 0x8
  __declspec(property(get = __get__externalCameraPrefab, put = __set__externalCameraPrefab))::UnityEngine::Camera* _externalCameraPrefab;

  /// @brief Field _audioTimeSyncController, offset 0x50, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  /// @brief Field _hmdCamera, offset 0x58, size 0x8
  __declspec(property(get = __get__hmdCamera, put = __set__hmdCamera))::UnityEngine::Camera* _hmdCamera;

  /// @brief Field _initData, offset 0x60, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__ObjectsMovementRecorder__InitData* _initData;

  /// @brief Field _mode, offset 0x68, size 0x4
  __declspec(property(get = __get__mode, put = __set__mode))::GlobalNamespace::__ObjectsMovementRecorder__Mode _mode;

  /// @brief Field _recordingPath, offset 0x70, size 0x8
  __declspec(property(get = __get__recordingPath, put = __set__recordingPath))::StringW _recordingPath;

  /// @brief Field _cameraView, offset 0x78, size 0x4
  __declspec(property(get = __get__cameraView, put = __set__cameraView))::GlobalNamespace::__ObjectsMovementRecorder__CameraView _cameraView;

  /// @brief Field _externalCamera, offset 0x80, size 0x8
  __declspec(property(get = __get__externalCamera, put = __set__externalCamera))::UnityEngine::Camera* _externalCamera;

  /// @brief Field _playbackScreenshots, offset 0x88, size 0x8
  __declspec(property(
      get = __get__playbackScreenshots,
      put = __set__playbackScreenshots))::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> _playbackScreenshots;

  /// @brief Field _logger, offset 0x90, size 0x8
  __declspec(property(get = __get__logger, put = __set__logger))::GlobalNamespace::IBeatSaberLogger* _logger;

  /// @brief Field _posesSerializer, offset 0x98, size 0x8
  __declspec(property(get = __get__posesSerializer, put = __set__posesSerializer))::GlobalNamespace::IPosesSerializer* _posesSerializer;

  constexpr ::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*>& __get__poseObjects();

  constexpr ::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> const& __get__poseObjects() const;

  constexpr void __set__poseObjects(::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> value);

  constexpr ::GlobalNamespace::PoseObjectIdSO*& __get__livPoseObjectId();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PoseObjectIdSO*> const& __get__livPoseObjectId() const;

  constexpr void __set__livPoseObjectId(::GlobalNamespace::PoseObjectIdSO* value);

  constexpr ::GlobalNamespace::PosesRecorder*& __get__recorder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PosesRecorder*> const& __get__recorder() const;

  constexpr void __set__recorder(::GlobalNamespace::PosesRecorder* value);

  constexpr ::GlobalNamespace::PosesPlayback*& __get__playback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PosesPlayback*> const& __get__playback() const;

  constexpr void __set__playback(::GlobalNamespace::PosesPlayback* value);

  constexpr ::GlobalNamespace::PlaybackScreenshotRecorder*& __get__playbackScreenshotRecorder();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlaybackScreenshotRecorder*> const& __get__playbackScreenshotRecorder() const;

  constexpr void __set__playbackScreenshotRecorder(::GlobalNamespace::PlaybackScreenshotRecorder* value);

  constexpr ::GlobalNamespace::PlaybackRenderer*& __get__playbackRender();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlaybackRenderer*> const& __get__playbackRender() const;

  constexpr void __set__playbackRender(::GlobalNamespace::PlaybackRenderer* value);

  constexpr ::UnityEngine::Camera*& __get__externalCameraPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__externalCameraPrefab() const;

  constexpr void __set__externalCameraPrefab(::UnityEngine::Camera* value);

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  constexpr ::UnityEngine::Camera*& __get__hmdCamera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__hmdCamera() const;

  constexpr void __set__hmdCamera(::UnityEngine::Camera* value);

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ObjectsMovementRecorder__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__ObjectsMovementRecorder__InitData* value);

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode& __get__mode();

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__Mode const& __get__mode() const;

  constexpr void __set__mode(::GlobalNamespace::__ObjectsMovementRecorder__Mode value);

  constexpr ::StringW& __get__recordingPath();

  constexpr ::StringW const& __get__recordingPath() const;

  constexpr void __set__recordingPath(::StringW value);

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView& __get__cameraView();

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__CameraView const& __get__cameraView() const;

  constexpr void __set__cameraView(::GlobalNamespace::__ObjectsMovementRecorder__CameraView value);

  constexpr ::UnityEngine::Camera*& __get__externalCamera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__externalCamera() const;

  constexpr void __set__externalCamera(::UnityEngine::Camera* value);

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*>& __get__playbackScreenshots();

  constexpr ::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> const& __get__playbackScreenshots() const;

  constexpr void __set__playbackScreenshots(::ArrayW<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*, ::Array<::GlobalNamespace::__PlaybackRenderer__PlaybackScreenshot*>*> value);

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __get__logger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& __get__logger() const;

  constexpr void __set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr ::GlobalNamespace::IPosesSerializer*& __get__posesSerializer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> const& __get__posesSerializer() const;

  constexpr void __set__posesSerializer(::GlobalNamespace::IPosesSerializer* value);

  /// @brief Method Init, addr 0x22fef7c, size 0x704, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method OnDestroy, addr 0x22ffd84, size 0x228, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleGameStateChanged, addr 0x22fffc4, size 0x70, virtual false, abstract: false, final false
  inline void HandleGameStateChanged();

  static inline ::GlobalNamespace::ObjectsMovementRecorder* New_ctor();

  /// @brief Method .ctor, addr 0x2300128, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectsMovementRecorder(ObjectsMovementRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectsMovementRecorder(ObjectsMovementRecorder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectsMovementRecorder();

public:
  /// @brief Field _poseObjects, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PoseObject*, ::Array<::GlobalNamespace::PoseObject*>*> ____poseObjects;

  /// @brief Field _livPoseObjectId, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PoseObjectIdSO* ____livPoseObjectId;

  /// @brief Field _recorder, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PosesRecorder* ____recorder;

  /// @brief Field _playback, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PosesPlayback* ____playback;

  /// @brief Field _playbackScreenshotRecorder, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlaybackScreenshotRecorder* ____playbackScreenshotRecorder;

  /// @brief Field _playbackRender, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PlaybackRenderer* ____playbackRender;

  /// @brief Field _externalCameraPrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Camera* ____externalCameraPrefab;

  /// @brief Field _audioTimeSyncController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field _hmdCamera, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Camera* ____hmdCamera;

  /// @brief Field _initData, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::__ObjectsMovementRecorder__InitData* ____initData;

  /// @brief Field _mode, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::__ObjectsMovementRecorder__Mode ____mode;

  /// @brief Field _recordingPath, offset: 0x70, size: 0x8, def value: None
  ::StringW ____recordingPath;

  /// @brief Field _cameraView, offset: 0x78, size: 0x4, def value: None
  ::GlobalNamespace::__ObjectsMovementRecorder__CameraView ____cameraView;

  /// @brief Field _externalCamera, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Camera* ____externalCamera;

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
