#pragma once
// IWYU pragma private; include "Zenject\ILateTickable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILateTickable)
// Forward declare root types
namespace Zenject {
class ILateTickable;
}
// Write type traits
MARK_REF_T(::Zenject::ILateTickable*);
DEFINE_IL2CPP_CLASS(::Zenject::ILateTickable*, "Zenject", "ILateTickable");
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ILateTickable
class CORDL_TYPE ILateTickable {
public:
  // Declarations
  /// @brief Method LateTick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LateTick();

  // Ctor Parameters [CppParam { name: "", ty: "ILateTickable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILateTickable(ILateTickable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22535 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
