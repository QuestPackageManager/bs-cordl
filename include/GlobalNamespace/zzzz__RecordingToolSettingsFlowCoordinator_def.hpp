#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolSettingsFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSettingsFlowCoordinator)
namespace GlobalNamespace {
class RecordingToolConfigViewController;
}
namespace GlobalNamespace {
class RecordingToolLoggingViewController;
}
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
namespace GlobalNamespace {
class RecordingToolSettingsViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettingsFlowCoordinator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSettingsFlowCoordinator);
// Dependencies HMUI.FlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolSettingsFlowCoordinator
class CORDL_TYPE RecordingToolSettingsFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  /// @brief Field _recordingToolConfigViewController, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolConfigViewController,
                      put = __cordl_internal_set__recordingToolConfigViewController)) ::UnityW<::GlobalNamespace::RecordingToolConfigViewController>
      _recordingToolConfigViewController;

  /// @brief Field _recordingToolLoggingViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolLoggingViewController,
                      put = __cordl_internal_set__recordingToolLoggingViewController)) ::UnityW<::GlobalNamespace::RecordingToolLoggingViewController>
      _recordingToolLoggingViewController;

  /// @brief Field _recordingToolSceneSetupData, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolSceneSetupData,
                      put = __cordl_internal_set__recordingToolSceneSetupData)) ::GlobalNamespace::RecordingToolSceneSetupData* _recordingToolSceneSetupData;

  /// @brief Field _recordingToolSettingsViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolSettingsViewController,
                      put = __cordl_internal_set__recordingToolSettingsViewController)) ::UnityW<::GlobalNamespace::RecordingToolSettingsViewController>
      _recordingToolSettingsViewController;

  /// @brief Method DidActivate, addr 0x57ff3e8, size 0x128, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x57ff510, size 0xb0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleRecordingToolSettingsViewControllerDidFinish, addr 0x57ff614, size 0x60, virtual false, abstract: false, final false
  inline void HandleRecordingToolSettingsViewControllerDidFinish();

  static inline ::GlobalNamespace::RecordingToolSettingsFlowCoordinator* New_ctor();

  /// @brief Method Update, addr 0x57ff5c0, size 0x54, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::RecordingToolConfigViewController> const& __cordl_internal_get__recordingToolConfigViewController() const;

  constexpr ::UnityW<::GlobalNamespace::RecordingToolConfigViewController>& __cordl_internal_get__recordingToolConfigViewController();

  constexpr ::UnityW<::GlobalNamespace::RecordingToolLoggingViewController> const& __cordl_internal_get__recordingToolLoggingViewController() const;

  constexpr ::UnityW<::GlobalNamespace::RecordingToolLoggingViewController>& __cordl_internal_get__recordingToolLoggingViewController();

  constexpr ::GlobalNamespace::RecordingToolSceneSetupData* const& __cordl_internal_get__recordingToolSceneSetupData() const;

  constexpr ::GlobalNamespace::RecordingToolSceneSetupData*& __cordl_internal_get__recordingToolSceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::RecordingToolSettingsViewController> const& __cordl_internal_get__recordingToolSettingsViewController() const;

  constexpr ::UnityW<::GlobalNamespace::RecordingToolSettingsViewController>& __cordl_internal_get__recordingToolSettingsViewController();

  constexpr void __cordl_internal_set__recordingToolConfigViewController(::UnityW<::GlobalNamespace::RecordingToolConfigViewController> value);

  constexpr void __cordl_internal_set__recordingToolLoggingViewController(::UnityW<::GlobalNamespace::RecordingToolLoggingViewController> value);

  constexpr void __cordl_internal_set__recordingToolSceneSetupData(::GlobalNamespace::RecordingToolSceneSetupData* value);

  constexpr void __cordl_internal_set__recordingToolSettingsViewController(::UnityW<::GlobalNamespace::RecordingToolSettingsViewController> value);

  /// @brief Method .ctor, addr 0x57ff674, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSettingsFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSettingsFlowCoordinator(RecordingToolSettingsFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSettingsFlowCoordinator(RecordingToolSettingsFlowCoordinator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6387 };

  /// @brief Field _recordingToolConfigViewController, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolConfigViewController> ____recordingToolConfigViewController;

  /// @brief Field _recordingToolSettingsViewController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolSettingsViewController> ____recordingToolSettingsViewController;

  /// @brief Field _recordingToolLoggingViewController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolLoggingViewController> ____recordingToolLoggingViewController;

  /// @brief Field _recordingToolSceneSetupData, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolSceneSetupData* ____recordingToolSceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____recordingToolConfigViewController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____recordingToolSettingsViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____recordingToolLoggingViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsFlowCoordinator, ____recordingToolSceneSetupData) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettingsFlowCoordinator, 0xd0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsFlowCoordinator*, "", "RecordingToolSettingsFlowCoordinator");
