#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
CORDL_MODULE_EXPORT(BoolSignal)
// Forward declare root types
namespace GlobalNamespace {
class BoolSignal;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BoolSignal);
// Type: ::BoolSignal
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(14394))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14390))
// CS Name: ::BoolSignal*
class CORDL_TYPE BoolSignal : public ::GlobalNamespace::GenericSignal_1<bool> {
public:
  // Declarations
  static inline ::GlobalNamespace::BoolSignal* New_ctor();

  /// @brief Method .ctor, addr 0x20f5524, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BoolSignal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoolSignal(BoolSignal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoolSignal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoolSignal(BoolSignal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoolSignal();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BoolSignal, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BoolSignal);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoolSignal*, "", "BoolSignal");
