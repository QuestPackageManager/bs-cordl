#pragma once
// IWYU pragma private; include "GlobalNamespace/IRandom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IRandom)
// Forward declare root types
namespace GlobalNamespace {
class IRandom;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IRandom*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IRandom*, "", "IRandom");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IRandom
class CORDL_TYPE IRandom {
public:
  // Declarations
  /// @brief Method Sample, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t Sample();

  // Ctor Parameters [CppParam { name: "", ty: "IRandom", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRandom(IRandomconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20465 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
