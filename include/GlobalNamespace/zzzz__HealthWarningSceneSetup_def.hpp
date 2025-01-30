#pragma once
// IWYU pragma private; include "GlobalNamespace/HealthWarningSceneSetup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(HealthWarningSceneSetup)
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningSceneSetup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningSceneSetup);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: HealthWarningSceneSetup
class CORDL_TYPE HealthWarningSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _sceneSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::HealthWarningSceneSetupData* _sceneSetupData;

  /// @brief Method InstallBindings, addr 0x3b3a588, size 0x154, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::HealthWarningSceneSetup* New_ctor();

  constexpr ::GlobalNamespace::HealthWarningSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::HealthWarningSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::HealthWarningSceneSetupData* value);

  /// @brief Method .ctor, addr 0x3b3a6dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningSceneSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HealthWarningSceneSetup(HealthWarningSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HealthWarningSceneSetup(HealthWarningSceneSetup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5222 };

  /// @brief Field _sceneSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::HealthWarningSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningSceneSetup, ____sceneSetupData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningSceneSetup, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningSceneSetup*, "", "HealthWarningSceneSetup");
