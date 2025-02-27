#pragma once
// IWYU pragma private; include "GlobalNamespace/HealthWarningNoTransitionInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
CORDL_MODULE_EXPORT(HealthWarningNoTransitionInstaller)
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
namespace GlobalNamespace {
class HealthWarningScenesTransitionSetupDataSO;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningNoTransitionInstaller);
// Dependencies Zenject.NoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: HealthWarningNoTransitionInstaller
class CORDL_TYPE HealthWarningNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
  // Declarations
  /// @brief Field _healthWarningSceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__healthWarningSceneSetupData,
                      put = __cordl_internal_set__healthWarningSceneSetupData)) ::GlobalNamespace::HealthWarningSceneSetupData* _healthWarningSceneSetupData;

  /// @brief Field _scenesTransitionSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scenesTransitionSetupData,
                      put = __cordl_internal_set__scenesTransitionSetupData)) ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO>
      _scenesTransitionSetupData;

  /// @brief Method InstallBindings, addr 0x3b46e10, size 0x44, virtual true, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::HealthWarningNoTransitionInstaller* New_ctor();

  constexpr ::GlobalNamespace::HealthWarningSceneSetupData* const& __cordl_internal_get__healthWarningSceneSetupData() const;

  constexpr ::GlobalNamespace::HealthWarningSceneSetupData*& __cordl_internal_get__healthWarningSceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> const& __cordl_internal_get__scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO>& __cordl_internal_get__scenesTransitionSetupData();

  constexpr void __cordl_internal_set__healthWarningSceneSetupData(::GlobalNamespace::HealthWarningSceneSetupData* value);

  constexpr void __cordl_internal_set__scenesTransitionSetupData(::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3b46e5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningNoTransitionInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningNoTransitionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HealthWarningNoTransitionInstaller(HealthWarningNoTransitionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningNoTransitionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HealthWarningNoTransitionInstaller(HealthWarningNoTransitionInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5227 };

  /// @brief Field _healthWarningSceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::HealthWarningSceneSetupData* ____healthWarningSceneSetupData;

  /// @brief Field _scenesTransitionSetupData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> ____scenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningNoTransitionInstaller, ____healthWarningSceneSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningNoTransitionInstaller, ____scenesTransitionSetupData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningNoTransitionInstaller, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningNoTransitionInstaller*, "", "HealthWarningNoTransitionInstaller");
