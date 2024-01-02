#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DoubleSO)
// Forward declare root types
namespace GlobalNamespace {
class DoubleSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DoubleSO);
// Type: ::DoubleSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 2704 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15863))
// CS Name: ::DoubleSO*
class CORDL_TYPE DoubleSO : public ::GlobalNamespace::ObservableVariableSO_1<double_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::DoubleSO* New_ctor();

  /// @brief Method .ctor, addr 0xe289a0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DoubleSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoubleSO(DoubleSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoubleSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoubleSO(DoubleSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleSO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DoubleSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DoubleSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DoubleSO*, "", "DoubleSO");
