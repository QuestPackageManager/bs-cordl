#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolSettingsNoTransitionInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSettingsNoTransitionInstaller)
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
namespace GlobalNamespace {
class RecordingToolScenesTransitionSetupDataSO;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettingsNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller);
// Dependencies Zenject.NoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolSettingsNoTransitionInstaller
class CORDL_TYPE RecordingToolSettingsNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
  // Declarations
  /// @brief Field _recordingToolSceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolSceneSetupData,
                      put = __cordl_internal_set__recordingToolSceneSetupData)) ::GlobalNamespace::RecordingToolSceneSetupData* _recordingToolSceneSetupData;

  /// @brief Field _scenesTransitionSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scenesTransitionSetupData,
                      put = __cordl_internal_set__scenesTransitionSetupData)) ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO>
      _scenesTransitionSetupData;

  /// @brief Method InstallBindings, addr 0x3b3bd7c, size 0x44, virtual true, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller* New_ctor();

  constexpr ::GlobalNamespace::RecordingToolSceneSetupData* const& __cordl_internal_get__recordingToolSceneSetupData() const;

  constexpr ::GlobalNamespace::RecordingToolSceneSetupData*& __cordl_internal_get__recordingToolSceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> const& __cordl_internal_get__scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO>& __cordl_internal_get__scenesTransitionSetupData();

  constexpr void __cordl_internal_set__recordingToolSceneSetupData(::GlobalNamespace::RecordingToolSceneSetupData* value);

  constexpr void __cordl_internal_set__scenesTransitionSetupData(::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3b3bdc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSettingsNoTransitionInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsNoTransitionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSettingsNoTransitionInstaller(RecordingToolSettingsNoTransitionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsNoTransitionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSettingsNoTransitionInstaller(RecordingToolSettingsNoTransitionInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5229 };

  /// @brief Field _recordingToolSceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolSceneSetupData* ____recordingToolSceneSetupData;

  /// @brief Field _scenesTransitionSetupData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> ____scenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller, ____recordingToolSceneSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller, ____scenesTransitionSetupData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*, "", "RecordingToolSettingsNoTransitionInstaller");
