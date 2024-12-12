#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RecordingToolManager)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class RecordingToolConfigurationProcessor;
}
namespace GlobalNamespace {
struct RecordingToolManager_SetupData;
}
namespace GlobalNamespace {
class RecordingToolSettings;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolManager;
}
namespace GlobalNamespace {
struct RecordingToolManager_SetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolManager);
MARK_VAL_T(::GlobalNamespace::RecordingToolManager_SetupData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: RecordingToolManager/SetupData
struct CORDL_TYPE RecordingToolManager_SetupData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolManager_SetupData();

  // Ctor Parameters [CppParam { name: "profileSong", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "runAutopilot", ty: "bool", modifiers: "", def_value: None }]
  constexpr RecordingToolManager_SetupData(bool profileSong, bool runAutopilot) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5142 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field profileSong, offset: 0x0, size: 0x1, def value: None
  bool profileSong;

  /// @brief Field runAutopilot, offset: 0x1, size: 0x1, def value: None
  bool runAutopilot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolManager_SetupData, profileSong) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager_SetupData, runAutopilot) == 0x1, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolManager_SetupData, 0x2>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolManager
class CORDL_TYPE RecordingToolManager : public ::System::Object {
public:
  // Declarations
  using SetupData = ::GlobalNamespace::RecordingToolManager_SetupData;

  /// @brief Field _configurationProcessor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__configurationProcessor,
                      put = __cordl_internal_set__configurationProcessor)) ::GlobalNamespace::RecordingToolConfigurationProcessor* _configurationProcessor;

  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _currentRecordingIndex, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__currentRecordingIndex, put = __cordl_internal_set__currentRecordingIndex)) int32_t _currentRecordingIndex;

  /// @brief Field _environmentsListModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel)) ::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Field _menuTransitionsHelper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionsHelper;

  /// @brief Field _playerDataModel, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field configJsonData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_configJsonData, put = __cordl_internal_set_configJsonData)) ::StringW configJsonData;

  /// @brief Field performanceRecordingEnabled, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_performanceRecordingEnabled, put = __cordl_internal_set_performanceRecordingEnabled)) bool performanceRecordingEnabled;

  /// @brief Field recordingToolEnabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_recordingToolEnabled, put = __cordl_internal_set_recordingToolEnabled)) bool recordingToolEnabled;

  /// @brief Field recordingToolSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_recordingToolSettings, put = __cordl_internal_set_recordingToolSettings)) ::GlobalNamespace::RecordingToolSettings* recordingToolSettings;

  __declspec(property(get = get_showRecordingToolScene)) bool showRecordingToolScene;

  static inline ::GlobalNamespace::RecordingToolManager* New_ctor(::GlobalNamespace::RecordingToolConfigurationProcessor* processor,
                                                                  ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, ::Zenject::DiContainer* diContainer,
                                                                  ::GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                                                  ::GlobalNamespace::PlayerDataModel* playerDataModel);

  /// @brief Method Run, addr 0x3b2a068, size 0x534, virtual false, abstract: false, final false
  inline void Run();

  /// @brief Method <Run>b__15_0, addr 0x3b2a59c, size 0x4, virtual false, abstract: false, final false
  inline void _Run_b__15_0(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* StandardLevelScenesTransitionSetupDataSO, ::GlobalNamespace::LevelCompletionResults* LevelCompletionResults);

  constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor* const& __cordl_internal_get__configurationProcessor() const;

  constexpr ::GlobalNamespace::RecordingToolConfigurationProcessor*& __cordl_internal_get__configurationProcessor();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr int32_t const& __cordl_internal_get__currentRecordingIndex() const;

  constexpr int32_t& __cordl_internal_get__currentRecordingIndex();

  constexpr ::GlobalNamespace::EnvironmentsListModel* const& __cordl_internal_get__environmentsListModel() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionsHelper();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::StringW const& __cordl_internal_get_configJsonData() const;

  constexpr ::StringW& __cordl_internal_get_configJsonData();

  constexpr bool const& __cordl_internal_get_performanceRecordingEnabled() const;

  constexpr bool& __cordl_internal_get_performanceRecordingEnabled();

  constexpr bool const& __cordl_internal_get_recordingToolEnabled() const;

  constexpr bool& __cordl_internal_get_recordingToolEnabled();

  constexpr ::GlobalNamespace::RecordingToolSettings* const& __cordl_internal_get_recordingToolSettings() const;

  constexpr ::GlobalNamespace::RecordingToolSettings*& __cordl_internal_get_recordingToolSettings();

  constexpr void __cordl_internal_set__configurationProcessor(::GlobalNamespace::RecordingToolConfigurationProcessor* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__currentRecordingIndex(int32_t value);

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set_configJsonData(::StringW value);

  constexpr void __cordl_internal_set_performanceRecordingEnabled(bool value);

  constexpr void __cordl_internal_set_recordingToolEnabled(bool value);

  constexpr void __cordl_internal_set_recordingToolSettings(::GlobalNamespace::RecordingToolSettings* value);

  /// @brief Method .ctor, addr 0x3b29f50, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::RecordingToolConfigurationProcessor* processor, ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                    ::Zenject::DiContainer* diContainer, ::GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                    ::GlobalNamespace::PlayerDataModel* playerDataModel);

  /// @brief Method get_showRecordingToolScene, addr 0x3b29f3c, size 0x14, virtual false, abstract: false, final false
  inline bool get_showRecordingToolScene();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolManager(RecordingToolManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolManager(RecordingToolManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5143 };

  /// @brief Field kRecordingToolId offset 0xffffffff size 0x8
  static constexpr ::ConstString kRecordingToolId{ u"RecordingTool" };

  /// @brief Field recordingToolEnabled, offset: 0x10, size: 0x1, def value: None
  bool ___recordingToolEnabled;

  /// @brief Field performanceRecordingEnabled, offset: 0x11, size: 0x1, def value: None
  bool ___performanceRecordingEnabled;

  /// @brief Field configJsonData, offset: 0x18, size: 0x8, def value: None
  ::StringW ___configJsonData;

  /// @brief Field recordingToolSettings, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolSettings* ___recordingToolSettings;

  /// @brief Field _container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _configurationProcessor, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolConfigurationProcessor* ____configurationProcessor;

  /// @brief Field _menuTransitionsHelper, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionsHelper;

  /// @brief Field _environmentsListModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsListModel;

  /// @brief Field _playerDataModel, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _currentRecordingIndex, offset: 0x50, size: 0x4, def value: None
  int32_t ____currentRecordingIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ___recordingToolEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ___performanceRecordingEnabled) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ___configJsonData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ___recordingToolSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____container) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____configurationProcessor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____menuTransitionsHelper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____environmentsListModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____playerDataModel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolManager, ____currentRecordingIndex) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolManager, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolManager*, "", "RecordingToolManager");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolManager_SetupData, "", "RecordingToolManager/SetupData");
