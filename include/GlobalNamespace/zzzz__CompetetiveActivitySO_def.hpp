#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PS5ActivityDataSO_def.hpp"
CORDL_MODULE_EXPORT(CompetetiveActivitySO)
// Forward declare root types
namespace GlobalNamespace {
class CompetetiveActivitySO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CompetetiveActivitySO);
// Type: ::CompetetiveActivitySO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4560))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4557))
// CS Name: ::CompetetiveActivitySO*
class CORDL_TYPE CompetetiveActivitySO : public ::GlobalNamespace::PS5ActivityDataSO {
public:
  // Declarations
  static inline ::GlobalNamespace::CompetetiveActivitySO* New_ctor();

  /// @brief Method .ctor, addr 0x2368268, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CompetetiveActivitySO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompetetiveActivitySO(CompetetiveActivitySO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompetetiveActivitySO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompetetiveActivitySO(CompetetiveActivitySO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompetetiveActivitySO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CompetetiveActivitySO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CompetetiveActivitySO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CompetetiveActivitySO*, "", "CompetetiveActivitySO");
