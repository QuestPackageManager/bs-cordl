#pragma once
// IWYU pragma private; include "Zenject/IAnimatorIkHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnimatorIkHandler)
// Forward declare root types
namespace Zenject {
class IAnimatorIkHandler;
}
// Write type traits
MARK_REF_T(::Zenject::IAnimatorIkHandler*);
DEFINE_IL2CPP_CLASS(::Zenject::IAnimatorIkHandler*, "Zenject", "IAnimatorIkHandler");
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IAnimatorIkHandler
class CORDL_TYPE IAnimatorIkHandler {
public:
  // Declarations
  /// @brief Method OnAnimatorIk, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnAnimatorIk();

  // Ctor Parameters [CppParam { name: "", ty: "IAnimatorIkHandler", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAnimatorIkHandler(IAnimatorIkHandlerconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14657 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
