#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionObjectiveTypeCollectionInstallerSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MissionObjectiveTypeCollectionInstallerSO)
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectiveTypeCollectionInstallerSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO*, "", "MissionObjectiveTypeCollectionInstallerSO");
// Dependencies MissionObjectiveTypeSO, Zenject.ScriptableObjectInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionObjectiveTypeCollectionInstallerSO
class CORDL_TYPE MissionObjectiveTypeCollectionInstallerSO : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Field _missionObjectiveTypes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectiveTypes, put = __cordl_internal_set__missionObjectiveTypes)) ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>
      _missionObjectiveTypes;

  /// @brief Method InstallBindings, addr 0x37520f4, size 0xd4, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO* New_ctor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>> const& __cordl_internal_get__missionObjectiveTypes() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>>& __cordl_internal_get__missionObjectiveTypes();

  constexpr void __cordl_internal_set__missionObjectiveTypes(::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>> value);

  /// @brief Method .ctor, addr 0x37521c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveTypeCollectionInstallerSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeCollectionInstallerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectiveTypeCollectionInstallerSO(MissionObjectiveTypeCollectionInstallerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeCollectionInstallerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectiveTypeCollectionInstallerSO(MissionObjectiveTypeCollectionInstallerSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15237 };

  /// @brief Field _missionObjectiveTypes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MissionObjectiveTypeSO>> ____missionObjectiveTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO, ____missionObjectiveTypes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MissionObjectiveTypeCollectionInstallerSO) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
