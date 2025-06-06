#pragma once
// IWYU pragma private; include "Zenject/IPoolable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolable)
// Forward declare root types
namespace Zenject {
class IPoolable;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IPoolable);
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IPoolable
class CORDL_TYPE IPoolable {
public:
  // Declarations
  /// @brief Method OnDespawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDespawned();

  /// @brief Method OnSpawned, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnSpawned();

  // Ctor Parameters [CppParam { name: "", ty: "IPoolable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolable(IPoolable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18437 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IPoolable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IPoolable*, "Zenject", "IPoolable");
