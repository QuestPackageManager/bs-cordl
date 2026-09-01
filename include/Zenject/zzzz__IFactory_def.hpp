#pragma once
// IWYU pragma private; include "Zenject\IFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFactory)
// Forward declare root types
namespace Zenject {
class IFactory;
}
// Write type traits
MARK_REF_T(::Zenject::IFactory*);
DEFINE_IL2CPP_CLASS(::Zenject::IFactory*, "Zenject", "IFactory");
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IFactory
class CORDL_TYPE IFactory {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFactory(IFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14336 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
