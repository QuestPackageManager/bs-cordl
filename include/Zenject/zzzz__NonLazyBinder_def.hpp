#pragma once
// IWYU pragma private; include "Zenject/NonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IfNotBoundBinder_def.hpp"
CORDL_MODULE_EXPORT(NonLazyBinder)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class IfNotBoundBinder;
}
// Forward declare root types
namespace Zenject {
class NonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::NonLazyBinder);
// Dependencies Zenject.IfNotBoundBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.NonLazyBinder
class CORDL_TYPE NonLazyBinder : public ::Zenject::IfNotBoundBinder {
public:
  // Declarations
  /// @brief Method Lazy, addr 0x4b12a6c, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::IfNotBoundBinder* Lazy();

  static inline ::Zenject::NonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method NonLazy, addr 0x4b12a4c, size 0x20, virtual false, abstract: false, final false
  inline ::Zenject::IfNotBoundBinder* NonLazy();

  /// @brief Method .ctor, addr 0x4b12a24, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NonLazyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NonLazyBinder(NonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NonLazyBinder(NonLazyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12267 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::NonLazyBinder, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::NonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::NonLazyBinder*, "Zenject", "NonLazyBinder");
