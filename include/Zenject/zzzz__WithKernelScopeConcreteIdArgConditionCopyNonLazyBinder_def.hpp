#pragma once
// IWYU pragma private; include "Zenject/WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
CORDL_MODULE_EXPORT(WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
// Forward declare root types
namespace Zenject {
class WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder);
// Dependencies Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
  // Declarations
  /// @brief Field _subContainerBindInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__subContainerBindInfo, put = __cordl_internal_set__subContainerBindInfo)) ::Zenject::SubContainerCreatorBindInfo* _subContainerBindInfo;

  static inline ::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo);

  /// @brief Method WithKernel, addr 0x4b15ff8, size 0x20, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel();

  /// @brief Method WithKernel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKernel> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel();

  constexpr ::Zenject::SubContainerCreatorBindInfo* const& __cordl_internal_get__subContainerBindInfo() const;

  constexpr ::Zenject::SubContainerCreatorBindInfo*& __cordl_internal_get__subContainerBindInfo();

  constexpr void __cordl_internal_set__subContainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value);

  /// @brief Method .ctor, addr 0x4b15fcc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder(WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder(WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12283 };

  /// @brief Field _subContainerBindInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorBindInfo* ____subContainerBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder, ____subContainerBindInfo) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder");
