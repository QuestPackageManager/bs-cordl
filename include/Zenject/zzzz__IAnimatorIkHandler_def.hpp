#pragma once
// IWYU pragma private; include "Zenject/IAnimatorIkHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnimatorIkHandler)
// Forward declare root types
namespace Zenject {
class IAnimatorIkHandler;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IAnimatorIkHandler);
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IAnimatorIkHandler
class CORDL_TYPE IAnimatorIkHandler {
public:
  // Declarations
  /// @brief Method OnAnimatorIk, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnAnimatorIk();

  // Ctor Parameters [CppParam { name: "", ty: "IAnimatorIkHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAnimatorIkHandler(IAnimatorIkHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IAnimatorIkHandler);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IAnimatorIkHandler*, "Zenject", "IAnimatorIkHandler");
