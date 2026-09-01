#pragma once
// IWYU pragma private; include "Zenject\WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
CORDL_MODULE_EXPORT(WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
// Forward declare root types
namespace Zenject {
class WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_T(::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*);
DEFINE_IL2CPP_CLASS(::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder");
// Dependencies Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
  // Declarations
  static inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo);

  /// @brief Method WithKernel, addr 0x6e5fdb8, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel();

  /// @brief Method WithKernel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKernel> inline ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel();

  /// @brief Method .ctor, addr 0x6e5d1cc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14294 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder) == 0x28, "Size mismatch!");

} // namespace Zenject
