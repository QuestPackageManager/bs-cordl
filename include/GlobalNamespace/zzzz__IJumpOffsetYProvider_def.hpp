#pragma once
// IWYU pragma private; include "GlobalNamespace/IJumpOffsetYProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IJumpOffsetYProvider)
// Forward declare root types
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IJumpOffsetYProvider);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IJumpOffsetYProvider
class CORDL_TYPE IJumpOffsetYProvider {
public:
  // Declarations
  __declspec(property(get = get_jumpOffsetY)) float_t jumpOffsetY;

  /// @brief Method get_jumpOffsetY, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_jumpOffsetY();

  // Ctor Parameters [CppParam { name: "", ty: "IJumpOffsetYProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJumpOffsetYProvider(IJumpOffsetYProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4150 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IJumpOffsetYProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IJumpOffsetYProvider*, "", "IJumpOffsetYProvider");
