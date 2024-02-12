#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__ScriptableObjectReferenceAsyncInstaller_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollectionSO_def.hpp"
CORDL_MODULE_EXPORT(BeatmapCharacteristicInstaller)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicInstaller);
// Type: ::BeatmapCharacteristicInstaller
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10707)), TypeDefinitionIndex(TypeDefinitionIndex(15477)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15477), inst:
// 4933 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(3966)) CS Name: ::BeatmapCharacteristicInstaller*
class CORDL_TYPE BeatmapCharacteristicInstaller : public ::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicCollectionSO>> {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x22af49c, size 0x7c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::BeatmapCharacteristicInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x22af518, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicInstaller(BeatmapCharacteristicInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicInstaller(BeatmapCharacteristicInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicInstaller();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicInstaller, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicInstaller*, "", "BeatmapCharacteristicInstaller");
