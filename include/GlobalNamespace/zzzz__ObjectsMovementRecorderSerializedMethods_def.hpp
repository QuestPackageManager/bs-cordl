#pragma once
// IWYU pragma private; include "GlobalNamespace\ObjectsMovementRecorderSerializedMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ObjectsMovementRecorderSerializedMethods)
namespace GlobalNamespace {
struct ObjectsMovementRecorder_CameraView;
}
namespace GlobalNamespace {
struct ObjectsMovementRecorder_Mode;
}
namespace GlobalNamespace {
struct PlaybackScreenshot_PlaybackRenderer_Type;
}
// Forward declare root types
namespace GlobalNamespace {
class ObjectsMovementRecorderSerializedMethods;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjectsMovementRecorderSerializedMethods*, "", "ObjectsMovementRecorderSerializedMethods");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObjectsMovementRecorderSerializedMethods
class CORDL_TYPE ObjectsMovementRecorderSerializedMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method CameraViewFromSerializedName, addr 0x58e8720, size 0x9c, virtual false, abstract: false, final false
  static inline bool CameraViewFromSerializedName(::StringW name, ::by_ref<::GlobalNamespace::ObjectsMovementRecorder_CameraView> cameraView);

  /// @brief Method ModeFromSerializedName, addr 0x58e85dc, size 0xcc, virtual false, abstract: false, final false
  static inline bool ModeFromSerializedName(::StringW name, ::by_ref<::GlobalNamespace::ObjectsMovementRecorder_Mode> mode);

  /// @brief Method PlaybackScreenshotTypeFromSerializedName, addr 0x58e8834, size 0xa4, virtual false, abstract: false, final false
  static inline bool PlaybackScreenshotTypeFromSerializedName(::StringW name, ::by_ref<::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type> type);

  /// @brief Method SerializedName, addr 0x58e86a8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW SerializedName(::GlobalNamespace::ObjectsMovementRecorder_CameraView cameraView);

  /// @brief Method SerializedName, addr 0x58e8550, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW SerializedName(::GlobalNamespace::ObjectsMovementRecorder_Mode mode);

  /// @brief Method SerializedName, addr 0x58e87bc, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW SerializedName(::GlobalNamespace::PlaybackScreenshot_PlaybackRenderer_Type type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectsMovementRecorderSerializedMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorderSerializedMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectsMovementRecorderSerializedMethods(ObjectsMovementRecorderSerializedMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorderSerializedMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectsMovementRecorderSerializedMethods(ObjectsMovementRecorderSerializedMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6569 };

  /// @brief Field kBackgroundPlaybackScreenshotType offset 0xffffffff size 0x8
  static constexpr ::ConstString kBackgroundPlaybackScreenshotType{ u"Background" };

  /// @brief Field kFirstPersonCameraView offset 0xffffffff size 0x8
  static constexpr ::ConstString kFirstPersonCameraView{ u"FirstPerson" };

  /// @brief Field kForegroundPlaybackScreenshotType offset 0xffffffff size 0x8
  static constexpr ::ConstString kForegroundPlaybackScreenshotType{ u"Foreground" };

  /// @brief Field kOffRecordingMode offset 0xffffffff size 0x8
  static constexpr ::ConstString kOffRecordingMode{ u"Off" };

  /// @brief Field kPlaybackRecordingMode offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlaybackRecordingMode{ u"Playback" };

  /// @brief Field kRecordRecordingMode offset 0xffffffff size 0x8
  static constexpr ::ConstString kRecordRecordingMode{ u"Record" };

  /// @brief Field kThirdPersonCameraView offset 0xffffffff size 0x8
  static constexpr ::ConstString kThirdPersonCameraView{ u"ThirdPerson" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ObjectsMovementRecorderSerializedMethods) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
