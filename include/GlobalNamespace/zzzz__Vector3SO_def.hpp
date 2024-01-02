#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(Vector3SO)
// Forward declare root types
namespace GlobalNamespace {
class Vector3SO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Vector3SO);
// Type: ::Vector3SO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 412 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10249))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15874)) CS Name: ::Vector3SO*
class CORDL_TYPE Vector3SO : public ::GlobalNamespace::ObservableVariableSO_1<::UnityEngine::Vector3> {
public:
  // Declarations
  static inline ::GlobalNamespace::Vector3SO* New_ctor();

  /// @brief Method .ctor, addr 0xe28b20, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Vector3SO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3SO(Vector3SO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3SO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3SO(Vector3SO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3SO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Vector3SO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Vector3SO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector3SO*, "", "Vector3SO");
