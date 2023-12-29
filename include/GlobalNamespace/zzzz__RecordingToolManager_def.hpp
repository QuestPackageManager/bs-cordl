#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RecordingToolManager)
namespace GlobalNamespace {
class __ObjectsMovementRecorder__InitData;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class ProgramArguments;
}
namespace GlobalNamespace {
class RecordingToolSettings;
}
namespace GlobalNamespace {
class ListLogger;
}
namespace GlobalNamespace {
class IPosesSerializer;
}
namespace GlobalNamespace {
class RecordingToolResourceContainerSO;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolManager);
// Type: ::RecordingToolManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6043))
// CS Name: ::RecordingToolManager*
class CORDL_TYPE RecordingToolManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _recordingToolEnabled, offset 0x10, size 0x1
  __declspec(property(get = __get__recordingToolEnabled, put = __set__recordingToolEnabled)) bool _recordingToolEnabled;

  /// @brief Field _configJsonData, offset 0x18, size 0x8
  __declspec(property(get = __get__configJsonData, put = __set__configJsonData))::StringW _configJsonData;

  /// @brief Field _recordingToolSettings, offset 0x20, size 0x8
  __declspec(property(get = __get__recordingToolSettings, put = __set__recordingToolSettings))::GlobalNamespace::RecordingToolSettings* _recordingToolSettings;

  /// @brief Field _objectsMovementRecorderInitData, offset 0x28, size 0x8
  __declspec(property(get = __get__objectsMovementRecorderInitData,
                      put = __set__objectsMovementRecorderInitData))::GlobalNamespace::__ObjectsMovementRecorder__InitData* _objectsMovementRecorderInitData;

  /// @brief Field _menuDestination, offset 0x30, size 0x8
  __declspec(property(get = __get__menuDestination, put = __set__menuDestination))::GlobalNamespace::MenuDestination* _menuDestination;

  /// @brief Field _listLogger, offset 0x38, size 0x8
  __declspec(property(get = __get__listLogger, put = __set__listLogger))::GlobalNamespace::ListLogger* _listLogger;

  /// @brief Field _logger, offset 0x40, size 0x8
  __declspec(property(get = __get__logger, put = __set__logger))::GlobalNamespace::IBeatSaberLogger* _logger;

  /// @brief Field _posesSerializer, offset 0x48, size 0x8
  __declspec(property(get = __get__posesSerializer, put = __set__posesSerializer))::GlobalNamespace::IPosesSerializer* _posesSerializer;

  __declspec(property(get = get_recordingToolEnabled)) bool recordingToolEnabled;

  __declspec(property(get = get_showRecordingToolScene)) bool showRecordingToolScene;

  __declspec(property(get = get_configJsonData))::StringW configJsonData;

  __declspec(property(get = get_recordingToolSettings))::GlobalNamespace::RecordingToolSettings* recordingToolSettings;

  __declspec(property(get = get_objectsMovementRecorderInitData))::GlobalNamespace::__ObjectsMovementRecorder__InitData* objectsMovementRecorderInitData;

  __declspec(property(get = get_menuDestination))::GlobalNamespace::MenuDestination* menuDestination;

  __declspec(property(get = get_listLogger))::GlobalNamespace::ListLogger* listLogger;

  __declspec(property(get = get_logger))::GlobalNamespace::IBeatSaberLogger* logger;

  __declspec(property(get = get_posesSerializer))::GlobalNamespace::IPosesSerializer* posesSerializer;

  constexpr bool& __get__recordingToolEnabled();

  constexpr bool const& __get__recordingToolEnabled() const;

  constexpr void __set__recordingToolEnabled(bool value);

  constexpr ::StringW& __get__configJsonData();

  constexpr ::StringW const& __get__configJsonData() const;

  constexpr void __set__configJsonData(::StringW value);

  constexpr ::GlobalNamespace::RecordingToolSettings*& __get__recordingToolSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolSettings*> const& __get__recordingToolSettings() const;

  constexpr void __set__recordingToolSettings(::GlobalNamespace::RecordingToolSettings* value);

  constexpr ::GlobalNamespace::__ObjectsMovementRecorder__InitData*& __get__objectsMovementRecorderInitData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ObjectsMovementRecorder__InitData*> const& __get__objectsMovementRecorderInitData() const;

  constexpr void __set__objectsMovementRecorderInitData(::GlobalNamespace::__ObjectsMovementRecorder__InitData* value);

  constexpr ::GlobalNamespace::MenuDestination*& __get__menuDestination();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> const& __get__menuDestination() const;

  constexpr void __set__menuDestination(::GlobalNamespace::MenuDestination* value);

  constexpr ::GlobalNamespace::ListLogger*& __get__listLogger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ListLogger*> const& __get__listLogger() const;

  constexpr void __set__listLogger(::GlobalNamespace::ListLogger* value);

  constexpr ::GlobalNamespace::IBeatSaberLogger*& __get__logger();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatSaberLogger*> const& __get__logger() const;

  constexpr void __set__logger(::GlobalNamespace::IBeatSaberLogger* value);

  constexpr ::GlobalNamespace::IPosesSerializer*& __get__posesSerializer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPosesSerializer*> const& __get__posesSerializer() const;

  constexpr void __set__posesSerializer(::GlobalNamespace::IPosesSerializer* value);

  /// @brief Method get_recordingToolEnabled addr 0x21bdc1c size 0x8 virtual false final false
  inline bool get_recordingToolEnabled();

  /// @brief Method get_showRecordingToolScene addr 0x21bdc24 size 0x8 virtual false final false
  inline bool get_showRecordingToolScene();

  /// @brief Method get_configJsonData addr 0x21bdc2c size 0x8 virtual false final false
  inline ::StringW get_configJsonData();

  /// @brief Method get_recordingToolSettings addr 0x21bdc34 size 0x8 virtual false final false
  inline ::GlobalNamespace::RecordingToolSettings* get_recordingToolSettings();

  /// @brief Method get_objectsMovementRecorderInitData addr 0x21bdc3c size 0x8 virtual false final false
  inline ::GlobalNamespace::__ObjectsMovementRecorder__InitData* get_objectsMovementRecorderInitData();

  /// @brief Method get_menuDestination addr 0x21bdc44 size 0x8 virtual false final false
  inline ::GlobalNamespace::MenuDestination* get_menuDestination();

  /// @brief Method get_listLogger addr 0x21bdc4c size 0x8 virtual false final false
  inline ::GlobalNamespace::ListLogger* get_listLogger();

  /// @brief Method get_logger addr 0x21bdc54 size 0x8 virtual false final false
  inline ::GlobalNamespace::IBeatSaberLogger* get_logger();

  /// @brief Method get_posesSerializer addr 0x21bdc5c size 0x8 virtual false final false
  inline ::GlobalNamespace::IPosesSerializer* get_posesSerializer();

  static inline ::GlobalNamespace::RecordingToolManager* New_ctor(::GlobalNamespace::ProgramArguments* programArguments, ::GlobalNamespace::RecordingToolResourceContainerSO* resourceContainer);

  /// @brief Method .ctor addr 0x21bd964 size 0x2b0 virtual false final false
  inline void _ctor(::GlobalNamespace::ProgramArguments* programArguments, ::GlobalNamespace::RecordingToolResourceContainerSO* resourceContainer);

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolManager(RecordingToolManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolManager(RecordingToolManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolManager();

public:
  /// @brief Field _recordingToolEnabled, offset: 0x10, size: 0x1, def value: None
  bool ____recordingToolEnabled;

  /// @brief Field _configJsonData, offset: 0x18, size: 0x8, def value: None
  ::StringW ____configJsonData;

  /// @brief Field _recordingToolSettings, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolSettings* ____recordingToolSettings;

  /// @brief Field _objectsMovementRecorderInitData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__ObjectsMovementRecorder__InitData* ____objectsMovementRecorderInitData;

  /// @brief Field _menuDestination, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MenuDestination* ____menuDestination;

  /// @brief Field _listLogger, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ListLogger* ____listLogger;

  /// @brief Field _logger, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IBeatSaberLogger* ____logger;

  /// @brief Field _posesSerializer, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IPosesSerializer* ____posesSerializer;

  /// @brief Field kRecordingToolId offset 0xffffffff size 0x8
  static constexpr ::ConstString kRecordingToolId{ u"RecordingTool" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolManager, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____recordingToolEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____configJsonData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____recordingToolSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____objectsMovementRecorderInitData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____menuDestination) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____listLogger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____logger) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____posesSerializer) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolManager*, "", "RecordingToolManager");
