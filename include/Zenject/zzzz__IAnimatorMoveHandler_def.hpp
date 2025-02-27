#pragma once
// IWYU pragma private; include "Zenject/IAnimatorMoveHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnimatorMoveHandler)
// Forward declare root types
namespace Zenject {
class IAnimatorMoveHandler;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IAnimatorMoveHandler);
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IAnimatorMoveHandler
class CORDL_TYPE IAnimatorMoveHandler {
public:
  // Declarations
  /// @brief Method OnAnimatorMove, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnAnimatorMove();

  // Ctor Parameters [CppParam { name: "", ty: "IAnimatorMoveHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAnimatorMoveHandler(IAnimatorMoveHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IAnimatorMoveHandler);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IAnimatorMoveHandler*, "Zenject", "IAnimatorMoveHandler");
