#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(SpawnChevronObjectPoolsInstaller)
namespace GlobalNamespace {
class SpawnRotationChevron;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnChevronObjectPoolsInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpawnChevronObjectPoolsInstaller);
// Type: ::SpawnChevronObjectPoolsInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11138))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4993))
// CS Name: ::SpawnChevronObjectPoolsInstaller*
class CORDL_TYPE SpawnChevronObjectPoolsInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _spawnRotationChevronPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnRotationChevronPrefab,
                      put = __cordl_internal_set__spawnRotationChevronPrefab))::UnityW<::GlobalNamespace::SpawnRotationChevron> _spawnRotationChevronPrefab;

  constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron>& __cordl_internal_get__spawnRotationChevronPrefab();

  constexpr ::UnityW<::GlobalNamespace::SpawnRotationChevron> const& __cordl_internal_get__spawnRotationChevronPrefab() const;

  constexpr void __cordl_internal_set__spawnRotationChevronPrefab(::UnityW<::GlobalNamespace::SpawnRotationChevron> value);

  /// @brief Method InstallBindings, addr 0x23b55c4, size 0x84, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::SpawnChevronObjectPoolsInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x23b5648, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SpawnChevronObjectPoolsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnChevronObjectPoolsInstaller(SpawnChevronObjectPoolsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnChevronObjectPoolsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnChevronObjectPoolsInstaller(SpawnChevronObjectPoolsInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnChevronObjectPoolsInstaller();

public:
  /// @brief Field _spawnRotationChevronPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SpawnRotationChevron> ____spawnRotationChevronPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnChevronObjectPoolsInstaller, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnChevronObjectPoolsInstaller, ____spawnRotationChevronPrefab) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpawnChevronObjectPoolsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnChevronObjectPoolsInstaller*, "", "SpawnChevronObjectPoolsInstaller");
