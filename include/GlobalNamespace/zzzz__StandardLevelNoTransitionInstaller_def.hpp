#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelNoTransitionInstaller)
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class StandardLevelNoTransitionInstallerData;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelNoTransitionInstaller);
// Type: ::StandardLevelNoTransitionInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6042))
// CS Name: ::StandardLevelNoTransitionInstaller*
class CORDL_TYPE StandardLevelNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
  // Declarations
  /// @brief Field _scenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __get__scenesTransitionSetupData, put = __set__scenesTransitionSetupData))::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* _scenesTransitionSetupData;

  /// @brief Field _standardLevelNoTransitionInstallerData, offset 0x20, size 0x8
  __declspec(property(get = __get__standardLevelNoTransitionInstallerData,
                      put = __set__standardLevelNoTransitionInstallerData))::GlobalNamespace::StandardLevelNoTransitionInstallerData* _standardLevelNoTransitionInstallerData;

  __declspec(property(get = get_standardLevelNoTransitionInstallerData))::GlobalNamespace::StandardLevelNoTransitionInstallerData* standardLevelNoTransitionInstallerData;

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& __get__scenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> const& __get__scenesTransitionSetupData() const;

  constexpr void __set__scenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* value);

  constexpr ::GlobalNamespace::StandardLevelNoTransitionInstallerData*& __get__standardLevelNoTransitionInstallerData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelNoTransitionInstallerData*> const& __get__standardLevelNoTransitionInstallerData() const;

  constexpr void __set__standardLevelNoTransitionInstallerData(::GlobalNamespace::StandardLevelNoTransitionInstallerData* value);

  /// @brief Method get_standardLevelNoTransitionInstallerData, addr 0x231b74c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::StandardLevelNoTransitionInstallerData* get_standardLevelNoTransitionInstallerData();

  /// @brief Method InstallBindings, addr 0x231b754, size 0x150, virtual true, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::StandardLevelNoTransitionInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x231bf10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelNoTransitionInstaller(StandardLevelNoTransitionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelNoTransitionInstaller(StandardLevelNoTransitionInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelNoTransitionInstaller();

public:
  /// @brief Field _scenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* ____scenesTransitionSetupData;

  /// @brief Field _standardLevelNoTransitionInstallerData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelNoTransitionInstallerData* ____standardLevelNoTransitionInstallerData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelNoTransitionInstaller, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstaller, ____scenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstaller, ____standardLevelNoTransitionInstallerData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelNoTransitionInstaller*, "", "StandardLevelNoTransitionInstaller");
