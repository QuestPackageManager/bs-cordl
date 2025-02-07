#pragma once
// IWYU pragma private; include "Zenject/DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder)
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
class DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder);
// Dependencies Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
  // Declarations
  __declspec(property(get = get_SubContainerCreatorBindInfo, put = set_SubContainerCreatorBindInfo)) ::Zenject::SubContainerCreatorBindInfo* SubContainerCreatorBindInfo;

  /// @brief Field <SubContainerCreatorBindInfo>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__SubContainerCreatorBindInfo_k__BackingField,
                      put = __cordl_internal_set__SubContainerCreatorBindInfo_k__BackingField)) ::Zenject::SubContainerCreatorBindInfo* _SubContainerCreatorBindInfo_k__BackingField;

  static inline ::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo);

  /// @brief Method WithDefaultGameObjectParent, addr 0x4b07e68, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* WithDefaultGameObjectParent(::StringW defaultParentName);

  constexpr ::Zenject::SubContainerCreatorBindInfo* const& __cordl_internal_get__SubContainerCreatorBindInfo_k__BackingField() const;

  constexpr ::Zenject::SubContainerCreatorBindInfo*& __cordl_internal_get__SubContainerCreatorBindInfo_k__BackingField();

  constexpr void __cordl_internal_set__SubContainerCreatorBindInfo_k__BackingField(::Zenject::SubContainerCreatorBindInfo* value);

  /// @brief Method .ctor, addr 0x4b07e2c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo);

  /// @brief Method get_SubContainerCreatorBindInfo, addr 0x4b07e58, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::SubContainerCreatorBindInfo* get_SubContainerCreatorBindInfo();

  /// @brief Method set_SubContainerCreatorBindInfo, addr 0x4b07e60, size 0x8, virtual false, abstract: false, final false
  inline void set_SubContainerCreatorBindInfo(::Zenject::SubContainerCreatorBindInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder(DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12043 };

  /// @brief Field <SubContainerCreatorBindInfo>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorBindInfo* ____SubContainerCreatorBindInfo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder, ____SubContainerCreatorBindInfo_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder");
