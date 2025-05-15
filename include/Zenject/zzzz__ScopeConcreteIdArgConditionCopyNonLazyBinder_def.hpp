#pragma once
// IWYU pragma private; include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
CORDL_MODULE_EXPORT(ScopeConcreteIdArgConditionCopyNonLazyBinder)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class ConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder);
// Dependencies Zenject.ConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE ScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder {
public:
  // Declarations
  /// @brief Method AsCached, addr 0x4b12e68, size 0x20, virtual false, abstract: false, final false
  inline ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder* AsCached();

  /// @brief Method AsSingle, addr 0x4b12e88, size 0x28, virtual false, abstract: false, final false
  inline ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder* AsSingle();

  /// @brief Method AsTransient, addr 0x4b12eb0, size 0x20, virtual false, abstract: false, final false
  inline ::Zenject::ConcreteIdArgConditionCopyNonLazyBinder* AsTransient();

  static inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method .ctor, addr 0x4b12cb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScopeConcreteIdArgConditionCopyNonLazyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScopeConcreteIdArgConditionCopyNonLazyBinder(ScopeConcreteIdArgConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScopeConcreteIdArgConditionCopyNonLazyBinder(ScopeConcreteIdArgConditionCopyNonLazyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12268 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "ScopeConcreteIdArgConditionCopyNonLazyBinder");
