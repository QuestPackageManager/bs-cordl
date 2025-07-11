#pragma once
// IWYU pragma private; include "GlobalNamespace/StartupErrorNoTransitionInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
CORDL_MODULE_EXPORT(StartupErrorNoTransitionInstaller)
namespace GlobalNamespace {
class StartupErrorSceneSetupData;
}
namespace GlobalNamespace {
class StartupErrorScenesTransitionSetupDataSO;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class StartupErrorNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StartupErrorNoTransitionInstaller);
// Dependencies Zenject.NoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: StartupErrorNoTransitionInstaller
class CORDL_TYPE StartupErrorNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
  // Declarations
  /// @brief Field _scenesTransitionSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scenesTransitionSetupData,
                      put = __cordl_internal_set__scenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO>
      _scenesTransitionSetupData;

  /// @brief Field _startupErrorSceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__startupErrorSceneSetupData,
                      put = __cordl_internal_set__startupErrorSceneSetupData)) ::GlobalNamespace::StartupErrorSceneSetupData* _startupErrorSceneSetupData;

  /// @brief Method InstallBindings, addr 0x3b39660, size 0x44, virtual true, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::StartupErrorNoTransitionInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> const& __cordl_internal_get__scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO>& __cordl_internal_get__scenesTransitionSetupData();

  constexpr ::GlobalNamespace::StartupErrorSceneSetupData* const& __cordl_internal_get__startupErrorSceneSetupData() const;

  constexpr ::GlobalNamespace::StartupErrorSceneSetupData*& __cordl_internal_get__startupErrorSceneSetupData();

  constexpr void __cordl_internal_set__scenesTransitionSetupData(::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__startupErrorSceneSetupData(::GlobalNamespace::StartupErrorSceneSetupData* value);

  /// @brief Method .ctor, addr 0x3b396ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StartupErrorNoTransitionInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StartupErrorNoTransitionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StartupErrorNoTransitionInstaller(StartupErrorNoTransitionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StartupErrorNoTransitionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StartupErrorNoTransitionInstaller(StartupErrorNoTransitionInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5233 };

  /// @brief Field _startupErrorSceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::StartupErrorSceneSetupData* ____startupErrorSceneSetupData;

  /// @brief Field _scenesTransitionSetupData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> ____scenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StartupErrorNoTransitionInstaller, ____startupErrorSceneSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StartupErrorNoTransitionInstaller, ____scenesTransitionSetupData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StartupErrorNoTransitionInstaller, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StartupErrorNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StartupErrorNoTransitionInstaller*, "", "StartupErrorNoTransitionInstaller");
