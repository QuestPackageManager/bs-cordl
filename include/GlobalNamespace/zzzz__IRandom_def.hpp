#pragma once
// IWYU pragma private; include "GlobalNamespace/IRandom.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IRandom)
// Forward declare root types
namespace GlobalNamespace {
class IRandom;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IRandom);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IRandom
class CORDL_TYPE IRandom {
public:
  // Declarations
  /// @brief Method Sample, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline double_t Sample();

  // Ctor Parameters [CppParam { name: "", ty: "IRandom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRandom(IRandom const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20503 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IRandom);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IRandom*, "", "IRandom");
