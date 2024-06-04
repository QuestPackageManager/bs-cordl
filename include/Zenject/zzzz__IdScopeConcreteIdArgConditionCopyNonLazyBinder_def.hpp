#pragma once
// IWYU pragma private; include "Zenject/IdScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
CORDL_MODULE_EXPORT(IdScopeConcreteIdArgConditionCopyNonLazyBinder)
namespace System {
class Object;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class IdScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder);
// Type: Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*
class CORDL_TYPE IdScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
  // Declarations
  static inline ::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method WithId, addr 0x365b2e4, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* WithId(::System::Object* identifier);

  /// @brief Method .ctor, addr 0x365b2d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdScopeConcreteIdArgConditionCopyNonLazyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IdScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdScopeConcreteIdArgConditionCopyNonLazyBinder(IdScopeConcreteIdArgConditionCopyNonLazyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdScopeConcreteIdArgConditionCopyNonLazyBinder(IdScopeConcreteIdArgConditionCopyNonLazyBinder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IdScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "IdScopeConcreteIdArgConditionCopyNonLazyBinder");
