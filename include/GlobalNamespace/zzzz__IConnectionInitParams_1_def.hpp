#pragma once
// IWYU pragma private; include "GlobalNamespace/IConnectionInitParams_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConnectionInitParams_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IConnectionInitParams_1);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: IConnectionInitParams`1<T>
class CORDL_TYPE IConnectionInitParams_1 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IConnectionInitParams_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConnectionInitParams_1(IConnectionInitParams_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14782 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IConnectionInitParams_1, "", "IConnectionInitParams`1");
