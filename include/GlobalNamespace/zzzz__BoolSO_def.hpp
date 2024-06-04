#pragma once
// IWYU pragma private; include "GlobalNamespace/BoolSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
CORDL_MODULE_EXPORT(BoolSO)
// Forward declare root types
namespace GlobalNamespace {
class BoolSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BoolSO);
// Type: ::BoolSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BoolSO*
class CORDL_TYPE BoolSO : public ::GlobalNamespace::ObservableVariableSO_1<bool> {
public:
  // Declarations
  static inline ::GlobalNamespace::BoolSO* New_ctor();

  /// @brief Method .ctor, addr 0x108c654, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoolSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoolSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoolSO(BoolSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoolSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoolSO(BoolSO const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BoolSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BoolSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoolSO*, "", "BoolSO");
