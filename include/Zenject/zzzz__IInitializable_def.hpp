#pragma once
// IWYU pragma private; include "Zenject/IInitializable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInitializable)
// Forward declare root types
namespace Zenject {
class IInitializable;
}
// Write type traits
MARK_REF_T(::Zenject::IInitializable*);
DEFINE_IL2CPP_CLASS(::Zenject::IInitializable*, "Zenject", "IInitializable");
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IInitializable
class CORDL_TYPE IInitializable {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Initialize();

  // Ctor Parameters [CppParam { name: "", ty: "IInitializable", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInitializable(IInitializableconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22506 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
