#pragma once
// IWYU pragma private; include "Zenject/IPlaceholderFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IValidatable_def.hpp"
CORDL_MODULE_EXPORT(IPlaceholderFactory)
// Forward declare root types
namespace Zenject {
class IPlaceholderFactory;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IPlaceholderFactory);
// Dependencies Zenject.IValidatable
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IPlaceholderFactory
class CORDL_TYPE IPlaceholderFactory {
public:
  // Declarations
  /// @brief Convert operator to "::Zenject::IValidatable"
  constexpr operator ::Zenject::IValidatable*() noexcept;

  /// @brief Convert to "::Zenject::IValidatable"
  constexpr ::Zenject::IValidatable* i___Zenject__IValidatable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPlaceholderFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlaceholderFactory(IPlaceholderFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12362 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IPlaceholderFactory);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IPlaceholderFactory*, "Zenject", "IPlaceholderFactory");
