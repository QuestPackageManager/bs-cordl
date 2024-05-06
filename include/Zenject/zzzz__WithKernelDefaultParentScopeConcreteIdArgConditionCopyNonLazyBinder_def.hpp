#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder);
// Type: Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*
class CORDL_TYPE WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
  // Declarations
  static inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo);

  /// @brief Method WithKernel, addr 0x3632574, size 0x20, virtual false, abstract: false, final false
  inline ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel();

  /// @brief Method WithKernel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKernel> inline ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel();

  /// @brief Method .ctor, addr 0x362f484, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder");
