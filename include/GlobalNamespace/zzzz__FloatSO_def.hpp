#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatSO)
// Forward declare root types
namespace GlobalNamespace {
class FloatSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatSO);
// Dependencies ObservableVariableSO`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatSO
class CORDL_TYPE FloatSO : public ::GlobalNamespace::ObservableVariableSO_1<float_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::FloatSO* New_ctor();

  /// @brief Method .ctor, addr 0x31fd294, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatSO(FloatSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatSO(FloatSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20684 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatSO*, "", "FloatSO");
