#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntSO)
// Forward declare root types
namespace GlobalNamespace {
class IntSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IntSO);
// Type: ::IntSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IntSO*
class CORDL_TYPE IntSO : public ::GlobalNamespace::ObservableVariableSO_1<int32_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::IntSO* New_ctor();

  /// @brief Method .ctor, addr 0xe98cac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntSO(IntSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntSO(IntSO const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IntSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IntSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IntSO*, "", "IntSO");
