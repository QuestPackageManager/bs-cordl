#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSettingsFlowCoordinator)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class RecordingToolConfigViewController;
}
namespace GlobalNamespace {
class RecordingToolLoggingViewController;
}
namespace GlobalNamespace {
class RecordingToolSettingsViewController;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class __RecordingToolSettingsFlowCoordinator__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettingsFlowCoordinator;
}
namespace GlobalNamespace {
class __RecordingToolSettingsFlowCoordinator__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSettingsFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5521))
// CS Name: ::RecordingToolSettingsFlowCoordinator::InitData*
class CORDL_TYPE __RecordingToolSettingsFlowCoordinator__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field nextScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __get_nextScenesTransitionSetupData, put = __set_nextScenesTransitionSetupData))::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;

  constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& __get_nextScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& __get_nextScenesTransitionSetupData() const;

  constexpr void __set_nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

  static inline ::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  /// @brief Method .ctor, addr 0x229b6a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolSettingsFlowCoordinator__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RecordingToolSettingsFlowCoordinator__InitData(__RecordingToolSettingsFlowCoordinator__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RecordingToolSettingsFlowCoordinator__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RecordingToolSettingsFlowCoordinator__InitData(__RecordingToolSettingsFlowCoordinator__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RecordingToolSettingsFlowCoordinator__InitData();

public:
  /// @brief Field nextScenesTransitionSetupData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ScenesTransitionSetupDataSO* ___nextScenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData, ___nextScenesTransitionSetupData) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RecordingToolSettingsFlowCoordinator
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5522))
// CS Name: ::RecordingToolSettingsFlowCoordinator*
class CORDL_TYPE RecordingToolSettingsFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData;

  /// @brief Field _recordingToolConfigViewController, offset 0xa8, size 0x8
  __declspec(property(get = __get__recordingToolConfigViewController,
                      put = __set__recordingToolConfigViewController))::GlobalNamespace::RecordingToolConfigViewController* _recordingToolConfigViewController;

  /// @brief Field _recordingToolSettingsViewController, offset 0xb0, size 0x8
  __declspec(property(get = __get__recordingToolSettingsViewController,
                      put = __set__recordingToolSettingsViewController))::GlobalNamespace::RecordingToolSettingsViewController* _recordingToolSettingsViewController;

  /// @brief Field _recordingToolLoggingViewController, offset 0xb8, size 0x8
  __declspec(property(get = __get__recordingToolLoggingViewController,
                      put = __set__recordingToolLoggingViewController))::GlobalNamespace::RecordingToolLoggingViewController* _recordingToolLoggingViewController;

  /// @brief Field _gameScenesManager, offset 0xc0, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  /// @brief Field _initData, offset 0xc8, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData* _initData;

  constexpr ::GlobalNamespace::RecordingToolConfigViewController*& __get__recordingToolConfigViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolConfigViewController*> const& __get__recordingToolConfigViewController() const;

  constexpr void __set__recordingToolConfigViewController(::GlobalNamespace::RecordingToolConfigViewController* value);

  constexpr ::GlobalNamespace::RecordingToolSettingsViewController*& __get__recordingToolSettingsViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolSettingsViewController*> const& __get__recordingToolSettingsViewController() const;

  constexpr void __set__recordingToolSettingsViewController(::GlobalNamespace::RecordingToolSettingsViewController* value);

  constexpr ::GlobalNamespace::RecordingToolLoggingViewController*& __get__recordingToolLoggingViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolLoggingViewController*> const& __get__recordingToolLoggingViewController() const;

  constexpr void __set__recordingToolLoggingViewController(::GlobalNamespace::RecordingToolLoggingViewController* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  constexpr ::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData* value);

  /// @brief Method DidActivate, addr 0x229b4a0, size 0xf4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x229b594, size 0xa0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method Update, addr 0x229b634, size 0x2c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method HandleRecordingToolSettingsViewControllerDidFinish, addr 0x229b660, size 0x4, virtual false, abstract: false, final false
  inline void HandleRecordingToolSettingsViewControllerDidFinish();

  /// @brief Method GoToNextScene, addr 0x229b664, size 0x3c, virtual false, abstract: false, final false
  inline void GoToNextScene();

  static inline ::GlobalNamespace::RecordingToolSettingsFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x229b6a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSettingsFlowCoordinator(RecordingToolSettingsFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSettingsFlowCoordinator(RecordingToolSettingsFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSettingsFlowCoordinator();

public:
  /// @brief Field _recordingToolConfigViewController, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolConfigViewController* ____recordingToolConfigViewController;

  /// @brief Field _recordingToolSettingsViewController, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolSettingsViewController* ____recordingToolSettingsViewController;

  /// @brief Field _recordingToolLoggingViewController, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolLoggingViewController* ____recordingToolLoggingViewController;

  /// @brief Field _gameScenesManager, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  /// @brief Field _initData, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettingsFlowCoordinator, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____recordingToolConfigViewController) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____recordingToolSettingsViewController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____recordingToolLoggingViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____gameScenesManager) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____initData) == 0xc8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsFlowCoordinator*, "", "RecordingToolSettingsFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData*, "", "RecordingToolSettingsFlowCoordinator/InitData");
