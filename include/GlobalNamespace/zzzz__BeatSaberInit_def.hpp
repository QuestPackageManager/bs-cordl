#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberInit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
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
struct BeatSaberInit__TransitionToNextSceneAsync_d__13;
}
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatSaberInit;
}
namespace GlobalNamespace {
struct BeatSaberInit__TransitionToNextSceneAsync_d__13;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatSaberInit*);
MARK_VAL_T(::GlobalNamespace::BeatSaberInit__TransitionToNextSceneAsync_d__13);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatSaberInit*, "", "BeatSaberInit");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatSaberInit__TransitionToNextSceneAsync_d__13, "", "BeatSaberInit/<TransitionToNextSceneAsync>d__13");
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatSaberInit/<TransitionToNextSceneAsync>d__13
struct CORDL_TYPE BeatSaberInit__TransitionToNextSceneAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x376b4f8, size 0x1ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x376b6e4, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberInit__TransitionToNextSceneAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::BeatSaberInit>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr BeatSaberInit__TransitionToNextSceneAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                            ::UnityW<::GlobalNamespace::BeatSaberInit> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20954 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatSaberInit> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatSaberInit__TransitionToNextSceneAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit__TransitionToNextSceneAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit__TransitionToNextSceneAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit__TransitionToNextSceneAsync_d__13, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatSaberInit__TransitionToNextSceneAsync_d__13) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AppInit, BGLib.DotnetExtension.CommandLine.CommandLineParserResult
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaberInit
class CORDL_TYPE BeatSaberInit : public ::GlobalNamespace::AppInit {
public:
  // Declarations
  using _TransitionToNextSceneAsync_d__13 = ::GlobalNamespace::BeatSaberInit__TransitionToNextSceneAsync_d__13;

  /// @brief Field _initialDestinationController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__initialDestinationController,
                      put = __cordl_internal_set__initialDestinationController)) ::BeatSaber::Destinations::InitialDestinationController* _initialDestinationController;

  /// @brief Field _mainSystemInit, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSystemInit, put = __cordl_internal_set__mainSystemInit)) ::UnityW<::GlobalNamespace::MainSystemInit> _mainSystemInit;

  /// @brief Field _questSettingsApplicator, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__questSettingsApplicator, put = __cordl_internal_set__questSettingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO>
      _questSettingsApplicator;

  /// @brief Field _standaloneSettingsApplicator, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__standaloneSettingsApplicator, put = __cordl_internal_set__standaloneSettingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO>
      _standaloneSettingsApplicator;

  /// @brief Field _telemetryModel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__telemetryModel, put = __cordl_internal_set__telemetryModel)) ::Analytics::Model::TelemetryModel* _telemetryModel;

  /// @brief Field commandLineArguments, offset 0x68, size 0x18
  __declspec(property(get = __cordl_internal_get_commandLineArguments,
                      put = __cordl_internal_set_commandLineArguments)) ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult commandLineArguments;

  __declspec(property(get = get_settingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO> settingsApplicator;

  /// @brief Method EvaluateTargetDestination, addr 0x3768f34, size 0x1bc, virtual false, abstract: false, final false
  inline ::BeatSaber::Destinations::Destination* EvaluateTargetDestination();

  /// @brief Method InstallBindings, addr 0x37691a0, size 0x4c8, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::BeatSaberInit* New_ctor();

  /// @brief Method PreInitializeAsync, addr 0x3768cec, size 0x248, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreInitializeAsync(::Zenject::DiContainer* container);

  /// @brief Method RepeatableSetupAsync, addr 0x3768b54, size 0x11c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextSceneAsync, addr 0x37690f0, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* TransitionToNextSceneAsync();

  constexpr ::BeatSaber::Destinations::InitialDestinationController* const& __cordl_internal_get__initialDestinationController() const;

  constexpr ::BeatSaber::Destinations::InitialDestinationController*& __cordl_internal_get__initialDestinationController();

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit> const& __cordl_internal_get__mainSystemInit() const;

  constexpr ::UnityW<::GlobalNamespace::MainSystemInit>& __cordl_internal_get__mainSystemInit();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__questSettingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__questSettingsApplicator();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__standaloneSettingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__standaloneSettingsApplicator();

  constexpr ::Analytics::Model::TelemetryModel* const& __cordl_internal_get__telemetryModel() const;

  constexpr ::Analytics::Model::TelemetryModel*& __cordl_internal_get__telemetryModel();

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& __cordl_internal_get_commandLineArguments() const;

  constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& __cordl_internal_get_commandLineArguments();

  constexpr void __cordl_internal_set__initialDestinationController(::BeatSaber::Destinations::InitialDestinationController* value);

  constexpr void __cordl_internal_set__mainSystemInit(::UnityW<::GlobalNamespace::MainSystemInit> value);

  constexpr void __cordl_internal_set__questSettingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  constexpr void __cordl_internal_set__standaloneSettingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  constexpr void __cordl_internal_set__telemetryModel(::Analytics::Model::TelemetryModel* value);

  constexpr void __cordl_internal_set_commandLineArguments(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value);

  /// @brief Method .ctor, addr 0x376b4f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_settingsApplicator, addr 0x3768b4c, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20955 };

  /// @brief Field kInBuildGameVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kInBuildGameVersion{ u"InBuildGameVersion" };

  /// @brief Field kMissingOpenXRRuntimeErrorSubtitle offset 0xffffffff size 0x8
  static constexpr ::ConstString kMissingOpenXRRuntimeErrorSubtitle{ u"LABEL_MISSING_OPEN_XR_RUNTIME_ERROR" };

  /// @brief Field kMissingOpenXRRuntimeErrorTitle offset 0xffffffff size 0x8
  static constexpr ::ConstString kMissingOpenXRRuntimeErrorTitle{ u"TITLE_MISSING_OPEN_XR_RUNTIME_ERROR" };

  /// @brief Field _mainSystemInit, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSystemInit> ____mainSystemInit;

  /// @brief Field _questSettingsApplicator, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____questSettingsApplicator;

  /// @brief Field _standaloneSettingsApplicator, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____standaloneSettingsApplicator;

  /// @brief Field _initialDestinationController, offset: 0x58, size: 0x8, def value: None
  ::BeatSaber::Destinations::InitialDestinationController* ____initialDestinationController;

  /// @brief Field _telemetryModel, offset: 0x60, size: 0x8, def value: None
  ::Analytics::Model::TelemetryModel* ____telemetryModel;

  /// @brief Field commandLineArguments, offset: 0x68, size: 0x18, def value: None
  ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult ___commandLineArguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatSaberInit, ____mainSystemInit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit, ____questSettingsApplicator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit, ____standaloneSettingsApplicator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit, ____initialDestinationController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit, ____telemetryModel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberInit, ___commandLineArguments) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatSaberInit) == 0x80, "Size mismatch!");

} // namespace GlobalNamespace
