#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSettingsNoTransitionInstaller)
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class RecordingToolScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettingsNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller);
// Type: ::RecordingToolSettingsNoTransitionInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6041))
// CS Name: ::RecordingToolSettingsNoTransitionInstaller*
class CORDL_TYPE RecordingToolSettingsNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
  // Declarations
  /// @brief Field _recordingToolSceneSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get__recordingToolSceneSetupData, put = __set__recordingToolSceneSetupData))::GlobalNamespace::RecordingToolSceneSetupData* _recordingToolSceneSetupData;

  /// @brief Field _scenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get__scenesTransitionSetupData, put = __set__scenesTransitionSetupData))::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO* _scenesTransitionSetupData;

  constexpr ::GlobalNamespace::RecordingToolSceneSetupData*& __get__recordingToolSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolSceneSetupData*> const& __get__recordingToolSceneSetupData() const;

  constexpr void __set__recordingToolSceneSetupData(::GlobalNamespace::RecordingToolSceneSetupData* value);

  constexpr ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*& __get__scenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*> const& __get__scenesTransitionSetupData() const;

  constexpr void __set__scenesTransitionSetupData(::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO* value);

  /// @brief Method InstallBindings addr 0x231b6f8 size 0x44 virtual true final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller* New_ctor();

  /// @brief Method .ctor addr 0x231b744 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsNoTransitionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSettingsNoTransitionInstaller(RecordingToolSettingsNoTransitionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsNoTransitionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSettingsNoTransitionInstaller(RecordingToolSettingsNoTransitionInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSettingsNoTransitionInstaller();

public:
  /// @brief Field _recordingToolSceneSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolSceneSetupData* ____recordingToolSceneSetupData;

  /// @brief Field _scenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO* ____scenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*, "", "RecordingToolSettingsNoTransitionInstaller");
