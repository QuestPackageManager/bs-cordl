#pragma once
// IWYU pragma private; include "Zenject/ITickable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITickable)
// Forward declare root types
namespace Zenject {
class ITickable;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ITickable);
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ITickable
class CORDL_TYPE ITickable {
public:
  // Declarations
  /// @brief Method Tick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Tick();

  // Ctor Parameters [CppParam { name: "", ty: "ITickable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITickable(ITickable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18441 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::ITickable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ITickable*, "Zenject", "ITickable");
