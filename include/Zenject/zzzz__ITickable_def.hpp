#pragma once
// IWYU pragma private; include "Zenject/ITickable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITickable)
// Forward declare root types
namespace Zenject {
class ITickable;
}
// Write type traits
MARK_REF_T(::Zenject::ITickable*);
DEFINE_IL2CPP_CLASS(::Zenject::ITickable*, "Zenject", "ITickable");
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ITickable
class CORDL_TYPE ITickable {
public:
  // Declarations
  /// @brief Method Tick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Tick();

  // Ctor Parameters [CppParam { name: "", ty: "ITickable", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITickable(ITickableconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22533 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
