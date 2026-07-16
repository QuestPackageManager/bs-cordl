#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionGameplayInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MissionGameplayInstaller)
namespace GlobalNamespace {
class MissionGameplaySceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionGameplayInstaller;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MissionGameplayInstaller*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MissionGameplayInstaller*, "", "MissionGameplayInstaller");
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionGameplayInstaller
class CORDL_TYPE MissionGameplayInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _sceneSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::MissionGameplaySceneSetupData* _sceneSetupData;

  /// @brief Method InstallBindings, addr 0x591d130, size 0x50c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MissionGameplayInstaller* New_ctor();

  constexpr ::GlobalNamespace::MissionGameplaySceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::MissionGameplaySceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::MissionGameplaySceneSetupData* value);

  /// @brief Method .ctor, addr 0x591d63c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionGameplayInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionGameplayInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionGameplayInstaller(MissionGameplayInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionGameplayInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionGameplayInstaller(MissionGameplayInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6783 };

  /// @brief Field _sceneSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MissionGameplaySceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionGameplayInstaller, ____sceneSetupData) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MissionGameplayInstaller) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
