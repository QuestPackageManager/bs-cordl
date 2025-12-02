#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatSaberInit)
namespace Analytics::Model {
class TelemetryModel;
}
namespace BeatSaber::Destinations {
class Destination;
}
namespace BeatSaber::Destinations {
class InitialDestinationController;
}
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
template <typename T> class LazyInject_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatSaberInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatSaberInit);
// Dependencies AppInit, BGLib.DotnetExtension.CommandLine.CommandLineParserResult
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaberInit
class CORDL_TYPE BeatSaberInit : public ::GlobalNamespace::AppInit {
public:
  // Declarations
  /// @brief Field _initialDestinationController, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__initialDestinationController,
                      put = __cordl_internal_set__initialDestinationController)) ::UnityW<::BeatSaber::Destinations::InitialDestinationController>
      _initialDestinationController;

  /// @brief Field _mainSystemInit, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSystemInit, put = __cordl_internal_set__mainSystemInit)) ::UnityW<::GlobalNamespace::MainSystemInit> _mainSystemInit;

  /// @brief Field _playerDataModel, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel,
                      put = __cordl_internal_set__playerDataModel)) ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* _playerDataModel;

  /// @brief Field _questSettingsApplicator, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__questSettingsApplicator, put = __cordl_internal_set__questSettingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO>
      _questSettingsApplicator;

  /// @brief Field _standaloneSettingsApplicator, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__standaloneSettingsApplicator, put = __cordl_internal_set__standaloneSettingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO>
      _standaloneSettingsApplicator;

  /// @brief Field _telemetryModel, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__telemetryModel, put = __cordl_internal_set__telemetryModel)) ::Analytics::Model::TelemetryModel* _telemetryModel;

  /// @brief Field commandLineArguments, offset 0x80, size 0x18
  __declspec(property(get = __cordl_internal_get_commandLineArguments,
                      put = __cordl_internal_set_commandLineArguments)) ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult commandLineArguments;

  __declspec(property(get = get_settingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO> settingsApplicator;

  /// @brief Method InstallBindings, addr 0x3642d04, size 0x4cc, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::BeatSaberInit* New_ctor();

  /// @brief Method PreloadAsync, addr 0x3642c3c, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreloadAsync();

  /// @brief Method RepeatableSetupAsync, addr 0x36428a8, size 0x11c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextSceneAsync, addr 0x3642a40, size 0x40, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* TransitionToNextSceneAsync();

  /// @brief Method <TransitionToNextSceneAsync>g__GetDestinationOverride|13_0, addr 0x3642a80, size 0x1bc, virtual false, abstract: false, final false
  inline ::BeatSaber::Destinations::Destination* _TransitionToNextSceneAsync_g__GetDestinationOverride_13_0();

  constexpr ::UnityW<::BeatSaber::Destinations::InitialDestinationController> const& __cordl_internal_get__initialDestinationController() const;

  constexpr ::UnityW<::BeatSaber::Destinations::InitialDestinationController>& __cordl_internal_get__initialDestinationController();

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit> const& __cordl_internal_get__mainSystemInit() const;

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit>& __cordl_internal_get__mainSystemInit();

  constexpr ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* const& __cordl_internal_get__playerDataModel() const;

  constexpr ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>*& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__questSettingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__questSettingsApplicator();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__standaloneSettingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__standaloneSettingsApplicator();

  constexpr ::Analytics::Model::TelemetryModel* const& __cordl_internal_get__telemetryModel() const;

  constexpr ::Analytics::Model::TelemetryModel*& __cordl_internal_get__telemetryModel();

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& __cordl_internal_get_commandLineArguments() const;

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& __cordl_internal_get_commandLineArguments();

  constexpr void __cordl_internal_set__initialDestinationController(::UnityW<::BeatSaber::Destinations::InitialDestinationController> value);

  constexpr void __cordl_internal_set__mainSystemInit(::UnityW<::GlobalNamespace::MainSystemInit> value);

  constexpr void __cordl_internal_set__playerDataModel(::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* value);

  constexpr void __cordl_internal_set__questSettingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  constexpr void __cordl_internal_set__standaloneSettingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  constexpr void __cordl_internal_set__telemetryModel(::Analytics::Model::TelemetryModel* value);

  constexpr void __cordl_internal_set_commandLineArguments(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value);

  /// @brief Method .ctor, addr 0x3644dfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_settingsApplicator, addr 0x36428a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SettingsApplicatorSO> get_settingsApplicator();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatSaberInit(BeatSaberInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatSaberInit(BeatSaberInit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21030 };

  /// @brief Field kInBuildGameVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kInBuildGameVersion{ u"InBuildGameVersion" };

  /// @brief Field kMissingOpenXRRuntimeErrorSubtitle offset 0xffffffff size 0x8
  static constexpr ::ConstString kMissingOpenXRRuntimeErrorSubtitle{ u"LABEL_MISSING_OPEN_XR_RUNTIME_ERROR" };

  /// @brief Field kMissingOpenXRRuntimeErrorTitle offset 0xffffffff size 0x8
  static constexpr ::ConstString kMissingOpenXRRuntimeErrorTitle{ u"TITLE_MISSING_OPEN_XR_RUNTIME_ERROR" };

  /// @brief Field _mainSystemInit, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSystemInit> ____mainSystemInit;

  /// @brief Field _questSettingsApplicator, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____questSettingsApplicator;

  /// @brief Field _standaloneSettingsApplicator, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____standaloneSettingsApplicator;

  /// @brief Field _playerDataModel, offset: 0x68, size: 0x8, def value: None
  ::Zenject::LazyInject_1<::UnityW<::GlobalNamespace::PlayerDataModel>>* ____playerDataModel;

  /// @brief Field _initialDestinationController, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::BeatSaber::Destinations::InitialDestinationController> ____initialDestinationController;

  /// @brief Field _telemetryModel, offset: 0x78, size: 0x8, def value: None
  ::Analytics::Model::TelemetryModel* ____telemetryModel;

  /// @brief Field commandLineArguments, offset: 0x80, size: 0x18, def value: None
  ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult ___commandLineArguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatSaberInit, ____mainSystemInit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit, ____questSettingsApplicator) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit, ____standaloneSettingsApplicator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit, ____playerDataModel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit, ____initialDestinationController) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit, ____telemetryModel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit, ___commandLineArguments) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatSaberInit, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatSaberInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatSaberInit*, "", "BeatSaberInit");
