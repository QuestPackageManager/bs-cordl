#pragma once
// IWYU pragma private; include "Zenject/IFixedTickable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFixedTickable)
// Forward declare root types
namespace Zenject {
class IFixedTickable;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IFixedTickable);
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IFixedTickable
class CORDL_TYPE IFixedTickable {
public:
  // Declarations
  /// @brief Method FixedTick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void FixedTick();

  // Ctor Parameters [CppParam { name: "", ty: "IFixedTickable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFixedTickable(IFixedTickable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IFixedTickable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IFixedTickable*, "Zenject", "IFixedTickable");
